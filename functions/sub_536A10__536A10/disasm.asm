0x536A10: mov     edx, [esp+arg_0]
0x536A14: test    edx, edx
0x536A16: jz      short locret_536A5E
0x536A18: push    edi
0x536A19: mov     edi, [ecx+10h]
0x536A1C: cmp     edx, edi
0x536A1E: jnz     short loc_536A25
0x536A20: mov     edi, [edx+4]
0x536A23: jmp     short loc_536A46
0x536A25: test    edi, edi
0x536A27: push    esi
0x536A28: mov     esi, edi
0x536A2A: jz      short loc_536A45
0x536A2C: lea     esp, [esp+0]
0x536A30: mov     eax, [esi+4]
0x536A33: cmp     edx, eax
0x536A35: jz      short loc_536A3F
0x536A37: test    eax, eax
0x536A39: mov     esi, eax
0x536A3B: jnz     short loc_536A30
0x536A3D: jmp     short loc_536A45
0x536A3F: mov     eax, [eax+4]
0x536A42: mov     [esi+4], eax
0x536A45: pop     esi
0x536A46: mov     [ecx+10h], edi
0x536A49: movzx   ecx, byte ptr [edx-1]
0x536A4D: sub     edx, ecx
0x536A4F: pop     edi
0x536A50: mov     [esp+arg_0], edx; void *
0x536A54: mov     ecx, offset FormHeap
0x536A59: jmp     MemoryHeap_Free_checked
0x536A5E: retn    4
