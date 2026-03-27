0x574A80: sub     esp, 24h
0x574A83: push    ebx
0x574A84: push    ebp
0x574A85: push    esi
0x574A86: mov     esi, [esp+30h+arg_0]
0x574A8A: push    edi
0x574A8B: mov     edi, [esi]
0x574A8D: xor     ebx, ebx
0x574A8F: cmp     edi, ebx
0x574A91: mov     ebp, ecx
0x574A93: mov     [esp+34h+var_14], ebp
0x574A97: jz      loc_574DE0
0x574A9D: mov     eax, [ebp+38h]
0x574AA0: cmp     eax, ebx
0x574AA2: jz      loc_574DE0
0x574AA8: fld     dword ptr [eax+850h]
0x574AAE: mov     [esp+34h+var_1C], ebx
0x574AB2: mov     [esp+34h+var_C], ebx
0x574AB6: mov     [esp+34h+var_24], ebx
0x574ABA: call    Double_To_SInt32
0x574ABF: mov     [esp+34h+var_20], eax
0x574AC3: movzx   eax, word ptr [esi+4]
0x574AC7: cmp     ax, 0FFFFh
0x574ACB: mov     [esp+34h+arg_0], ebx
0x574ACF: jnz     short loc_574AE3
0x574AD1: mov     eax, edi
0x574AD3: lea     edx, [eax+1]
0x574AD6: mov     cl, [eax]
0x574AD8: add     eax, 1
0x574ADB: test    cl, cl
0x574ADD: jnz     short loc_574AD6
0x574ADF: sub     eax, edx
0x574AE1: jmp     short loc_574AE6
0x574AE3: movzx   eax, ax
0x574AE6: mov     ecx, [esp+34h+arg_8]
0x574AEA: mov     edx, [ecx]
0x574AEC: mov     [esp+34h+var_18], eax
0x574AF0: mov     eax, [esp+34h+arg_4]
0x574AF4: cmp     [eax], ebx
0x574AF6: mov     [esp+34h+var_4], edx
0x574AFA: jnz     short loc_574B02
0x574AFC: mov     dword ptr [eax], 0F423Fh
0x574B02: xor     edi, edi
0x574B04: cmp     [esp+34h+var_18], ebx
0x574B08: jbe     loc_574DA2
0x574B0E: jmp     short loc_574B14
0x574B10: mov     ebp, [esp+34h+var_14]
0x574B14: mov     eax, [esi]
0x574B16: mov     ecx, eax
0x574B18: neg     ecx
0x574B1A: sbb     ecx, ecx
0x574B1C: and     ecx, edi
0x574B1E: add     ecx, eax
0x574B20: mov     al, [ecx]
0x574B22: test    al, al
0x574B24: jz      loc_574DA2
0x574B2A: movsx   edx, al
0x574B2D: sub     edx, 9
0x574B30: jz      loc_574D2A
0x574B36: sub     edx, 1
0x574B39: jz      loc_574CFB
0x574B3F: sub     edx, 16h
0x574B42: jnz     short loc_574B48
0x574B44: mov     [esp+34h+var_1C], edi
0x574B48: movzx   ecx, al
0x574B4B: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x574B51: cmp     ecx, 3
0x574B54: ja      short def_574B56
0x574B56: jmp     ds:jpt_574B56[ecx*4]; switch jump
0x574B5D: mov     al, 27h ; '''; jumptable 00574B56 cases 145,146
0x574B5F: jmp     short def_574B56
0x574B61: mov     al, 22h ; '"'; jumptable 00574B56 cases 147,148
