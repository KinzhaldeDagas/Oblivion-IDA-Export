0x6F72A0: push    ecx
0x6F72A1: push    ebp
0x6F72A2: mov     ebp, [esp+8+arg_8]
0x6F72A6: push    esi
0x6F72A7: xor     esi, esi
0x6F72A9: test    ebp, ebp
0x6F72AB: push    edi
0x6F72AC: mov     edi, ecx
0x6F72AE: mov     [esp+10h+var_4], esi
0x6F72B2: jle     short loc_6F732B
0x6F72B4: push    ebx; MaxCount
0x6F72B5: mov     ebx, [esp+14h+Dst]
0x6F72B9: lea     esp, [esp+0]
0x6F72C0: mov     ecx, edi
0x6F72C2: call    sub_6F6F00
0x6F72C7: test    eax, eax
0x6F72C9: jle     short loc_6F7300
0x6F72CB: cmp     ebp, eax
0x6F72CD: mov     esi, eax
0x6F72CF: jge     short loc_6F72D3
0x6F72D1: mov     esi, ebp
0x6F72D3: mov     eax, [edi+20h]
0x6F72D6: mov     ecx, [eax]
0x6F72D8: mov     edx, [esp+14h+DstSize]
0x6F72DC: push    esi; Src
0x6F72DD: push    ecx; Src
0x6F72DE: push    edx; DstSize
0x6F72DF: push    ebx; Dst
0x6F72E0: call    _memcpy_s
0x6F72E5: mov     eax, [edi+30h]
0x6F72E8: sub     [eax], esi
0x6F72EA: add     [esp+24h+var_4], esi
0x6F72EE: mov     eax, [edi+20h]
0x6F72F1: add     ebx, esi
0x6F72F3: sub     ebp, esi
0x6F72F5: add     esp, 10h
0x6F72F8: add     [eax], esi
0x6F72FA: mov     esi, [esp+14h+var_4]
0x6F72FE: jmp     short loc_6F731D
0x6F7300: mov     eax, [edi]
0x6F7302: mov     edx, [eax+14h]
0x6F7305: mov     ecx, edi
0x6F7307: call    edx
0x6F7309: cmp     eax, 0FFFFFFFFh
0x6F730C: jz      short loc_6F7321
0x6F730E: add     esi, 1
0x6F7311: mov     [ebx], al
0x6F7313: add     ebx, 1
0x6F7316: mov     [esp+14h+var_4], esi
0x6F731A: sub     ebp, 1
0x6F731D: test    ebp, ebp
0x6F731F: jg      short loc_6F72C0
0x6F7321: pop     ebx
0x6F7322: pop     edi
0x6F7323: mov     eax, esi
0x6F7325: pop     esi
0x6F7326: pop     ebp
0x6F7327: pop     ecx
0x6F7328: retn    0Ch
0x6F732B: pop     edi
0x6F732C: mov     eax, esi
0x6F732E: pop     esi
0x6F732F: pop     ebp
0x6F7330: pop     ecx
0x6F7331: retn    0Ch
