0x7C82A0: push    esi
0x7C82A1: mov     esi, ecx
0x7C82A3: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7C82A8: fldz
0x7C82AA: mov     dword ptr [esi], offset ??_7NiFogProperty@@6B@; const NiFogProperty::`vftable'
0x7C82B0: fst     dword ptr [esi+20h]
0x7C82B3: fst     dword ptr [esi+24h]
0x7C82B6: fstp    dword ptr [esi+28h]
0x7C82B9: fld1
0x7C82BB: mov     word ptr [esi+18h], 0
0x7C82C1: fstp    dword ptr [esi+1Ch]
0x7C82C4: fld     dword ptr ds:0A905E8h
0x7C82CA: mov     eax, ds:0B3FA90h
0x7C82CF: mov     [esi+20h], eax
0x7C82D2: mov     ecx, ds:0B3FA94h
0x7C82D8: mov     [esi+24h], ecx
0x7C82DB: mov     edx, ds:0B3FA98h
0x7C82E1: fstp    dword ptr [esi+2Ch]
0x7C82E4: fld     dword ptr ds:0A3F4F0h
0x7C82EA: mov     [esi+28h], edx
0x7C82ED: fstp    dword ptr [esi+30h]
0x7C82F0: mov     dword ptr [esi], offset ??_7BSFogProperty@@6B@; const BSFogProperty::`vftable'
0x7C82F6: mov     eax, esi
0x7C82F8: pop     esi
0x7C82F9: retn
