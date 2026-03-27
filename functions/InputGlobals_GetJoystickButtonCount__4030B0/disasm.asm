0x4030B0: mov     eax, dword ptr [esp+whichJoystick]
0x4030B4: add     eax, 88h ; 'ˆ'
0x4030B9: imul    eax, 2Ch ; ','
0x4030BC: mov     eax, [eax+ecx]
0x4030BF: retn    4
