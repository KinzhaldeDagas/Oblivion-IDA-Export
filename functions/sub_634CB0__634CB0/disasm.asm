0x634CB0: push    edi
0x634CB1: mov     edi, ecx
0x634CB3: mov     ecx, [esp+4+arg_0]
0x634CB7: mov     dword ptr [edi+1ECh], 0
0x634CC1: mov     eax, [ecx+3Ch]
0x634CC4: test    eax, eax
0x634CC6: jz      short loc_634D07
0x634CC8: push    offset aBip01; "Bip01"
0x634CCD: push    eax
0x634CCE: call    sub_4D96F0
0x634CD3: test    eax, eax
0x634CD5: jz      short loc_634D07
0x634CD7: push    esi
0x634CD8: mov     esi, [eax+0Ch]
0x634CDB: test    esi, esi
0x634CDD: jz      short loc_634D06
0x634CDF: mov     eax, [esi]
0x634CE1: mov     edx, [eax+4]
0x634CE4: mov     ecx, esi
0x634CE6: call    edx
0x634CE8: cmp     eax, offset dword_B3F52C
0x634CED: setz    al
0x634CF0: test    al, al
0x634CF2: jnz     short loc_634D00
0x634CF4: mov     esi, [esi+34h]
0x634CF7: test    esi, esi
0x634CF9: jnz     short loc_634CDF
0x634CFB: pop     esi
0x634CFC: pop     edi
0x634CFD: retn    4
0x634D00: mov     [edi+1ECh], esi
0x634D06: pop     esi
0x634D07: pop     edi
0x634D08: retn    4
