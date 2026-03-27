0x595DA0: sub     esp, 0Ch
0x595DA3: push    esi; a3
0x595DA4: push    edi; a3
0x595DA5: push    1; arg1
0x595DA7: push    0; canCreate
0x595DA9: mov     esi, ecx
0x595DAB: call    InterfaceManager_GetSingleton
0x595DB0: mov     ecx, [esi+4]
0x595DB3: add     esp, 8
0x595DB6: push    0FAEh
0x595DBB: mov     edi, eax
0x595DBD: call    Tile_GetFloat
0x595DC2: fcomp   dword ptr ds:0A2F948h
0x595DC8: fnstsw  ax
0x595DCA: test    ah, 44h
0x595DCD: jp      loc_595E88
0x595DD3: mov     ecx, [esi+28h]
0x595DD6: push    0FB5h
0x595DDB: call    Tile_GetFloat
0x595DE0: call    Double_To_SInt32
0x595DE5: fld     dword ptr [edi+38h]
0x595DE8: mov     dword ptr [esp+14h+var_8], eax
0x595DEC: call    Double_To_SInt32
0x595DF1: mov     ecx, eax
0x595DF3: mov     eax, 77777777h
0x595DF8: imul    ecx
0x595DFA: sub     edx, ecx
0x595DFC: sar     edx, 6
0x595DFF: mov     eax, edx
0x595E01: shr     eax, 1Fh
0x595E04: add     eax, edx
0x595E06: mov     [esp+14h+var_C], eax
0x595E0A: push    ecx
0x595E0B: mov     ecx, [esi+2Ch]; this
0x595E0E: fild    [esp+18h+var_C]
0x595E12: fstp    [esp+18h+a2]; a3
0x595E15: push    0FB7h; a2
0x595E1A: call    Tile_SetFloat
0x595E1F: fldz
0x595E21: push    ecx
0x595E22: fstp    [esp+18h+a2]; a3
0x595E25: mov     ecx, [esi+2Ch]; this
0x595E28: push    0FB7h; a2
0x595E2D: call    Tile_SetFloat
0x595E32: fild    dword ptr [esp+14h+var_8]
0x595E36: mov     ecx, [esi+28h]
0x595E39: push    0FB5h
0x595E3E: fstp    [esp+18h+var_8]
0x595E42: call    Tile_GetFloat
0x595E47: fld     [esp+14h+var_8]
0x595E4B: fucompp
0x595E4D: fnstsw  ax
0x595E4F: test    ah, 44h
0x595E52: jnp     loc_595F20
0x595E58: mov     eax, [esp+14h+arg_4]
0x595E5C: mov     ecx, [esp+18h]
0x595E60: mov     edx, [esi]
0x595E62: mov     edx, [edx+14h]
0x595E65: push    eax
0x595E66: push    ecx
0x595E67: mov     ecx, esi
0x595E69: call    edx
0x595E6B: push    0
0x595E6D: push    1; arg1
0x595E6F: push    0; canCreate
0x595E71: call    InterfaceManager_GetSingleton
0x595E76: add     esp, 8
0x595E79: mov     ecx, eax
0x595E7B: call    sub_57D730
0x595E80: pop     edi
0x595E81: pop     esi
0x595E82: add     esp, 0Ch
0x595E85: retn    8
0x595E88: mov     ecx, [esi+4]
0x595E8B: push    0FB7h
0x595E90: call    Tile_GetFloat
0x595E95: call    Double_To_SInt32
0x595E9A: fld     dword ptr [edi+38h]
0x595E9D: mov     [esp+14h+arg_4], eax
0x595EA1: call    Double_To_SInt32
0x595EA6: test    eax, eax
0x595EA8: push    ecx
0x595EA9: mov     ecx, [esi+4]; this
0x595EAC: jle     short loc_595EB6
0x595EAE: fld     dword ptr ds:0A53954h
0x595EB4: jmp     short loc_595EBC
0x595EB6: fld     dword ptr ds:0A379B4h
0x595EBC: fstp    [esp+18h+a2]; a3
0x595EBF: push    0FB4h; a2
0x595EC4: call    Tile_SetFloat
0x595EC9: fldz
0x595ECB: push    ecx
0x595ECC: fstp    [esp+18h+a2]; a3
0x595ECF: mov     ecx, [esi+4]; this
0x595ED2: push    0FB4h; a2
0x595ED7: call    Tile_SetFloat
0x595EDC: mov     ecx, [esi+4]
0x595EDF: push    0FB7h
0x595EE4: call    Tile_GetFloat
0x595EE9: fild    [esp+14h+arg_4]
0x595EED: fucompp
0x595EEF: fnstsw  ax
0x595EF1: test    ah, 44h
0x595EF4: jnp     short loc_595F20
0x595EF6: mov     ecx, [esi+4]
0x595EF9: push    0FB6h
0x595EFE: call    Tile_GetFloat
0x595F03: call    Double_To_SInt32
0x595F08: mov     esi, eax
0x595F0A: test    esi, esi
0x595F0C: jz      short loc_595F20
0x595F0E: push    1; arg1
0x595F10: push    0; canCreate
0x595F12: call    InterfaceManager_GetSingleton
0x595F17: push    esi; int
0x595F18: call    sub_57DE50
0x595F1D: add     esp, 0Ch
0x595F20: pop     edi
0x595F21: pop     esi
0x595F22: add     esp, 0Ch
0x595F25: retn    8
