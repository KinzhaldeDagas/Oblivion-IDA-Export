0x54FC30: push    0FFFFFFFFh
0x54FC32: push    offset SEH_54FC30
0x54FC37: mov     eax, large fs:0
0x54FC3D: push    eax
0x54FC3E: sub     esp, 14h
0x54FC41: push    ebx
0x54FC42: push    ebp
0x54FC43: push    esi
0x54FC44: push    edi
0x54FC45: mov     eax, ds:0B30AACh
0x54FC4A: xor     eax, esp
0x54FC4C: push    eax
0x54FC4D: lea     eax, [esp+34h+var_C]
0x54FC51: mov     large fs:0, eax
0x54FC57: mov     ebp, ecx
0x54FC59: xor     esi, esi
0x54FC5B: xor     edi, edi
0x54FC5D: mov     [esp+34h+var_20], esi
0x54FC61: mov     [esp+34h+var_4], edi
0x54FC65: mov     [esp+34h+var_1C], edi
0x54FC69: mov     byte ptr [esp+34h+var_4], 1
0x54FC6E: call    dword ptr ds:0A280D0h
0x54FC74: push    offset stru_B39C00; lpCriticalSection
0x54FC79: mov     [esp+38h+var_14], eax
0x54FC7D: call    dword ptr ds:0A2806Ch
0x54FC83: call    dword ptr ds:0A2808Ch
0x54FC89: add     dword ptr ds:0B39C7Ch, 1
0x54FC90: mov     ds:0B39C78h, eax
0x54FC95: mov     ecx, [ebp+8]
0x54FC98: lea     ebx, [ebp+4]
0x54FC9B: xor     eax, eax
0x54FC9D: test    ecx, ecx
0x54FC9F: jbe     short loc_54FCB5
0x54FCA1: mov     ebp, [ebx+8]
0x54FCA4: mov     edx, ebp
0x54FCA6: cmp     dword ptr [edx], 0
0x54FCA9: jnz     short loc_54FD08
0x54FCAB: add     eax, 1
0x54FCAE: add     edx, 4
0x54FCB1: cmp     eax, ecx
0x54FCB3: jb      short loc_54FCA6
0x54FCB5: xor     eax, eax
0x54FCB7: test    eax, eax
0x54FCB9: mov     [esp+34h+var_18], eax
0x54FCBD: jz      loc_54FDA2
0x54FCC3: mov     ebp, ds:0A28078h
0x54FCC9: lea     esp, [esp+0]
0x54FCD0: lea     eax, [esp+34h+var_20]
0x54FCD4: push    eax
0x54FCD5: lea     ecx, [esp+38h+var_10]
0x54FCD9: push    ecx
0x54FCDA: lea     edx, [esp+3Ch+var_18]
0x54FCDE: push    edx
0x54FCDF: mov     ecx, ebx
0x54FCE1: call    sub_7B2600
0x54FCE6: mov     esi, [esp+34h+var_20]
0x54FCEA: cmp     esi, [esp+34h+arg_4]
0x54FCEE: jz      short loc_54FD56
0x54FCF0: mov     eax, [esp+34h+arg_0]
0x54FCF4: sub     eax, 0
0x54FCF7: jz      short loc_54FD0E
0x54FCF9: sub     eax, 1
0x54FCFC: jnz     short loc_54FD56
0x54FCFE: mov     ecx, [esi+8]
0x54FD01: call    sub_556650
0x54FD06: jmp     short loc_54FD16
0x54FD08: mov     eax, [ebp+eax*4+0]
0x54FD0C: jmp     short loc_54FCB7
0x54FD0E: mov     ecx, [esi+8]
0x54FD11: call    sub_5564E0
0x54FD16: test    eax, eax
0x54FD18: jz      short loc_54FD56
0x54FD1A: test    edi, edi
0x54FD1C: jz      short loc_54FD4A
0x54FD1E: mov     eax, [esp+34h+var_14]
0x54FD22: mov     ecx, eax
0x54FD24: sub     ecx, [edi+0Ch]
0x54FD27: sub     eax, [esi+0Ch]
0x54FD2A: cmp     eax, ecx
0x54FD2C: jbe     short loc_54FD56
0x54FD2E: cmp     edi, esi
0x54FD30: jz      short loc_54FD56
0x54FD32: lea     edx, [edi+4]
0x54FD35: push    edx; lpAddend
0x54FD36: call    dword ptr ds:0A2807Ch
0x54FD3C: test    eax, eax
0x54FD3E: jnz     short loc_54FD4A
0x54FD40: mov     eax, [edi]
0x54FD42: mov     edx, [eax]
0x54FD44: push    1; lpCriticalSection
0x54FD46: mov     ecx, edi
0x54FD48: call    edx
0x54FD4A: lea     eax, [esi+4]
0x54FD4D: mov     edi, esi
0x54FD4F: push    eax; lpAddend
0x54FD50: mov     [esp+38h+var_1C], edi
0x54FD54: call    ebp ; InterlockedIncrement
0x54FD56: cmp     [esp+34h+var_18], 0
0x54FD5B: jnz     loc_54FCD0
0x54FD61: test    edi, edi
0x54FD63: jz      short loc_54FDA2
0x54FD65: push    offset aBsfacegenmodel; "BSFaceGenModelMap::FreeLRUData()"
0x54FD6A: mov     ecx, offset stru_B39C80; lpCriticalSection
0x54FD6F: call    NiTryEnterCS
0x54FD74: test    al, al
0x54FD76: jz      short loc_54FDA2
0x54FD78: mov     eax, [esp+34h+arg_0]
0x54FD7C: sub     eax, 0
0x54FD7F: jz      short loc_54FD90
0x54FD81: sub     eax, 1
0x54FD84: jnz     short loc_54FD98
0x54FD86: mov     ecx, [edi+8]
0x54FD89: call    sub_559C40
0x54FD8E: jmp     short loc_54FD98
0x54FD90: mov     ecx, [edi+8]
0x54FD93: call    sub_559BA0
0x54FD98: mov     ecx, offset stru_B39C80; lpCriticalSection
0x54FD9D: call    NiLeaveCriticalSection_0
0x54FDA2: sub     dword ptr ds:0B39C7Ch, 1
0x54FDA9: jnz     short loc_54FDB5
0x54FDAB: mov     dword ptr ds:0B39C78h, 0
0x54FDB5: push    offset stru_B39C00; lpCriticalSection
0x54FDBA: call    dword ptr ds:0A28074h
0x54FDC0: test    edi, edi
0x54FDC2: mov     byte ptr [esp+34h+var_4], 0
0x54FDC7: jz      short loc_54FDE1
0x54FDC9: lea     ecx, [edi+4]
0x54FDCC: push    ecx; lpAddend
0x54FDCD: call    dword ptr ds:0A2807Ch
0x54FDD3: test    eax, eax
0x54FDD5: jnz     short loc_54FDE1
0x54FDD7: mov     edx, [edi]
0x54FDD9: mov     eax, [edx]
0x54FDDB: push    1
0x54FDDD: mov     ecx, edi
0x54FDDF: call    eax
0x54FDE1: test    esi, esi
0x54FDE3: mov     [esp+34h+var_4], 0FFFFFFFFh
0x54FDEB: jz      short loc_54FE05
0x54FDED: lea     ecx, [esi+4]
0x54FDF0: push    ecx; lpAddend
0x54FDF1: call    dword ptr ds:0A2807Ch
0x54FDF7: test    eax, eax
0x54FDF9: jnz     short loc_54FE05
0x54FDFB: mov     edx, [esi]
0x54FDFD: mov     eax, [edx]
0x54FDFF: push    1
0x54FE01: mov     ecx, esi
0x54FE03: call    eax
0x54FE05: mov     ecx, [esp+34h+var_C]
0x54FE09: mov     large fs:0, ecx
0x54FE10: pop     ecx
0x54FE11: pop     edi
0x54FE12: pop     esi
0x54FE13: pop     ebp
0x54FE14: pop     ebx
0x54FE15: add     esp, 20h
0x54FE18: retn    8
