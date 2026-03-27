0x708330: push    ecx
0x708331: push    ebx
0x708332: push    esi
0x708333: mov     esi, [esp+0Ch+arg_0]
0x708337: push    edi
0x708338: push    esi
0x708339: mov     edi, ecx
0x70833B: call    sub_700460
0x708340: mov     eax, [esi+220h]
0x708346: push    1
0x708348: lea     ecx, [esp+14h+var_4]
0x70834C: push    ecx
0x70834D: push    2
0x70834F: lea     edx, [edi+18h]
0x708352: push    edx
0x708353: push    eax
0x708354: mov     eax, [eax+8]
0x708357: mov     [esp+24h+var_4], 2
0x70835F: call    eax
0x708361: add     esp, 14h
0x708364: push    esi
0x708365: lea     ecx, [edi+54h]
0x708368: call    sub_7094A0
0x70836D: push    esi
0x70836E: lea     ecx, [edi+30h]
0x708371: call    sub_711BF0
0x708376: mov     eax, [esi+220h]
0x70837C: push    1
0x70837E: lea     ecx, [esp+14h+var_4]
0x708382: push    ecx
0x708383: mov     ebx, 4
0x708388: push    ebx
0x708389: lea     edx, [edi+60h]
0x70838C: push    edx
0x70838D: push    eax
0x70838E: mov     eax, [eax+8]
0x708391: mov     [esp+24h+var_4], ebx
0x708395: call    eax
0x708397: mov     ecx, [edi+0A4h]
0x70839D: mov     eax, [esi+220h]
0x7083A3: push    1
0x7083A5: lea     edx, [esp+28h+var_4]
0x7083A9: push    edx
0x7083AA: mov     [esp+2Ch+arg_0], ecx
0x7083AE: mov     edx, [eax+8]
0x7083B1: push    ebx
0x7083B2: lea     ecx, [esp+30h+arg_0]
0x7083B6: push    ecx
0x7083B7: push    eax
0x7083B8: mov     [esp+38h+var_4], ebx
0x7083BC: call    edx
0x7083BE: mov     eax, [esp+38h+arg_0]
0x7083C2: add     esp, 28h
0x7083C5: test    eax, eax
0x7083C7: jle     short loc_70842D
0x7083C9: xor     ecx, ecx
0x7083CB: mov     edx, ebx
0x7083CD: mul     edx
0x7083CF: seto    cl
0x7083D2: push    ebp
0x7083D3: neg     ecx
0x7083D5: or      ecx, eax
0x7083D7: push    ecx; Size
0x7083D8: call    FormHeapAlloc
0x7083DD: mov     ebp, eax
0x7083DF: mov     eax, [edi+9Ch]
0x7083E5: add     esp, 4
0x7083E8: test    eax, eax
0x7083EA: jz      short loc_7083FF
0x7083EC: mov     ecx, ebp
0x7083EE: mov     edi, edi
0x7083F0: lea     edx, [eax+8]
0x7083F3: mov     eax, [eax]
0x7083F5: mov     edx, [edx]
0x7083F7: mov     [ecx], edx
0x7083F9: add     ecx, ebx
0x7083FB: test    eax, eax
0x7083FD: jnz     short loc_7083F0
0x7083FF: mov     ebx, [esp+14h+arg_0]
0x708403: add     ebx, 0FFFFFFFFh
0x708406: js      short loc_708423
0x708408: jmp     short loc_708410
0x70840A: align 10h
0x708410: mov     ecx, [ebp+ebx*4+0]
0x708414: mov     eax, [esi]
0x708416: mov     edx, [eax+2Ch]
0x708419: push    ecx
0x70841A: mov     ecx, esi
0x70841C: call    edx
0x70841E: sub     ebx, 1
0x708421: jns     short loc_708410
0x708423: push    ebp
0x708424: call    FormHeapFree
0x708429: add     esp, 4
0x70842C: pop     ebp
0x70842D: mov     ecx, [edi+0A8h]
0x708433: mov     eax, [esi]
0x708435: mov     edx, [eax+2Ch]
0x708438: push    ecx
0x708439: mov     ecx, esi
0x70843B: call    edx
0x70843D: pop     edi
0x70843E: pop     esi
0x70843F: pop     ebx
0x708440: pop     ecx
0x708441: retn    4
