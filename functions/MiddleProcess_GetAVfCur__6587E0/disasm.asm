0x6587E0: sub     esp, 8
0x6587E3: push    esi
0x6587E4: push    edi
0x6587E5: mov     edi, [esp+10h+arg_4]
0x6587E9: mov     esi, ecx
0x6587EB: push    edi
0x6587EC: lea     ecx, [esi+94h]
0x6587F2: call    AVCollection_GetAV
0x6587F7: fstp    [esp+10h+var_8]
0x6587FB: mov     eax, [esp+10h+arg_8]
0x6587FF: mov     ecx, [esp+10h+arg_0]
0x658803: push    eax
0x658804: push    edi
0x658805: push    ecx
0x658806: mov     ecx, esi
0x658808: call    LowProcess_GetAVfCur
0x65880D: fadd    [esp+10h+var_8]
0x658811: pop     edi
0x658812: pop     esi
0x658813: fstp    [esp+8+arg_4]
0x658817: fld     [esp+8+arg_4]
0x65881B: add     esp, 8
0x65881E: retn    0Ch
