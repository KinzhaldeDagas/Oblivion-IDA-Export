0x64EE60: sub     esp, 10h
0x64EE63: push    ebx
0x64EE64: push    ebp
0x64EE65: push    esi
0x64EE66: mov     esi, ecx
0x64EE68: mov     eax, [esi]
0x64EE6A: mov     edx, [eax+184h]
0x64EE70: push    edi
0x64EE71: call    edx
0x64EE73: mov     edi, [esp+20h+arg_0]
0x64EE77: xor     ebx, ebx
0x64EE79: cmp     [esi+2Ch], ebx
0x64EE7C: mov     ebp, eax
0x64EE7E: jnz     short loc_64EE8D
0x64EE80: mov     eax, [esi]
0x64EE82: mov     edx, [eax+558h]
0x64EE88: push    edi
0x64EE89: mov     ecx, esi
0x64EE8B: call    edx
0x64EE8D: mov     eax, [esi+2Ch]
0x64EE90: cmp     eax, ebx
0x64EE92: jz      loc_64F128
0x64EE98: mov     eax, [eax+8]
0x64EE9B: shr     eax, 5
0x64EE9E: test    al, 1
0x64EEA0: jnz     loc_64F128
0x64EEA6: cmp     byte ptr [ebp+20h], 9
0x64EEAA: jnz     short loc_64EF0E
0x64EEAC: push    edi
0x64EEAD: lea     ecx, [esp+24h+var_C]
0x64EEB1: push    ecx
0x64EEB2: mov     ecx, ebp
0x64EEB4: call    sub_566B30
0x64EEB9: mov     ecx, [esi+2Ch]
0x64EEBC: push    eax
0x64EEBD: call    sub_4D7E30
0x64EEC2: call    Double_To_SInt32
0x64EEC7: mov     [esp+20h+arg_0], eax
0x64EECB: fild    [esp+20h+arg_0]
0x64EECF: mov     ecx, ebp
0x64EED1: fstp    [esp+20h+arg_0]
0x64EED5: call    sub_566DB0
0x64EEDA: test    eax, eax
0x64EEDC: mov     [esp+20h+var_10], eax
0x64EEE0: fild    [esp+20h+var_10]
0x64EEE4: jge     short loc_64EEEC
0x64EEE6: fadd    dword ptr ds:0A2FC78h
0x64EEEC: fadd    qword ptr ds:0A3DDE0h
0x64EEF2: fld     [esp+20h+arg_0]
0x64EEF6: fcompp
0x64EEF8: fnstsw  ax
0x64EEFA: test    ah, 41h
0x64EEFD: jnz     short loc_64EF0E
0x64EEFF: mov     edx, [esi]
0x64EF01: mov     eax, [edx+188h]
0x64EF07: push    0FFFFFFFFh
0x64EF09: push    edi
0x64EF0A: mov     ecx, esi
0x64EF0C: call    eax
0x64EF0E: mov     ecx, [esi+2Ch]; this
0x64EF11: call    GetTeleportExtraData
0x64EF16: test    eax, eax
0x64EF18: jz      loc_64EFE4
0x64EF1E: mov     edx, [edi]
0x64EF20: mov     eax, [edx+174h]
0x64EF26: mov     ecx, edi
0x64EF28: call    eax
0x64EF2A: mov     ecx, [esi+2Ch]
0x64EF2D: mov     ebp, eax
0x64EF2F: call    sub_4D76F0
0x64EF34: fld     dword ptr [eax]
0x64EF36: fsub    dword ptr [ebp+0]
0x64EF39: fstp    [esp+20h+var_C]
0x64EF3D: fld     dword ptr [eax+4]
0x64EF40: fsub    dword ptr [ebp+4]
0x64EF43: fstp    [esp+20h+var_8]
0x64EF47: fld     dword ptr [eax+8]
0x64EF4A: fsub    dword ptr [ebp+8]
0x64EF4D: fstp    [esp+20h+var_4]
0x64EF51: fld     [esp+20h+var_8]
0x64EF55: fld     [esp+20h+var_C]
0x64EF59: fld     [esp+20h+var_4]
0x64EF5D: fld     st(1)
0x64EF5F: fmulp   st(2), st
0x64EF61: fld     st(2)
0x64EF63: fmulp   st(3), st
0x64EF65: fxch    st(1)
0x64EF67: faddp   st(2), st
0x64EF69: fmul    st, st
0x64EF6B: faddp   st(1), st
0x64EF6D: fstp    [esp+20h+arg_0]
0x64EF71: fld     [esp+20h+arg_0]
0x64EF75: call    __CIsqrt
0x64EF7A: fstp    [esp+20h+arg_0]
0x64EF7E: fld     [esp+20h+arg_0]
0x64EF82: fcomp   dword ptr ds:0A2FFE8h
0x64EF88: fnstsw  ax
0x64EF8A: test    ah, 41h
0x64EF8D: jp      short loc_64EFF1
0x64EF8F: mov     ecx, ds:0B333C4h; this
0x64EF95: cmp     [esi+2Ch], ecx
0x64EF98: jnz     loc_64F088
0x64EF9E: call    PlayerCharacter__IsSleeping?
0x64EFA3: test    al, al
0x64EFA5: jz      loc_64F088
0x64EFAB: mov     eax, ds:0B333C4h
0x64EFB0: cmp     [eax+12Ch], bl
0x64EFB6: jnz     loc_64F088
0x64EFBC: mov     [eax+590h], ebx
0x64EFC2: mov     byte ptr [eax+594h], 1
0x64EFC9: mov     eax, [esi]
0x64EFCB: mov     edx, [eax+188h]
0x64EFD1: push    0FFFFFFFEh
0x64EFD3: push    edi
0x64EFD4: mov     ecx, esi
0x64EFD6: call    edx
0x64EFD8: pop     edi
0x64EFD9: pop     esi
0x64EFDA: pop     ebp
0x64EFDB: xor     al, al
0x64EFDD: pop     ebx
0x64EFDE: add     esp, 10h
0x64EFE1: retn    4
0x64EFE4: mov     ecx, [esi+8]
0x64EFE7: push    edi
0x64EFE8: call    sub_5687D0
0x64EFED: cmp     al, bl
0x64EFEF: jnz     short loc_64EF8F
0x64EFF1: mov     edx, [esi]
0x64EFF3: mov     eax, [edx+36Ch]
0x64EFF9: mov     ecx, esi
0x64EFFB: call    eax
0x64EFFD: test    eax, eax
0x64EFFF: jz      short loc_64F00E
0x64F001: mov     edx, [esi]
0x64F003: mov     eax, [edx+1B0h]
0x64F009: push    edi
0x64F00A: mov     ecx, esi
0x64F00C: call    eax
0x64F00E: mov     ecx, [esi+2Ch]; this
0x64F011: call    GetTeleportExtraData
0x64F016: test    eax, eax
0x64F018: mov     ecx, [esi+2Ch]
0x64F01B: jnz     short loc_64F029
0x64F01D: mov     edx, [ecx]
0x64F01F: mov     eax, [edx+174h]
0x64F025: call    eax
0x64F027: jmp     short loc_64F02E
0x64F029: call    sub_4D76F0
0x64F02E: mov     ecx, [eax]
0x64F030: fld     dword ptr ds:0A30634h
0x64F036: mov     ebx, [esi]
0x64F038: mov     [esp+20h+var_C], ecx
0x64F03C: mov     edx, [eax+4]
0x64F03F: mov     ecx, [esi+2Ch]; this
0x64F042: sub     esp, 8
0x64F045: fstp    [esp+28h+var_24]
0x64F049: mov     [esp+28h+var_8], edx
0x64F04D: mov     eax, [eax+8]
0x64F050: fld     dword ptr ds:0A71E4Ch
0x64F056: fstp    [esp+28h+var_28]
0x64F059: mov     [esp+28h+var_4], eax
0x64F05D: call    TESObjectREFR_GetWorldSpace
0x64F062: mov     ecx, [esi+2Ch]; this
0x64F065: push    eax
0x64F066: call    TESObjectREFR_GetParentCell
0x64F06B: mov     edx, [ebx+418h]
0x64F071: push    eax
0x64F072: lea     ecx, [esp+30h+var_C]
0x64F076: push    ecx
0x64F077: push    edi
0x64F078: mov     ecx, esi
0x64F07A: call    edx
0x64F07C: pop     edi
0x64F07D: pop     esi
0x64F07E: pop     ebp
0x64F07F: xor     al, al
0x64F081: pop     ebx
0x64F082: add     esp, 10h
0x64F085: retn    4
0x64F088: mov     ecx, [esi+2Ch]
0x64F08B: mov     eax, [ecx]
0x64F08D: mov     edx, [eax+190h]
0x64F093: call    edx
0x64F095: test    al, al
0x64F097: jnz     short loc_64F0CF
0x64F099: mov     eax, [esi]
0x64F09B: mov     edx, [eax+394h]
0x64F0A1: push    1
0x64F0A3: mov     ecx, esi
0x64F0A5: call    edx
0x64F0A7: mov     ecx, [esi+2Ch]
0x64F0AA: push    1
0x64F0AC: push    ebx
0x64F0AD: push    ebx
0x64F0AE: push    edi
0x64F0AF: call    ActivateRef
0x64F0B4: mov     eax, [esi]
0x64F0B6: mov     edx, [eax+188h]
0x64F0BC: push    1
0x64F0BE: push    edi
0x64F0BF: mov     ecx, esi
0x64F0C1: call    edx
0x64F0C3: pop     edi
0x64F0C4: pop     esi
0x64F0C5: pop     ebp
0x64F0C6: mov     al, 1
0x64F0C8: pop     ebx
0x64F0C9: add     esp, 10h
0x64F0CC: retn    4
0x64F0CF: mov     ecx, ds:0B333C4h; this
0x64F0D5: cmp     [esi+2Ch], ecx
0x64F0D8: jnz     short loc_64F118
0x64F0DA: call    PlayerCharacter__IsSleeping?
0x64F0DF: test    al, al
0x64F0E1: jz      short loc_64F118
0x64F0E3: mov     eax, ds:0B333C4h
0x64F0E8: cmp     [eax+12Ch], bl
0x64F0EE: jnz     short loc_64F118
0x64F0F0: mov     [eax+590h], ebx
0x64F0F6: mov     byte ptr [eax+594h], 1
0x64F0FD: mov     eax, [esi]
0x64F0FF: mov     edx, [eax+188h]
0x64F105: push    0FFFFFFFFh
0x64F107: push    edi
0x64F108: mov     ecx, esi
0x64F10A: call    edx
0x64F10C: pop     edi
0x64F10D: pop     esi
0x64F10E: pop     ebp
0x64F10F: xor     al, al
0x64F111: pop     ebx
0x64F112: add     esp, 10h
0x64F115: retn    4
0x64F118: mov     eax, [esi]
0x64F11A: mov     edx, [eax+394h]
0x64F120: push    1
0x64F122: mov     ecx, esi
0x64F124: call    edx
0x64F126: jmp     short loc_64F0B4
0x64F128: add     dword ptr [esi+4], 1
0x64F12C: pop     edi
0x64F12D: pop     esi
0x64F12E: pop     ebp
0x64F12F: xor     al, al
0x64F131: pop     ebx
0x64F132: add     esp, 10h
0x64F135: retn    4
