0x5D8F00: sub     esp, 0Ch
0x5D8F03: push    ebx
0x5D8F04: mov     ebx, ecx
0x5D8F06: push    esi; a3
0x5D8F07: mov     esi, [ebx+38h]
0x5D8F0A: test    esi, esi
0x5D8F0C: push    edi; a3
0x5D8F0D: mov     edi, [ebx+3Ch]
0x5D8F10: jz      loc_5D8FC6
0x5D8F16: push    0FB5h
0x5D8F1B: mov     ecx, esi
0x5D8F1D: call    Tile_GetFloat
0x5D8F22: call    Double_To_SInt32
0x5D8F27: push    1; arg1
0x5D8F29: push    0; canCreate
0x5D8F2B: mov     dword ptr [esp+20h+var_8], eax
0x5D8F2F: call    InterfaceManager_GetSingleton
0x5D8F34: fld     dword ptr [eax+38h]
0x5D8F37: call    Double_To_SInt32
0x5D8F3C: mov     ecx, eax
0x5D8F3E: mov     eax, 77777777h
0x5D8F43: imul    ecx
0x5D8F45: sub     edx, ecx
0x5D8F47: sar     edx, 6
0x5D8F4A: mov     eax, edx
0x5D8F4C: shr     eax, 1Fh
0x5D8F4F: add     eax, edx
0x5D8F51: mov     [esp+20h+var_C], eax
0x5D8F55: add     esp, 4
0x5D8F58: mov     ecx, edi; this
0x5D8F5A: fild    [esp+1Ch+var_C]
0x5D8F5E: fstp    [esp+1Ch+a2]; a3
0x5D8F61: push    0FB7h; a2
0x5D8F66: call    Tile_SetFloat
0x5D8F6B: fldz
0x5D8F6D: push    ecx
0x5D8F6E: fstp    [esp+1Ch+a2]; a3
0x5D8F71: push    0FB7h; a2
0x5D8F76: mov     ecx, edi; this
0x5D8F78: call    Tile_SetFloat
0x5D8F7D: fild    dword ptr [esp+18h+var_8]
0x5D8F81: push    0FB5h
0x5D8F86: mov     ecx, esi
0x5D8F88: fstp    [esp+1Ch+var_8]
0x5D8F8C: call    Tile_GetFloat
0x5D8F91: fld     [esp+18h+var_8]
0x5D8F95: fucompp
0x5D8F97: fnstsw  ax
0x5D8F99: test    ah, 44h
0x5D8F9C: jnp     short loc_5D8FC6
0x5D8F9E: mov     eax, [esp+18h+arg_4]
0x5D8FA2: mov     ecx, [esp+1Ch]
0x5D8FA6: mov     edx, [ebx]
0x5D8FA8: mov     edx, [edx+14h]
0x5D8FAB: push    eax
0x5D8FAC: push    ecx
0x5D8FAD: mov     ecx, ebx
0x5D8FAF: call    edx
0x5D8FB1: push    0
0x5D8FB3: push    1; arg1
0x5D8FB5: push    0; canCreate
0x5D8FB7: call    InterfaceManager_GetSingleton
0x5D8FBC: add     esp, 8
0x5D8FBF: mov     ecx, eax
0x5D8FC1: call    sub_57D730
0x5D8FC6: pop     edi
0x5D8FC7: pop     esi
0x5D8FC8: pop     ebx
0x5D8FC9: add     esp, 0Ch
0x5D8FCC: retn    8
