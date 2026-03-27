0x5FB9F0: sub     esp, 8
0x5FB9F3: push    ebx
0x5FB9F4: push    ebp
0x5FB9F5: push    esi
0x5FB9F6: mov     esi, ecx
0x5FB9F8: mov     eax, [esi]
0x5FB9FA: mov     edx, [eax+170h]
0x5FBA00: push    edi
0x5FBA01: xor     ebp, ebp
0x5FBA03: xor     ebx, ebx
0x5FBA05: call    edx
0x5FBA07: mov     edi, eax
0x5FBA09: test    edi, edi
0x5FBA0B: jz      short loc_5FBA1F
0x5FBA0D: mov     eax, [esi]
0x5FBA0F: mov     edx, [eax+190h]
0x5FBA15: mov     ecx, esi
0x5FBA17: call    edx
0x5FBA19: test    al, al
0x5FBA1B: jz      short loc_5FBA1F
0x5FBA1D: mov     ebx, edi
0x5FBA1F: mov     ecx, ebx
0x5FBA21: call    TESActorBase_CanUseWeaponAndShield
0x5FBA26: test    al, al
0x5FBA28: jz      loc_5FBAF5
0x5FBA2E: lea     ecx, [esi+44h]; this
0x5FBA31: call    ExtraDataList_GetContainerChanges
0x5FBA36: fldz
0x5FBA38: test    eax, eax
0x5FBA3A: fstp    [esp+18h+var_8]
0x5FBA3E: mov     [esp+18h+var_4], eax
0x5FBA42: jz      short loc_5FBA82
0x5FBA44: mov     eax, [esi]
0x5FBA46: mov     edx, [eax+170h]
0x5FBA4C: mov     ecx, esi
0x5FBA4E: xor     edi, edi
0x5FBA50: call    edx
0x5FBA52: mov     ebx, eax
0x5FBA54: test    ebx, ebx
0x5FBA56: jz      short loc_5FBA6A
0x5FBA58: mov     eax, [esi]
0x5FBA5A: mov     edx, [eax+190h]
0x5FBA60: mov     ecx, esi
0x5FBA62: call    edx
0x5FBA64: test    al, al
0x5FBA66: jz      short loc_5FBA6A
0x5FBA68: mov     edi, ebx
0x5FBA6A: mov     eax, [esp+18h+arg_0]
0x5FBA6E: push    0
0x5FBA70: push    eax
0x5FBA71: lea     ecx, [esp+20h+var_8]
0x5FBA75: push    ecx
0x5FBA76: mov     ecx, [esp+24h+var_4]
0x5FBA7A: push    edi
0x5FBA7B: call    sub_48BDA0
0x5FBA80: mov     ebp, eax
0x5FBA82: mov     ecx, [esi+58h]
0x5FBA85: fld     [esp+18h+var_8]
0x5FBA89: mov     edx, [ecx]
0x5FBA8B: mov     eax, [edx+328h]
0x5FBA91: push    ecx
0x5FBA92: fstp    [esp+1Ch+var_1C]
0x5FBA95: call    eax
0x5FBA97: test    ebp, ebp
0x5FBA99: jz      short loc_5FBAF5
0x5FBA9B: cmp     esi, ds:0B333C4h
0x5FBAA1: jz      short loc_5FBAF5
0x5FBAA3: mov     eax, [ebp+8]
0x5FBAA6: test    eax, eax
0x5FBAA8: jz      short loc_5FBAF5
0x5FBAAA: cmp     byte ptr [eax+4], 21h ; '!'
0x5FBAAE: jnz     short loc_5FBAF5
0x5FBAB0: cmp     byte ptr [eax+90h], 5
0x5FBAB7: jnz     short loc_5FBAF5
0x5FBAB9: mov     ecx, [esi+58h]
0x5FBABC: mov     edx, [ecx]
0x5FBABE: mov     eax, [edx+0F4h]
0x5FBAC4: push    1
0x5FBAC6: call    eax
0x5FBAC8: test    eax, eax
0x5FBACA: jnz     short loc_5FBAF5
0x5FBACC: mov     edx, [esi]
0x5FBACE: mov     eax, [edx+2BCh]
0x5FBAD4: mov     ecx, esi
0x5FBAD6: call    eax
0x5FBAD8: test    eax, eax
0x5FBADA: jz      short loc_5FBAF5
0x5FBADC: mov     edi, [eax+8]
0x5FBADF: push    0
0x5FBAE1: push    1
0x5FBAE3: push    0
0x5FBAE5: mov     ecx, eax
0x5FBAE7: call    TESHealthForm_GetHealth
0x5FBAEC: push    eax
0x5FBAED: push    edi
0x5FBAEE: mov     ecx, esi
0x5FBAF0: call    Actor_EquipItem
0x5FBAF5: pop     edi
0x5FBAF6: pop     esi
0x5FBAF7: mov     eax, ebp
0x5FBAF9: pop     ebp
0x5FBAFA: pop     ebx
0x5FBAFB: add     esp, 8
0x5FBAFE: retn    4
