0x6C1FC0: fld1
0x6C1FC2: mov     ecx, [esp+arg_C]
0x6C1FC6: fcomp   [esp+arg_0]
0x6C1FCA: fnstsw  ax
0x6C1FCC: test    ah, 41h
0x6C1FCF: mov     eax, [esp+arg_4]
0x6C1FD3: jz      short loc_6C1FD9
0x6C1FD5: mov     eax, [esp+arg_8]
0x6C1FD9: mov     edx, [eax+4]
0x6C1FDC: mov     [ecx], edx
0x6C1FDE: mov     edx, [eax+8]
0x6C1FE1: mov     [ecx+4], edx
0x6C1FE4: mov     edx, [eax+0Ch]
0x6C1FE7: mov     [ecx+8], edx
0x6C1FEA: mov     eax, [eax+10h]
0x6C1FED: mov     [ecx+0Ch], eax
0x6C1FF0: retn
