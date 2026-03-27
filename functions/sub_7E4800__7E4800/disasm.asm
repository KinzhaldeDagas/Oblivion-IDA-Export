0x7E4800: sub     esp, 8
0x7E4803: push    esi
0x7E4804: mov     esi, ecx
0x7E4806: call    sub_7E2D60
0x7E480B: fld     dword ptr [esi+88h]
0x7E4811: test    eax, eax
0x7E4813: fadd    st, st
0x7E4815: fdiv    dword ptr [esi+84h]
0x7E481B: fstp    [esp+0Ch+var_8]
0x7E481F: fld     dword ptr [esi+84h]
0x7E4825: fsub    dword ptr [esi+88h]
0x7E482B: fdiv    dword ptr [esi+84h]
0x7E4831: fstp    [esp+0Ch+var_4]
0x7E4835: fld     [esp+0Ch+arg_0]
0x7E4839: fstp    dword ptr [esi+0F8h]
0x7E483F: jbe     loc_7E48CC
0x7E4845: push    ebx
0x7E4846: push    edi
0x7E4847: xor     edi, edi
0x7E4849: mov     ebx, eax
0x7E484B: jmp     short loc_7E4850
0x7E484D: align 10h
0x7E4850: mov     eax, [esi+6Ch]
0x7E4853: fld     dword ptr ds:0A32048h
0x7E4859: fldz
0x7E485B: fxch    st(1)
0x7E485D: fst     dword ptr [edi+eax]
0x7E4860: mov     ecx, [esi+6Ch]
0x7E4863: fst     dword ptr [ecx+edi+4]
0x7E4867: mov     edx, [esi+6Ch]
0x7E486A: fstp    dword ptr [edx+edi+8]
0x7E486E: mov     eax, [esi+6Ch]
0x7E4871: fld     dword ptr ds:0A91F98h
0x7E4877: fstp    dword ptr [eax+edi+0Ch]
0x7E487B: mov     ecx, [esi+6Ch]
0x7E487E: fst     dword ptr [ecx+edi+10h]
0x7E4882: mov     edx, [esi+6Ch]
0x7E4885: fst     dword ptr [edx+edi+14h]
0x7E4889: mov     eax, [esi+6Ch]
0x7E488C: fstp    dword ptr [eax+edi+18h]
0x7E4890: call    _rand
0x7E4895: mov     [esp+14h+arg_0], eax
0x7E4899: fild    [esp+14h+arg_0]
0x7E489D: mov     ecx, [esi+6Ch]
0x7E48A0: add     edi, 20h ; ' '
0x7E48A3: sub     ebx, 1
0x7E48A6: fdiv    qword ptr ds:0A3D5A8h
0x7E48AC: fstp    [esp+14h+arg_0]
0x7E48B0: fld     [esp+14h+arg_0]
0x7E48B4: fmul    [esp+14h+var_8]
0x7E48B8: fadd    [esp+14h+var_4]
0x7E48BC: fstp    [esp+14h+arg_0]
0x7E48C0: fld     [esp+14h+arg_0]
0x7E48C4: fstp    dword ptr [ecx+edi-4]
0x7E48C8: jnz     short loc_7E4850
0x7E48CA: pop     edi
0x7E48CB: pop     ebx
0x7E48CC: mov     dword ptr [esi+7Ch], 0
0x7E48D3: pop     esi
0x7E48D4: add     esp, 8
0x7E48D7: retn    4
