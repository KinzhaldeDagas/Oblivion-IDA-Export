0x5A1D10: sub     esp, 8
0x5A1D13: push    ebx
0x5A1D14: push    ebp
0x5A1D15: mov     ebp, [esp+14h]
0x5A1D19: cmp     ebp, 3E8h
0x5A1D1F: push    esi; a3
0x5A1D20: push    edi; a3
0x5A1D21: mov     ebx, ecx
0x5A1D23: jl      short loc_5A1D35
0x5A1D25: cmp     ebp, 0BB8h
0x5A1D2B: jge     short loc_5A1D41
0x5A1D2D: mov     esi, [ebx+60h]
0x5A1D30: mov     edi, [ebx+64h]
0x5A1D33: jmp     short loc_5A1D47
0x5A1D35: cmp     ebp, 0BB8h
0x5A1D3B: jl      loc_5A1DFB
0x5A1D41: mov     esi, [ebx+68h]
0x5A1D44: mov     edi, [ebx+6Ch]
0x5A1D47: test    esi, esi
0x5A1D49: jz      loc_5A1DFB
0x5A1D4F: push    0FB5h
0x5A1D54: mov     ecx, esi
0x5A1D56: call    Tile_GetFloat
0x5A1D5B: call    Double_To_SInt32
0x5A1D60: push    1; arg1
0x5A1D62: push    0; canCreate
0x5A1D64: mov     dword ptr [esp+20h+var_8], eax
0x5A1D68: call    InterfaceManager_GetSingleton
0x5A1D6D: fld     dword ptr [eax+38h]
0x5A1D70: call    Double_To_SInt32
0x5A1D75: mov     ecx, eax
0x5A1D77: mov     eax, 77777777h
0x5A1D7C: imul    ecx
0x5A1D7E: sub     edx, ecx
0x5A1D80: sar     edx, 6
0x5A1D83: mov     eax, edx
0x5A1D85: shr     eax, 1Fh
0x5A1D88: add     eax, edx
0x5A1D8A: mov     [esp+24h], eax
0x5A1D8E: add     esp, 4
0x5A1D91: mov     ecx, edi; this
0x5A1D93: fild    dword ptr [esp+20h]
0x5A1D97: fstp    [esp+1Ch+a2]; a3
0x5A1D9A: push    0FB7h; a2
0x5A1D9F: call    Tile_SetFloat
0x5A1DA4: fldz
0x5A1DA6: push    ecx
0x5A1DA7: fstp    [esp+1Ch+a2]; a3
0x5A1DAA: push    0FB7h; a2
0x5A1DAF: mov     ecx, edi; this
0x5A1DB1: call    Tile_SetFloat
0x5A1DB6: fild    dword ptr [esp+18h+var_8]
0x5A1DBA: push    0FB5h
0x5A1DBF: mov     ecx, esi
0x5A1DC1: fstp    [esp+1Ch+var_8]
0x5A1DC5: call    Tile_GetFloat
0x5A1DCA: fld     [esp+18h+var_8]
0x5A1DCE: fucompp
0x5A1DD0: fnstsw  ax
0x5A1DD2: test    ah, 44h
0x5A1DD5: jnp     short loc_5A1DFB
0x5A1DD7: mov     eax, [esp+18h+arg_4]
0x5A1DDB: mov     edx, [ebx]
0x5A1DDD: mov     edx, [edx+14h]
0x5A1DE0: push    eax
0x5A1DE1: push    ebp
0x5A1DE2: mov     ecx, ebx
0x5A1DE4: call    edx
0x5A1DE6: push    0
0x5A1DE8: push    1; arg1
0x5A1DEA: push    0; canCreate
0x5A1DEC: call    InterfaceManager_GetSingleton
0x5A1DF1: add     esp, 8
0x5A1DF4: mov     ecx, eax
0x5A1DF6: call    sub_57D730
0x5A1DFB: pop     edi
0x5A1DFC: pop     esi
0x5A1DFD: pop     ebp
0x5A1DFE: pop     ebx
0x5A1DFF: add     esp, 8
0x5A1E02: retn    8
