0x7492E0: push    esi
0x7492E1: mov     esi, ecx
0x7492E3: mov     al, [esi+18h]
0x7492E6: shr     al, 2
0x7492E9: test    al, 1
0x7492EB: jz      short loc_7492F4
0x7492ED: mov     edx, [esi]
0x7492EF: mov     eax, [edx+74h]
0x7492F2: call    eax
0x7492F4: fld     [esp+4+arg_0]
0x7492F8: push    ecx
0x7492F9: mov     ecx, esi
0x7492FB: fstp    [esp+8+var_8]; float
0x7492FE: call    sub_7075B0
0x749303: pop     esi
0x749304: retn    4
