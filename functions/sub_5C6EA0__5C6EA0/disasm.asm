0x5C6EA0: push    0FFFFFFFFh
0x5C6EA2: push    offset SEH_5C6EA0
0x5C6EA7: mov     eax, large fs:0
0x5C6EAD: push    eax
0x5C6EAE: sub     esp, 0Ch
0x5C6EB1: push    ebx
0x5C6EB2: push    ebp
0x5C6EB3: push    esi; a3
0x5C6EB4: push    edi; a3
0x5C6EB5: mov     eax, ds:0B30AACh
0x5C6EBA: xor     eax, esp
0x5C6EBC: push    eax; a3
0x5C6EBD: lea     eax, [esp+2Ch+var_C]
0x5C6EC1: mov     large fs:0, eax
0x5C6EC7: mov     ebp, ecx
0x5C6EC9: mov     ecx, ds:0B333C4h
0x5C6ECF: mov     eax, [ecx]
0x5C6ED1: mov     edx, [eax+170h]
0x5C6ED7: call    edx
0x5C6ED9: mov     ebx, eax
0x5C6EDB: mov     esi, [ebx+0E8h]
0x5C6EE1: mov     ecx, ebx
0x5C6EE3: call    TESActorBase_IsFemale
0x5C6EE8: push    eax
0x5C6EE9: mov     ecx, esi
0x5C6EEB: call    sub_52B490
0x5C6EF0: test    eax, eax
0x5C6EF2: jz      short loc_5C6F0F
0x5C6EF4: mov     esi, [ebx+0E8h]
0x5C6EFA: mov     ecx, ebx
0x5C6EFC: call    TESActorBase_IsFemale
0x5C6F01: push    eax; int
0x5C6F02: mov     ecx, esi
0x5C6F04: call    sub_52B490
0x5C6F09: mov     [ebx+1C8h], eax
0x5C6F0F: mov     eax, [ebx+0E8h]
0x5C6F15: mov     al, [eax+9Ch]
0x5C6F1B: sub     esp, 8
0x5C6F1E: mov     ecx, esp; this
0x5C6F20: xor     edi, edi
0x5C6F22: mov     [esp+34h+var_14], esp
0x5C6F26: mov     [esp+34h+var_15], al
0x5C6F2A: mov     eax, ds:0B39330h
0x5C6F2F: push    edi; a3
0x5C6F30: push    eax; a2
0x5C6F31: mov     [ecx], edi
0x5C6F33: mov     [ecx+4], di
0x5C6F37: mov     [ecx+6], di
0x5C6F3B: call    BSStringT_Set
0x5C6F40: mov     eax, ds:0B38F88h
0x5C6F45: sub     esp, 8
0x5C6F48: mov     ecx, esp; this
0x5C6F4A: mov     [esp+3Ch+var_10], esp
0x5C6F4E: push    edi; a3
0x5C6F4F: push    eax; a2
0x5C6F50: mov     [esp+44h+var_4], edi
0x5C6F54: mov     [ecx], edi
0x5C6F56: mov     [ecx+4], di
0x5C6F5A: mov     [ecx+6], di
0x5C6F5E: call    BSStringT_Set
0x5C6F63: mov     ecx, ebp
0x5C6F65: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x5C6F6D: call    sub_5C3440
0x5C6F72: mov     esi, eax
0x5C6F74: push    0FAEh
0x5C6F79: mov     ecx, esi
0x5C6F7B: call    Tile_GetFloat
0x5C6F80: fchs
0x5C6F82: push    ecx
0x5C6F83: fstp    [esp+30h+a2]; a3
0x5C6F86: push    0FB1h; a2
0x5C6F8B: mov     ecx, esi; this
0x5C6F8D: call    Tile_SetFloat
0x5C6F92: movsx   ecx, [esp+2Ch+var_15]
0x5C6F97: mov     [esp+2Ch+var_14], ecx
0x5C6F9B: push    ecx
0x5C6F9C: fild    [esp+30h+var_14]
0x5C6FA0: mov     ecx, esi; this
0x5C6FA2: fstp    [esp+30h+a2]; a3
0x5C6FA5: push    0FB1h; a2
0x5C6FAA: call    Tile_SetFloat
0x5C6FAF: fldz
0x5C6FB1: push    ecx
0x5C6FB2: fstp    [esp+30h+a2]; a3
0x5C6FB5: push    0FB1h; a2
0x5C6FBA: mov     ecx, esi; this
0x5C6FBC: call    Tile_SetFloat
0x5C6FC1: mov     ebx, [ebx+0E8h]
0x5C6FC7: mov     dl, [ebx+9Ch]
0x5C6FCD: mov     byte ptr [esp+2Ch+var_14], dl
0x5C6FD1: mov     eax, [esp+2Ch+var_14]
0x5C6FD5: push    eax
0x5C6FD6: call    sub_52B780
0x5C6FDB: add     esp, 4
0x5C6FDE: push    eax
0x5C6FDF: mov     eax, ds:0B39330h
0x5C6FE4: push    0FB4h
0x5C6FE9: sub     esp, 8
0x5C6FEC: mov     ecx, esp; this
0x5C6FEE: mov     [esp+3Ch+var_10], esp
0x5C6FF2: push    edi; a3
0x5C6FF3: push    eax; a2
0x5C6FF4: mov     [ecx], edi
0x5C6FF6: mov     [ecx+4], di
0x5C6FFA: mov     [ecx+6], di
0x5C6FFE: call    BSStringT_Set
0x5C7003: mov     eax, ds:0B38F88h
0x5C7008: sub     esp, 8
0x5C700B: mov     ecx, esp; this
0x5C700D: mov     [esp+44h+var_4], 1
0x5C7015: mov     [esp+44h+var_14], esp
0x5C7019: mov     [ecx], edi
0x5C701B: mov     [ecx+4], di
0x5C701F: mov     [ecx+6], di
0x5C7023: push    edi; a3
0x5C7024: push    eax; a2
0x5C7025: call    BSStringT_Set
0x5C702A: mov     ecx, ebp
0x5C702C: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5C7034: call    sub_5C3440
0x5C7039: mov     ecx, eax
0x5C703B: call    Tile_SetString
0x5C7040: mov     ecx, ebp
0x5C7042: call    sub_5C5F00
0x5C7047: mov     ecx, ebp
0x5C7049: call    sub_5C34D0
0x5C704E: mov     ecx, [esp+2Ch+var_C]
0x5C7052: mov     large fs:0, ecx
0x5C7059: pop     ecx
0x5C705A: pop     edi
0x5C705B: pop     esi
0x5C705C: pop     ebp
0x5C705D: pop     ebx
0x5C705E: add     esp, 18h
0x5C7061: retn
