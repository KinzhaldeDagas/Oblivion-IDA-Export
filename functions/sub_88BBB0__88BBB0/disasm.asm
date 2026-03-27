0x88BBB0: mov     ecx, [esp+arg_4]
0x88BBB4: mov     eax, [ecx+8]
0x88BBB7: mov     eax, ds:0B2E300h[eax*4]
0x88BBBE: test    eax, eax
0x88BBC0: jz      short locret_88BBD1
0x88BBC2: push    eax
0x88BBC3: push    ecx
0x88BBC4: mov     ecx, [esp+8+arg_0]
0x88BBC8: push    ecx
0x88BBC9: call    sub_88A7D0
0x88BBCE: add     esp, 0Ch
0x88BBD1: retn
