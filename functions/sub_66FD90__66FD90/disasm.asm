0x66FD90: sub     esp, 18h
0x66FD93: push    ebx
0x66FD94: push    esi
0x66FD95: push    edi
0x66FD96: mov     ebx, ecx
0x66FD98: call    sub_579870
0x66FD9D: mov     esi, [esp+24h+arg_4]
0x66FDA1: test    esi, esi
0x66FDA3: mov     edi, dword ptr [esp+24h+ArgList]
0x66FDA7: jnz     short loc_66FDB7
0x66FDA9: mov     ecx, ds:0B33A98h
0x66FDAF: push    edi
0x66FDB0: call    sub_4476B0
0x66FDB5: mov     esi, eax
0x66FDB7: mov     ecx, ds:0B35B90h
0x66FDBD: test    ecx, ecx
0x66FDBF: jz      short loc_66FDC6
0x66FDC1: call    sub_4BE5A0
0x66FDC6: mov     ecx, ds:0B35B8Ch
0x66FDCC: test    ecx, ecx
0x66FDCE: jz      short loc_66FDD5
0x66FDD0: call    sub_4BD980
0x66FDD5: test    esi, esi
0x66FDD7: jnz     short loc_66FE14
0x66FDD9: lea     eax, [esp+24h+arg_4]
0x66FDDD: push    eax
0x66FDDE: lea     ecx, [esp+28h+ArgList]
0x66FDE2: push    ecx
0x66FDE3: mov     ecx, ds:0B33A98h
0x66FDE9: push    edi
0x66FDEA: mov     dword ptr [esp+30h+ArgList], esi
0x66FDEE: mov     [esp+30h+arg_4], esi
0x66FDF2: call    sub_4478B0
0x66FDF7: test    eax, eax
0x66FDF9: jz      loc_66FEFF
0x66FDFF: mov     edx, [esp+24h+arg_4]
0x66FE03: mov     ecx, dword ptr [esp+24h+ArgList]
0x66FE07: push    edx; int
0x66FE08: push    ecx; ArgList
0x66FE09: mov     ecx, eax
0x66FE0B: call    sub_4F1630
0x66FE10: mov     esi, eax
0x66FE12: jmp     short loc_66FE43
0x66FE14: mov     ecx, esi; this
0x66FE16: call    TESObjectCELL_IsInterior
0x66FE1B: test    al, al
0x66FE1D: jnz     short loc_66FE43
0x66FE1F: mov     ecx, esi; this
0x66FE21: call    TESObjectCELL_GetWorldSpace
0x66FE26: mov     edi, eax
0x66FE28: test    edi, edi
0x66FE2A: jz      short loc_66FE43
0x66FE2C: mov     ecx, esi; this
0x66FE2E: call    TESObjectCELL_GetYCoordinate
0x66FE33: push    eax; int
0x66FE34: mov     ecx, esi; this
0x66FE36: call    TESObjectCELL_GetXCoordinate
0x66FE3B: push    eax; ArgList
0x66FE3C: mov     ecx, edi
0x66FE3E: call    sub_4F1630
0x66FE43: test    esi, esi
0x66FE45: jz      loc_66FEFF
0x66FE4B: mov     edx, ds:0B3F9A8h
0x66FE51: mov     eax, ds:0B3F9ACh
0x66FE56: mov     ecx, ds:0B3F9B0h
0x66FE5C: mov     dword ptr [esp+24h+var_C], edx
0x66FE60: lea     edx, [esp+24h+var_C]
0x66FE64: mov     dword ptr [esp+24h+var_C+4], eax
0x66FE68: push    edx
0x66FE69: lea     eax, [esp+28h+a2]
0x66FE6D: mov     [esp+28h+var_4], ecx
0x66FE71: push    eax
0x66FE72: mov     ecx, esi
0x66FE74: call    sub_4D5D70
0x66FE79: mov     ecx, dword ptr [esp+24h+var_C]
0x66FE7D: mov     edx, dword ptr [esp+24h+var_C+4]
0x66FE81: push    1; char
0x66FE83: push    esi; int
0x66FE84: sub     esp, 0Ch
0x66FE87: mov     eax, esp
0x66FE89: mov     [eax], ecx
0x66FE8B: mov     ecx, [esp+38h+var_4]
0x66FE8F: mov     [eax+4], edx
0x66FE92: mov     edx, [esp+38h+a2]
0x66FE96: mov     [eax+8], ecx
0x66FE99: mov     ecx, [esp+38h+var_14]
0x66FE9D: sub     esp, 0Ch
0x66FEA0: mov     eax, esp
0x66FEA2: mov     [eax], edx
0x66FEA4: mov     edx, [esp+44h+var_10]
0x66FEA8: mov     [eax+4], ecx
0x66FEAB: mov     ecx, ebx; int
0x66FEAD: mov     [eax+8], edx
0x66FEB0: call    sub_66EAF0
0x66FEB5: mov     ecx, esi; this
0x66FEB7: call    TESObjectCELL_IsInterior
0x66FEBC: test    al, al
0x66FEBE: jnz     short loc_66FEFF
0x66FEC0: lea     eax, [esp+24h+arg_4]
0x66FEC4: push    eax; a3
0x66FEC5: lea     ecx, [esp+28h+a2]
0x66FEC9: push    ecx; a2
0x66FECA: mov     ecx, ds:0B333A0h; this
0x66FED0: call    GetTerrainHeight
0x66FED5: fldz
0x66FED7: fld     [esp+24h+arg_4]
0x66FEDB: fcom    st(1)
0x66FEDD: fnstsw  ax
0x66FEDF: test    ah, 1
0x66FEE2: jnz     short loc_66FEE8
0x66FEE4: fstp    st(1)
0x66FEE6: jmp     short loc_66FEEA
0x66FEE8: fstp    st
0x66FEEA: mov     edx, [ebx]
0x66FEEC: fstp    [esp+24h+var_10]
0x66FEF0: mov     edx, [edx+1CCh]
0x66FEF6: lea     eax, [esp+24h+a2]
0x66FEFA: push    eax
0x66FEFB: mov     ecx, ebx
0x66FEFD: call    edx
0x66FEFF: pop     edi
0x66FF00: pop     esi
0x66FF01: pop     ebx
0x66FF02: add     esp, 18h
0x66FF05: retn    8
