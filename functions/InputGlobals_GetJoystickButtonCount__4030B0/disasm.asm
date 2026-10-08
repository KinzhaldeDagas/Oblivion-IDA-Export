0x4030B0: mov     eax, dword ptr [esp+whichJoystick]; [Controller decode 2026-07-09] Returns DIDEVCAPS.dwButtons for the selected joystick/controller.
0x4030B4: add     eax, 88h ; 'ˆ'
0x4030B9: imul    eax, 2Ch ; ','
0x4030BC: mov     eax, [eax+ecx]
0x4030BF: retn    4
