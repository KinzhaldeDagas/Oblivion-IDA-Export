0x4B7B40: sub     esp, 0Ch
0x4B7B43: push    ebx
0x4B7B44: push    ebp
0x4B7B45: push    esi
0x4B7B46: mov     esi, [esp+18h+arg_0]
0x4B7B4A: test    esi, esi
0x4B7B4C: mov     ebx, ecx
0x4B7B4E: push    edi
0x4B7B4F: mov     [esp+1Ch+var_4], ebx
0x4B7B53: jz      loc_4B7D9F
0x4B7B59: mov     eax, [esi]
0x4B7B5B: mov     edx, [eax+170h]
0x4B7B61: mov     ecx, esi
0x4B7B63: call    edx
0x4B7B65: cmp     eax, ebx
0x4B7B67: jnz     loc_4B7D9F
0x4B7B6D: mov     ecx, esi; this
0x4B7B6F: call    GetTeleportExtraData
0x4B7B74: mov     ebp, eax
0x4B7B76: test    ebp, ebp
0x4B7B78: jz      loc_4B7D9F
0x4B7B7E: mov     ecx, ebp
0x4B7B80: call    sub_42B460
0x4B7B85: mov     ecx, ebp
0x4B7B87: mov     esi, eax
0x4B7B89: call    sub_42B470
0x4B7B8E: mov     ecx, ds:0B35B90h
0x4B7B94: test    ecx, ecx
0x4B7B96: mov     edi, eax
0x4B7B98: mov     [esp+1Ch+var_C], edi
0x4B7B9C: jz      short loc_4B7BA3
0x4B7B9E: call    sub_4BE5A0
0x4B7BA3: mov     ecx, ds:0B35B8Ch
0x4B7BA9: test    ecx, ecx
0x4B7BAB: jz      short loc_4B7BB2
0x4B7BAD: call    sub_4BD980
0x4B7BB2: test    esi, esi
0x4B7BB4: jnz     short loc_4B7C21
0x4B7BB6: test    edi, edi
0x4B7BB8: jz      loc_4B7D9F
0x4B7BBE: mov     ecx, ebp
0x4B7BC0: call    sub_6899C0
0x4B7BC5: fld     dword ptr [eax]
0x4B7BC7: fstp    [esp+1Ch+var_8]
0x4B7BCB: fld     [esp+1Ch+var_8]
0x4B7BCF: fistp   [esp+1Ch+arg_0]
0x4B7BD3: mov     edi, [esp+1Ch+arg_0]
0x4B7BD7: mov     ecx, ebp
0x4B7BD9: sar     edi, 0Ch
0x4B7BDC: call    sub_6899C0
0x4B7BE1: fld     dword ptr [eax+4]
0x4B7BE4: fstp    [esp+1Ch+var_8]
0x4B7BE8: fld     [esp+1Ch+var_8]
0x4B7BEC: fistp   [esp+1Ch+arg_0]
0x4B7BF0: mov     ebx, [esp+1Ch+arg_0]
0x4B7BF4: mov     ecx, [esp+1Ch+var_C]; this
0x4B7BF8: sar     ebx, 0Ch
0x4B7BFB: push    ebx; signed int
0x4B7BFC: push    edi; signed int
0x4B7BFD: call    TESWorldSpace__GetCellAtCellCoord
0x4B7C02: mov     esi, eax
0x4B7C04: test    esi, esi
0x4B7C06: jnz     short loc_4B7C1D
0x4B7C08: mov     ecx, [esp+1Ch+var_C]
0x4B7C0C: push    ebx; int
0x4B7C0D: push    edi; ArgList
0x4B7C0E: call    sub_4F1630
0x4B7C13: mov     esi, eax
0x4B7C15: test    esi, esi
0x4B7C17: jz      loc_4B7D9F
0x4B7C1D: mov     ebx, [esp+1Ch+var_4]
0x4B7C21: mov     ecx, ds:0B333C4h; this
0x4B7C27: call    TESObjectREFR_GetParentCell
0x4B7C2C: test    eax, eax
0x4B7C2E: mov     [esp+1Ch+var_4], eax
0x4B7C32: jz      short loc_4B7C41
0x4B7C34: mov     ecx, eax; this
0x4B7C36: call    TESObjectCELL_IsInterior
0x4B7C3B: mov     byte ptr [esp+1Ch+arg_0], al
0x4B7C3F: jmp     short loc_4B7C46
0x4B7C41: mov     byte ptr [esp+1Ch+arg_0], 0
0x4B7C46: mov     ecx, ds:0B333C4h; this
0x4B7C4C: call    TESObjectREFR_GetParentCell
0x4B7C51: test    eax, eax
0x4B7C53: jz      short loc_4B7C6B
0x4B7C55: mov     ecx, ds:0B333C4h; this
0x4B7C5B: call    TESObjectREFR_GetParentCell
0x4B7C60: mov     ecx, eax; this
0x4B7C62: call    TESObjectCELL_GetWorldSpace
0x4B7C67: mov     edi, eax
0x4B7C69: jmp     short loc_4B7C6D
0x4B7C6B: xor     edi, edi
0x4B7C6D: mov     ecx, esi; this
0x4B7C6F: call    TESObjectCELL_GetWorldSpace
0x4B7C74: test    edi, edi
0x4B7C76: jz      short loc_4B7C92
0x4B7C78: test    eax, eax
0x4B7C7A: jz      short loc_4B7C92
0x4B7C7C: cmp     edi, eax
0x4B7C7E: jz      short loc_4B7C92
0x4B7C80: test    byte ptr [ebx+64h], 1
0x4B7C84: jnz     short loc_4B7C92
0x4B7C86: call    Sky_CreateOrGetGlobalObject
0x4B7C8B: mov     dword ptr [eax+1Ch], 0
0x4B7C92: mov     ecx, ebp
0x4B7C94: call    sub_42B430
0x4B7C99: mov     ecx, ebp
0x4B7C9B: mov     edi, eax
0x4B7C9D: call    sub_6899C0
0x4B7CA2: mov     edx, [edi]
0x4B7CA4: push    0; char
0x4B7CA6: push    esi; int
0x4B7CA7: sub     esp, 0Ch
0x4B7CAA: mov     ecx, esp
0x4B7CAC: mov     [ecx], edx
0x4B7CAE: mov     edx, [edi+4]
0x4B7CB1: mov     [ecx+4], edx
0x4B7CB4: mov     edx, [edi+8]
0x4B7CB7: mov     [ecx+8], edx
0x4B7CBA: mov     edx, [eax]
0x4B7CBC: sub     esp, 0Ch
0x4B7CBF: mov     ecx, esp
0x4B7CC1: mov     [ecx], edx
0x4B7CC3: mov     edx, [eax+4]
0x4B7CC6: mov     eax, [eax+8]
0x4B7CC9: mov     [ecx+4], edx
0x4B7CCC: mov     [ecx+8], eax
0x4B7CCF: mov     ecx, ds:0B333C4h; int
0x4B7CD5: call    sub_66EAF0
0x4B7CDA: mov     ecx, ebx
0x4B7CDC: call    sub_4B7720
0x4B7CE1: test    esi, esi
0x4B7CE3: jz      short loc_4B7CF7
0x4B7CE5: mov     ecx, esi; this
0x4B7CE7: call    TESObjectCELL_IsInterior
0x4B7CEC: test    al, al
0x4B7CEE: jz      short loc_4B7CF7
0x4B7CF0: mov     ecx, esi
0x4B7CF2: call    sub_4CB040
0x4B7CF7: cmp     dword ptr [ebx+5Ch], 0
0x4B7CFB: jz      short loc_4B7D5E
0x4B7CFD: mov     ecx, ebp
0x4B7CFF: call    sub_42B410
0x4B7D04: test    eax, eax
0x4B7D06: jz      short loc_4B7D5E
0x4B7D08: mov     ecx, ebp
0x4B7D0A: call    sub_42B410
0x4B7D0F: mov     edx, [eax]
0x4B7D11: mov     ecx, eax
0x4B7D13: mov     eax, [edx+154h]
0x4B7D19: call    eax
0x4B7D1B: test    eax, eax
0x4B7D1D: jz      short loc_4B7D5E
0x4B7D1F: mov     ecx, ds:0B33398h
0x4B7D25: mov     ecx, [ecx+24h]
0x4B7D28: test    ecx, ecx
0x4B7D2A: jz      short loc_4B7D5E
0x4B7D2C: mov     edx, [ebx+5Ch]
0x4B7D2F: mov     eax, [edx+0Ch]
0x4B7D32: push    0
0x4B7D34: push    121h
0x4B7D39: push    eax
0x4B7D3A: call    OSGLobals_PlaySound
0x4B7D3F: mov     esi, eax
0x4B7D41: test    esi, esi
0x4B7D43: jz      short loc_4B7D5E
0x4B7D45: push    0
0x4B7D47: mov     ecx, esi
0x4B7D49: call    sub_6B7190
0x4B7D4E: mov     ecx, esi; this
0x4B7D50: call    sub_6B73E0
0x4B7D55: push    esi
0x4B7D56: call    FormHeapFree
0x4B7D5B: add     esp, 4
0x4B7D5E: mov     ecx, ds:0B333C4h; this
0x4B7D64: call    TESObjectREFR_GetParentCell
0x4B7D69: cmp     byte ptr ds:0B13230h, 0
0x4B7D70: jz      short loc_4B7D9F
0x4B7D72: cmp     byte ptr ds:0B13228h, 0
0x4B7D79: jz      short loc_4B7D9F
0x4B7D7B: cmp     [esp+1Ch+var_4], 0
0x4B7D80: jz      short loc_4B7D9F
0x4B7D82: test    eax, eax
0x4B7D84: jz      short loc_4B7D9F
0x4B7D86: mov     ecx, eax; this
0x4B7D88: call    TESObjectCELL_IsInterior
0x4B7D8D: cmp     byte ptr [esp+1Ch+arg_0], al
0x4B7D91: jz      short loc_4B7D9F
0x4B7D93: mov     eax, ds:0B33B00h
0x4B7D98: or      dword ptr [eax+18h], 8000h
0x4B7D9F: pop     edi
0x4B7DA0: pop     esi
0x4B7DA1: pop     ebp
0x4B7DA2: pop     ebx
0x4B7DA3: add     esp, 0Ch
0x4B7DA6: retn    4
