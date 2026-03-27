0x646FA0: push    ecx
0x646FA1: fld     dword ptr ds:0A2FFE8h
0x646FA7: mov     eax, ecx
0x646FA9: mov     ecx, [eax+8]
0x646FAC: fst     [esp+4+var_4]
0x646FAF: test    ecx, ecx
0x646FB1: jz      short loc_647028
0x646FB3: mov     edx, [ecx+18h]
0x646FB6: fstp    st
0x646FB8: mov     eax, [eax+4]
0x646FBB: mov     edx, ds:0B152B0h[edx*4]
0x646FC2: mov     eax, [edx+eax*4]
0x646FC5: cmp     eax, 20h; switch 33 cases
0x646FC8: ja      short def_646FD1; jumptable 00646FD1 default case, cases 4,5,9-12,16-31
0x646FCA: movzx   eax, ds:byte_64703C[eax]
0x646FD1: jmp     ds:jpt_646FD1[eax*4]; switch jump
0x646FD8: cmp     dword ptr [ecx+24h], 0; jumptable 00646FD1 case 0
0x646FDC: jz      short def_646FD1; jumptable 00646FD1 default case, cases 4,5,9-12,16-31
0x646FDE: mov     edx, [esp+4+arg_0]
0x646FE2: push    1
0x646FE4: push    edx
0x646FE5: call    sub_5677B0
0x646FEA: fstp    [esp+4+var_4]
0x646FED: fld     [esp+4+var_4]
0x646FF0: pop     ecx
0x646FF1: retn    4
0x646FF4: cmp     dword ptr [ecx+28h], 0; jumptable 00646FD1 cases 1-3,8,14,15
0x646FF8: jz      short def_646FD1; jumptable 00646FD1 default case, cases 4,5,9-12,16-31
0x646FFA: mov     eax, [esp+4+arg_0]
0x646FFE: push    2
0x647000: push    eax
0x647001: call    sub_5677B0
0x647006: fstp    [esp+4+var_4]
0x647009: fld     [esp+4+var_4]
0x64700C: pop     ecx
0x64700D: retn    4
0x647010: cmp     dword ptr [ecx+28h], 0; jumptable 00646FD1 cases 6,7,13,32
0x647014: jz      short def_646FD1; jumptable 00646FD1 default case, cases 4,5,9-12,16-31
0x647016: mov     edx, [esp+4+arg_0]
0x64701A: push    2
0x64701C: push    edx
0x64701D: call    sub_5677B0
0x647022: fstp    [esp+4+var_4]
0x647025: fld     [esp+4+var_4]; jumptable 00646FD1 default case, cases 4,5,9-12,16-31
0x647028: pop     ecx
0x647029: retn    4
