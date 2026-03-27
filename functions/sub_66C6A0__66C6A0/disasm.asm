0x66C6A0: push    esi
0x66C6A1: mov     esi, [esp+4+arg_0]
0x66C6A5: test    esi, esi
0x66C6A7: push    edi
0x66C6A8: mov     edi, ecx
0x66C6AA: jz      short loc_66C6E3
0x66C6AC: push    ebx
0x66C6AD: xor     bl, bl
0x66C6AF: nop
0x66C6B0: mov     eax, [esi]
0x66C6B2: test    eax, eax
0x66C6B4: jz      short loc_66C6CF
0x66C6B6: push    1; a7
0x66C6B8: push    0; a6
0x66C6BA: push    eax; a5
0x66C6BB: mov     ecx, edi; a1
0x66C6BD: call    sub_669690
0x66C6C2: test    al, al
0x66C6C4: jz      short loc_66C6C8
0x66C6C6: mov     bl, 1
0x66C6C8: mov     esi, [esi+4]
0x66C6CB: test    esi, esi
0x66C6CD: jnz     short loc_66C6B0
0x66C6CF: test    bl, bl
0x66C6D1: pop     ebx
0x66C6D2: jz      short loc_66C6E3
0x66C6D4: add     edi, 5E4h
0x66C6DA: push    edi
0x66C6DB: call    sub_52F6D0
0x66C6E0: add     esp, 4
0x66C6E3: pop     edi
0x66C6E4: pop     esi
0x66C6E5: retn    4
