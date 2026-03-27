0x54BEC0: mov     eax, [esp+arg_0]
0x54BEC4: cmp     eax, 0Dh
0x54BEC7: jge     short loc_54BEE0
0x54BEC9: mov     edx, [ecx+48h]
0x54BECC: add     ecx, 48h ; 'H'
0x54BECF: push    eax
0x54BED0: mov     eax, [edx+48h]
0x54BED3: call    eax
0x54BED5: fstp    [esp+arg_0]
0x54BED9: fld     [esp+arg_0]
0x54BEDD: retn    4
0x54BEE0: fldz
0x54BEE2: fstp    [esp+arg_0]
0x54BEE6: fld     [esp+arg_0]
0x54BEEA: retn    4
