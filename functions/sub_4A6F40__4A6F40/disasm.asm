0x4A6F40: push    0FFFFFFFFh
0x4A6F42: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4A6F47: mov     eax, large fs:0
0x4A6F4D: push    eax
0x4A6F4E: push    ecx
0x4A6F4F: push    ebx
0x4A6F50: push    ebp
0x4A6F51: push    esi
0x4A6F52: push    edi
0x4A6F53: mov     eax, ds:0B30AACh
0x4A6F58: xor     eax, esp
0x4A6F5A: push    eax
0x4A6F5B: lea     eax, [esp+24h+var_C]
0x4A6F5F: mov     large fs:0, eax
0x4A6F65: mov     esi, ecx
0x4A6F67: mov     ebp, [esp+24h+a1]
0x4A6F6B: test    ebp, ebp
0x4A6F6D: jz      short loc_4A6F9E
0x4A6F6F: mov     ecx, ebp
0x4A6F71: call    TESFile_GetChunkType
0x4A6F76: cmp     eax, 444C5052h
0x4A6F7B: jnz     short loc_4A6F9E
0x4A6F7D: mov     ebx, [ebp+254h]
0x4A6F83: mov     edi, ebx
0x4A6F85: shr     edi, 3
0x4A6F88: test    bl, 7
0x4A6F8B: jz      short loc_4A6FB6
0x4A6F8D: add     ebp, 1Ch
0x4A6F90: push    ebp; ArgList
0x4A6F91: push    offset aInvalidRegionP; "Invalid Region Point List data in file "...
0x4A6F96: call    PrintError
0x4A6F9B: add     esp, 8
0x4A6F9E: xor     al, al
0x4A6FA0: mov     ecx, [esp+24h+var_C]
0x4A6FA4: mov     large fs:0, ecx
0x4A6FAB: pop     ecx
0x4A6FAC: pop     edi
0x4A6FAD: pop     esi
0x4A6FAE: pop     ebp
0x4A6FAF: pop     ebx
0x4A6FB0: add     esp, 10h
0x4A6FB3: retn    4
0x4A6FB6: test    ebx, ebx
0x4A6FB8: jz      short loc_4A6F9E
0x4A6FBA: test    edi, edi
0x4A6FBC: jz      short loc_4A6F9E
0x4A6FBE: xor     ecx, ecx
0x4A6FC0: mov     eax, edi
0x4A6FC2: mov     edx, 8
0x4A6FC7: mul     edx
0x4A6FC9: seto    cl
0x4A6FCC: neg     ecx
0x4A6FCE: or      ecx, eax
0x4A6FD0: push    ecx; Size
0x4A6FD1: call    FormHeapAlloc
0x4A6FD6: add     esp, 4
0x4A6FD9: push    ebx; a4
0x4A6FDA: push    eax; Dst
0x4A6FDB: mov     ecx, ebp; a1
0x4A6FDD: mov     [esp+2Ch+a1], eax
0x4A6FE1: call    TESFile_GetChunkData
0x4A6FE6: test    edi, edi
0x4A6FE8: mov     dword ptr [esi+24h], 0
0x4A6FEF: mov     ebx, 1
0x4A6FF4: jbe     loc_4A7090
0x4A6FFA: mov     ebp, [esp+24h+a1]
0x4A6FFE: mov     edi, edi
0x4A7000: push    8; Size
0x4A7002: call    FormHeapAlloc
0x4A7007: add     esp, 4
0x4A700A: mov     [esp+24h+var_10], eax
0x4A700E: xor     ecx, ecx
0x4A7010: cmp     eax, ecx
0x4A7012: mov     [esp+24h+var_4], ecx
0x4A7016: jz      short loc_4A7022
0x4A7018: push    ebp
0x4A7019: mov     ecx, eax
0x4A701B: call    sub_4A6930
0x4A7020: mov     ecx, eax
0x4A7022: fld     dword ptr [ecx]
0x4A7024: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A702C: fld     dword ptr [esi+10h]
0x4A702F: fcompp
0x4A7031: fnstsw  ax
0x4A7033: test    ah, 41h
0x4A7036: jnz     short loc_4A703D
0x4A7038: fld     dword ptr [ecx]
0x4A703A: fstp    dword ptr [esi+10h]
0x4A703D: fld     dword ptr [ecx+4]
0x4A7040: fld     dword ptr [esi+14h]
0x4A7043: fcompp
0x4A7045: fnstsw  ax
0x4A7047: test    ah, 41h
0x4A704A: jnz     short loc_4A7052
0x4A704C: fld     dword ptr [ecx+4]
0x4A704F: fstp    dword ptr [esi+14h]
0x4A7052: fld     dword ptr [ecx]
0x4A7054: fld     dword ptr [esi+18h]
0x4A7057: fcompp
0x4A7059: fnstsw  ax
0x4A705B: test    ah, 5
0x4A705E: jp      short loc_4A7065
0x4A7060: fld     dword ptr [ecx]
0x4A7062: fstp    dword ptr [esi+18h]
0x4A7065: fld     dword ptr [ecx+4]
0x4A7068: fld     dword ptr [esi+1Ch]
0x4A706B: fcompp
0x4A706D: fnstsw  ax
0x4A706F: test    ah, 5
0x4A7072: jp      short loc_4A707A
0x4A7074: fld     dword ptr [ecx+4]
0x4A7077: fstp    dword ptr [esi+1Ch]
0x4A707A: push    ecx
0x4A707B: mov     ecx, esi
0x4A707D: call    BSSimpleList_PushFront
0x4A7082: add     [esi+24h], ebx
0x4A7085: add     ebp, 8
0x4A7088: sub     edi, ebx
0x4A708A: jnz     loc_4A7000
0x4A7090: mov     eax, [esp+24h+a1]
0x4A7094: push    eax
0x4A7095: call    FormHeapFree
0x4A709A: add     esp, 4
0x4A709D: mov     al, bl
0x4A709F: jmp     loc_4A6FA0
