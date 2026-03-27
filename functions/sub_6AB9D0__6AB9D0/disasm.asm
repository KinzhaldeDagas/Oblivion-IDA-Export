0x6AB9D0: push    ecx
0x6AB9D1: cmp     byte ptr ds:0B16178h, 0
0x6AB9D8: jz      short loc_6ABA0B
0x6AB9DA: mov     edx, [esp+4+arg_0]
0x6AB9DE: mov     ecx, [ecx+300h]
0x6AB9E4: lea     eax, [esp+4+var_4]
0x6AB9E7: push    eax
0x6AB9E8: push    edx
0x6AB9E9: mov     [esp+0Ch+var_4], 0
0x6AB9F1: call    NiTMap_GetAt
0x6AB9F6: mov     ecx, [esp+4+var_4]
0x6AB9F9: test    ecx, ecx
0x6AB9FB: jz      short loc_6ABA0B
0x6AB9FD: call    sub_6B6AF0
0x6ABA02: test    al, al
0x6ABA04: setnz   al
0x6ABA07: pop     ecx
0x6ABA08: retn    4
0x6ABA0B: xor     al, al
0x6ABA0D: pop     ecx
0x6ABA0E: retn    4
