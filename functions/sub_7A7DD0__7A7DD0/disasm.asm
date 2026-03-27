0x7A7DD0: push    esi
0x7A7DD1: push    edi
0x7A7DD2: mov     edi, [esp+8+arg_0]
0x7A7DD6: mov     esi, ecx
0x7A7DD8: cmp     edi, esi
0x7A7DDA: jz      short loc_7A7E40
0x7A7DDC: push    edi
0x7A7DDD: call    sub_78ED20
0x7A7DE2: movzx   eax, byte ptr [edi+10h]
0x7A7DE6: mov     [esi+10h], al
0x7A7DE9: mov     ecx, [edi+14h]
0x7A7DEC: mov     [esi+14h], ecx
0x7A7DEF: mov     dl, [edi+18h]
0x7A7DF2: mov     [esi+18h], dl
0x7A7DF5: mov     eax, [edi+1Ch]
0x7A7DF8: mov     [esi+1Ch], eax
0x7A7DFB: mov     ecx, [edi+20h]
0x7A7DFE: mov     [esi+20h], ecx
0x7A7E01: mov     edx, [edi+24h]
0x7A7E04: mov     [esi+24h], edx
0x7A7E07: movzx   eax, byte ptr [edi+40h]
0x7A7E0B: mov     [esi+40h], al
0x7A7E0E: fld     dword ptr [edi+44h]
0x7A7E11: fstp    dword ptr [esi+44h]
0x7A7E14: mov     ecx, [edi+48h]
0x7A7E17: mov     [esi+48h], ecx
0x7A7E1A: mov     edx, [edi+28h]
0x7A7E1D: mov     [esi+28h], edx
0x7A7E20: mov     eax, [edi+2Ch]
0x7A7E23: mov     [esi+2Ch], eax
0x7A7E26: mov     ecx, [edi+30h]
0x7A7E29: lea     eax, [edi+34h]
0x7A7E2C: mov     [esi+30h], ecx
0x7A7E2F: mov     edx, [eax]
0x7A7E31: mov     [esi+34h], edx
0x7A7E34: mov     ecx, [eax+4]
0x7A7E37: mov     [esi+38h], ecx
0x7A7E3A: mov     edx, [eax+8]
0x7A7E3D: mov     [esi+3Ch], edx
0x7A7E40: pop     edi
0x7A7E41: mov     eax, esi
0x7A7E43: pop     esi
0x7A7E44: retn    4
