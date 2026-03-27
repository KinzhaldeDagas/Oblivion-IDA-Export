0x6EB540: push    esi
0x6EB541: push    edi
0x6EB542: mov     edi, [esp+8+arg_0]
0x6EB546: push    edi
0x6EB547: mov     esi, ecx
0x6EB549: call    sub_6CCD10
0x6EB54E: test    al, al
0x6EB550: jnz     short loc_6EB557
0x6EB552: pop     edi
0x6EB553: pop     esi
0x6EB554: retn    4
0x6EB557: mov     al, [esi+30h]
0x6EB55A: cmp     al, [edi+30h]
0x6EB55D: pop     edi
0x6EB55E: setz    al
0x6EB561: pop     esi
0x6EB562: retn    4
