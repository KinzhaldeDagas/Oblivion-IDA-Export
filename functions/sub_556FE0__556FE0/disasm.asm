0x556FE0: mov     eax, [esp+arg_0]
0x556FE4: push    esi
0x556FE5: mov     esi, ecx
0x556FE7: xor     ecx, ecx
0x556FE9: cmp     eax, ecx
0x556FEB: mov     [esi+4], ecx
0x556FEE: mov     [esi+8], ecx
0x556FF1: mov     [esi+0Ch], ecx
0x556FF4: jnz     short loc_556FFC
0x556FF6: xor     al, al
0x556FF8: pop     esi
0x556FF9: retn    4
0x556FFC: cmp     eax, 0FFFFFFFFh
0x556FFF: jbe     short loc_557006
0x557001: call    sub_790B90
0x557006: push    edi
0x557007: lea     edi, [eax+eax*2]
0x55700A: add     edi, edi
0x55700C: add     edi, edi
0x55700E: push    edi; Size
0x55700F: call    FormHeapAlloc
0x557014: add     edi, eax
0x557016: add     esp, 4
0x557019: mov     [esi+0Ch], edi
0x55701C: mov     [esi+4], eax
0x55701F: mov     [esi+8], eax
0x557022: pop     edi
0x557023: mov     al, 1
0x557025: pop     esi
0x557026: retn    4
