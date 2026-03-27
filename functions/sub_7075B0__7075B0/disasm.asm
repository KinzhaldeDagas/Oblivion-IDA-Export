0x7075B0: fld     [esp+arg_0]
0x7075B4: push    esi
0x7075B5: mov     esi, ecx
0x7075B7: movzx   eax, byte ptr [esi+18h]
0x7075BB: shr     al, 3
0x7075BE: and     eax, 0FFFFFF01h
0x7075C3: push    eax; char
0x7075C4: push    ecx
0x7075C5: fstp    [esp+0Ch+var_C]; float
0x7075C8: call    sub_47C930
0x7075CD: mov     cl, [esi+18h]
0x7075D0: shr     cl, 2
0x7075D3: test    cl, 1
0x7075D6: jz      short loc_7075EA
0x7075D8: mov     edx, [esi]
0x7075DA: mov     eax, [edx+74h]
0x7075DD: mov     ecx, esi
0x7075DF: call    eax
0x7075E1: mov     edx, [esi]
0x7075E3: mov     eax, [edx+78h]
0x7075E6: mov     ecx, esi
0x7075E8: call    eax
0x7075EA: pop     esi
0x7075EB: retn    4
