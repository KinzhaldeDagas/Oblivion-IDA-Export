0x67B430: push    esi
0x67B431: mov     esi, ecx
0x67B433: test    esi, esi
0x67B435: jz      loc_67B514
0x67B43B: push    edi
0x67B43C: xor     edi, edi
0x67B43E: mov     eax, esi
0x67B440: cmp     dword ptr [eax], 0
0x67B443: jz      short loc_67B448
0x67B445: add     edi, 1
0x67B448: mov     eax, [eax+4]
0x67B44B: test    eax, eax
0x67B44D: jnz     short loc_67B440
0x67B44F: test    edi, edi
0x67B451: jz      loc_67B513
0x67B457: xor     ecx, ecx
0x67B459: mov     eax, edi
0x67B45B: mov     edx, 4
0x67B460: mul     edx
0x67B462: seto    cl
0x67B465: push    ebp
0x67B466: neg     ecx
0x67B468: or      ecx, eax
0x67B46A: push    ecx; Size
0x67B46B: call    FormHeapAlloc
0x67B470: mov     ebp, eax
0x67B472: add     esp, 4
0x67B475: mov     eax, esi
0x67B477: mov     ecx, ebp
0x67B479: lea     esp, [esp+0]
0x67B480: cmp     dword ptr [eax+4], 0
0x67B484: jnz     short loc_67B48B
0x67B486: cmp     dword ptr [eax], 0
0x67B489: jz      short loc_67B499
0x67B48B: mov     edx, [eax]
0x67B48D: mov     [ecx], edx
0x67B48F: mov     eax, [eax+4]
0x67B492: add     ecx, 4
0x67B495: test    eax, eax
0x67B497: jnz     short loc_67B480
0x67B499: mov     ecx, esi
0x67B49B: call    BSSimpleList_Clear
0x67B4A0: add     edi, 0FFFFFFFFh
0x67B4A3: push    edi
0x67B4A4: push    0
0x67B4A6: push    ebp
0x67B4A7: call    sub_67B110
0x67B4AC: add     esp, 0Ch
0x67B4AF: test    edi, edi
0x67B4B1: jl      short loc_67B4EF
0x67B4B3: push    ebx
0x67B4B4: mov     ebx, [ebp+edi*4+0]
0x67B4B8: test    ebx, ebx
0x67B4BA: jz      short loc_67B4E9
0x67B4BC: cmp     dword ptr [esi], 0
0x67B4BF: jz      short loc_67B4E7
0x67B4C1: push    8; Size
0x67B4C3: call    FormHeapAlloc
0x67B4C8: add     esp, 4
0x67B4CB: test    eax, eax
0x67B4CD: jz      short loc_67B4DC
0x67B4CF: mov     ecx, [esi]
0x67B4D1: mov     [eax], ecx
0x67B4D3: mov     dword ptr [eax+4], 0
0x67B4DA: jmp     short loc_67B4DE
0x67B4DC: xor     eax, eax
0x67B4DE: mov     edx, [esi+4]
0x67B4E1: mov     [eax+4], edx
0x67B4E4: mov     [esi+4], eax
0x67B4E7: mov     [esi], ebx
0x67B4E9: sub     edi, 1
0x67B4EC: jns     short loc_67B4B4
0x67B4EE: pop     ebx
0x67B4EF: push    ebp
0x67B4F0: call    FormHeapFree
0x67B4F5: add     esp, 4
0x67B4F8: mov     [esi+8], esi
0x67B4FB: cmp     dword ptr [esi+4], 0
0x67B4FF: pop     ebp
0x67B500: jz      short loc_67B513
0x67B502: mov     eax, [esi+8]
0x67B505: mov     ecx, [eax+4]
0x67B508: mov     edx, ecx
0x67B50A: mov     [esi+8], ecx
0x67B50D: cmp     dword ptr [edx+4], 0
0x67B511: jnz     short loc_67B502
0x67B513: pop     edi
0x67B514: pop     esi
0x67B515: retn
