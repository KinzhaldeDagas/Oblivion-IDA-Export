0x43A8F0: push    esi
0x43A8F1: mov     esi, [esp+4+arg_4]
0x43A8F5: test    esi, esi
0x43A8F7: push    edi
0x43A8F8: mov     edi, ecx
0x43A8FA: jz      short loc_43A931
0x43A8FC: push    offset dword_A7D0EC
0x43A901: mov     ecx, esi
0x43A903: call    NiObjectNET_GetExtraData
0x43A908: test    eax, eax
0x43A90A: jz      short loc_43A931
0x43A90C: mov     ecx, [esp+8+arg_0]
0x43A910: test    ecx, ecx
0x43A912: jz      short loc_43A931
0x43A914: mov     eax, [eax+0Ch]
0x43A917: shr     eax, 4
0x43A91A: test    al, 1
0x43A91C: jz      short loc_43A931
0x43A91E: mov     ecx, [ecx+8]
0x43A921: shr     ecx, 7
0x43A924: test    cl, 1
0x43A927: jnz     short loc_43A931
0x43A929: push    esi
0x43A92A: mov     ecx, edi
0x43A92C: call    sub_43A100
0x43A931: pop     edi
0x43A932: pop     esi
0x43A933: retn    8
