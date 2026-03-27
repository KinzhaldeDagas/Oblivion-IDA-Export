0x57C980: push    0FFFFFFFFh
0x57C982: push    offset SEH_596FE0
0x57C987: mov     eax, large fs:0
0x57C98D: push    eax
0x57C98E: sub     esp, 0Ch
0x57C991: push    esi
0x57C992: push    edi
0x57C993: mov     eax, ds:0B30AACh
0x57C998: xor     eax, esp
0x57C99A: push    eax
0x57C99B: lea     eax, [esp+24h+var_C]
0x57C99F: mov     large fs:0, eax
0x57C9A5: push    1; arg1
0x57C9A7: push    0; canCreate
0x57C9A9: call    InterfaceManager_GetSingleton
0x57C9AE: add     esp, 8
0x57C9B1: test    eax, eax
0x57C9B3: jz      loc_57CAAE
0x57C9B9: push    1; arg1
0x57C9BB: push    0; canCreate
0x57C9BD: call    InterfaceManager_GetSingleton
0x57C9C2: add     esp, 8
0x57C9C5: cmp     dword ptr [eax+1Ch], 0
0x57C9C9: jz      loc_57CAAE
0x57C9CF: push    1; arg1
0x57C9D1: push    0; canCreate
0x57C9D3: call    InterfaceManager_GetSingleton
0x57C9D8: add     esp, 8
0x57C9DB: cmp     dword ptr [eax+68h], 0
0x57C9DF: jz      loc_57CAAE
0x57C9E5: push    1; arg1
0x57C9E7: push    0; canCreate
0x57C9E9: call    InterfaceManager_GetSingleton
0x57C9EE: mov     eax, [eax+68h]
0x57C9F1: add     esp, 8
0x57C9F4: push    0FAEh
0x57C9F9: mov     ecx, eax
0x57C9FB: call    Tile_GetFloat
0x57CA00: fcomp   dword ptr ds:0A379B4h
0x57CA06: fnstsw  ax
0x57CA08: test    ah, 44h
0x57CA0B: jp      loc_57CAAE
0x57CA11: xor     edi, edi
0x57CA13: mov     [esp+24h+var_14], edi
0x57CA17: mov     [esp+24h+var_10], di
0x57CA1C: mov     [esp+24h+var_E], di
0x57CA21: mov     esi, [esp+24h+arg_0]
0x57CA25: test    esi, esi
0x57CA27: mov     [esp+24h+var_4], edi
0x57CA2B: jz      short loc_57CA91
0x57CA2D: mov     eax, [esi+0Ch]
0x57CA30: push    eax
0x57CA31: mov     ecx, esi; this
0x57CA33: call    TESObjectREFR_GetName
0x57CA38: push    eax; ArgList
0x57CA39: lea     eax, [esp+2Ch+var_14]
0x57CA3D: push    offset aS08x_0; "\"%s\" (%08x)"
0x57CA42: push    eax; int
0x57CA43: call    BSStringT_Static_Format
0x57CA48: fld     dword ptr ds:0A30634h
0x57CA4E: add     esp, 10h
0x57CA51: push    edi; int
0x57CA52: mov     edi, [esp+28h+var_14]
0x57CA56: push    ecx
0x57CA57: mov     ecx, ds:0B02E1Ch
0x57CA5D: fstp    [esp+2Ch+var_2C]; float
0x57CA60: push    0FFFFFFFFh; int
0x57CA62: add     ecx, 14h
0x57CA65: mov     [esp+30h+var_18], ecx
0x57CA69: fild    [esp+30h+var_18]
0x57CA6D: push    2; int
0x57CA6F: sub     esp, 8
0x57CA72: fstp    [esp+3Ch+var_38]; float
0x57CA76: fld     dword ptr ds:0A4D6FCh
0x57CA7C: fstp    [esp+3Ch+var_3C]; float
0x57CA7F: push    edi; int
0x57CA80: push    1
0x57CA82: call    sub_571F90
0x57CA87: add     esp, 4
0x57CA8A: mov     ecx, eax
0x57CA8C: call    sub_5723E0
0x57CA91: push    esi
0x57CA92: push    1; arg1
0x57CA94: push    0; canCreate
0x57CA96: call    InterfaceManager_GetSingleton
0x57CA9B: add     esp, 8
0x57CA9E: mov     ecx, eax
0x57CAA0: call    sub_57CF50
0x57CAA5: push    edi
0x57CAA6: call    FormHeapFree
0x57CAAB: add     esp, 4
0x57CAAE: mov     ecx, [esp+24h+var_C]
0x57CAB2: mov     large fs:0, ecx
0x57CAB9: pop     ecx
0x57CABA: pop     edi
0x57CABB: pop     esi
0x57CABC: add     esp, 18h
0x57CABF: retn
