0x46AED0: mov     edx, [esp+arg_4]
0x46AED4: push    esi
0x46AED5: mov     esi, [esp+4+arg_0]
0x46AED9: movzx   eax, word ptr [esi+4]
0x46AEDD: test    ax, ax
0x46AEE0: jnz     short loc_46AEE7
0x46AEE2: test    dx, dx
0x46AEE5: jz      short loc_46AEF9
0x46AEE7: push    edi
0x46AEE8: movzx   ecx, dx
0x46AEEB: movzx   edi, ax
0x46AEEE: add     edi, ecx
0x46AEF0: cmp     edi, 0FFFFh
0x46AEF6: pop     edi
0x46AEF7: jle     short loc_46AEFF
0x46AEF9: xor     al, al
0x46AEFB: pop     esi
0x46AEFC: retn    8
0x46AEFF: add     eax, edx
0x46AF01: mov     [esi+4], ax
0x46AF05: mov     eax, ds:0B33C18h
0x46AF0A: add     eax, ecx
0x46AF0C: push    eax; NewSize
0x46AF0D: mov     ds:0B33C18h, eax
0x46AF12: mov     eax, ds:0B33C14h
0x46AF17: push    eax; Src
0x46AF18: mov     ecx, offset FormHeap
0x46AF1D: call    MemoryHeap_Reallocate
0x46AF22: mov     ds:0B33C14h, eax
0x46AF27: mov     al, 1
0x46AF29: pop     esi
0x46AF2A: retn    8
