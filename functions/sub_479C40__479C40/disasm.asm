0x479C40: push    0FFFFFFFFh
0x479C42: push    offset SEH_479F80
0x479C47: mov     eax, large fs:0
0x479C4D: push    eax
0x479C4E: sub     esp, 28h
0x479C51: push    ebx
0x479C52: push    ebp
0x479C53: push    esi
0x479C54: push    edi
0x479C55: mov     eax, ds:0B30AACh
0x479C5A: xor     eax, esp
0x479C5C: push    eax
0x479C5D: lea     eax, [esp+48h+var_C]
0x479C61: mov     large fs:0, eax
0x479C67: mov     edi, ecx
0x479C69: mov     [esp+48h+Src], edi
0x479C6D: mov     esi, [esp+48h+arg_0]
0x479C71: xor     ebp, ebp
0x479C73: cmp     esi, ebp
0x479C75: jz      loc_479F60
0x479C7B: cmp     byte ptr [esi+4], 22h ; '"'
0x479C7F: jnz     loc_479F60
0x479C85: push    ebp
0x479C86: push    1
0x479C88: lea     ebx, [edi+10Ch]
0x479C8E: push    ebx
0x479C8F: call    sub_478780
0x479C94: cmp     byte ptr [esi+4], 22h ; '"'
0x479C98: jnz     short loc_479CB0
0x479C9A: push    ebp
0x479C9B: push    1
0x479C9D: push    ebx
0x479C9E: mov     ecx, edi
0x479CA0: call    sub_478780
0x479CA5: mov     [ebx], esi
0x479CA7: add     esi, 30h ; '0'
0x479CAA: mov     [edi+110h], esi
0x479CB0: mov     eax, [edi+110h]
0x479CB6: cmp     eax, ebp
0x479CB8: jz      loc_479F60
0x479CBE: mov     esi, [edi+150h]
0x479CC4: mov     ecx, ds:0B333C4h
0x479CCA: cmp     esi, ecx
0x479CCC: jnz     short loc_479D03
0x479CCE: push    edi
0x479CCF: mov     esi, eax
0x479CD1: call    sub_65D770
0x479CD6: mov     ecx, ds:0B333C4h
0x479CDC: push    eax
0x479CDD: call    PlayerCharacter_GetPlayerNode
0x479CE2: mov     edx, [esi]
0x479CE4: push    eax
0x479CE5: mov     eax, [edi+150h]
0x479CEB: push    eax
0x479CEC: mov     eax, [edx+14h]
0x479CEF: push    0Ch
0x479CF1: mov     ecx, esi
0x479CF3: call    eax
0x479CF5: push    eax
0x479CF6: call    sub_479450
0x479CFB: add     esp, 10h
0x479CFE: jmp     loc_479EFD
0x479D03: mov     edx, [eax]
0x479D05: mov     ecx, eax
0x479D07: mov     eax, [edx+14h]
0x479D0A: call    eax
0x479D0C: cmp     eax, ebp
0x479D0E: jz      loc_479EFB
0x479D14: cmp     esi, ebp
0x479D16: jz      loc_479EFB
0x479D1C: mov     esi, [esi+3Ch]
0x479D1F: cmp     esi, ebp
0x479D21: mov     [esp+48h+a1], esi
0x479D25: jz      loc_479EFB
0x479D2B: mov     ecx, ds:0B33A1Ch
0x479D31: push    1
0x479D33: push    3
0x479D35: push    1
0x479D37: push    eax
0x479D38: call    sub_439EB0
0x479D3D: lea     ecx, [esp+48h+var_28]
0x479D41: mov     ebx, eax
0x479D43: call    sub_478B90
0x479D48: fld1
0x479D4A: fst     [esp+48h+var_10]
0x479D4E: fst     [esp+48h+var_14]
0x479D52: fstp    [esp+48h+var_18]
0x479D56: xor     esi, esi
0x479D58: mov     [esp+48h+var_4], ebp
0x479D5C: mov     [esp+48h+arg_0], esi
0x479D60: push    ebx
0x479D61: mov     byte ptr [esp+4Ch+var_4], 1
0x479D66: call    sub_480820
0x479D6B: add     esp, 4
0x479D6E: test    al, al
0x479D70: jz      short loc_479D95
0x479D72: lea     ecx, [esp+48h+var_28]
0x479D76: push    ecx
0x479D77: mov     ecx, ds:0B333A0h
0x479D7D: push    ebx
0x479D7E: call    sub_4430C0
0x479D83: push    eax; a2
0x479D84: lea     ecx, [esp+4Ch+arg_0]; this
0x479D88: call    NiSmartPointer_Set??
0x479D8D: mov     ebp, [esp+48h+arg_0]
0x479D91: mov     esi, ebp
0x479D93: jmp     short loc_479DA3
0x479D95: lea     edx, [esp+48h+var_28]
0x479D99: push    edx
0x479D9A: mov     ecx, ebx
0x479D9C: call    sub_700610
0x479DA1: mov     ebp, eax
0x479DA3: push    offset dword_A7D0EC
0x479DA8: mov     ecx, ebx
0x479DAA: call    NiObjectNET_GetExtraData
0x479DAF: test    eax, eax
0x479DB1: jz      short loc_479DC6
0x479DB3: mov     eax, [eax+0Ch]
0x479DB6: shr     eax, 4
0x479DB9: test    al, 1
0x479DBB: jz      short loc_479DC6
0x479DBD: push    ebp
0x479DBE: call    sub_4E26F0
0x479DC3: add     esp, 4
0x479DC6: mov     ecx, ebp
0x479DC8: call    sub_6FFC60
0x479DCD: test    ebp, ebp
0x479DCF: jz      loc_479EAC
0x479DD5: push    ebp
0x479DD6: push    offset dword_B35288
0x479DDB: call    NiRTTI__IsObjectOfRTTIType
0x479DE0: add     esp, 8
0x479DE3: test    al, al
0x479DE5: jz      short loc_479DF0
0x479DE7: push    7
0x479DE9: mov     ecx, ebp
0x479DEB: call    sub_4A01B0
0x479DF0: mov     ecx, ds:0B3F9A8h
0x479DF6: mov     [ebp+54h], ecx
0x479DF9: mov     edx, ds:0B3F9ACh
0x479DFF: mov     [ebp+58h], edx
0x479E02: mov     eax, ds:0B3F9B0h
0x479E07: mov     [ebp+5Ch], eax
0x479E0A: lea     edi, [ebp+30h]
0x479E0D: mov     ecx, 9
0x479E12: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x479E17: push    ebp
0x479E18: rep movsd
0x479E1A: call    sub_471B80
0x479E1F: add     esp, 4
0x479E22: test    al, al
0x479E24: jz      short loc_479E39
0x479E26: mov     eax, [ebp+8]
0x479E29: push    eax; ArgList
0x479E2A: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x479E2F: call    PrintError
0x479E34: add     esp, 8
0x479E37: jmp     short loc_479E96
0x479E39: mov     esi, [esp+48h+a1]
0x479E3D: push    0
0x479E3F: push    0FFFFFFFFh
0x479E41: push    0
0x479E43: push    ebx
0x479E44: push    ebp
0x479E45: push    esi
0x479E46: call    sub_479140
0x479E4B: mov     edx, [ebp+0]
0x479E4E: mov     eax, [edx+8]
0x479E51: add     esp, 18h
0x479E54: mov     ecx, ebp
0x479E56: call    eax
0x479E58: test    eax, eax
0x479E5A: jz      short loc_479E96
0x479E5C: cmp     dword ptr [ebp+1Ch], 0
0x479E60: jnz     short loc_479E96
0x479E62: mov     eax, ds:0B065F8h
0x479E67: cmp     eax, 0FFFFFFFFh
0x479E6A: jz      short loc_479E87
0x479E6C: mov     ecx, ds:0B06550h[eax*4]
0x479E73: push    ecx; a2
0x479E74: push    esi; a1
0x479E75: call    NiObjectNET_LookupObjectByName
0x479E7A: add     esp, 8
0x479E7D: test    eax, eax
0x479E7F: jz      short loc_479E87
0x479E81: mov     edx, [eax]
0x479E83: mov     ecx, eax
0x479E85: jmp     short loc_479E8B
0x479E87: mov     edx, [esi]
0x479E89: mov     ecx, esi
0x479E8B: mov     eax, [edx+84h]
0x479E91: push    1
0x479E93: push    ebp
0x479E94: call    eax
0x479E96: mov     ecx, ebp
0x479E98: call    NiNode_UpdateDynamicEffectState
0x479E9D: mov     ecx, ebp; this
0x479E9F: call    NiAVObject_InitializePropertyState
0x479EA4: mov     esi, [esp+48h+arg_0]
0x479EA8: mov     edi, [esp+48h+Src]
0x479EAC: test    esi, esi
0x479EAE: mov     byte ptr [esp+48h+var_4], 0
0x479EB3: jz      short loc_479ECD
0x479EB5: lea     ecx, [esi+4]
0x479EB8: push    ecx; lpAddend
0x479EB9: call    dword ptr ds:0A2807Ch
0x479EBF: test    eax, eax
0x479EC1: jnz     short loc_479ECD
0x479EC3: mov     edx, [esi]
0x479EC5: mov     eax, [edx]
0x479EC7: push    1
0x479EC9: mov     ecx, esi
0x479ECB: call    eax
0x479ECD: mov     ecx, [esp+48h+var_28]
0x479ED1: test    ecx, ecx
0x479ED3: mov     [esp+48h+var_4], 0FFFFFFFFh
0x479EDB: jz      short loc_479EE5
0x479EDD: mov     edx, [ecx]
0x479EDF: mov     eax, [edx]
0x479EE1: push    1
0x479EE3: call    eax
0x479EE5: mov     ecx, [esp+48h+var_24]
0x479EE9: test    ecx, ecx
0x479EEB: jz      short loc_479EF5
0x479EED: mov     edx, [ecx]
0x479EEF: mov     eax, [edx]
0x479EF1: push    1
0x479EF3: call    eax
0x479EF5: mov     eax, ebp
0x479EF7: xor     ebp, ebp
0x479EF9: jmp     short loc_479EFD
0x479EFB: xor     eax, eax
0x479EFD: mov     [edi+114h], eax
0x479F03: mov     [esp+48h+Src], ebp
0x479F07: mov     [esp+48h+var_2C], bp
0x479F0C: mov     [esp+48h+var_2A], bp
0x479F11: mov     ecx, [edi+10Ch]
0x479F17: mov     eax, [ecx+0Ch]
0x479F1A: mov     edx, [ecx]
0x479F1C: push    eax
0x479F1D: mov     eax, [edx+0D4h]
0x479F23: mov     [esp+4Ch+var_4], 2
0x479F2B: call    eax
0x479F2D: mov     ecx, ds:0B065B8h
0x479F33: push    eax
0x479F34: push    ecx; ArgList
0x479F35: lea     edx, [esp+54h+Src]
0x479F39: push    offset aSS08x; "%s %s (%08X)"
0x479F3E: push    edx; int
0x479F3F: call    BSStringT_Static_Format
0x479F44: mov     esi, [esp+5Ch+Src]
0x479F48: mov     ecx, [edi+114h]
0x479F4E: add     esp, 14h
0x479F51: push    esi; Src
0x479F52: call    NiObjectNET_SetName
0x479F57: push    esi
0x479F58: call    FormHeapFree
0x479F5D: add     esp, 4
0x479F60: mov     ecx, [esp+48h+var_C]
0x479F64: mov     large fs:0, ecx
0x479F6B: pop     ecx
0x479F6C: pop     edi
0x479F6D: pop     esi
0x479F6E: pop     ebp
0x479F6F: pop     ebx
0x479F70: add     esp, 34h
0x479F73: retn    4
