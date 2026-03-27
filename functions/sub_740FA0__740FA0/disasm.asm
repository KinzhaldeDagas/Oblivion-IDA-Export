0x740FA0: push    0FFFFFFFFh
0x740FA2: push    offset SEH_8C8970
0x740FA7: mov     eax, large fs:0
0x740FAD: push    eax
0x740FAE: push    ecx
0x740FAF: push    esi
0x740FB0: push    edi
0x740FB1: mov     eax, ds:0B30AACh
0x740FB6: xor     eax, esp
0x740FB8: push    eax
0x740FB9: lea     eax, [esp+1Ch+var_C]
0x740FBD: mov     large fs:0, eax
0x740FC3: push    2Ch ; ','; Size
0x740FC5: call    FormHeapAlloc
0x740FCA: mov     esi, eax
0x740FCC: add     esp, 4
0x740FCF: mov     [esp+1Ch+var_10], esi
0x740FD3: test    esi, esi
0x740FD5: mov     [esp+1Ch+var_4], 0
0x740FDD: jz      short loc_74101E
0x740FDF: mov     ecx, esi; this
0x740FE1: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x740FE6: fldz
0x740FE8: mov     dword ptr [esi], offset ??_7NiFogProperty@@6B@; const NiFogProperty::`vftable'
0x740FEE: fst     dword ptr [esi+20h]
0x740FF1: fst     dword ptr [esi+24h]
0x740FF4: fstp    dword ptr [esi+28h]
0x740FF7: fld1
0x740FF9: mov     word ptr [esi+18h], 0
0x740FFF: fstp    dword ptr [esi+1Ch]
0x741002: mov     eax, ds:0B3FA90h
0x741007: mov     [esi+20h], eax
0x74100A: mov     ecx, ds:0B3FA94h
0x741010: mov     [esi+24h], ecx
0x741013: mov     edx, ds:0B3FA98h
0x741019: mov     [esi+28h], edx
0x74101C: jmp     short loc_741020
0x74101E: xor     esi, esi
0x741020: mov     eax, ds:0B401FCh
0x741025: cmp     eax, esi
0x741027: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x74102F: jz      short loc_741067
0x741031: test    eax, eax
0x741033: jz      short loc_741053
0x741035: mov     edi, eax
0x741037: add     eax, 4
0x74103A: push    eax; lpAddend
0x74103B: call    dword ptr ds:0A2807Ch
0x741041: test    eax, eax
0x741043: jnz     short loc_741053
0x741045: test    edi, edi
0x741047: jz      short loc_741053
0x741049: mov     eax, [edi]
0x74104B: mov     edx, [eax]
0x74104D: push    1
0x74104F: mov     ecx, edi
0x741051: call    edx
0x741053: test    esi, esi
0x741055: mov     ds:0B401FCh, esi
0x74105B: jz      short loc_741067
0x74105D: add     esi, 4
0x741060: push    esi; lpAddend
0x741061: call    dword ptr ds:0A28078h
0x741067: mov     ecx, dword ptr [esp+1Ch+var_C]
0x74106B: mov     large fs:0, ecx
0x741072: pop     ecx
0x741073: pop     edi
0x741074: pop     esi
0x741075: add     esp, 10h
0x741078: retn
