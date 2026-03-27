0x727DD0: push    esi
0x727DD1: push    edi
0x727DD2: mov     edi, [esp+8+arg_0]
0x727DD6: push    edi
0x727DD7: mov     esi, ecx
0x727DD9: call    sub_726C30
0x727DDE: mov     eax, [edi+21Ch]
0x727DE4: push    1
0x727DE6: lea     ecx, [esp+0Ch+arg_0]
0x727DEA: push    ecx
0x727DEB: push    4
0x727DED: lea     edx, [esi+2Ch]
0x727DF0: push    edx
0x727DF1: push    eax
0x727DF2: mov     eax, [eax+4]
0x727DF5: mov     [esp+1Ch+arg_0], 4
0x727DFD: call    eax
0x727DFF: mov     edi, [edi+21Ch]
0x727E05: mov     edx, [edi+4]
0x727E08: push    1
0x727E0A: lea     ecx, [esp+20h+arg_0]
0x727E0E: push    ecx
0x727E0F: push    4
0x727E11: add     esi, 30h ; '0'
0x727E14: push    esi
0x727E15: push    edi
0x727E16: mov     [esp+30h+arg_0], 4
0x727E1E: call    edx
0x727E20: add     esp, 28h
0x727E23: pop     edi
0x727E24: pop     esi
0x727E25: retn    4
