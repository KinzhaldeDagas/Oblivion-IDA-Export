0x85A200: push    0FFFFFFFFh
0x85A202: push    offset SEH_8122A0
0x85A207: mov     eax, large fs:0
0x85A20D: push    eax
0x85A20E: push    ecx
0x85A20F: push    ebp
0x85A210: push    esi
0x85A211: push    edi
0x85A212: mov     eax, ds:0B30AACh
0x85A217: xor     eax, esp
0x85A219: push    eax
0x85A21A: lea     eax, [esp+20h+var_C]
0x85A21E: mov     large fs:0, eax
0x85A224: mov     ebp, ecx
0x85A226: mov     eax, [esp+20h+arg_14]
0x85A22A: test    eax, eax
0x85A22C: jle     loc_85A376
0x85A232: cmp     [esp+20h+arg_10], 0
0x85A237: jnz     loc_85A2C8
0x85A23D: cmp     [esp+20h+arg_8], 1
0x85A242: jnz     loc_85A35C
0x85A248: push    10h; Size
0x85A24A: call    FormHeapAlloc
0x85A24F: add     esp, 4
0x85A252: mov     [esp+20h+var_10], eax
0x85A256: test    eax, eax
0x85A258: mov     [esp+20h+var_4], 0
0x85A260: jz      short loc_85A285
0x85A262: mov     ecx, [esp+20h+arg_C]
0x85A266: movzx   edx, byte ptr [ecx]
0x85A269: mov     ecx, [esp+20h+arg_0]
0x85A26D: push    0
0x85A26F: push    0
0x85A271: push    edx
0x85A272: push    18Ah
0x85A277: push    ecx
0x85A278: push    eax
0x85A279: call    sub_7E2370
0x85A27E: add     esp, 18h
0x85A281: mov     edi, eax
0x85A283: jmp     short loc_85A287
0x85A285: xor     edi, edi
0x85A287: mov     edx, [ebp+28h]
0x85A28A: mov     eax, [edx+4]
0x85A28D: lea     esi, [ebp+28h]
0x85A290: mov     ecx, esi
0x85A292: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85A29A: call    eax
0x85A29C: mov     [eax+8], edi
0x85A29F: mov     dword ptr [eax], 0
0x85A2A5: mov     ecx, [esi+8]
0x85A2A8: mov     [eax+4], ecx
0x85A2AB: mov     ecx, [esi+8]
0x85A2AE: test    ecx, ecx
0x85A2B0: jz      loc_85A34C
0x85A2B6: mov     [ecx], eax
0x85A2B8: mov     [esi+8], eax
0x85A2BB: add     dword ptr [esi+0Ch], 1
0x85A2BF: mov     eax, [esp+20h+arg_14]
0x85A2C3: jmp     loc_85A364
0x85A2C8: cmp     [esp+20h+arg_8], 1
0x85A2CD: jnz     loc_85A35C
0x85A2D3: push    10h; Size
0x85A2D5: call    FormHeapAlloc
0x85A2DA: add     esp, 4
0x85A2DD: mov     [esp+20h+var_10], eax
0x85A2E1: test    eax, eax
0x85A2E3: mov     [esp+20h+var_4], 1
0x85A2EB: jz      short loc_85A310
0x85A2ED: mov     edx, [esp+20h+arg_C]
0x85A2F1: movzx   ecx, byte ptr [edx]
0x85A2F4: mov     edx, [esp+20h+arg_0]
0x85A2F8: push    0
0x85A2FA: push    0
0x85A2FC: push    ecx
0x85A2FD: push    18Bh
0x85A302: push    edx
0x85A303: push    eax
0x85A304: call    sub_7E2370
0x85A309: add     esp, 18h
0x85A30C: mov     edi, eax
0x85A30E: jmp     short loc_85A312
0x85A310: xor     edi, edi
0x85A312: mov     eax, [ebp+28h]
0x85A315: mov     edx, [eax+4]
0x85A318: lea     esi, [ebp+28h]
0x85A31B: mov     ecx, esi
0x85A31D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85A325: call    edx
0x85A327: mov     [eax+8], edi
0x85A32A: mov     dword ptr [eax], 0
0x85A330: mov     ecx, [esi+8]
0x85A333: mov     [eax+4], ecx
0x85A336: mov     ecx, [esi+8]
0x85A339: test    ecx, ecx
0x85A33B: jz      short loc_85A34C
0x85A33D: mov     [ecx], eax
0x85A33F: mov     [esi+8], eax
0x85A342: add     dword ptr [esi+0Ch], 1
0x85A346: mov     eax, [esp+20h+arg_14]
0x85A34A: jmp     short loc_85A364
0x85A34C: mov     [esi+4], eax
0x85A34F: mov     [esi+8], eax
0x85A352: add     dword ptr [esi+0Ch], 1
0x85A356: mov     eax, [esp+20h+arg_14]
0x85A35A: jmp     short loc_85A364
0x85A35C: mov     ecx, [esp+20h+arg_4]
0x85A360: add     word ptr [ecx], 1
0x85A364: sub     eax, ds:0B42E88h
0x85A36A: test    eax, eax
0x85A36C: mov     [esp+20h+arg_14], eax
0x85A370: jg      loc_85A232
0x85A376: mov     ecx, [esp+20h+var_C]
0x85A37A: mov     large fs:0, ecx
0x85A381: pop     ecx
0x85A382: pop     edi
0x85A383: pop     esi
0x85A384: pop     ebp
0x85A385: add     esp, 10h
0x85A388: retn    18h
