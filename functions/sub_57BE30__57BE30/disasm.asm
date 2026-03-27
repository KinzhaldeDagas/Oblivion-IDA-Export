0x57BE30: sub     esp, 8
0x57BE33: push    ebx
0x57BE34: mov     ebx, 1
0x57BE39: push    ebx; arg1
0x57BE3A: push    0; canCreate
0x57BE3C: call    InterfaceManager_GetSingleton
0x57BE41: add     esp, 8
0x57BE44: test    eax, eax
0x57BE46: jz      short loc_57BE69
0x57BE48: push    ebx; arg1
0x57BE49: push    0; canCreate
0x57BE4B: call    InterfaceManager_GetSingleton
0x57BE50: add     esp, 8
0x57BE53: cmp     dword ptr [eax+1Ch], 0
0x57BE57: jz      short loc_57BE69
0x57BE59: push    ebx; arg1
0x57BE5A: push    0; canCreate
0x57BE5C: call    InterfaceManager_GetSingleton
0x57BE61: mov     al, [eax+0Ah]
0x57BE64: add     esp, 8
0x57BE67: jmp     short loc_57BE6B
0x57BE69: or      al, 0FFh
0x57BE6B: push    ebx; arg1
0x57BE6C: push    0; canCreate
0x57BE6E: mov     [esp+14h+Src], al
0x57BE72: call    InterfaceManager_GetSingleton
0x57BE77: add     esp, 8
0x57BE7A: test    eax, eax
0x57BE7C: jz      short loc_57BE9F
0x57BE7E: push    ebx; arg1
0x57BE7F: push    0; canCreate
0x57BE81: call    InterfaceManager_GetSingleton
0x57BE86: add     esp, 8
0x57BE89: cmp     dword ptr [eax+1Ch], 0
0x57BE8D: jz      short loc_57BE9F
0x57BE8F: push    ebx; arg1
0x57BE90: push    0; canCreate
0x57BE92: call    InterfaceManager_GetSingleton
0x57BE97: mov     al, [eax+0Bh]
0x57BE9A: add     esp, 8
0x57BE9D: jmp     short loc_57BEA1
0x57BE9F: or      al, 0FFh
0x57BEA1: push    ebx; arg1
0x57BEA2: push    0; canCreate
0x57BEA4: mov     [esp+14h+var_7], al
0x57BEA8: call    InterfaceManager_GetSingleton
0x57BEAD: add     esp, 8
0x57BEB0: test    eax, eax
0x57BEB2: jz      short loc_57BED5
0x57BEB4: push    ebx; arg1
0x57BEB5: push    0; canCreate
0x57BEB7: call    InterfaceManager_GetSingleton
0x57BEBC: add     esp, 8
0x57BEBF: cmp     dword ptr [eax+1Ch], 0
0x57BEC3: jz      short loc_57BED5
0x57BEC5: push    ebx; arg1
0x57BEC6: push    0; canCreate
0x57BEC8: call    InterfaceManager_GetSingleton
0x57BECD: mov     al, [eax+0Ch]
0x57BED0: add     esp, 8
0x57BED3: jmp     short loc_57BED7
0x57BED5: or      al, 0FFh
0x57BED7: push    ebx; arg1
0x57BED8: push    0; canCreate
0x57BEDA: mov     [esp+14h+var_6], al
0x57BEDE: call    InterfaceManager_GetSingleton
0x57BEE3: add     esp, 8
0x57BEE6: test    eax, eax
0x57BEE8: jz      short loc_57BF0B
0x57BEEA: push    ebx; arg1
0x57BEEB: push    0; canCreate
0x57BEED: call    InterfaceManager_GetSingleton
0x57BEF2: add     esp, 8
0x57BEF5: cmp     dword ptr [eax+1Ch], 0
0x57BEF9: jz      short loc_57BF0B
0x57BEFB: push    ebx; arg1
0x57BEFC: push    0; canCreate
0x57BEFE: call    InterfaceManager_GetSingleton
0x57BF03: mov     al, [eax+0Dh]
0x57BF06: add     esp, 8
0x57BF09: jmp     short loc_57BF0D
0x57BF0B: or      al, 0FFh
0x57BF0D: push    ebx; arg1
0x57BF0E: push    0; canCreate
0x57BF10: mov     [esp+14h+var_5], al
0x57BF14: call    InterfaceManager_GetSingleton
0x57BF19: add     esp, 8
0x57BF1C: test    eax, eax
0x57BF1E: jz      short loc_57BF50
0x57BF20: push    ebx; arg1
0x57BF21: push    0; canCreate
0x57BF23: call    InterfaceManager_GetSingleton
0x57BF28: add     esp, 8
0x57BF2B: cmp     dword ptr [eax+1Ch], 0
0x57BF2F: jz      short loc_57BF50
0x57BF31: push    ebx; arg1
0x57BF32: push    0; canCreate
0x57BF34: call    InterfaceManager_GetSingleton
0x57BF39: mov     ecx, [eax+68h]
0x57BF3C: add     esp, 8
0x57BF3F: push    1771h
0x57BF44: call    Tile_GetFloat
0x57BF49: call    Double_To_SInt32
0x57BF4E: jmp     short loc_57BF53
0x57BF50: or      eax, 0FFFFFFFFh
0x57BF53: cmp     [esp+0Ch+Src], bl
0x57BF57: mov     [esp+0Ch+var_4], eax
0x57BF5B: jge     short loc_57BF61
0x57BF5D: mov     [esp+0Ch+Src], bl
0x57BF61: cmp     [esp+0Ch+var_7], bl
0x57BF65: jge     short loc_57BF6B
0x57BF67: mov     [esp+0Ch+var_7], bl
0x57BF6B: cmp     [esp+0Ch+var_6], bl
0x57BF6F: jge     short loc_57BF75
0x57BF71: mov     [esp+0Ch+var_6], bl
0x57BF75: cmp     [esp+0Ch+var_5], bl
0x57BF79: jge     short loc_57BF7F
0x57BF7B: mov     [esp+0Ch+var_5], bl
0x57BF7F: mov     ecx, ds:0B33B00h
0x57BF85: push    ebx; Size
0x57BF86: lea     eax, [esp+10h+Src]
0x57BF8A: push    eax; Src
0x57BF8B: call    SaveLoad_SaveData
0x57BF90: push    ebx; Size
0x57BF91: lea     ecx, [esp+10h+var_7]
0x57BF95: push    ecx; Src
0x57BF96: mov     ecx, ds:0B33B00h
0x57BF9C: call    SaveLoad_SaveData
0x57BFA1: mov     ecx, ds:0B33B00h
0x57BFA7: push    ebx; Size
0x57BFA8: lea     edx, [esp+10h+var_6]
0x57BFAC: push    edx; Src
0x57BFAD: call    SaveLoad_SaveData
0x57BFB2: mov     ecx, ds:0B33B00h
0x57BFB8: push    ebx; Size
0x57BFB9: lea     eax, [esp+10h+var_5]
0x57BFBD: push    eax; Src
0x57BFBE: call    SaveLoad_SaveData
0x57BFC3: push    4; Size
0x57BFC5: lea     ecx, [esp+10h+var_4]
0x57BFC9: push    ecx; Src
0x57BFCA: mov     ecx, ds:0B33B00h
0x57BFD0: call    SaveLoad_SaveData
0x57BFD5: mov     ecx, ds:0B33B00h
0x57BFDB: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x57BFDF: jb      short loc_57BFEC
0x57BFE1: push    ebx; Size
0x57BFE2: push    offset byte_B14500; Src
0x57BFE7: call    SaveLoad_SaveData
0x57BFEC: pop     ebx
0x57BFED: add     esp, 8
0x57BFF0: retn
