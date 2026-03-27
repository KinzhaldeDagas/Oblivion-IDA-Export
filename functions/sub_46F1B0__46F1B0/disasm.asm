0x46F1B0: mov     eax, [esp+arg_0]
0x46F1B4: push    ebx
0x46F1B5: push    0; int
0x46F1B7: push    offset ??_R0?AVTESSoundFile@@@8; struct TypeDescriptor *
0x46F1BC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46F1C1: push    0; int
0x46F1C3: push    eax; void *
0x46F1C4: mov     ebx, ecx
0x46F1C6: call    OblivionDynamicCast
0x46F1CB: add     esp, 14h
0x46F1CE: test    eax, eax
0x46F1D0: jnz     short loc_46F1D8
0x46F1D2: mov     al, 1
0x46F1D4: pop     ebx
0x46F1D5: retn    4
0x46F1D8: movzx   ecx, word ptr [ebx+8]
0x46F1DC: cmp     cx, 0FFFFh
0x46F1E1: push    esi
0x46F1E2: jnz     short loc_46F1FD
0x46F1E4: mov     ecx, [ebx+4]
0x46F1E7: lea     esi, [ecx+1]
0x46F1EA: lea     ebx, [ebx+0]
0x46F1F0: mov     dl, [ecx]
0x46F1F2: add     ecx, 1
0x46F1F5: test    dl, dl
0x46F1F7: jnz     short loc_46F1F0
0x46F1F9: sub     ecx, esi
0x46F1FB: jmp     short loc_46F200
0x46F1FD: movzx   ecx, cx
0x46F200: test    ecx, ecx
0x46F202: jnz     short loc_46F229
0x46F204: movzx   ecx, word ptr [eax+8]
0x46F208: cmp     cx, 0FFFFh
0x46F20D: jnz     short loc_46F222
0x46F20F: mov     ecx, [eax+4]
0x46F212: lea     esi, [ecx+1]
0x46F215: mov     dl, [ecx]
0x46F217: add     ecx, 1
0x46F21A: test    dl, dl
0x46F21C: jnz     short loc_46F215
0x46F21E: sub     ecx, esi
0x46F220: jmp     short loc_46F225
0x46F222: movzx   ecx, cx
0x46F225: test    ecx, ecx
0x46F227: jz      short loc_46F2A5
0x46F229: movzx   ecx, word ptr [ebx+8]
0x46F22D: cmp     cx, 0FFFFh
0x46F232: push    edi
0x46F233: jnz     short loc_46F24F
0x46F235: mov     ecx, [ebx+4]
0x46F238: lea     esi, [ecx+1]
0x46F23B: jmp     short loc_46F240
0x46F23D: align 10h
0x46F240: mov     dl, [ecx]
0x46F242: add     ecx, 1
0x46F245: test    dl, dl
0x46F247: jnz     short loc_46F240
0x46F249: sub     ecx, esi
0x46F24B: mov     edi, ecx
0x46F24D: jmp     short loc_46F252
0x46F24F: movzx   edi, cx
0x46F252: movzx   ecx, word ptr [eax+8]
0x46F256: cmp     cx, 0FFFFh
0x46F25B: jnz     short loc_46F270
0x46F25D: mov     ecx, [eax+4]
0x46F260: lea     esi, [ecx+1]
0x46F263: mov     dl, [ecx]
0x46F265: add     ecx, 1
0x46F268: test    dl, dl
0x46F26A: jnz     short loc_46F263
0x46F26C: sub     ecx, esi
0x46F26E: jmp     short loc_46F273
0x46F270: movzx   ecx, cx
0x46F273: cmp     edi, ecx
0x46F275: pop     edi
0x46F276: jnz     short loc_46F29E
0x46F278: mov     eax, [eax+4]
0x46F27B: test    eax, eax
0x46F27D: jnz     short loc_46F284
0x46F27F: mov     eax, offset EmptyString
0x46F284: mov     ecx, [ebx+4]
0x46F287: test    ecx, ecx
0x46F289: jnz     short loc_46F290
0x46F28B: mov     ecx, offset EmptyString
0x46F290: push    eax; Str2
0x46F291: push    ecx; Str1
0x46F292: call    __strcmp
0x46F297: add     esp, 8
0x46F29A: test    eax, eax
0x46F29C: jz      short loc_46F2A5
0x46F29E: pop     esi
0x46F29F: mov     al, 1
0x46F2A1: pop     ebx
0x46F2A2: retn    4
0x46F2A5: pop     esi
0x46F2A6: xor     al, al
0x46F2A8: pop     ebx
0x46F2A9: retn    4
