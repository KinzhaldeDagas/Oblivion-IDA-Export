0x6B6B90: push    ecx
0x6B6B91: push    esi
0x6B6B92: mov     esi, ecx
0x6B6B94: cmp     dword ptr [esi+50h], 0
0x6B6B98: mov     [esp+8+var_4], 0
0x6B6BA0: jz      short loc_6B6BB2
0x6B6BA2: mov     eax, [esi+50h]
0x6B6BA5: mov     ecx, [eax]
0x6B6BA7: lea     edx, [esp+8+var_4]
0x6B6BAB: push    edx
0x6B6BAC: push    eax
0x6B6BAD: mov     eax, [ecx+20h]
0x6B6BB0: call    eax
0x6B6BB2: mov     ecx, [esp+8+var_4]
0x6B6BB6: fild    [esp+8+var_4]
0x6B6BBA: test    ecx, ecx
0x6B6BBC: jge     short loc_6B6BC4
0x6B6BBE: fadd    dword ptr ds:0A2FC78h
0x6B6BC4: mov     edx, [esi+40h]
0x6B6BC7: fild    dword ptr [esi+40h]
0x6B6BCA: test    edx, edx
0x6B6BCC: jge     short loc_6B6BD4
0x6B6BCE: fadd    dword ptr ds:0A2FC78h
0x6B6BD4: fdivp   st(1), st
0x6B6BD6: pop     esi
0x6B6BD7: fstp    [esp+4+var_4]
0x6B6BDA: fld     [esp+4+var_4]
0x6B6BDD: pop     ecx
0x6B6BDE: retn
