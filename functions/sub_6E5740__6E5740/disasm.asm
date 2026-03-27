0x6E5740: push    esi
0x6E5741: push    edi
0x6E5742: mov     edi, [esp+8+arg_0]
0x6E5746: push    edi
0x6E5747: mov     esi, ecx
0x6E5749: call    sub_6ED420
0x6E574E: mov     eax, [edi+21Ch]
0x6E5754: push    1
0x6E5756: lea     ecx, [esp+0Ch+arg_0]
0x6E575A: push    ecx
0x6E575B: push    4
0x6E575D: lea     edx, [esi+1Ch]
0x6E5760: push    edx
0x6E5761: push    eax
0x6E5762: mov     eax, [eax+4]
0x6E5765: mov     [esp+1Ch+arg_0], 4
0x6E576D: call    eax
0x6E576F: mov     edi, [edi+21Ch]
0x6E5775: mov     edx, [edi+4]
0x6E5778: push    1
0x6E577A: lea     ecx, [esp+20h+arg_0]
0x6E577E: push    ecx
0x6E577F: push    4
0x6E5781: add     esi, 20h ; ' '
0x6E5784: push    esi
0x6E5785: push    edi
0x6E5786: mov     [esp+30h+arg_0], 4
0x6E578E: call    edx
0x6E5790: add     esp, 28h
0x6E5793: pop     edi
0x6E5794: pop     esi
0x6E5795: retn    4
