0x7DE3B0: push    0FFFFFFFFh
0x7DE3B2: push    offset SEH_7DE3B0
0x7DE3B7: mov     eax, large fs:0
0x7DE3BD: push    eax
0x7DE3BE: push    ecx
0x7DE3BF: push    ebx
0x7DE3C0: push    ebp
0x7DE3C1: push    esi
0x7DE3C2: push    edi
0x7DE3C3: mov     eax, ds:0B30AACh
0x7DE3C8: xor     eax, esp
0x7DE3CA: push    eax
0x7DE3CB: lea     eax, [esp+24h+var_C]
0x7DE3CF: mov     large fs:0, eax
0x7DE3D5: mov     esi, ecx
0x7DE3D7: mov     eax, [esi]
0x7DE3D9: mov     edx, [eax+80h]
0x7DE3DF: call    edx
0x7DE3E1: mov     eax, [esi+0F8h]
0x7DE3E7: mov     eax, [eax+24h]
0x7DE3EA: mov     ebx, [eax]
0x7DE3EC: mov     edi, [ebx+4]
0x7DE3EF: xor     ebp, ebp
0x7DE3F1: cmp     edi, ebp
0x7DE3F3: jz      short loc_7DE414
0x7DE3F5: lea     ecx, [edi+4]
0x7DE3F8: push    ecx; lpAddend
0x7DE3F9: call    dword ptr ds:0A2807Ch
0x7DE3FF: test    eax, eax
0x7DE401: jnz     short loc_7DE411
0x7DE403: cmp     edi, ebp
0x7DE405: jz      short loc_7DE411
0x7DE407: mov     edx, [edi]
0x7DE409: mov     eax, [edx]
0x7DE40B: push    1
0x7DE40D: mov     ecx, edi
0x7DE40F: call    eax
0x7DE411: mov     [ebx+4], ebp
0x7DE414: mov     eax, [esi+0F8h]
0x7DE41A: mov     ecx, [eax+24h]
0x7DE41D: mov     ebx, [ecx+4]
0x7DE420: mov     edi, [ebx+4]
0x7DE423: cmp     edi, ebp
0x7DE425: jz      short loc_7DE446
0x7DE427: lea     edx, [edi+4]
0x7DE42A: push    edx; lpAddend
0x7DE42B: call    dword ptr ds:0A2807Ch
0x7DE431: test    eax, eax
0x7DE433: jnz     short loc_7DE443
0x7DE435: cmp     edi, ebp
0x7DE437: jz      short loc_7DE443
0x7DE439: mov     eax, [edi]
0x7DE43B: mov     edx, [eax]
0x7DE43D: push    1
0x7DE43F: mov     ecx, edi
0x7DE441: call    edx
0x7DE443: mov     [ebx+4], ebp
0x7DE446: mov     eax, [esi+0F4h]
0x7DE44C: add     eax, 0FFFFFFFEh; switch 6 cases
0x7DE44F: or      ebx, 0FFFFFFFFh
0x7DE452: cmp     eax, 5
0x7DE455: ja      def_7DE45B
0x7DE45B: jmp     ds:jpt_7DE45B[eax*4]; switch jump
0x7DE462: mov     eax, [esi+0F8h]; jumptable 007DE45B case 7
0x7DE468: mov     eax, [eax+24h]
0x7DE46B: mov     edi, [eax]
0x7DE46D: cmp     edi, ebp
0x7DE46F: mov     [esp+2Ch+var_18], edi
0x7DE473: jz      short loc_7DE479
0x7DE475: add     dword ptr [edi+5Ch], 1
0x7DE479: push    3
0x7DE47B: push    edi
0x7DE47C: mov     [esp+34h+var_C], ebp
0x7DE480: call    sub_8011E0
0x7DE485: mov     ecx, ds:0B45FA8h
0x7DE48B: jmp     loc_7DE5B5
0x7DE490: mov     eax, [esi+0F8h]; jumptable 007DE45B case 2
0x7DE496: mov     ecx, [eax+24h]
0x7DE499: mov     edi, [ecx]
0x7DE49B: cmp     edi, ebp
0x7DE49D: mov     [esp+2Ch+var_18], edi
0x7DE4A1: jz      short loc_7DE4A7
0x7DE4A3: add     dword ptr [edi+5Ch], 1
0x7DE4A7: push    1
0x7DE4A9: push    edi
0x7DE4AA: mov     [esp+34h+var_C], 1
0x7DE4B2: call    sub_8011E0
0x7DE4B7: mov     ecx, [esi+100h]
0x7DE4BD: jmp     loc_7DE5B5
0x7DE4C2: mov     eax, [esi+0F8h]; jumptable 007DE45B case 3
0x7DE4C8: mov     edx, [eax+24h]
0x7DE4CB: mov     edi, [edx]
0x7DE4CD: cmp     edi, ebp
0x7DE4CF: mov     [esp+2Ch+var_18], edi
0x7DE4D3: jz      short loc_7DE4D9
0x7DE4D5: add     dword ptr [edi+5Ch], 1
0x7DE4D9: mov     [esp+2Ch+var_C], 2
0x7DE4E1: jmp     loc_7DE5A7
0x7DE4E6: mov     eax, [esi+0F8h]; jumptable 007DE45B case 4
0x7DE4EC: mov     eax, [eax+24h]
0x7DE4EF: mov     edi, [eax]
0x7DE4F1: cmp     edi, ebp
0x7DE4F3: mov     [esp+2Ch+var_18], edi
0x7DE4F7: jz      short loc_7DE4FD
0x7DE4F9: add     dword ptr [edi+5Ch], 1
0x7DE4FD: push    1
0x7DE4FF: push    edi
0x7DE500: mov     [esp+34h+var_C], 3
0x7DE508: call    sub_8011E0
0x7DE50D: mov     ecx, [esi+100h]
0x7DE513: jmp     loc_7DE5B5
0x7DE518: mov     eax, [esi+0F8h]; jumptable 007DE45B case 5
0x7DE51E: mov     ecx, [eax+24h]
0x7DE521: mov     edi, [ecx]
0x7DE523: cmp     edi, ebp
0x7DE525: mov     [esp+2Ch+var_18], edi
0x7DE529: jz      short loc_7DE52F
0x7DE52B: add     dword ptr [edi+5Ch], 1
0x7DE52F: push    1
0x7DE531: push    edi
0x7DE532: mov     [esp+34h+var_C], 4
0x7DE53A: call    sub_8011E0
0x7DE53F: mov     ecx, [esi+0FCh]
0x7DE545: jmp     short loc_7DE5B5
0x7DE547: mov     eax, [esi+0F8h]; jumptable 007DE45B case 6
0x7DE54D: mov     edx, [eax+24h]
0x7DE550: mov     edi, [edx]
0x7DE552: cmp     edi, ebp
0x7DE554: mov     [esp+2Ch+var_18], edi
0x7DE558: jz      short loc_7DE55E
0x7DE55A: add     dword ptr [edi+5Ch], 1
0x7DE55E: push    1
0x7DE560: push    edi
0x7DE561: mov     [esp+34h+var_C], 5
0x7DE569: call    sub_8011E0
0x7DE56E: mov     ecx, [esi+108h]; this
0x7DE574: add     esp, 8
0x7DE577: call    BSRenderedTexture__GetInnerTexture
0x7DE57C: push    eax; a2
0x7DE57D: mov     ecx, edi; this
0x7DE57F: call    sub_76C910
0x7DE584: push    1
0x7DE586: mov     ecx, edi
0x7DE588: call    sub_771640
0x7DE58D: mov     eax, [esi+0F8h]
0x7DE593: mov     eax, [eax+24h]
0x7DE596: mov     eax, [eax+4]
0x7DE599: push    eax
0x7DE59A: lea     ecx, [esp+30h+var_18]
0x7DE59E: call    sub_7AEC20
0x7DE5A3: mov     edi, [esp+2Ch+var_18]
0x7DE5A7: push    1
0x7DE5A9: push    edi
0x7DE5AA: call    sub_8011E0
0x7DE5AF: mov     ecx, [esi+104h]; this
0x7DE5B5: add     esp, 8
0x7DE5B8: call    BSRenderedTexture__GetInnerTexture
0x7DE5BD: push    eax; a2
0x7DE5BE: mov     ecx, edi; this
0x7DE5C0: call    sub_76C910
0x7DE5C5: cmp     edi, ebp
0x7DE5C7: mov     [esp+2Ch+var_C], ebx
0x7DE5CB: jz      short def_7DE45B
0x7DE5CD: add     [edi+5Ch], ebx
0x7DE5D0: jnz     short def_7DE45B
0x7DE5D2: mov     ecx, edi
0x7DE5D4: call    sub_772560
