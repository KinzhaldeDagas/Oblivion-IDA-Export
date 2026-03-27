0x741E60: push    ecx
0x741E61: push    esi
0x741E62: push    edi
0x741E63: mov     edi, [esp+0Ch+Size]
0x741E67: push    edi; Size
0x741E68: mov     esi, ecx
0x741E6A: call    sub_721610
0x741E6F: mov     eax, [edi+21Ch]
0x741E75: push    1
0x741E77: lea     ecx, [esp+10h+var_4]
0x741E7B: push    ecx
0x741E7C: push    1
0x741E7E: lea     edx, [esp+18h+Size]
0x741E82: push    edx
0x741E83: push    eax
0x741E84: mov     eax, [eax+4]
0x741E87: mov     [esp+20h+var_4], 1
0x741E8F: call    eax
0x741E91: add     esp, 14h
0x741E94: cmp     byte ptr [esp+0Ch+Size], 0
0x741E99: pop     edi
0x741E9A: setnz   cl
0x741E9D: mov     [esi+0Ch], cl
0x741EA0: pop     esi
0x741EA1: pop     ecx
0x741EA2: retn    4
