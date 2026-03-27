0x530BA0: push    ebx
0x530BA1: push    esi
0x530BA2: mov     esi, [esp+8+arg_0]
0x530BA6: xor     ebx, ebx
0x530BA8: cmp     esi, ebx
0x530BAA: push    edi
0x530BAB: mov     edi, ecx
0x530BAD: jz      short loc_530BF4
0x530BAF: cmp     [edi+30h], ebx
0x530BB2: jnz     short loc_530BE4
0x530BB4: push    10h; Size
0x530BB6: call    FormHeapAlloc
0x530BBB: add     esp, 4
0x530BBE: cmp     eax, ebx
0x530BC0: jz      short loc_530BDF
0x530BC2: mov     [eax], ebx
0x530BC4: mov     [eax+4], ebx
0x530BC7: push    esi
0x530BC8: mov     [eax+8], ebx
0x530BCB: mov     [eax+0Ch], ebx
0x530BCE: push    edi
0x530BCF: mov     ecx, eax
0x530BD1: mov     [edi+30h], eax
0x530BD4: call    sub_530A10
0x530BD9: pop     edi
0x530BDA: pop     esi
0x530BDB: pop     ebx
0x530BDC: retn    4
0x530BDF: xor     eax, eax
0x530BE1: mov     [edi+30h], eax
0x530BE4: mov     ecx, [edi+30h]
0x530BE7: push    esi
0x530BE8: push    edi
0x530BE9: call    sub_530A10
0x530BEE: pop     edi
0x530BEF: pop     esi
0x530BF0: pop     ebx
0x530BF1: retn    4
0x530BF4: mov     esi, [edi+30h]
0x530BF7: cmp     esi, ebx
0x530BF9: jz      short loc_530C0E
0x530BFB: mov     ecx, esi
0x530BFD: call    sub_530500
0x530C02: push    esi
0x530C03: call    FormHeapFree
0x530C08: add     esp, 4
0x530C0B: mov     [edi+30h], ebx
0x530C0E: push    10h; Size
0x530C10: call    FormHeapAlloc
0x530C15: add     esp, 4
0x530C18: cmp     eax, ebx
0x530C1A: jz      short loc_530C30
0x530C1C: mov     [eax], ebx
0x530C1E: mov     [eax+4], ebx
0x530C21: mov     [eax+8], ebx
0x530C24: mov     [eax+0Ch], ebx
0x530C27: mov     [edi+30h], eax
0x530C2A: pop     edi
0x530C2B: pop     esi
0x530C2C: pop     ebx
0x530C2D: retn    4
0x530C30: xor     eax, eax
0x530C32: mov     [edi+30h], eax
0x530C35: pop     edi
0x530C36: pop     esi
0x530C37: pop     ebx
0x530C38: retn    4
