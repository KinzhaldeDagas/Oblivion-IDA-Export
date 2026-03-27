0x4E4A10: mov     edx, [esp+arg_0]
0x4E4A14: push    esi
0x4E4A15: mov     esi, ecx
0x4E4A17: movzx   eax, word ptr [esi+8]
0x4E4A1B: cmp     edx, eax
0x4E4A1D: jz      NiTArray_SetSize___Done
0x4E4A23: movzx   eax, word ptr [esi+0Ah]
0x4E4A27: movzx   ecx, ax
0x4E4A2A: cmp     edx, ecx
0x4E4A2C: push    ebx
0x4E4A2D: push    edi
0x4E4A2E: jnb     short loc_4E4A66
0x4E4A30: cmp     dx, ax
0x4E4A33: movzx   ecx, dx
0x4E4A36: jnb     short loc_4E4A62
0x4E4A38: mov     edi, 0FFFFh
0x4E4A3D: lea     ecx, [ecx+0]
0x4E4A40: mov     ebx, [esi+4]
0x4E4A43: movzx   eax, cx
0x4E4A46: cmp     dword ptr [ebx+eax*4], 0
0x4E4A4A: lea     eax, [ebx+eax*4]
0x4E4A4D: jz      short loc_4E4A59
0x4E4A4F: mov     dword ptr [eax], 0
0x4E4A55: add     [esi+0Ch], di
0x4E4A59: add     ecx, 1
0x4E4A5C: cmp     cx, [esi+0Ah]
0x4E4A60: jb      short loc_4E4A40
0x4E4A62: mov     [esi+0Ah], dx
0x4E4A66: test    edx, edx
0x4E4A68: mov     edi, [esi+4]
0x4E4A6B: mov     [esi+8], dx
0x4E4A6F: jbe     short loc_4E4AE5
0x4E4A71: movzx   eax, dx
0x4E4A74: xor     ecx, ecx
0x4E4A76: mov     edx, 4
0x4E4A7B: mul     edx
0x4E4A7D: seto    cl
0x4E4A80: neg     ecx
0x4E4A82: or      ecx, eax
0x4E4A84: push    ecx; Size
0x4E4A85: call    FormHeapAlloc
0x4E4A8A: xor     ecx, ecx
0x4E4A8C: add     esp, 4
0x4E4A8F: cmp     [esi+0Ah], cx
0x4E4A93: mov     [esi+4], eax
0x4E4A96: jbe     short loc_4E4AB1
0x4E4A98: mov     edx, [esi+4]
0x4E4A9B: movzx   eax, cx
0x4E4A9E: add     eax, eax
0x4E4AA0: add     eax, eax
0x4E4AA2: mov     ebx, [eax+edi]
0x4E4AA5: add     ecx, 1
0x4E4AA8: mov     [eax+edx], ebx
0x4E4AAB: cmp     cx, [esi+0Ah]
0x4E4AAF: jb      short loc_4E4A98
0x4E4AB1: movzx   eax, word ptr [esi+0Ah]
0x4E4AB5: cmp     ax, [esi+8]
0x4E4AB9: jnb     short loc_4E4AEC
0x4E4ABB: jmp     short loc_4E4AC0
0x4E4ABD: align 10h
0x4E4AC0: mov     edx, [esi+4]
0x4E4AC3: movzx   ecx, ax
0x4E4AC6: add     eax, 1
0x4E4AC9: mov     dword ptr [edx+ecx*4], 0
0x4E4AD0: cmp     ax, [esi+8]
0x4E4AD4: jb      short loc_4E4AC0
0x4E4AD6: push    edi
0x4E4AD7: call    FormHeapFree
0x4E4ADC: add     esp, 4
0x4E4ADF: pop     edi
0x4E4AE0: pop     ebx
0x4E4AE1: pop     esi
0x4E4AE2: retn    4
0x4E4AE5: mov     dword ptr [esi+4], 0
0x4E4AEC: push    edi
0x4E4AED: call    FormHeapFree
0x4E4AF2: add     esp, 4
0x4E4AF5: pop     edi
0x4E4AF6: pop     ebx
