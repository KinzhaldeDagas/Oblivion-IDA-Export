0x619E2E: test    bl, bl; jumptable 00619DD6 default case
0x619E30: jnz     short loc_619E58
0x619E32: fld     [esp+arg_18]
0x619E36: mov     ecx, ebp
0x619E38: fstp    [esp+arg_C]
0x619E3C: call    sub_615520
0x619E41: fcomp   [esp+arg_C]
0x619E45: fnstsw  ax
0x619E47: test    ah, 5
0x619E4A: jp      short loc_619E58
0x619E4C: mov     dword ptr [edi+4], 0FFFFFFFFh
0x619E53: jmp     loc_619EE4
0x619E58: fld     [esp+arg_18]
0x619E5C: mov     ecx, [ebp+3Ch]; this
0x619E5F: sub     esp, 8
0x619E62: fstp    [esp+8+var_4]
0x619E66: fld     dword ptr [edi+0Ch]
0x619E69: fstp    [esp+8+var_8]; float
0x619E6C: push    0; a2
0x619E6E: call    Actor_GetActorBaseForm
0x619E73: mov     ecx, eax
0x619E75: call    TESActorBase_GetHealth
0x619E7A: mov     [esp+8+arg_18], eax
0x619E7E: fild    [esp+8+arg_18]
0x619E82: mov     eax, [esi]
0x619E84: mov     edx, [eax+284h]
0x619E8A: push    ecx
0x619E8B: fstp    [esp+0Ch+var_C]; float
0x619E8E: push    8; float
0x619E90: mov     ecx, esi
0x619E92: call    edx
0x619E94: mov     [esp+10h+arg_14], eax
0x619E98: fild    [esp+10h+arg_14]
0x619E9C: push    ecx
0x619E9D: mov     ecx, esi
0x619E9F: fstp    [esp+14h+var_14]; float
0x619EA2: push    8
0x619EA4: call    Actor_GetBaseCalcAVf
0x619EA9: push    ecx
0x619EAA: fstp    [esp+18h+var_18]; float
0x619EAD: call    sub_547910
0x619EB2: add     esp, 14h
0x619EB5: call    Double_To_SInt32
0x619EBA: cmp     byte ptr [esp+4+arg_18], 0
0x619EBF: mov     [edi+4], eax
0x619EC2: jz      short loc_619EE4
0x619EC4: mov     ecx, offset unk_B372C0
0x619EC9: mov     byte ptr [edi+8], 0
0x619ECD: mov     [esp+4+arg_18], eax
0x619ED1: call    GameSetting_GetSafeFloatPointer
0x619ED6: fild    [esp+4+arg_18]
0x619EDA: fmul    dword ptr [eax]
0x619EDC: call    Double_To_SInt32
0x619EE1: mov     [edi+4], eax
0x619EE4: mov     ecx, ebp
0x619EE6: call    sub_6135F0
0x619EEB: cmp     eax, esi
0x619EED: jnz     short loc_619F6E
0x619EEF: push    1
0x619EF1: push    0Ch
0x619EF3: push    esi
0x619EF4: mov     ecx, offset ActorProcessManager_ptr
0x619EF9: call    sub_6758E0
0x619EFE: mov     esi, eax
0x619F00: test    esi, esi
0x619F02: jz      short loc_619F6E
0x619F04: mov     ecx, esi
0x619F06: call    BSSimpleList_Count
0x619F0B: mov     ecx, esi
0x619F0D: mov     edi, eax
0x619F0F: call    BSSimpleList_Clear
0x619F14: push    esi
0x619F15: call    FormHeapFree
0x619F1A: add     esp, 4
0x619F1D: cmp     edi, 2
0x619F20: jle     short loc_619F6E
0x619F22: mov     esi, [ebp+40h]
0x619F25: mov     ecx, esi
0x619F27: call    BSSimpleList_Count
0x619F2C: cmp     eax, 1
0x619F2F: jbe     short loc_619F6E
0x619F31: mov     eax, [esi+4]
0x619F34: mov     ecx, [eax]
0x619F36: mov     edx, [ecx+4]
0x619F39: mov     dword ptr [esp+arg_1C], edx
0x619F3D: fild    dword ptr [esp+arg_1C]
0x619F41: fcomp   dword ptr ds:0A30634h
0x619F47: fnstsw  ax
0x619F49: test    ah, 44h
0x619F4C: jnp     short loc_619F6E
0x619F4E: mov     eax, ds:0B36C70h
0x619F53: add     edx, eax
0x619F55: mov     [ecx+4], edx
0x619F58: jmp     short loc_619F6E
0x619F5A: mov     eax, [edi+4]
0x619F5D: cdq
0x619F5E: sub     eax, edx
0x619F60: sar     eax, 1
0x619F62: mov     [edi+4], eax
0x619F65: jmp     short loc_619F6E
0x619F67: mov     dword ptr [edi+4], 0
0x619F6E: cmp     [esp+arg_20], 0
0x619F73: pop     ebx
0x619F74: jz      short loc_619F7D
0x619F76: mov     ecx, ebp
0x619F78: call    sub_619C90
0x619F7D: pop     edi
0x619F7E: pop     esi
0x619F7F: pop     ebp
0x619F80: add     esp, 8
0x619F83: retn    0Ch
