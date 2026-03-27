0x6A2C08: cmp     byte ptr ds:0B3355Ch, 0
0x6A2C0F: jz      MagicTarget_AddEffect___Return_1
0x6A2C15: mov     ecx, [esp+arg_14]; this
0x6A2C19: test    ecx, ecx
0x6A2C1B: jz      short loc_6A2C26
0x6A2C1D: call    TESObjectREFR_GetName
0x6A2C22: mov     ebp, eax
0x6A2C24: jmp     short loc_6A2C2B
0x6A2C26: mov     ebp, offset aNull_1; "{NULL}"
0x6A2C2B: mov     ecx, [esi+0Ch]
0x6A2C2E: lea     edx, [esp+arg_20]
0x6A2C32: push    edx
0x6A2C33: call    EffectItem_GetName
0x6A2C38: fld     dword ptr [esi+1Ch]
0x6A2C3B: mov     ecx, [ebx+4]
0x6A2C3E: fstp    [esp+arg_14]
0x6A2C42: test    ecx, ecx
0x6A2C44: fld     dword ptr [esi+18h]
0x6A2C47: mov     edi, [esi+0Ch]
0x6A2C4A: fstp    dword ptr [esp+arg_1C]
0x6A2C4E: mov     [esp+arg_134], 2
0x6A2C59: mov     ebx, ecx
0x6A2C5B: jnz     short loc_6A2C62
0x6A2C5D: mov     ebx, offset EmptyString
0x6A2C62: mov     esi, [eax]
0x6A2C64: mov     ecx, edi
0x6A2C66: call    EffectItem_GetDuration
0x6A2C6B: fld     [esp+arg_14]
0x6A2C6F: push    eax
0x6A2C70: sub     esp, 8
0x6A2C73: mov     ecx, edi
0x6A2C75: fstp    [esp+0Ch+var_10+4]
0x6A2C78: call    EffectItem_GetMagnitude
0x6A2C7D: fld     dword ptr [esp+0Ch+arg_1C]
0x6A2C81: push    eax
0x6A2C82: sub     esp, 8
0x6A2C85: fstp    [esp+18h+var_1C+4]
0x6A2C88: push    ebp
0x6A2C89: push    ebx
0x6A2C8A: push    esi
0x6A2C8B: push    offset aEffectSFromSpe; "Effect %s from spell %s added to %s. Ma"...
0x6A2C90: call    Interface_ConsolePrint
0x6A2C95: add     esp, 28h
0x6A2C98: lea     ecx, [esp+arg_20]; void *
0x6A2C9C: mov     [esp+arg_134], 0FFFFFFFFh
0x6A2CA7: call    BSStringT_Clear
