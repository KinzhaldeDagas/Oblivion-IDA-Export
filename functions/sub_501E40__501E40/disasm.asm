0x501E40: push    ecx
0x501E41: mov     ecx, [esp+4+l]
0x501E45: fldz
0x501E47: mov     edx, [esp+4+arg_10]
0x501E4B: fstp    dword ptr [esp+4+var_4]
0x501E4E: push    esi
0x501E4F: mov     esi, [esp+8+a4]
0x501E53: lea     eax, [esp+8+var_4]
0x501E57: push    eax; UInt16
0x501E58: mov     eax, [esp+0Ch+arg_C]
0x501E5C: push    ecx; l
0x501E5D: mov     ecx, [esp+10h+a3]
0x501E61: push    edx; a6
0x501E62: mov     edx, [esp+14h+arg_4]
0x501E66: push    eax; a5
0x501E67: mov     eax, [esp+18h+a1]
0x501E6B: push    esi; a4
0x501E6C: push    ecx; a3
0x501E6D: push    edx; a2
0x501E6E: push    eax; a1
0x501E6F: call    Script_ExtractArgs
0x501E74: add     esp, 20h
0x501E77: test    al, al
0x501E79: jnz     short loc_501E7E
0x501E7B: pop     esi
0x501E7C: pop     ecx
0x501E7D: retn
0x501E7E: test    esi, esi
0x501E80: jz      short loc_501EE3
0x501E82: mov     edx, [esi]
0x501E84: mov     eax, [edx+0ECh]
0x501E8A: mov     ecx, esi
0x501E8C: call    eax
0x501E8E: fadd    dword ptr [esp+4]
0x501E92: fstp    dword ptr [esp+4]
0x501E96: fld     dword ptr ds:0A379B4h
0x501E9C: fld     dword ptr [esp+4]
0x501EA0: fcom    st(1)
0x501EA2: fnstsw  ax
0x501EA4: test    ah, 41h
0x501EA7: jnz     short loc_501EB1
0x501EA9: fstp    st
0x501EAB: fstp    dword ptr [esp+4]
0x501EAF: jmp     short loc_501EC6
0x501EB1: fstp    st(1)
0x501EB3: fld     dword ptr ds:0A3D65Ch
0x501EB9: fcom    st(1)
0x501EBB: fnstsw  ax
0x501EBD: fstp    st(1)
0x501EBF: test    ah, 41h
0x501EC2: jz      short loc_501EAB
0x501EC4: fstp    st
0x501EC6: fld     dword ptr [esp+4]
0x501ECA: push    ecx
0x501ECB: mov     ecx, esi
0x501ECD: fstp    [esp+8+var_8]; float
0x501ED0: call    sub_4DB520
0x501ED5: mov     edx, [esi]
0x501ED7: mov     eax, [edx+90h]
0x501EDD: push    1
0x501EDF: mov     ecx, esi
0x501EE1: call    eax
0x501EE3: mov     al, 1
0x501EE5: pop     esi
0x501EE6: pop     ecx
0x501EE7: retn
