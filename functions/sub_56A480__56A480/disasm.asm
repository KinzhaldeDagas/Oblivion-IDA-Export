0x56A480: push    esi
0x56A481: mov     esi, ecx
0x56A483: test    esi, esi
0x56A485: jz      short loc_56A4AB
0x56A487: push    edi
0x56A488: mov     edi, [esp+8+arg_0]
0x56A48C: lea     esp, [esp+0]
0x56A490: cmp     dword ptr [esi+4], 0
0x56A494: jnz     short loc_56A49B
0x56A496: cmp     dword ptr [esi], 0
0x56A499: jz      short loc_56A4AA
0x56A49B: mov     ecx, [esi]
0x56A49D: push    edi
0x56A49E: call    sub_56AE20
0x56A4A3: mov     esi, [esi+4]
0x56A4A6: test    esi, esi
0x56A4A8: jnz     short loc_56A490
0x56A4AA: pop     edi
0x56A4AB: pop     esi
0x56A4AC: retn    4
