0x630D40: push    ebp
0x630D41: push    esi
0x630D42: mov     esi, ecx
0x630D44: mov     eax, [esi]
0x630D46: mov     edx, [eax+184h]
0x630D4C: call    edx
0x630D4E: mov     ebp, eax
0x630D50: test    ebp, ebp
0x630D52: jz      loc_631047
0x630D58: test    byte ptr [ebp+1Eh], 1
0x630D5C: push    edi
0x630D5D: mov     edi, [esp+0Ch+arg_0]
0x630D61: jz      short loc_630D97
0x630D63: mov     ecx, ds:0B333C4h
0x630D69: push    edi
0x630D6A: call    sub_663A60
0x630D6F: test    al, al
0x630D71: jnz     loc_631046
0x630D77: mov     ecx, ds:0B333C4h
0x630D7D: call    sub_663A00
0x630D82: cmp     eax, ds:0B36A80h
0x630D88: jge     loc_631046
0x630D8E: push    0
0x630D90: mov     ecx, ebp
0x630D92: call    sub_5668E0
0x630D97: cmp     dword ptr [esi+2Ch], 0
0x630D9B: jnz     short loc_630DAA
0x630D9D: mov     eax, [esi]
0x630D9F: mov     edx, [eax+558h]
0x630DA5: push    edi
0x630DA6: mov     ecx, esi
0x630DA8: call    edx
0x630DAA: mov     ecx, [esi+2Ch]
0x630DAD: test    ecx, ecx
0x630DAF: jnz     short loc_630DD2
0x630DB1: cmp     byte ptr [esp+0Ch+arg_8], cl
0x630DB5: jz      loc_631046
0x630DBB: mov     eax, [esi]
0x630DBD: mov     edx, [eax+188h]
0x630DC3: push    1
0x630DC5: push    edi
0x630DC6: mov     ecx, esi
0x630DC8: call    edx
0x630DCA: pop     edi
0x630DCB: pop     esi
0x630DCC: xor     al, al
0x630DCE: pop     ebp
0x630DCF: retn    0Ch
0x630DD2: mov     edx, [ecx+8]
0x630DD5: mov     eax, edx
0x630DD7: shr     eax, 5
0x630DDA: and     al, 1
0x630DDC: jnz     loc_631022
0x630DE2: shr     edx, 0Bh
0x630DE5: test    dl, 1
0x630DE8: jnz     loc_631022
0x630DEE: mov     eax, [ecx]
0x630DF0: mov     edx, [eax+198h]
0x630DF6: push    1
0x630DF8: call    edx
0x630DFA: test    al, al
0x630DFC: jz      short loc_630E23
0x630DFE: mov     eax, [esi+2Ch]
0x630E01: push    1
0x630E03: push    eax
0x630E04: mov     ecx, ebp
0x630E06: call    sub_566870
0x630E0B: mov     edx, [edi]
0x630E0D: mov     eax, [esi+2Ch]
0x630E10: mov     edx, [edx+2F8h]
0x630E16: push    eax
0x630E17: mov     ecx, edi
0x630E19: call    edx
0x630E1B: pop     edi
0x630E1C: pop     esi
0x630E1D: xor     al, al
0x630E1F: pop     ebp
0x630E20: retn    0Ch
0x630E23: cmp     dword ptr [esi+2Ch], 0
0x630E27: jz      short loc_630E5E
0x630E29: mov     ecx, [ebp+24h]
0x630E2C: test    ecx, ecx
0x630E2E: jz      loc_630F1C
0x630E34: call    sub_569740
0x630E39: cmp     eax, 2
0x630E3C: jge     loc_630F1C
0x630E42: fld     dword ptr ds:0A30634h
0x630E48: push    ecx
0x630E49: fstp    [esp+10h+var_10]; float
0x630E4C: push    0; char
0x630E4E: push    edi; int
0x630E4F: mov     ecx, ebp
0x630E51: call    sub_566DC0
0x630E56: test    al, al
0x630E58: jz      loc_630F1C
0x630E5E: cmp     byte ptr [esp+0Ch+arg_8], 0
0x630E63: jz      short loc_630E74
0x630E65: mov     eax, [esi]
0x630E67: mov     edx, [eax+188h]
0x630E6D: push    1
0x630E6F: push    edi
0x630E70: mov     ecx, esi
0x630E72: call    edx
0x630E74: mov     ecx, ebp
0x630E76: call    sub_5660A0
0x630E7B: test    al, al
0x630E7D: jz      loc_630F1C
0x630E83: mov     eax, [ebp+0]
0x630E86: mov     edx, [eax+10h]
0x630E89: push    1
0x630E8B: mov     ecx, ebp
0x630E8D: call    edx
0x630E8F: mov     dword ptr [esi+8], 0
0x630E96: mov     eax, [edi]
0x630E98: mov     edx, [eax+44h]
0x630E9B: push    30000h
0x630EA0: mov     ecx, edi
0x630EA2: call    edx
0x630EA4: mov     eax, [esi]
0x630EA6: mov     edx, [eax+18h]
0x630EA9: push    0
0x630EAB: push    edi
0x630EAC: mov     ecx, esi
0x630EAE: call    edx
0x630EB0: mov     eax, [edi]
0x630EB2: mov     edx, [eax+380h]
0x630EB8: mov     ecx, edi
0x630EBA: call    edx
0x630EBC: test    eax, eax
0x630EBE: jz      loc_631046
0x630EC4: mov     eax, [esi+8]
0x630EC7: mov     ecx, [eax+1Ch]
0x630ECA: shr     ecx, 17h
0x630ECD: test    cl, 1
0x630ED0: jnz     loc_631046
0x630ED6: mov     edx, [edi]
0x630ED8: mov     eax, [edx+380h]
0x630EDE: mov     ecx, edi
0x630EE0: call    eax
0x630EE2: mov     ecx, eax
0x630EE4: call    sub_5E9A60
0x630EE9: test    al, al
0x630EEB: jnz     short loc_630F08
0x630EED: fldz
0x630EEF: mov     ecx, edi
0x630EF1: fstp    dword ptr [esi+1A8h]
0x630EF7: mov     edx, [edi]
0x630EF9: mov     eax, [edx+380h]
0x630EFF: call    eax
0x630F01: mov     ecx, eax; int
0x630F03: call    sub_5F80D0
0x630F08: mov     edx, [edi]
0x630F0A: mov     eax, [edx+230h]
0x630F10: mov     ecx, edi
0x630F12: call    eax
0x630F14: pop     edi
0x630F15: pop     esi
0x630F16: xor     al, al
0x630F18: pop     ebp
0x630F19: retn    0Ch
0x630F1C: mov     ecx, ebp
0x630F1E: call    sub_5660A0
0x630F23: test    al, al
0x630F25: jz      short loc_630F89
0x630F27: mov     eax, [esi+8]
0x630F2A: test    eax, eax
0x630F2C: jz      short loc_630F89
0x630F2E: mov     ecx, [eax+1Ch]
0x630F31: shr     ecx, 9
0x630F34: test    cl, 1
0x630F37: jz      short loc_630F89
0x630F39: test    byte ptr [eax+1Ch], 1
0x630F3D: jz      short loc_630F89
0x630F3F: mov     ecx, edi; this
0x630F41: call    TESObjectREFR_GetParentCell
0x630F46: test    eax, eax
0x630F48: jz      short loc_630F89
0x630F4A: push    edi
0x630F4B: mov     ecx, edi; this
0x630F4D: call    TESObjectREFR_GetParentCell
0x630F52: mov     ecx, eax
0x630F54: call    sub_4CAAC0
0x630F59: test    al, al
0x630F5B: jz      short loc_630F89
0x630F5D: mov     edx, [esi+2Ch]
0x630F60: push    0; char
0x630F62: push    0; int
0x630F64: push    1; char
0x630F66: push    edx; int
0x630F67: push    0; int
0x630F69: mov     ecx, edi; int
0x630F6B: call    sub_5F2820
0x630F70: test    al, al
0x630F72: jz      short loc_630F89
0x630F74: mov     eax, [esi]
0x630F76: mov     edx, [eax+194h]
0x630F7C: push    edi
0x630F7D: mov     ecx, esi
0x630F7F: call    edx
0x630F81: pop     edi
0x630F82: pop     esi
0x630F83: xor     al, al
0x630F85: pop     ebp
0x630F86: retn    0Ch
0x630F89: push    2
0x630F8B: push    edi
0x630F8C: mov     ecx, ebp
0x630F8E: call    sub_5677B0
0x630F93: call    Double_To_SInt32
0x630F98: mov     [esp+0Ch+arg_8], eax
0x630F9C: mov     eax, [esi+2Ch]
0x630F9F: test    eax, eax
0x630FA1: jz      loc_631046
0x630FA7: fild    [esp+0Ch+arg_8]
0x630FAB: push    0
0x630FAD: push    eax
0x630FAE: mov     ecx, edi
0x630FB0: fstp    [esp+14h+arg_8]
0x630FB4: call    TesObjectREF_GetDistance
0x630FB9: fld     [esp+0Ch+arg_8]
0x630FBD: fcom    st(1)
0x630FBF: fnstsw  ax
0x630FC1: fstp    st(1)
0x630FC3: test    ah, 5
0x630FC6: jp      short loc_631018
0x630FC8: mov     eax, [esi+2Ch]
0x630FCB: cmp     eax, ds:0B333C4h
0x630FD1: jz      short loc_631018
0x630FD3: mov     ebp, [esi]
0x630FD5: push    ebx
0x630FD6: sub     esp, 8
0x630FD9: fstp    [esp+18h+var_14]
0x630FDD: mov     ebx, eax
0x630FDF: fld     dword ptr [esp+18h+arg_4]
0x630FE3: mov     ecx, ebx; this
0x630FE5: fstp    [esp+18h+var_18]
0x630FE8: call    TESObjectREFR_GetWorldSpace
0x630FED: mov     ecx, [esi+2Ch]; this
0x630FF0: push    eax
0x630FF1: call    TESObjectREFR_GetParentCell
0x630FF6: push    eax
0x630FF7: mov     eax, [ebx]
0x630FF9: mov     edx, [eax+174h]
0x630FFF: mov     ecx, ebx
0x631001: call    edx
0x631003: push    eax
0x631004: mov     eax, [ebp+418h]
0x63100A: push    edi
0x63100B: mov     ecx, esi
0x63100D: call    eax
0x63100F: pop     ebx
0x631010: pop     edi
0x631011: pop     esi
0x631012: xor     al, al
0x631014: pop     ebp
0x631015: retn    0Ch
0x631018: pop     edi
0x631019: fstp    st
0x63101B: pop     esi
0x63101C: xor     al, al
0x63101E: pop     ebp
0x63101F: retn    0Ch
0x631022: test    al, al
0x631024: jz      short loc_631030
0x631026: push    1
0x631028: push    ecx
0x631029: mov     ecx, ebp
0x63102B: call    sub_566870
0x631030: cmp     byte ptr [esp+0Ch+arg_8], 0
0x631035: jz      short loc_631046
0x631037: mov     edx, [esi]
0x631039: mov     eax, [edx+188h]
0x63103F: push    1
0x631041: push    edi
0x631042: mov     ecx, esi
0x631044: call    eax
0x631046: pop     edi
0x631047: pop     esi
0x631048: xor     al, al
0x63104A: pop     ebp
0x63104B: retn    0Ch
