0x6E62A0: push    esi
0x6E62A1: push    edi
0x6E62A2: mov     edi, [esp+8+arg_0]
0x6E62A6: push    edi
0x6E62A7: mov     esi, ecx
0x6E62A9: call    sub_6E5740
0x6E62AE: mov     eax, [edi+21Ch]
0x6E62B4: mov     edx, [eax+4]
0x6E62B7: push    1
0x6E62B9: lea     ecx, [esp+0Ch+arg_0]
0x6E62BD: push    ecx
0x6E62BE: push    8
0x6E62C0: add     esi, 24h ; '$'
0x6E62C3: push    esi
0x6E62C4: push    eax
0x6E62C5: mov     [esp+1Ch+arg_0], 4
0x6E62CD: call    edx
0x6E62CF: add     esp, 14h
0x6E62D2: pop     edi
0x6E62D3: pop     esi
0x6E62D4: retn    4
