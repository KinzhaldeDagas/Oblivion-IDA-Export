0x619FA0: push    0FFFFFFFFh
0x619FA2: push    offset SEH_695A50
0x619FA7: mov     eax, large fs:0
0x619FAD: push    eax
0x619FAE: push    ebx
0x619FAF: push    esi
0x619FB0: push    edi
0x619FB1: mov     eax, ds:0B30AACh
0x619FB6: xor     eax, esp
0x619FB8: push    eax
0x619FB9: lea     eax, [esp+1Ch+var_C]
0x619FBD: mov     large fs:0, eax
0x619FC3: mov     esi, ecx
0x619FC5: mov     ecx, [esi+18Ch]
0x619FCB: test    ecx, ecx
0x619FCD: mov     ebx, [esp+1Ch+a2]
0x619FD1: jz      short loc_61A016
0x619FD3: lea     eax, [esp+1Ch+a2]
0x619FD7: push    eax
0x619FD8: push    ebx
0x619FD9: mov     [esp+24h+a2], 0
0x619FE1: call    NiTMap_GetAt
0x619FE6: mov     edi, [esp+1Ch+a2]
0x619FEA: test    edi, edi
0x619FEC: jz      short loc_61A016
0x619FEE: mov     ecx, edi
0x619FF0: call    sub_6B7240
0x619FF5: mov     ecx, dword ptr [esp+1Ch+a3]
0x619FF9: push    ecx
0x619FFA: mov     ecx, edi
0x619FFC: call    sub_6B7190
0x61A001: mov     ecx, [esp+1Ch+var_C]
0x61A005: mov     large fs:0, ecx
0x61A00C: pop     ecx
0x61A00D: pop     edi
0x61A00E: pop     esi
0x61A00F: pop     ebx
0x61A010: add     esp, 0Ch
0x61A013: retn    8
0x61A016: mov     edx, dword ptr [esp+1Ch+a3]
0x61A01A: mov     ecx, [esi+3Ch]; this
0x61A01D: push    1; a5
0x61A01F: push    2; a4
0x61A021: push    edx; a3
0x61A022: push    ebx; a2
0x61A023: call    sub_65AC50
0x61A028: mov     edi, eax
0x61A02A: test    edi, edi
0x61A02C: jz      short loc_61A079
0x61A02E: cmp     dword ptr [esi+18Ch], 0
0x61A035: jnz     short loc_61A06C
0x61A037: push    10h; Size
0x61A039: call    FormHeapAlloc
0x61A03E: add     esp, 4
0x61A041: mov     dword ptr [esp+1Ch+a3], eax
0x61A045: test    eax, eax
0x61A047: mov     [esp+1Ch+var_4], 0
0x61A04F: jz      short loc_61A05C
0x61A051: push    25h ; '%'
0x61A053: mov     ecx, eax
0x61A055: call    ??0?$NiTPointerMap@IPAVTESGameSoundHandle@@@@QAE@XZ; NiTPointerMap<uint,TESGameSoundHandle *>::NiTPointerMap<uint,TESGameSoundHandle *>(void)
0x61A05A: jmp     short loc_61A05E
0x61A05C: xor     eax, eax
0x61A05E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x61A066: mov     [esi+18Ch], eax
0x61A06C: mov     ecx, [esi+18Ch]; this
0x61A072: push    edi; a3
0x61A073: push    ebx; a2
0x61A074: call    NiTMap_SetAt
0x61A079: mov     ecx, [esp+1Ch+var_C]
0x61A07D: mov     large fs:0, ecx
0x61A084: pop     ecx
0x61A085: pop     edi
0x61A086: pop     esi
0x61A087: pop     ebx
0x61A088: add     esp, 0Ch
0x61A08B: retn    8
