0x746110: sub     esp, 0Ch
0x746113: push    ebx
0x746114: push    ebp
0x746115: mov     ebp, [esp+14h+arg_0]
0x746119: push    esi
0x74611A: push    edi
0x74611B: movzx   edi, word ptr [eax+2]
0x74611F: xor     edx, edx
0x746121: test    edi, edi
0x746123: mov     ebx, ecx
0x746125: mov     [esp+1Ch+var_8], 0FFFFFFFFh
0x74612D: mov     ecx, 7
0x746132: mov     esi, 4
0x746137: jnz     short loc_746143
0x746139: mov     ecx, 8Ah ; 'Š'
0x74613E: mov     esi, 3
0x746143: test    ebx, ebx
0x746145: mov     word ptr [eax+ebx*4+6], 0FFFFh
0x74614C: jl      loc_7461F5
0x746152: add     eax, 6
0x746155: add     ebx, 1
0x746158: mov     [esp+1Ch+var_4], ebx
0x74615C: mov     [esp+1Ch+var_C], eax
0x746160: mov     ebx, 1
0x746165: mov     eax, edi
0x746167: mov     edi, [esp+1Ch+var_C]
0x74616B: movzx   edi, word ptr [edi]
0x74616E: add     edx, ebx
0x746170: cmp     edx, ecx
0x746172: jge     short loc_746178
0x746174: cmp     eax, edi
0x746176: jz      short loc_7461E6
0x746178: cmp     edx, esi
0x74617A: jge     short loc_746186
0x74617C: add     [ebp+eax*4+0A74h], dx
0x746184: jmp     short loc_7461B6
0x746186: test    eax, eax
0x746188: jz      short loc_7461A1
0x74618A: cmp     eax, [esp+1Ch+var_8]
0x74618E: jz      short loc_746198
0x746190: add     [ebp+eax*4+0A74h], bx
0x746198: add     [ebp+0AB4h], bx
0x74619F: jmp     short loc_7461B6
0x7461A1: cmp     edx, 0Ah
0x7461A4: jg      short loc_7461AF
0x7461A6: add     [ebp+0AB8h], bx
0x7461AD: jmp     short loc_7461B6
0x7461AF: add     [ebp+0ABCh], bx
0x7461B6: xor     edx, edx
0x7461B8: test    edi, edi
0x7461BA: mov     [esp+1Ch+var_8], eax
0x7461BE: jnz     short loc_7461CC
0x7461C0: mov     ecx, 8Ah ; 'Š'
0x7461C5: mov     esi, 3
0x7461CA: jmp     short loc_7461E6
0x7461CC: cmp     eax, edi
0x7461CE: jnz     short loc_7461DC
0x7461D0: mov     ecx, 6
0x7461D5: mov     esi, 3
0x7461DA: jmp     short loc_7461E6
0x7461DC: mov     ecx, 7
0x7461E1: mov     esi, 4
0x7461E6: add     [esp+1Ch+var_C], 4
0x7461EB: sub     [esp+1Ch+var_4], ebx
0x7461EF: jnz     loc_746165
0x7461F5: pop     edi
0x7461F6: pop     esi
0x7461F7: pop     ebp
0x7461F8: pop     ebx
0x7461F9: add     esp, 0Ch
0x7461FC: retn
