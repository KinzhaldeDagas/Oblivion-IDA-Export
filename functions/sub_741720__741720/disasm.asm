0x741720: push    esi
0x741721: push    edi
0x741722: mov     edi, [esp+8+arg_0]
0x741726: push    edi
0x741727: mov     esi, ecx
0x741729: call    sub_70AD70
0x74172E: test    al, al
0x741730: jnz     short loc_741737
0x741732: pop     edi
0x741733: pop     esi
0x741734: retn    4
0x741737: add     edi, 0DCh ; 'Ü'
0x74173D: push    edi
0x74173E: lea     ecx, [esi+0DCh]
0x741744: call    sub_632310
0x741749: test    al, al
0x74174B: pop     edi
0x74174C: setz    al
0x74174F: pop     esi
0x741750: retn    4
