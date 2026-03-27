0x590D20: push    0FFFFFFFFh
0x590D22: push    offset SEH_616530
0x590D27: mov     eax, large fs:0
0x590D2D: push    eax
0x590D2E: sub     esp, 0Ch
0x590D31: push    ebx
0x590D32: push    ebp
0x590D33: push    esi
0x590D34: push    edi
0x590D35: mov     eax, ds:0B30AACh
0x590D3A: xor     eax, esp
0x590D3C: push    eax
0x590D3D: lea     eax, [esp+2Ch+var_C]
0x590D41: mov     large fs:0, eax
0x590D47: mov     esi, ecx
0x590D49: push    0FECh
0x590D4E: call    sub_588C10
0x590D53: xor     ebx, ebx
0x590D55: push    ebx; a3
0x590D56: push    eax; a2
0x590D57: lea     ecx, [esp+34h+Str2]; this
0x590D5B: mov     [esp+34h+Str2], ebx
0x590D5F: mov     [esp+34h+var_10], bx
0x590D64: mov     [esp+34h+var_E], bx
0x590D69: call    BSStringT_Set
0x590D6E: cmp     [esi+48h], ebx
0x590D71: mov     ebp, [esp+2Ch+Str2]
0x590D75: lea     edi, [esi+48h]
0x590D78: mov     [esp+2Ch+var_4], ebx
0x590D7C: jnz     short loc_590D82
0x590D7E: cmp     ebp, ebx
0x590D80: jz      short loc_590DF7
0x590D82: cmp     ebp, ebx
0x590D84: jz      short loc_590D98
0x590D86: mov     eax, [edi]
0x590D88: cmp     eax, ebx
0x590D8A: jz      short loc_590D98
0x590D8C: push    ebp; Str2
0x590D8D: push    eax; Str1
0x590D8E: call    __strcmp
0x590D93: add     esp, 8
0x590D96: jmp     short loc_590DA3
0x590D98: xor     eax, eax
0x590D9A: cmp     ebp, ebx
0x590D9C: setz    al
0x590D9F: lea     eax, [eax+eax-1]
0x590DA3: cmp     eax, ebx
0x590DA5: jz      short loc_590DF7
0x590DA7: push    ebx; a3
0x590DA8: push    ebp; a2
0x590DA9: mov     ecx, edi; this
0x590DAB: call    BSStringT_Set
0x590DB0: movzx   eax, word ptr [edi+4]
0x590DB4: cmp     ax, 0FFFFh
0x590DB8: jnz     short loc_590DCD
0x590DBA: mov     eax, [edi]
0x590DBC: lea     edx, [eax+1]
0x590DBF: nop
0x590DC0: mov     cl, [eax]
0x590DC2: add     eax, 1
0x590DC5: cmp     cl, bl
0x590DC7: jnz     short loc_590DC0
0x590DC9: sub     eax, edx
0x590DCB: jmp     short loc_590DD0
0x590DCD: movzx   eax, ax
0x590DD0: cmp     eax, ebx
0x590DD2: jz      short loc_590DF7
0x590DD4: mov     eax, [edi]
0x590DD6: push    eax
0x590DD7: mov     ecx, esi
0x590DD9: call    sub_590740
0x590DDE: test    al, al
0x590DE0: jnz     short loc_590DF7
0x590DE2: mov     eax, [edi]
0x590DE4: push    eax
0x590DE5: call    FormHeapFree
0x590DEA: add     esp, 4
0x590DED: mov     [edi], ebx
0x590DEF: mov     [edi+6], bx
0x590DF3: mov     [edi+4], bx
0x590DF7: cmp     [esi+24h], ebx
0x590DFA: jz      loc_590F05
0x590E00: cmp     [esi+40h], ebx
0x590E03: jz      loc_590F05
0x590E09: push    0FA1h
0x590E0E: mov     ecx, esi
0x590E10: call    Tile_GetFloat
0x590E15: fcomp   dword ptr ds:0A2F948h
0x590E1B: fnstsw  ax
0x590E1D: test    ah, 44h
0x590E20: jnp     loc_590F05
0x590E26: push    0FA1h
0x590E2B: mov     ecx, esi
0x590E2D: call    Tile_GetFloat
0x590E32: fcomp   dword ptr ds:0A2F948h
0x590E38: fnstsw  ax
0x590E3A: test    ah, 44h
0x590E3D: jp      short loc_590E47
0x590E3F: mov     eax, [esi+24h]
0x590E42: or      word ptr [eax+18h], 1
0x590E47: mov     ecx, [esi+44h]
0x590E4A: cmp     ecx, ebx
0x590E4C: jz      loc_590F05
0x590E52: fld     dword ptr [ecx+48h]
0x590E55: fstp    [esp+2Ch+var_18]
0x590E59: fld     [esp+2Ch+var_18]
0x590E5D: fld     dword ptr ds:0A7DEB4h
0x590E63: fchs
0x590E65: fucompp
0x590E67: fnstsw  ax
0x590E69: test    ah, 44h
0x590E6C: jp      short loc_590E8E
0x590E6E: fldz
0x590E70: push    1; a3
0x590E72: push    ecx
0x590E73: mov     ecx, [esi+24h]; this
0x590E76: fstp    [esp+34h+a2]; a2
0x590E79: call    NiAVObject_UpdateNiAVObject
0x590E7E: push    ebp
0x590E7F: call    FormHeapFree
0x590E84: add     esp, 4
0x590E87: mov     al, 1
0x590E89: jmp     loc_590F10
0x590E8E: fld     dword ptr ds:0A30634h
0x590E94: fld     [esp+2Ch+arg_0]
0x590E98: fucom   st(1)
0x590E9A: fnstsw  ax
0x590E9C: fstp    st(1)
0x590E9E: test    ah, 44h
0x590EA1: jp      short loc_590E70
0x590EA3: fstp    st
0x590EA5: push    1; a3
0x590EA7: fld     dword ptr [ecx+34h]
0x590EAA: push    ecx
0x590EAB: mov     ecx, [esi+24h]; this
0x590EAE: fstp    [esp+34h+arg_0]
0x590EB2: fld     [esp+34h+arg_0]
0x590EB6: fadd    dword ptr ds:0B33E9Ch
0x590EBC: fstp    [esp+34h+arg_0]
0x590EC0: fld     [esp+34h+arg_0]
0x590EC4: fstp    [esp+34h+a2]; a2
0x590EC7: call    NiAVObject_UpdateNiAVObject
0x590ECC: mov     eax, [esi+44h]
0x590ECF: push    ebx
0x590ED0: push    eax
0x590ED1: call    sub_49F950
0x590ED6: add     esp, 8
0x590ED9: test    al, al
0x590EDB: jz      short loc_590E7E
0x590EDD: mov     ecx, [esi+44h]
0x590EE0: fldz
0x590EE2: push    ebx; char
0x590EE3: push    ecx
0x590EE4: fstp    [esp+34h+a2]; float
0x590EE7: call    sub_6C9CB0
0x590EEC: mov     [esi+44h], ebx
0x590EEF: mov     esi, [esi+40h]
0x590EF2: and     word ptr [esi+8], 0FFF7h
0x590EF8: push    ebp
0x590EF9: call    FormHeapFree
0x590EFE: add     esp, 4
0x590F01: mov     al, 1
0x590F03: jmp     short loc_590F10
0x590F05: push    ebp
0x590F06: call    FormHeapFree
0x590F0B: add     esp, 4
0x590F0E: xor     al, al
0x590F10: mov     ecx, [esp+2Ch+var_C]
0x590F14: mov     large fs:0, ecx
0x590F1B: pop     ecx
0x590F1C: pop     edi
0x590F1D: pop     esi
0x590F1E: pop     ebp
0x590F1F: pop     ebx
0x590F20: add     esp, 18h
0x590F23: retn    4
