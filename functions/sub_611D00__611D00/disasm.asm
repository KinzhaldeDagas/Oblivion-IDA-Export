0x611D00: sub     esp, 8
0x611D03: push    esi
0x611D04: mov     esi, ecx
0x611D06: call    TESObjectREFR_GetScale
0x611D0B: fstp    [esp+0Ch+var_8]
0x611D0F: mov     eax, [esi]
0x611D11: mov     edx, [eax+170h]
0x611D17: mov     ecx, esi
0x611D19: call    edx
0x611D1B: test    eax, eax
0x611D1D: jz      short loc_611D61
0x611D1F: mov     esi, [eax+0E8h]
0x611D25: test    esi, esi
0x611D27: jz      short loc_611D61
0x611D29: mov     ecx, eax
0x611D2B: call    TESActorBase_IsFemale
0x611D30: cmp     eax, 1
0x611D33: ja      short loc_611D4F
0x611D35: fld     dword ptr [esi+eax*4+60h]
0x611D39: pop     esi
0x611D3A: fstp    [esp+8+var_4]
0x611D3E: fld     [esp+8+var_4]
0x611D42: fmul    [esp+8+var_8]
0x611D45: fstp    [esp+8+var_8]
0x611D48: fld     [esp+8+var_8]
0x611D4B: add     esp, 8
0x611D4E: retn
0x611D4F: fldz
0x611D51: fstp    [esp+0Ch+var_4]
0x611D55: fld     [esp+0Ch+var_4]
0x611D59: fmul    [esp+0Ch+var_8]
0x611D5D: fstp    [esp+0Ch+var_8]
0x611D61: fld     [esp+0Ch+var_8]
0x611D65: pop     esi
0x611D66: add     esp, 8
0x611D69: retn
