0x4362F0: push    ebx
0x4362F1: push    ebp
0x4362F2: push    esi
0x4362F3: mov     ebx, 1
0x4362F8: test    byte ptr dword_B33A28, bl
0x4362FE: push    edi
0x4362FF: mov     esi, ecx
0x436301: jnz     short loc_436320
0x436303: or      dword_B33A28, ebx
0x436309: push    offset sub_A17C30; void (__cdecl *)()
0x43630E: mov     dword_B33A24, 0
0x436318: call    _atexit
0x43631D: add     esp, 4
0x436320: movzx   ecx, word ptr [esi+0Ah]
0x436324: mov     eax, [esp+10h+arg_0]
0x436328: cmp     eax, ecx
0x43632A: mov     ebp, [esp+10h+arg_4]
0x43632E: jb      short loc_436348
0x436330: lea     edx, [eax+1]
0x436333: mov     [esi+0Ah], dx
0x436337: mov     ecx, [ebp+0]
0x43633A: cmp     ecx, dword_B33A24
0x436340: jz      short loc_43636C
0x436342: add     [esi+0Ch], bx
0x436346: jmp     short loc_43636C
0x436348: mov     ecx, dword_B33A24
0x43634E: cmp     [ebp+0], ecx
0x436351: mov     edx, [esi+4]
0x436354: jz      short loc_436361
0x436356: cmp     [edx+eax*4], ecx
0x436359: jnz     short loc_43636C
0x43635B: add     [esi+0Ch], bx
0x43635F: jmp     short loc_43636C
0x436361: cmp     [edx+eax*4], ecx
0x436364: jz      short loc_43636C
0x436366: add     word ptr [esi+0Ch], 0FFFFh
0x43636C: mov     ecx, [esi+4]
0x43636F: mov     esi, [ecx+eax*4]
0x436372: cmp     esi, [ebp+0]
0x436375: lea     edi, [ecx+eax*4]
0x436378: jz      short loc_4363AC
0x43637A: test    esi, esi
0x43637C: jz      short loc_436399
0x43637E: lea     edx, [esi+8]
0x436381: push    edx; lpAddend
0x436382: call    ds:InterlockedDecrement
0x436388: test    eax, eax
0x43638A: jnz     short loc_436399
0x43638C: test    esi, esi
0x43638E: jz      short loc_436399
0x436390: mov     eax, [esi]
0x436392: mov     edx, [eax]
0x436394: push    ebx
0x436395: mov     ecx, esi
0x436397: call    edx
0x436399: mov     eax, [ebp+0]
0x43639C: test    eax, eax
0x43639E: mov     [edi], eax
0x4363A0: jz      short loc_4363AC
0x4363A2: add     eax, 8
0x4363A5: push    eax; lpAddend
0x4363A6: call    ds:InterlockedIncrement
0x4363AC: pop     edi
0x4363AD: pop     esi
0x4363AE: pop     ebp
0x4363AF: pop     ebx
0x4363B0: retn    8
