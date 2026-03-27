0x7ABC40: push    ebx
0x7ABC41: push    ebp
0x7ABC42: mov     ebp, ecx
0x7ABC44: xor     ebx, ebx
0x7ABC46: cmp     [ebp+74h], ebx
0x7ABC49: jnz     loc_7ABCF9
0x7ABC4F: push    esi
0x7ABC50: push    edi
0x7ABC51: push    2Ch ; ','; Size
0x7ABC53: call    FormHeapAlloc
0x7ABC58: add     esp, 4
0x7ABC5B: cmp     eax, ebx
0x7ABC5D: jz      short loc_7ABC82
0x7ABC5F: mov     dword ptr [eax], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7ABC65: mov     [eax+4], ebx
0x7ABC68: mov     [eax+8], ebx
0x7ABC6B: mov     [eax+0Ch], ebx
0x7ABC6E: mov     dword ptr [eax+14h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ABC75: mov     [eax+18h], ebx
0x7ABC78: mov     [eax+1Ch], ebx
0x7ABC7B: mov     [eax+20h], ebx
0x7ABC7E: mov     esi, eax
0x7ABC80: jmp     short loc_7ABC84
0x7ABC82: xor     esi, esi
0x7ABC84: mov     ecx, esi
0x7ABC86: call    sub_7A9C30
0x7ABC8B: mov     eax, [esi+4]
0x7ABC8E: lea     edi, [esi+14h]
0x7ABC91: mov     ecx, edi
0x7ABC93: mov     [esi+0Ch], eax
0x7ABC96: mov     [esi+4], ebx
0x7ABC99: mov     [esi+8], ebx
0x7ABC9C: mov     [esi+10h], ebx
0x7ABC9F: call    sub_7A9C30
0x7ABCA4: mov     ecx, [edi+4]
0x7ABCA7: mov     [edi+0Ch], ecx
0x7ABCAA: mov     [edi+4], ebx
0x7ABCAD: mov     [edi+8], ebx
0x7ABCB0: mov     [edi+10h], ebx
0x7ABCB3: mov     edx, [ebp+64h]
0x7ABCB6: mov     eax, [edx+4]
0x7ABCB9: lea     edi, [ebp+64h]
0x7ABCBC: mov     ecx, edi
0x7ABCBE: call    eax
0x7ABCC0: mov     [eax+8], esi
0x7ABCC3: mov     [eax], ebx
0x7ABCC5: mov     ecx, [edi+8]
0x7ABCC8: mov     [eax+4], ecx
0x7ABCCB: mov     ecx, [edi+8]
0x7ABCCE: cmp     ecx, ebx
0x7ABCD0: jz      short loc_7ABCE5
0x7ABCD2: mov     [ecx], eax
0x7ABCD4: add     dword ptr [edi+0Ch], 1
0x7ABCD8: mov     [edi+8], eax
0x7ABCDB: pop     edi
0x7ABCDC: mov     [ebp+74h], esi
0x7ABCDF: mov     eax, esi
0x7ABCE1: pop     esi
0x7ABCE2: pop     ebp
0x7ABCE3: pop     ebx
0x7ABCE4: retn
0x7ABCE5: add     dword ptr [edi+0Ch], 1
0x7ABCE9: mov     [edi+4], eax
0x7ABCEC: mov     [edi+8], eax
0x7ABCEF: pop     edi
0x7ABCF0: mov     [ebp+74h], esi
0x7ABCF3: mov     eax, esi
0x7ABCF5: pop     esi
0x7ABCF6: pop     ebp
0x7ABCF7: pop     ebx
0x7ABCF8: retn
0x7ABCF9: mov     eax, [ebp+74h]
0x7ABCFC: pop     ebp
0x7ABCFD: pop     ebx
0x7ABCFE: retn
