0x70B250: push    0FFFFFFFFh
0x70B252: push    offset SEH_70B250
0x70B257: mov     eax, large fs:0
0x70B25D: push    eax
0x70B25E: push    ecx
0x70B25F: push    ebx
0x70B260: push    ebp
0x70B261: push    esi
0x70B262: push    edi
0x70B263: mov     eax, ds:0B30AACh
0x70B268: xor     eax, esp
0x70B26A: push    eax
0x70B26B: lea     eax, [esp+24h+var_C]
0x70B26F: mov     large fs:0, eax
0x70B275: mov     ebp, ecx
0x70B277: mov     [esp+24h+var_10], 0
0x70B27F: movzx   eax, word ptr [ebp+0B6h]
0x70B286: mov     ebx, [esp+24h+arg_4]
0x70B28A: cmp     eax, ebx
0x70B28C: ja      loc_70B318
0x70B292: mov     edi, [esp+24h+arg_8]
0x70B296: test    edi, edi
0x70B298: jz      short loc_70B2A2
0x70B29A: push    ebp
0x70B29B: mov     ecx, edi
0x70B29D: call    sub_7074B0
0x70B2A2: test    edi, edi
0x70B2A4: mov     [esp+24h+arg_8], edi
0x70B2A8: jz      short loc_70B2B4
0x70B2AA: lea     ecx, [edi+4]
0x70B2AD: push    ecx; lpAddend
0x70B2AE: call    dword ptr ds:0A28078h
0x70B2B4: movzx   edx, word ptr [ebp+0B4h]
0x70B2BB: cmp     ebx, edx
0x70B2BD: lea     esi, [ebp+0ACh]
0x70B2C3: mov     [esp+24h+var_4], 1
0x70B2CB: jb      short loc_70B2DB
0x70B2CD: movzx   eax, word ptr [esi+0Eh]
0x70B2D1: add     eax, ebx
0x70B2D3: push    eax
0x70B2D4: mov     ecx, esi
0x70B2D6: call    sub_523B10
0x70B2DB: lea     ecx, [esp+24h+arg_8]
0x70B2DF: push    ecx
0x70B2E0: push    ebx
0x70B2E1: mov     ecx, esi
0x70B2E3: call    sub_4B34E0
0x70B2E8: test    edi, edi
0x70B2EA: mov     byte ptr [esp+24h+var_4], 0
0x70B2EF: jz      short loc_70B309
0x70B2F1: lea     edx, [edi+4]
0x70B2F4: push    edx; lpAddend
0x70B2F5: call    dword ptr ds:0A2807Ch
0x70B2FB: test    eax, eax
0x70B2FD: jnz     short loc_70B309
0x70B2FF: mov     eax, [edi]
0x70B301: mov     edx, [eax]
0x70B303: push    1
0x70B305: mov     ecx, edi
0x70B307: call    edx
0x70B309: mov     eax, [esp+24h+arg_0]
0x70B30D: mov     dword ptr [eax], 0
0x70B313: jmp     loc_70B3DF
0x70B318: mov     eax, [ebp+0B0h]
0x70B31E: mov     esi, [eax+ebx*4]
0x70B321: test    esi, esi
0x70B323: lea     eax, [eax+ebx*4]
0x70B326: mov     [esp+24h+arg_4], esi
0x70B32A: jz      short loc_70B336
0x70B32C: lea     ecx, [esi+4]
0x70B32F: push    ecx; lpAddend
0x70B330: call    dword ptr ds:0A28078h
0x70B336: test    esi, esi
0x70B338: mov     [esp+24h+var_4], 2
0x70B340: jz      short loc_70B349
0x70B342: mov     dword ptr [esi+1Ch], 0
0x70B349: mov     edi, [esp+24h+arg_8]
0x70B34D: test    edi, edi
0x70B34F: jz      short loc_70B359
0x70B351: push    ebp
0x70B352: mov     ecx, edi
0x70B354: call    sub_7074B0
0x70B359: test    edi, edi
0x70B35B: mov     [esp+24h+arg_8], edi
0x70B35F: jz      short loc_70B36B
0x70B361: lea     edx, [edi+4]
0x70B364: push    edx; lpAddend
0x70B365: call    dword ptr ds:0A28078h
0x70B36B: lea     eax, [esp+24h+arg_8]
0x70B36F: push    eax
0x70B370: push    ebx
0x70B371: lea     ecx, [ebp+0ACh]
0x70B377: mov     byte ptr [esp+2Ch+var_4], 3
0x70B37C: call    sub_4B34E0
0x70B381: test    edi, edi
0x70B383: mov     ebx, ds:0A2807Ch
0x70B389: mov     byte ptr [esp+24h+var_4], 2
0x70B38E: jz      short loc_70B3A4
0x70B390: lea     ecx, [edi+4]
0x70B393: push    ecx; lpAddend
0x70B394: call    ebx ; InterlockedDecrement
0x70B396: test    eax, eax
0x70B398: jnz     short loc_70B3A4
0x70B39A: mov     edx, [edi]
0x70B39C: mov     eax, [edx]
0x70B39E: push    1
0x70B3A0: mov     ecx, edi
0x70B3A2: call    eax
0x70B3A4: test    esi, esi
0x70B3A6: mov     edi, [esp+24h+arg_0]
0x70B3AA: mov     [edi], esi
0x70B3AC: jz      short loc_70B3B8
0x70B3AE: lea     ecx, [esi+4]
0x70B3B1: push    ecx; lpAddend
0x70B3B2: call    dword ptr ds:0A28078h
0x70B3B8: test    esi, esi
0x70B3BA: mov     [esp+24h+var_10], 1
0x70B3C2: mov     byte ptr [esp+24h+var_4], 0
0x70B3C7: jz      short loc_70B3DD
0x70B3C9: lea     edx, [esi+4]
0x70B3CC: push    edx; lpAddend
0x70B3CD: call    ebx ; InterlockedDecrement
0x70B3CF: test    eax, eax
0x70B3D1: jnz     short loc_70B3DD
0x70B3D3: mov     eax, [esi]
0x70B3D5: mov     edx, [eax]
0x70B3D7: push    1
0x70B3D9: mov     ecx, esi
0x70B3DB: call    edx
0x70B3DD: mov     eax, edi
0x70B3DF: mov     ecx, dword ptr [esp+24h+var_C]
0x70B3E3: mov     large fs:0, ecx
0x70B3EA: pop     ecx
0x70B3EB: pop     edi
0x70B3EC: pop     esi
0x70B3ED: pop     ebp
0x70B3EE: pop     ebx
0x70B3EF: add     esp, 10h
0x70B3F2: retn    0Ch
