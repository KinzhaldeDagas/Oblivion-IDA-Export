0x5337E0: push    edi
0x5337E1: mov     edi, ecx
0x5337E3: mov     ecx, [edi+1A0h]
0x5337E9: test    ecx, ecx
0x5337EB: jz      short loc_533821
0x5337ED: mov     eax, [ecx]
0x5337EF: mov     edx, [eax+5Ch]
0x5337F2: push    esi
0x5337F3: mov     esi, [esp+8+arg_0]
0x5337F7: push    esi
0x5337F8: call    edx
0x5337FA: test    esi, esi
0x5337FC: jz      short loc_533820
0x5337FE: mov     edi, [edi+1A0h]
0x533804: push    19h
0x533806: push    10h
0x533808: push    10h
0x53380A: push    0FFh
0x53380F: call    sub_8AEB80
0x533814: add     esp, 10h
0x533817: push    eax
0x533818: push    edi
0x533819: mov     ecx, esi
0x53381B: call    sub_88BB60
0x533820: pop     esi
0x533821: pop     edi
0x533822: retn    4
