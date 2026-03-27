0x47C930: cmp     [esp+arg_4], 0
0x47C935: push    esi
0x47C936: push    edi
0x47C937: mov     edi, ecx
0x47C939: jz      short loc_47C96A
0x47C93B: mov     esi, [edi+9Ch]
0x47C941: test    esi, esi
0x47C943: jz      short loc_47C96A
0x47C945: mov     ecx, [esi+8]
0x47C948: test    ecx, ecx
0x47C94A: lea     eax, [esi+8]
0x47C94D: mov     esi, [esi]
0x47C94F: jz      short loc_47C966
0x47C951: cmp     dword ptr [ecx+0Ch], 0
0x47C955: jz      short loc_47C966
0x47C957: mov     eax, [ecx]
0x47C959: fld     [esp+8+arg_0]
0x47C95D: mov     edx, [eax+50h]
0x47C960: push    ecx
0x47C961: fstp    [esp+0Ch+var_C]
0x47C964: call    edx
0x47C966: test    esi, esi
0x47C968: jnz     short loc_47C945
0x47C96A: mov     esi, [edi+0Ch]
0x47C96D: test    esi, esi
0x47C96F: jz      short loc_47C989
0x47C971: mov     eax, [esi]
0x47C973: fld     [esp+8+arg_0]
0x47C977: mov     edx, [eax+54h]
0x47C97A: push    ecx
0x47C97B: mov     ecx, esi
0x47C97D: fstp    [esp+0Ch+var_C]
0x47C980: call    edx
0x47C982: mov     esi, [esi+34h]
0x47C985: test    esi, esi
0x47C987: jnz     short loc_47C971
0x47C989: pop     edi
0x47C98A: pop     esi
0x47C98B: retn    8
