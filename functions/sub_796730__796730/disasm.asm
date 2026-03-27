0x796730: push    ebx
0x796731: push    ebp
0x796732: mov     ebp, [esp+8+arg_4]
0x796736: test    ebp, ebp
0x796738: push    esi
0x796739: mov     esi, ecx
0x79673B: jz      short loc_796743
0x79673D: cmp     ebp, [esp+0Ch+arg_C]
0x796741: jz      short loc_796748
0x796743: call    __invalid_parameter_noinfo
0x796748: mov     ebx, [esp+0Ch+arg_8]
0x79674C: mov     eax, [esp+0Ch+arg_10]
0x796750: cmp     ebx, eax
0x796752: jz      short loc_796779
0x796754: mov     ecx, [esi+8]
0x796757: push    edi
0x796758: push    ebx
0x796759: push    ecx
0x79675A: push    eax
0x79675B: call    sub_795CA0
0x796760: mov     edx, [esp+1Ch+arg_0]
0x796764: push    edx
0x796765: mov     edi, eax
0x796767: mov     eax, [esi+8]
0x79676A: push    esi
0x79676B: push    eax
0x79676C: push    edi
0x79676D: call    sub_794FC0
0x796772: add     esp, 1Ch
0x796775: mov     [esi+8], edi
0x796778: pop     edi
0x796779: mov     eax, [esp+0Ch+arg_0]
0x79677D: pop     esi
0x79677E: mov     [eax], ebp
0x796780: pop     ebp
0x796781: mov     [eax+4], ebx
0x796784: pop     ebx
0x796785: retn    14h
