0x504890: mov     eax, [esp+arg_8]
0x504894: test    eax, eax
0x504896: jz      short loc_5048AB
0x504898: mov     ecx, [esp+arg_18]
0x50489C: push    ecx
0x50489D: push    0
0x50489F: push    0
0x5048A1: push    eax
0x5048A2: call    Cmd_IsWeaponOut
0x5048A7: add     esp, 10h
0x5048AA: retn
0x5048AB: mov     al, 1
0x5048AD: retn
