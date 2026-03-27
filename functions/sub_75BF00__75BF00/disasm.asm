0x75BF00: push    ecx
0x75BF01: push    esi
0x75BF02: push    edi
0x75BF03: mov     edi, [esp+0Ch+arg_0]
0x75BF07: push    edi
0x75BF08: mov     esi, ecx
0x75BF0A: call    sub_752DC0
0x75BF0F: mov     eax, [edi+21Ch]
0x75BF15: push    1
0x75BF17: lea     ecx, [esp+10h+var_4]
0x75BF1B: push    ecx
0x75BF1C: push    1
0x75BF1E: lea     edx, [esp+18h+arg_0]
0x75BF22: push    edx
0x75BF23: push    eax
0x75BF24: mov     eax, [eax+4]
0x75BF27: mov     [esp+20h+var_4], 1
0x75BF2F: call    eax
0x75BF31: add     esp, 14h
0x75BF34: cmp     byte ptr [esp+0Ch+arg_0], 0
0x75BF39: setnz   cl
0x75BF3C: mov     [esi+18h], cl
0x75BF3F: mov     ecx, edi
0x75BF41: call    sub_712A20
0x75BF46: pop     edi
0x75BF47: pop     esi
0x75BF48: pop     ecx
0x75BF49: retn    4
