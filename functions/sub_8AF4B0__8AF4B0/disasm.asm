0x8AF4B0: push    ecx
0x8AF4B1: push    esi
0x8AF4B2: mov     esi, ecx
0x8AF4B4: mov     eax, [esi]
0x8AF4B6: mov     edx, [eax+74h]
0x8AF4B9: lea     ecx, [esp+8+var_1]
0x8AF4BD: push    ecx
0x8AF4BE: mov     ecx, esi
0x8AF4C0: call    edx
0x8AF4C2: test    eax, eax
0x8AF4C4: mov     ecx, [esp+8+arg_4]
0x8AF4C8: jz      short loc_8AF4D3
0x8AF4CA: fld     dword ptr [ecx+10h]
0x8AF4CD: fmul    dword ptr [eax+4]
0x8AF4D0: fstp    dword ptr [eax+4]
0x8AF4D3: mov     eax, [esp+8+arg_0]
0x8AF4D7: push    ecx
0x8AF4D8: push    eax
0x8AF4D9: mov     ecx, esi
0x8AF4DB: call    sub_8A2670
0x8AF4E0: pop     esi
0x8AF4E1: pop     ecx
0x8AF4E2: retn    8
