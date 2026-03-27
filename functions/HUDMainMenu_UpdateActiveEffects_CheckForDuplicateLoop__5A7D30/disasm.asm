0x5A7D30: mov     ecx, [esp+a3]
0x5A7D34: mov     eax, [ecx]
0x5A7D36: test    eax, eax
0x5A7D38: jz      short loc_5A7D72
0x5A7D3A: mov     eax, [eax+4]
0x5A7D3D: test    eax, eax
0x5A7D3F: jz      short loc_5A7D72
0x5A7D41: mov     edx, [eax]
0x5A7D43: test    edx, edx
0x5A7D45: jz      short loc_5A7D72
0x5A7D47: mov     edx, [edx+0Ch]
0x5A7D4A: mov     ecx, [ebp+0Ch]
0x5A7D4D: mov     ebx, [edx+1Ch]
0x5A7D50: mov     eax, [ecx+1Ch]
0x5A7D53: mov     ebx, [ebx+98h]
0x5A7D59: cmp     ebx, [eax+98h]
0x5A7D5F: jnz     short loc_5A7D72
0x5A7D61: test    dword ptr [eax+58h], 180000h
0x5A7D68: jz      short loc_5A7D82
0x5A7D6A: mov     edx, [edx+14h]
0x5A7D6D: cmp     edx, [ecx+14h]
0x5A7D70: jz      short loc_5A7D82
0x5A7D72: add     [esp+a3], 4
0x5A7D77: add     esi, 1
0x5A7D7A: cmp     esi, [edi+84h]
0x5A7D80: jb      short HUDMainMenu_UpdateActiveEffects___CheckForDuplicateLoop
0x5A7D82: cmp     [esp+arg_124], 0
0x5A7D8A: jz      short loc_5A7E09
0x5A7D8C: cmp     esi, [edi+84h]
0x5A7D92: jnb     loc_5A7FB7
0x5A7D98: mov     eax, [edi+7Ch]
0x5A7D9B: mov     ecx, [eax+esi*4]
0x5A7D9E: mov     ecx, [ecx+4]
0x5A7DA1: push    ebp
0x5A7DA2: call    BSSimpleList_Remove
0x5A7DA7: mov     edx, [edi+7Ch]
0x5A7DAA: mov     eax, [edx+esi*4]
0x5A7DAD: mov     eax, [eax+4]
0x5A7DB0: cmp     dword ptr [eax+4], 0
0x5A7DB4: jnz     loc_5A7FB7
0x5A7DBA: cmp     dword ptr [eax], 0
0x5A7DBD: jnz     loc_5A7FB7
0x5A7DC3: mov     ecx, edx
0x5A7DC5: mov     esi, [ecx+esi*4]
0x5A7DC8: mov     ecx, [edi+4]
0x5A7DCB: push    0FDBh
0x5A7DD0: call    Tile_GetFloat
0x5A7DD5: mov     ecx, [esi]
0x5A7DD7: sub     esp, 8
0x5A7DDA: fstp    [esp+8+a2]; float
0x5A7DDE: fldz
0x5A7DE0: fstp    [esp+8+var_8]; float
0x5A7DE3: push    0FA7h
0x5A7DE8: call    Tile_GetFloat
0x5A7DED: push    ecx
0x5A7DEE: mov     ecx, [esi]; int
0x5A7DF0: fstp    [esp+0Ch+var_C]; float
0x5A7DF3: push    0FA7h; int
0x5A7DF8: call    sub_589980
0x5A7DFD: add     byte ptr [edi+90h], 1
0x5A7E04: jmp     loc_5A7FB7
0x5A7E09: cmp     esi, [edi+84h]
0x5A7E0F: jnz     loc_5A7ED9
0x5A7E15: cmp     esi, 8
0x5A7E18: jnb     loc_5A7FB7
0x5A7E1E: push    8; Size
0x5A7E20: call    FormHeapAlloc
0x5A7E25: mov     ebx, eax
0x5A7E27: push    8; Size
0x5A7E29: mov     [esp+8+a3], ebx
0x5A7E2D: call    FormHeapAlloc
0x5A7E32: add     esp, 8
0x5A7E35: test    eax, eax
0x5A7E37: jz      short loc_5A7E48
0x5A7E39: mov     dword ptr [eax], 0
0x5A7E3F: mov     dword ptr [eax+4], 0
0x5A7E46: jmp     short loc_5A7E4A
0x5A7E48: xor     eax, eax
0x5A7E4A: push    0
0x5A7E4C: mov     [ebx+4], eax
0x5A7E4F: mov     edx, [edi+50h]
0x5A7E52: push    offset aIcon_template; "icon_template"
0x5A7E57: push    edx
0x5A7E58: mov     ecx, edi
0x5A7E5A: call    Menu_CreateTileFromTemplate
0x5A7E5F: mov     [ebx], eax
0x5A7E61: mov     eax, [ebp+0Ch]
0x5A7E64: mov     eax, [eax+1Ch]
0x5A7E67: add     eax, 44h ; 'D'
0x5A7E6A: mov     eax, [eax+4]
0x5A7E6D: test    eax, eax
0x5A7E6F: jnz     short loc_5A7E76
0x5A7E71: mov     eax, offset EmptyString
0x5A7E76: push    eax
0x5A7E77: push    offset aIcons; "Icons"
0x5A7E7C: lea     ecx, [esp+8+arg_14]
0x5A7E80: push    offset aSS_2; "%s\\%s"
0x5A7E85: push    ecx
0x5A7E86: call    __sprintf
0x5A7E8B: mov     ecx, [ebx]
0x5A7E8D: add     esp, 10h
0x5A7E90: lea     edx, [esp+arg_14]
0x5A7E94: push    edx
0x5A7E95: push    0FE6h
0x5A7E9A: call    Tile_SetString
0x5A7E9F: test    esi, esi
0x5A7EA1: mov     [esp+arg_10], esi
0x5A7EA5: fild    [esp+arg_10]
0x5A7EA9: jge     short loc_5A7EB1
0x5A7EAB: fadd    dword ptr ds:0A2FC78h
0x5A7EB1: push    ecx
0x5A7EB2: mov     ecx, [ebx]; this
0x5A7EB4: fstp    [esp+4+a2]; a3
0x5A7EB7: push    0FAEh; a2
0x5A7EBC: call    Tile_SetFloat
0x5A7EC1: lea     eax, [esp+a3]
0x5A7EC5: push    eax
0x5A7EC6: lea     ecx, [edi+78h]
0x5A7EC9: call    sub_5A6AB0
0x5A7ECE: mov     ecx, [ebx]
0x5A7ED0: push    0; float
0x5A7ED2: mov     esi, eax
0x5A7ED4: call    sub_58FBA0
0x5A7ED9: mov     ecx, [edi+7Ch]
0x5A7EDC: mov     edx, [ecx+esi*4]
0x5A7EDF: mov     ecx, [edx+4]
0x5A7EE2: mov     eax, ecx
0x5A7EE4: test    eax, eax
0x5A7EE6: jz      short loc_5A7EF3
0x5A7EE8: cmp     [eax], ebp
0x5A7EEA: jz      short loc_5A7EFE
0x5A7EEC: mov     eax, [eax+4]
0x5A7EEF: test    eax, eax
0x5A7EF1: jnz     short loc_5A7EE8
0x5A7EF3: push    offset sub_5A63F0
0x5A7EF8: push    ebp
0x5A7EF9: call    BSSimpleList_InsertSorted
0x5A7EFE: mov     eax, [edi+7Ch]
0x5A7F01: mov     ecx, [eax+esi*4]
0x5A7F04: mov     edx, [ecx+4]
0x5A7F07: cmp     ebp, [edx]
0x5A7F09: jnz     loc_5A7FB7
0x5A7F0F: mov     ecx, [ebp+8]
0x5A7F12: mov     eax, [ecx]
0x5A7F14: mov     edx, [eax+18h]
0x5A7F17: call    edx
0x5A7F19: cmp     eax, 1
0x5A7F1C: push    ecx
0x5A7F1D: jnz     short loc_5A7F3C
0x5A7F1F: mov     eax, [edi+7Ch]
0x5A7F22: fld     dword ptr ds:0A30634h
0x5A7F28: mov     ecx, [eax+esi*4]
0x5A7F2B: fstp    [esp-10h+a3]; a3
0x5A7F2E: mov     ecx, [ecx]; this
0x5A7F30: push    0FAFh; a2
0x5A7F35: call    Tile_SetFloat
0x5A7F3A: jmp     short loc_5A7FB7
0x5A7F3C: fld     dword ptr [ebp+1Ch]
0x5A7F3F: mov     edx, [edi+7Ch]
0x5A7F42: fsub    dword ptr [ebp+4]
0x5A7F45: mov     eax, [edx+esi*4]
0x5A7F48: mov     ecx, [eax]; this
0x5A7F4A: fstp    [esp-10h+arg_20]
0x5A7F4E: fld     dword ptr [ebp+1Ch]
0x5A7F51: fstp    [esp-10h+arg_24]
0x5A7F55: fld     [esp-10h+arg_20]
0x5A7F59: fstp    [esp-10h+a3]; a3
0x5A7F5C: push    0FAFh; a2
0x5A7F61: call    Tile_SetFloat
0x5A7F66: mov     ecx, [edi+7Ch]
0x5A7F69: mov     esi, [ecx+esi*4]
0x5A7F6C: mov     edx, [esi]
0x5A7F6E: push    0; int
0x5A7F70: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5A7F75: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A7F7A: push    0; int
0x5A7F7C: push    11h
0x5A7F7E: push    edx
0x5A7F7F: call    sub_5894F0
0x5A7F84: add     esp, 8
0x5A7F87: push    eax; void *
0x5A7F88: call    OblivionDynamicCast
0x5A7F8D: add     esp, 14h
0x5A7F90: test    eax, eax
0x5A7F92: jz      short loc_5A7FB7
0x5A7F94: fld     [esp-14h+arg_20]
0x5A7F98: mov     ecx, [eax+44h]
0x5A7F9B: fdiv    [esp-14h+arg_24]
0x5A7F9F: mov     edx, [ecx+14h]
0x5A7FA2: mov     ecx, [edx+4]
0x5A7FA5: fstp    [esp-14h+arg_24]
0x5A7FA9: fld     [esp-14h+arg_24]
0x5A7FAD: fld1
0x5A7FAF: fsubrp  st(1), st
0x5A7FB1: fmul    dword ptr [ecx+18h]
0x5A7FB4: fstp    dword ptr [eax+58h]
0x5A7FB7: pop     esi
0x5A7FB8: pop     ebx
