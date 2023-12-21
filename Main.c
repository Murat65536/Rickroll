#include <windows.h>

int main()
{
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;



    ip.ki.wVk = VK_LWIN;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));

    ip.ki.wVk = 'R';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));

    ip.ki.wVk = 'R';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));

    ip.ki.wVk = VK_LWIN;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));

    Sleep(100);

    ip.ki.wVk = 'C';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'M';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'M';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'D';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'D';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_RETURN;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_RETURN;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    Sleep(500);
    
    ip.ki.wVk = 'S';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'S';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'A';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'A';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'R';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'R';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SPACE;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SPACE;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'H';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'H';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'P';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'P';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'S';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'S';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_LSHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_1;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_1;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_LSHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Y';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Y';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'O';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'O';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'U';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'U';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'U';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'U';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'B';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'B';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'E';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'E';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_PERIOD;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_PERIOD;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'O';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'O';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'M';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'M';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'A';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'A';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'T';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'H';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'H';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_2;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'V';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'V';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_PLUS;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_OEM_PLUS;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'D';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'D';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Q';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Q';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = '4';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = '4';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = '9';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = '9';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'W';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'G';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'G';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'X';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'X';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'C';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Q';
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = 'Q';
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_SHIFT;
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    
    ip.ki.wVk = VK_RETURN;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));

    return 0;
}