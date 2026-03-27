0x4BEE70: push    esi
0x4BEE71: push    edi
0x4BEE72: mov     esi, ecx
0x4BEE74: push    0; a3
0x4BEE76: push    offset aSkySun_dds; "Sky\\Sun.dds"
0x4BEE7B: lea     ecx, [esi+3Ch]; this
0x4BEE7E: call    BSStringT_Set
0x4BEE83: push    0; a3
0x4BEE85: push    offset aSkySunglare_dd; "Sky\\SunGlare.dds"
0x4BEE8A: lea     ecx, [esi+48h]; this
0x4BEE8D: call    BSStringT_Set
0x4BEE92: mov     eax, [esi+18h]
0x4BEE95: mov     edx, [eax+18h]
0x4BEE98: lea     ecx, [esi+18h]
0x4BEE9B: push    offset aSkyStars_nif; "Sky\\Stars.nif"
0x4BEEA0: call    edx
0x4BEEA2: mov     byte ptr [esi+50h], 24h ; '$'
0x4BEEA6: mov     byte ptr [esi+51h], 2Ah ; '*'
0x4BEEAA: mov     byte ptr [esi+52h], 6Ch ; 'l'
0x4BEEAE: mov     byte ptr [esi+53h], 72h ; 'r'
0x4BEEB2: mov     byte ptr [esi+54h], 0
0x4BEEB6: mov     byte ptr [esi+55h], 0C3h ; 'Ã'
0x4BEEBA: add     esi, 30h ; '0'
0x4BEEBD: cmp     dword ptr [esi+4], 0
0x4BEEC1: jz      short loc_4BEED9
0x4BEEC3: mov     eax, [esi+4]
0x4BEEC6: mov     edi, [eax+4]
0x4BEEC9: push    eax
0x4BEECA: call    FormHeapFree
0x4BEECF: add     esp, 4
0x4BEED2: test    edi, edi
0x4BEED4: mov     [esi+4], edi
0x4BEED7: jnz     short loc_4BEEC3
0x4BEED9: push    8; Size
0x4BEEDB: mov     dword ptr [esi], 0
0x4BEEE1: call    FormHeapAlloc
0x4BEEE6: add     esp, 4
0x4BEEE9: push    0; int
0x4BEEEB: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x4BEEF0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BEEF5: push    0; int
0x4BEEF7: push    15Eh; a1
0x4BEEFC: mov     edi, eax
0x4BEEFE: call    TESForm_LookupByFormID
0x4BEF03: add     esp, 4
0x4BEF06: push    eax; void *
0x4BEF07: call    OblivionDynamicCast
0x4BEF0C: add     esp, 14h
0x4BEF0F: test    eax, eax
0x4BEF11: mov     [edi], eax
0x4BEF13: mov     dword ptr [edi+4], 64h ; 'd'
0x4BEF1A: push    edi; ArgList
0x4BEF1B: jz      short loc_4BEF27
0x4BEF1D: mov     ecx, esi
0x4BEF1F: call    BSSimpleList_PushFront
0x4BEF24: pop     edi
0x4BEF25: pop     esi
0x4BEF26: retn
0x4BEF27: call    FormHeapFree
0x4BEF2C: push    offset aUnableToAddDef; "Unable to add default weather to defaul"...
0x4BEF31: call    PrintError
0x4BEF36: add     esp, 8
0x4BEF39: pop     edi
0x4BEF3A: pop     esi
0x4BEF3B: retn
