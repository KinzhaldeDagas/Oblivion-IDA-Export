0x98D220: push    ebp
0x98D221: mov     ebp, esp
0x98D223: sub     esp, 14h
0x98D226: mov     eax, dword_BAABC4
0x98D22B: mov     ecx, [ebp+arg_0]
0x98D22E: imul    eax, 14h
0x98D231: add     eax, lpMem
0x98D237: add     ecx, 17h
0x98D23A: and     ecx, 0FFFFFFF0h
0x98D23D: mov     [ebp+var_10], ecx
0x98D240: sar     ecx, 4
0x98D243: push    ebx
0x98D244: dec     ecx
0x98D245: cmp     ecx, 20h ; ' '
0x98D248: push    esi
0x98D249: push    edi
0x98D24A: jge     short loc_98D257
0x98D24C: or      esi, 0FFFFFFFFh
0x98D24F: shr     esi, cl
0x98D251: or      [ebp+var_8], 0FFFFFFFFh
0x98D255: jmp     short loc_98D264
0x98D257: add     ecx, 0FFFFFFE0h
0x98D25A: or      edx, 0FFFFFFFFh
0x98D25D: xor     esi, esi
0x98D25F: shr     edx, cl
0x98D261: mov     [ebp+var_8], edx
0x98D264: mov     ecx, dword_BAABD0
0x98D26A: mov     ebx, ecx
0x98D26C: jmp     short loc_98D27F
0x98D26E: mov     edx, [ebx+4]
0x98D271: mov     edi, [ebx]
0x98D273: and     edx, [ebp+var_8]
0x98D276: and     edi, esi
0x98D278: or      edx, edi
0x98D27A: jnz     short loc_98D286
0x98D27C: add     ebx, 14h
0x98D27F: cmp     ebx, eax
0x98D281: mov     [ebp+arg_0], ebx
0x98D284: jb      short loc_98D26E
0x98D286: cmp     ebx, eax
0x98D288: jnz     short loc_98D309
0x98D28A: mov     ebx, lpMem
0x98D290: jmp     short loc_98D2A3
0x98D292: mov     edx, [ebx+4]
0x98D295: mov     edi, [ebx]
0x98D297: and     edx, [ebp+var_8]
0x98D29A: and     edi, esi
0x98D29C: or      edx, edi
0x98D29E: jnz     short loc_98D2AA
0x98D2A0: add     ebx, 14h
0x98D2A3: cmp     ebx, ecx
0x98D2A5: mov     [ebp+arg_0], ebx
0x98D2A8: jb      short loc_98D292
0x98D2AA: cmp     ebx, ecx
0x98D2AC: jnz     short loc_98D309
0x98D2AE: jmp     short loc_98D2BC
0x98D2B0: cmp     dword ptr [ebx+8], 0
0x98D2B4: jnz     short loc_98D2C0
0x98D2B6: add     ebx, 14h
0x98D2B9: mov     [ebp+arg_0], ebx
0x98D2BC: cmp     ebx, eax
0x98D2BE: jb      short loc_98D2B0
0x98D2C0: cmp     ebx, eax
0x98D2C2: jnz     short loc_98D2F5
0x98D2C4: mov     ebx, lpMem
0x98D2CA: jmp     short loc_98D2D5
0x98D2CC: cmp     dword ptr [ebx+8], 0
0x98D2D0: jnz     short loc_98D2DC
0x98D2D2: add     ebx, 14h
0x98D2D5: cmp     ebx, ecx
0x98D2D7: mov     [ebp+arg_0], ebx
0x98D2DA: jb      short loc_98D2CC
0x98D2DC: cmp     ebx, ecx
0x98D2DE: jnz     short loc_98D2F5
0x98D2E0: call    ___sbh_alloc_new_region
0x98D2E5: mov     ebx, eax
0x98D2E7: test    ebx, ebx
0x98D2E9: mov     [ebp+arg_0], ebx
0x98D2EC: jnz     short loc_98D2F5
0x98D2EE: xor     eax, eax
0x98D2F0: jmp     loc_98D4FE
0x98D2F5: push    ebx
0x98D2F6: call    ___sbh_alloc_new_group
0x98D2FB: pop     ecx
0x98D2FC: mov     ecx, [ebx+10h]
0x98D2FF: mov     [ecx], eax
0x98D301: mov     eax, [ebx+10h]
0x98D304: cmp     dword ptr [eax], 0FFFFFFFFh
0x98D307: jz      short loc_98D2EE
0x98D309: mov     dword_BAABD0, ebx
0x98D30F: mov     eax, [ebx+10h]
0x98D312: mov     edx, [eax]
0x98D314: cmp     edx, 0FFFFFFFFh
0x98D317: mov     [ebp+var_4], edx
0x98D31A: jz      short loc_98D330
0x98D31C: mov     ecx, [eax+edx*4+0C4h]
0x98D323: mov     edi, [eax+edx*4+44h]
0x98D327: and     ecx, [ebp+var_8]
0x98D32A: and     edi, esi
0x98D32C: or      ecx, edi
0x98D32E: jnz     short loc_98D359
0x98D330: and     [ebp+var_4], 0
0x98D334: mov     edx, [eax+0C4h]
0x98D33A: lea     ecx, [eax+44h]
0x98D33D: mov     edi, [ecx]
0x98D33F: and     edx, [ebp+var_8]
0x98D342: and     edi, esi
0x98D344: or      edx, edi
0x98D346: jnz     short loc_98D356
0x98D348: inc     [ebp+var_4]
0x98D34B: mov     edx, [ecx+84h]
0x98D351: add     ecx, 4
0x98D354: jmp     short loc_98D33D
0x98D356: mov     edx, [ebp+var_4]
0x98D359: mov     ecx, edx
0x98D35B: imul    ecx, 204h
0x98D361: lea     ecx, [ecx+eax+144h]
0x98D368: mov     [ebp+var_C], ecx
0x98D36B: mov     ecx, [eax+edx*4+44h]
0x98D36F: xor     edi, edi
0x98D371: and     ecx, esi
0x98D373: jnz     short loc_98D387
0x98D375: mov     ecx, [eax+edx*4+0C4h]
0x98D37C: and     ecx, [ebp+var_8]
0x98D37F: push    20h ; ' '
0x98D381: pop     edi
0x98D382: jmp     short loc_98D387
0x98D384: add     ecx, ecx
0x98D386: inc     edi
0x98D387: test    ecx, ecx
0x98D389: jge     short loc_98D384
0x98D38B: mov     ecx, [ebp+var_C]
0x98D38E: mov     edx, [ecx+edi*8+4]
0x98D392: mov     ecx, [edx]
0x98D394: sub     ecx, [ebp+var_10]
0x98D397: mov     esi, ecx
0x98D399: sar     esi, 4
0x98D39C: dec     esi
0x98D39D: cmp     esi, 3Fh ; '?'
0x98D3A0: mov     [ebp+var_8], ecx
0x98D3A3: jle     short loc_98D3A8
0x98D3A5: push    3Fh ; '?'
0x98D3A7: pop     esi
0x98D3A8: cmp     esi, edi
0x98D3AA: jz      loc_98D4B1
0x98D3B0: mov     ecx, [edx+4]
0x98D3B3: cmp     ecx, [edx+8]
0x98D3B6: jnz     short loc_98D414
0x98D3B8: cmp     edi, 20h ; ' '
0x98D3BB: mov     ebx, 80000000h
0x98D3C0: jge     short loc_98D3E8
0x98D3C2: mov     ecx, edi
0x98D3C4: shr     ebx, cl
0x98D3C6: mov     ecx, [ebp+var_4]
0x98D3C9: lea     edi, [eax+edi+4]
0x98D3CD: not     ebx
0x98D3CF: mov     [ebp+var_14], ebx
0x98D3D2: and     ebx, [eax+ecx*4+44h]
0x98D3D6: mov     [eax+ecx*4+44h], ebx
0x98D3DA: dec     byte ptr [edi]
0x98D3DC: jnz     short loc_98D411
0x98D3DE: mov     ecx, [ebp+var_14]
0x98D3E1: mov     ebx, [ebp+arg_0]
0x98D3E4: and     [ebx], ecx
0x98D3E6: jmp     short loc_98D414
0x98D3E8: lea     ecx, [edi-20h]
0x98D3EB: shr     ebx, cl
0x98D3ED: mov     ecx, [ebp+var_4]
0x98D3F0: lea     ecx, [eax+ecx*4+0C4h]
0x98D3F7: lea     edi, [eax+edi+4]
0x98D3FB: not     ebx
0x98D3FD: and     [ecx], ebx
0x98D3FF: dec     byte ptr [edi]
0x98D401: mov     [ebp+var_14], ebx
0x98D404: jnz     short loc_98D411
0x98D406: mov     ebx, [ebp+arg_0]
0x98D409: mov     ecx, [ebp+var_14]
0x98D40C: and     [ebx+4], ecx
0x98D40F: jmp     short loc_98D414
0x98D411: mov     ebx, [ebp+arg_0]
0x98D414: cmp     [ebp+var_8], 0
0x98D418: mov     ecx, [edx+8]
0x98D41B: mov     edi, [edx+4]
0x98D41E: mov     [ecx+4], edi
0x98D421: mov     ecx, [edx+4]
0x98D424: mov     edi, [edx+8]
0x98D427: mov     [ecx+8], edi
0x98D42A: jz      loc_98D4BD
0x98D430: mov     ecx, [ebp+var_C]
0x98D433: lea     ecx, [ecx+esi*8]
0x98D436: mov     edi, [ecx+4]
0x98D439: mov     [edx+8], ecx
0x98D43C: mov     [edx+4], edi
0x98D43F: mov     [ecx+4], edx
0x98D442: mov     ecx, [edx+4]
0x98D445: mov     [ecx+8], edx
0x98D448: mov     ecx, [edx+4]
0x98D44B: cmp     ecx, [edx+8]
0x98D44E: jnz     short loc_98D4AE
0x98D450: mov     cl, [esi+eax+4]
0x98D454: mov     byte ptr [ebp+arg_0+3], cl
0x98D457: inc     cl
0x98D459: cmp     esi, 20h ; ' '
0x98D45C: mov     [esi+eax+4], cl
0x98D460: jge     short loc_98D485
0x98D462: cmp     byte ptr [ebp+arg_0+3], 0
0x98D466: jnz     short loc_98D473
0x98D468: mov     edi, 80000000h
0x98D46D: mov     ecx, esi
0x98D46F: shr     edi, cl
0x98D471: or      [ebx], edi
0x98D473: mov     ecx, esi
0x98D475: mov     edi, 80000000h
0x98D47A: shr     edi, cl
0x98D47C: mov     ecx, [ebp+var_4]
0x98D47F: or      [eax+ecx*4+44h], edi
0x98D483: jmp     short loc_98D4AE
0x98D485: cmp     byte ptr [ebp+arg_0+3], 0
0x98D489: jnz     short loc_98D498
0x98D48B: lea     ecx, [esi-20h]
0x98D48E: mov     edi, 80000000h
0x98D493: shr     edi, cl
0x98D495: or      [ebx+4], edi
0x98D498: mov     ecx, [ebp+var_4]
0x98D49B: lea     edi, [eax+ecx*4+0C4h]
0x98D4A2: lea     ecx, [esi-20h]
0x98D4A5: mov     esi, 80000000h
0x98D4AA: shr     esi, cl
0x98D4AC: or      [edi], esi
0x98D4AE: mov     ecx, [ebp+var_8]
0x98D4B1: test    ecx, ecx
0x98D4B3: jz      short loc_98D4C0
0x98D4B5: mov     [edx], ecx
0x98D4B7: mov     [ecx+edx-4], ecx
0x98D4BB: jmp     short loc_98D4C0
0x98D4BD: mov     ecx, [ebp+var_8]
0x98D4C0: mov     esi, [ebp+var_10]
0x98D4C3: add     edx, ecx
0x98D4C5: lea     ecx, [esi+1]
0x98D4C8: mov     [edx], ecx
0x98D4CA: mov     [edx+esi-4], ecx
0x98D4CE: mov     esi, [ebp+var_C]
0x98D4D1: mov     ecx, [esi]
0x98D4D3: test    ecx, ecx
0x98D4D5: lea     edi, [ecx+1]
0x98D4D8: mov     [esi], edi
0x98D4DA: jnz     short loc_98D4F6
0x98D4DC: cmp     ebx, dword_BAA2A8
0x98D4E2: jnz     short loc_98D4F6
0x98D4E4: mov     ecx, [ebp+var_4]
0x98D4E7: cmp     ecx, dword_BAABD8
0x98D4ED: jnz     short loc_98D4F6
0x98D4EF: and     dword_BAA2A8, 0
0x98D4F6: mov     ecx, [ebp+var_4]
0x98D4F9: mov     [eax], ecx
0x98D4FB: lea     eax, [edx+4]
0x98D4FE: pop     edi
0x98D4FF: pop     esi
0x98D500: pop     ebx
0x98D501: leave
0x98D502: retn
