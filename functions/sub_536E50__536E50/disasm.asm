0x536E50: push    ecx
0x536E51: push    ebp
0x536E52: push    esi
0x536E53: mov     esi, ecx
0x536E55: push    edi
0x536E56: mov     edi, [esi+18h]
0x536E59: xor     ebp, ebp
0x536E5B: cmp     edi, ebp
0x536E5D: mov     [esp+10h+var_4], esi
0x536E61: jz      short loc_536EA1
0x536E63: push    ebx
0x536E64: mov     eax, [edi+10h]
0x536E67: cmp     eax, ebp
0x536E69: mov     ebx, [edi+4]
0x536E6C: jz      short loc_536E8E
0x536E6E: mov     edi, edi
0x536E70: movzx   ecx, byte ptr [eax-1]
0x536E74: mov     esi, [eax+4]
0x536E77: sub     eax, ecx
0x536E79: push    eax; void *
0x536E7A: mov     ecx, offset FormHeap
0x536E7F: call    MemoryHeap_Free_checked
0x536E84: cmp     esi, ebp
0x536E86: mov     eax, esi
0x536E88: jnz     short loc_536E70
0x536E8A: mov     esi, [esp+14h+var_4]
0x536E8E: push    edi
0x536E8F: mov     [edi+10h], ebp
0x536E92: call    FormHeapFree
0x536E97: add     esp, 4
0x536E9A: cmp     ebx, ebp
0x536E9C: mov     edi, ebx
0x536E9E: jnz     short loc_536E64
0x536EA0: pop     ebx
0x536EA1: mov     eax, [esi+1Ch]
0x536EA4: cmp     eax, ebp
0x536EA6: mov     [esi+18h], ebp
0x536EA9: jz      short loc_536ECE
0x536EAB: jmp     short loc_536EB0
0x536EAD: align 10h
0x536EB0: mov     esi, [eax+4]
0x536EB3: push    eax
0x536EB4: call    FormHeapFree
0x536EB9: add     esp, 4
0x536EBC: cmp     esi, ebp
0x536EBE: mov     eax, esi
0x536EC0: jnz     short loc_536EB0
0x536EC2: mov     edx, [esp+10h+var_4]
0x536EC6: pop     edi
0x536EC7: pop     esi
0x536EC8: mov     [edx+1Ch], ebp
0x536ECB: pop     ebp
0x536ECC: pop     ecx
0x536ECD: retn
0x536ECE: pop     edi
0x536ECF: mov     [esi+1Ch], ebp
0x536ED2: pop     esi
0x536ED3: pop     ebp
0x536ED4: pop     ecx
0x536ED5: retn
