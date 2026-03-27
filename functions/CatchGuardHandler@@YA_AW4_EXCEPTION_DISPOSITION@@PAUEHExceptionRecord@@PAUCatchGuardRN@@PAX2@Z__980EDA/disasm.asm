0x980EDA: push    esi
0x980EDB: cld
0x980EDC: mov     esi, [esp+4+arg_4]
0x980EE0: mov     ecx, [esi+8]
0x980EE3: xor     ecx, esi
0x980EE5: call    @__security_check_cookie@4
0x980EEA: push    0
0x980EEC: push    esi
0x980EED: push    dword ptr [esi+14h]
0x980EF0: push    dword ptr [esi+0Ch]
0x980EF3: push    0
0x980EF5: push    [esp+18h+arg_8]
0x980EF9: push    dword ptr [esi+10h]
0x980EFC: push    [esp+20h+arg_0]
0x980F00: call    ___InternalCxxFrameHandler
0x980F05: add     esp, 20h
0x980F08: pop     esi
0x980F09: retn
