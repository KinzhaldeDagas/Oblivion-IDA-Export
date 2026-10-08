0x4030D0: mov     eax, [esp+arg_0]; [Controller decode 2026-07-09] Returns DIDEVCAPS.dwPOVs for the selected joystick/controller.
0x4030D4: imul    eax, 2Ch ; ','
0x4030D7: mov     eax, [eax+ecx+1764h]
0x4030DE: retn    4
