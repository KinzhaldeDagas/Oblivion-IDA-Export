0x46D2E0: mov     eax, [esp+arg_0]
0x46D2E4: push    esi
0x46D2E5: push    edi
0x46D2E6: push    0; int
0x46D2E8: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x46D2ED: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46D2F2: push    0; int
0x46D2F4: push    eax; void *
0x46D2F5: mov     esi, ecx
0x46D2F7: call    OblivionDynamicCast
0x46D2FC: mov     edi, eax
0x46D2FE: add     esp, 14h
0x46D301: test    edi, edi
0x46D303: jnz     short loc_46D30C
0x46D305: pop     edi
0x46D306: mov     al, 1
0x46D308: pop     esi
0x46D309: retn    4
0x46D30C: mov     cl, [esi+0Dh]
0x46D30F: mov     al, [edi+0Dh]
0x46D312: push    ebx
0x46D313: mov     dl, cl
0x46D315: mov     bl, al
0x46D317: and     dl, 1
0x46D31A: and     bl, 1
0x46D31D: cmp     dl, bl
0x46D31F: jnz     short loc_46D398
0x46D321: mov     dl, cl
0x46D323: mov     bl, al
0x46D325: shr     dl, 1
0x46D327: shr     bl, 1
0x46D329: and     dl, 1
0x46D32C: and     bl, 1
0x46D32F: cmp     dl, bl
0x46D331: jnz     short loc_46D398
0x46D333: mov     dl, [esi+0Ch]
0x46D336: cmp     dl, [edi+0Ch]
0x46D339: jnz     short loc_46D398
0x46D33B: shr     cl, 2
0x46D33E: shr     al, 2
0x46D341: and     cl, 1
0x46D344: and     al, 1
0x46D346: cmp     cl, al
0x46D348: jnz     short loc_46D398
0x46D34A: add     esi, 4
0x46D34D: mov     ecx, esi
0x46D34F: add     edi, 4
0x46D352: call    BSSimpleList_IsEmpty
0x46D357: test    al, al
0x46D359: jnz     short loc_46D3AC
0x46D35B: test    esi, esi
0x46D35D: jz      short loc_46D394
0x46D35F: nop
0x46D360: test    edi, edi
0x46D362: jz      short loc_46D3A0
0x46D364: mov     eax, [esi]
0x46D366: test    eax, eax
0x46D368: mov     ecx, [edi]
0x46D36A: jz      short loc_46D38A
0x46D36C: test    ecx, ecx
0x46D36E: jz      short loc_46D38A
0x46D370: mov     edx, [eax+4]
0x46D373: cmp     edx, [ecx+4]
0x46D376: jnz     short loc_46D398
0x46D378: mov     dx, [eax]
0x46D37B: cmp     dx, [ecx]
0x46D37E: jnz     short loc_46D398
0x46D380: mov     ax, [eax+8]
0x46D384: cmp     ax, [ecx+8]
0x46D388: jnz     short loc_46D398
0x46D38A: mov     esi, [esi+4]
0x46D38D: test    esi, esi
0x46D38F: mov     edi, [edi+4]
0x46D392: jnz     short loc_46D360
0x46D394: test    edi, edi
0x46D396: jz      short loc_46D3B7
0x46D398: pop     ebx
0x46D399: pop     edi
0x46D39A: mov     al, 1
0x46D39C: pop     esi
0x46D39D: retn    4
0x46D3A0: test    esi, esi
0x46D3A2: jnz     short loc_46D398
0x46D3A4: pop     ebx
0x46D3A5: pop     edi
0x46D3A6: xor     al, al
0x46D3A8: pop     esi
0x46D3A9: retn    4
0x46D3AC: mov     ecx, edi
0x46D3AE: call    BSSimpleList_IsEmpty
0x46D3B3: test    al, al
0x46D3B5: jz      short loc_46D398
0x46D3B7: pop     ebx
0x46D3B8: pop     edi
0x46D3B9: xor     al, al
0x46D3BB: pop     esi
0x46D3BC: retn    4
