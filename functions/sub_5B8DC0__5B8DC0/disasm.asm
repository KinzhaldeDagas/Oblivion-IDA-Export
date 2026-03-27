0x5B8DC0: sub     esp, 10h
0x5B8DC3: call    sub_578D70
0x5B8DC8: cmp     al, 1
0x5B8DCA: jnz     loc_5B8FB9
0x5B8DD0: push    ebp
0x5B8DD1: push    3FFh
0x5B8DD6: call    Menu_GetOpenMenuTile
0x5B8DDB: mov     ebp, eax
0x5B8DDD: add     esp, 4
0x5B8DE0: test    ebp, ebp
0x5B8DE2: jz      loc_5B8FB8
0x5B8DE8: push    ebx
0x5B8DE9: push    esi
0x5B8DEA: mov     ecx, ebp
0x5B8DEC: call    Tile_GetParentMenu
0x5B8DF1: mov     esi, eax
0x5B8DF3: mov     ebx, [esi+0C4h]
0x5B8DF9: test    ebx, ebx
0x5B8DFB: jz      loc_5B8FB6
0x5B8E01: push    edi
0x5B8E02: mov     edi, [ebx]
0x5B8E04: test    edi, edi
0x5B8E06: jz      loc_5B8FB5
0x5B8E0C: mov     eax, [edi]
0x5B8E0E: mov     edx, [eax+174h]
0x5B8E14: mov     ecx, edi
0x5B8E16: call    edx
0x5B8E18: mov     ecx, [eax]
0x5B8E1A: mov     edx, [eax+4]
0x5B8E1D: mov     eax, [eax+8]
0x5B8E20: mov     ebx, [ebx+4]
0x5B8E23: mov     [esp+20h+var_C], ecx
0x5B8E27: fld     [esp+20h+var_C]
0x5B8E2B: mov     ecx, [esi+0A4h]
0x5B8E31: mov     [esp+20h+var_4], eax
0x5B8E35: mov     eax, [esi+0A0h]
0x5B8E3B: mov     [esp+20h+var_10], eax
0x5B8E3F: fisub   [esp+20h+var_10]
0x5B8E43: sub     ecx, eax
0x5B8E45: mov     [esp+20h+var_8], edx
0x5B8E49: mov     edx, [esi+98h]
0x5B8E4F: test    edx, edx
0x5B8E51: mov     [esp+20h+var_10], ecx
0x5B8E55: fidiv   [esp+20h+var_10]
0x5B8E59: fild    dword ptr [esi+98h]
0x5B8E5F: jge     short loc_5B8E67
0x5B8E61: fadd    dword ptr ds:0A2FC78h
0x5B8E67: mov     eax, [esi+0A8h]
0x5B8E6D: fmulp   st(1), st
0x5B8E6F: mov     [esp+20h+var_10], eax
0x5B8E73: sub     eax, [esi+0ACh]
0x5B8E79: fstp    [esp+20h+var_C]
0x5B8E7D: fild    [esp+20h+var_10]
0x5B8E81: mov     [esp+20h+var_10], eax
0x5B8E85: mov     eax, [esi+9Ch]
0x5B8E8B: test    eax, eax
0x5B8E8D: fsub    [esp+20h+var_8]
0x5B8E91: fidiv   [esp+20h+var_10]
0x5B8E95: fld1
0x5B8E97: fsubrp  st(1), st
0x5B8E99: fild    dword ptr [esi+9Ch]
0x5B8E9F: jge     short loc_5B8EA7
0x5B8EA1: fadd    qword ptr ds:0A30E60h
0x5B8EA7: fmulp   st(1), st
0x5B8EA9: mov     ecx, edi
0x5B8EAB: fstp    [esp+20h+var_8]
0x5B8EAF: call    sub_4D7730
0x5B8EB4: mov     ecx, eax; this
0x5B8EB6: call    TESModel_GetModelPath
0x5B8EBB: test    eax, eax
0x5B8EBD: jz      short loc_5B8ED5
0x5B8EBF: mov     ecx, [esi+0B0h]
0x5B8EC5: test    ecx, ecx
0x5B8EC7: jz      short loc_5B8ED5
0x5B8EC9: push    eax; Str2
0x5B8ECA: push    ecx; Str1
0x5B8ECB: call    __strcmp
0x5B8ED0: add     esp, 8
0x5B8ED3: jmp     short loc_5B8EE2
0x5B8ED5: xor     ecx, ecx
0x5B8ED7: test    eax, eax
0x5B8ED9: setz    cl
0x5B8EDC: lea     ecx, [ecx+ecx-1]
0x5B8EE0: mov     eax, ecx
0x5B8EE2: test    eax, eax
0x5B8EE4: jnz     short loc_5B8F0C
0x5B8EE6: fld     dword ptr [esi+0B8h]
0x5B8EEC: fld     [esp+20h+var_C]
0x5B8EF0: fucompp
0x5B8EF2: fnstsw  ax
0x5B8EF4: test    ah, 44h
0x5B8EF7: jp      short loc_5B8F0C
0x5B8EF9: fld     dword ptr [esi+0BCh]
0x5B8EFF: fld     [esp+20h+var_8]
0x5B8F03: fucompp
0x5B8F05: fnstsw  ax
0x5B8F07: test    ah, 44h
0x5B8F0A: jnp     short loc_5B8F1C
0x5B8F0C: test    ebx, ebx
0x5B8F0E: jnz     loc_5B8E02
0x5B8F14: pop     edi
0x5B8F15: pop     esi
0x5B8F16: pop     ebx
0x5B8F17: pop     ebp
0x5B8F18: add     esp, 10h
0x5B8F1B: retn
0x5B8F1C: cmp     dword ptr [esi+0F4h], 0
0x5B8F23: jz      short loc_5B8F47
0x5B8F25: mov     ecx, [esi+0F4h]
0x5B8F2B: mov     ebx, [esi]
0x5B8F2D: push    ecx
0x5B8F2E: push    0FA8h
0x5B8F33: add     ebx, 14h
0x5B8F36: call    Tile_GetFloat
0x5B8F3B: call    Double_To_SInt32
0x5B8F40: mov     edx, [ebx]
0x5B8F42: push    eax; a3
0x5B8F43: mov     ecx, esi
0x5B8F45: call    edx
0x5B8F47: fld1
0x5B8F49: push    ecx
0x5B8F4A: fstp    [esp+24h+a3]; a3
0x5B8F4D: mov     ecx, ebp; this
0x5B8F4F: push    0FA1h; a2
0x5B8F54: call    Tile_SetFloat
0x5B8F59: push    0
0x5B8F5B: push    1
0x5B8F5D: push    1; arg1
0x5B8F5F: push    0; canCreate
0x5B8F61: call    InterfaceManager_GetSingleton
0x5B8F66: add     esp, 8
0x5B8F69: mov     ecx, eax
0x5B8F6B: call    sub_57CFE0
0x5B8F70: push    1; arg1
0x5B8F72: push    0; canCreate
0x5B8F74: call    InterfaceManager_GetSingleton
0x5B8F79: add     esp, 8
0x5B8F7C: mov     ecx, eax
0x5B8F7E: call    sub_583E60
0x5B8F83: push    1; arg1
0x5B8F85: push    0; canCreate
0x5B8F87: call    InterfaceManager_GetSingleton
0x5B8F8C: add     esp, 8
0x5B8F8F: mov     ecx, eax
0x5B8F91: call    sub_5821F0
0x5B8F96: push    1; arg1
0x5B8F98: push    0; canCreate
0x5B8F9A: call    InterfaceManager_GetSingleton
0x5B8F9F: add     esp, 8
0x5B8FA2: mov     ecx, eax
0x5B8FA4: call    sub_583F40
0x5B8FA9: mov     ecx, ds:0B333C4h; int
0x5B8FAF: push    edi; int
0x5B8FB0: call    sub_66F420
0x5B8FB5: pop     edi
0x5B8FB6: pop     esi
0x5B8FB7: pop     ebx
0x5B8FB8: pop     ebp
0x5B8FB9: add     esp, 10h
0x5B8FBC: retn
