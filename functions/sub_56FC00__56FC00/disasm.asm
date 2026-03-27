0x56FC00: push    0FFFFFFFFh
0x56FC02: push    offset SEH_56FC00
0x56FC07: mov     eax, large fs:0
0x56FC0D: push    eax
0x56FC0E: sub     esp, 160h
0x56FC14: mov     eax, ds:0B30AACh
0x56FC19: xor     eax, esp
0x56FC1B: mov     [esp+16Ch+var_10], eax
0x56FC22: push    ebx
0x56FC23: push    ebp
0x56FC24: push    esi
0x56FC25: push    edi
0x56FC26: mov     eax, ds:0B30AACh
0x56FC2B: xor     eax, esp
0x56FC2D: push    eax
0x56FC2E: lea     eax, [esp+180h+var_C]
0x56FC35: mov     large fs:0, eax
0x56FC3B: mov     ebx, ecx
0x56FC3D: mov     ecx, ds:0B33B00h
0x56FC43: xor     edi, edi
0x56FC45: mov     dword ptr [esp+180h+var_15C], edi
0x56FC49: mov     [esp+180h+var_144], edi
0x56FC4D: call    sub_45A170
0x56FC52: test    al, al
0x56FC54: jz      loc_56FCF7
0x56FC5A: mov     ecx, ds:0B33B00h
0x56FC60: push    4; Size
0x56FC62: lea     eax, [esp+184h+Dst]
0x56FC66: push    eax; Dst
0x56FC67: call    SaveLoad_LoadData
0x56FC6C: cmp     [esp+180h+Dst], 4B4F4C42h
0x56FC74: jz      short loc_56FCDE
0x56FC76: mov     eax, ds:0B33B00h
0x56FC7B: mov     esi, [eax+80h]
0x56FC81: cmp     esi, edi
0x56FC83: jz      short loc_56FCC2
0x56FC85: mov     ecx, [esi]
0x56FC87: push    ecx; a1
0x56FC88: call    TESForm_LookupByFormID
0x56FC8D: mov     edx, [esi+5]
0x56FC90: movzx   ecx, byte ptr [esi+9]
0x56FC94: add     esp, 4
0x56FC97: push    edx
0x56FC98: mov     edx, [eax]
0x56FC9A: push    ecx
0x56FC9B: mov     ecx, eax
0x56FC9D: mov     eax, [edx+0D4h]
0x56FCA3: call    eax
0x56FCA5: mov     ecx, [esi]
0x56FCA7: push    eax
0x56FCA8: push    ecx
0x56FCA9: push    589h
0x56FCAE: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56FCB3: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x56FCB8: call    PrintError
0x56FCBD: add     esp, 1Ch
0x56FCC0: jmp     short loc_56FCDE
0x56FCC2: movzx   edx, byte ptr [eax+7Ch]
0x56FCC6: push    edx
0x56FCC7: push    589h
0x56FCCC: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56FCD1: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x56FCD6: call    PrintError
0x56FCDB: add     esp, 10h
0x56FCDE: mov     ecx, ds:0B33B00h
0x56FCE4: mov     eax, [ecx+14h]
0x56FCE7: push    2; Size
0x56FCE9: lea     edx, [esp+184h+var_15C]
0x56FCED: push    edx; Dst
0x56FCEE: mov     [esp+188h+var_144], eax
0x56FCF2: call    SaveLoad_LoadData
0x56FCF7: mov     ecx, ebx
0x56FCF9: call    sub_56BCA0
0x56FCFE: push    4Ch ; 'L'; Size
0x56FD00: mov     byte ptr [esp+184h+var_16C+3], al
0x56FD04: call    FormHeapAlloc
0x56FD09: add     esp, 4
0x56FD0C: cmp     eax, edi
0x56FD0E: jz      short loc_56FD17
0x56FD10: mov     [eax], edi
0x56FD12: mov     [eax+48h], edi
0x56FD15: jmp     short loc_56FD19
0x56FD17: xor     eax, eax
0x56FD19: mov     [ebx+18h], eax
0x56FD1C: mov     ecx, ds:0B33B00h
0x56FD22: lea     eax, [esp+180h+var_114]
0x56FD26: push    eax; Dst
0x56FD27: call    sub_45A290
0x56FD2C: test    eax, eax
0x56FD2E: jz      short loc_56FD88
0x56FD30: push    edi; char
0x56FD31: push    edi; char
0x56FD32: lea     ecx, [esp+188h+var_114]
0x56FD36: push    ecx; ArgList
0x56FD37: mov     ecx, ds:0B333A0h
0x56FD3D: lea     edx, [esp+18Ch+var_12C]
0x56FD41: push    edx; int
0x56FD42: call    sub_442890
0x56FD47: mov     ecx, [ebx+18h]
0x56FD4A: push    eax
0x56FD4B: mov     [esp+184h+var_4], edi
0x56FD52: call    sub_55E2A0
0x56FD57: mov     eax, [esp+180h+var_12C]
0x56FD5B: cmp     eax, edi
0x56FD5D: mov     [esp+180h+var_4], 0FFFFFFFFh
0x56FD68: jz      short loc_56FD88
0x56FD6A: mov     esi, eax
0x56FD6C: add     eax, 4
0x56FD6F: push    eax; lpAddend
0x56FD70: call    dword ptr ds:0A2807Ch
0x56FD76: test    eax, eax
0x56FD78: jnz     short loc_56FD88
0x56FD7A: cmp     esi, edi
0x56FD7C: jz      short loc_56FD88
0x56FD7E: mov     eax, [esi]
0x56FD80: mov     edx, [eax]
0x56FD82: push    1
0x56FD84: mov     ecx, esi
0x56FD86: call    edx
0x56FD88: mov     eax, [ebx+18h]
0x56FD8B: cmp     [eax], edi
0x56FD8D: jnz     short loc_56FD94
0x56FD8F: mov     [esp+184h+var_16D], 0
0x56FD94: mov     ecx, ds:0B33B00h
0x56FD9A: push    4; Size
0x56FD9C: add     eax, 4
0x56FD9F: push    eax; Dst
0x56FDA0: call    SaveLoad_LoadData
0x56FDA5: mov     ecx, ds:0B33B00h
0x56FDAB: push    10h; Size
0x56FDAD: lea     eax, [esp+188h+var_128]
0x56FDB1: push    eax; Dst
0x56FDB2: call    SaveLoad_LoadData
0x56FDB7: mov     ecx, [ebx+18h]
0x56FDBA: add     ecx, 8
0x56FDBD: push    ecx
0x56FDBE: lea     ecx, [esp+188h+var_128]
0x56FDC2: call    sub_47C600
0x56FDC7: mov     edx, [ebx+18h]
0x56FDCA: mov     ecx, ds:0B33B00h
0x56FDD0: push    0Ch; Size
0x56FDD2: add     edx, 2Ch ; ','
0x56FDD5: push    edx; Dst
0x56FDD6: call    SaveLoad_LoadData
0x56FDDB: mov     eax, [ebx+18h]
0x56FDDE: mov     ecx, ds:0B33B00h
0x56FDE4: push    4; Size
0x56FDE6: add     eax, 38h ; '8'
0x56FDE9: push    eax; Dst
0x56FDEA: call    SaveLoad_LoadData
0x56FDEF: mov     ecx, [ebx+18h]
0x56FDF2: add     ecx, 3Ch ; '<'
0x56FDF5: push    4; Size
0x56FDF7: push    ecx; Dst
0x56FDF8: mov     ecx, ds:0B33B00h
0x56FDFE: call    SaveLoad_LoadFormID
0x56FE03: mov     edx, [ebx+18h]
0x56FE06: mov     ecx, ds:0B33B00h
0x56FE0C: push    4; Size
0x56FE0E: add     edx, 40h ; '@'
0x56FE11: push    edx; Dst
0x56FE12: call    SaveLoad_LoadData
0x56FE17: mov     eax, [ebx+18h]
0x56FE1A: mov     ecx, ds:0B33B00h
0x56FE20: push    1; Size
0x56FE22: add     eax, 44h ; 'D'
0x56FE25: push    eax; Dst
0x56FE26: call    SaveLoad_LoadData
0x56FE2B: push    4; Size
0x56FE2D: lea     ecx, [esp+190h+var_144]
0x56FE31: push    ecx; Dst
0x56FE32: mov     ecx, ds:0B33B00h
0x56FE38: call    SaveLoad_LoadData
0x56FE3D: mov     ecx, ds:0B33B00h
0x56FE43: push    4; Size
0x56FE45: lea     edx, [esp+190h+var_160]
0x56FE49: push    edx; Dst
0x56FE4A: call    SaveLoad_LoadData
0x56FE4F: mov     ecx, ds:0B33B00h
0x56FE55: push    2; Size
0x56FE57: lea     eax, [esp+190h+var_16C]
0x56FE5B: push    eax; Dst
0x56FE5C: call    SaveLoad_LoadData
0x56FE61: push    2; Size
0x56FE63: lea     ecx, [esp+190h+var_148]
0x56FE67: push    ecx; Dst
0x56FE68: mov     ecx, ds:0B33B00h
0x56FE6E: call    SaveLoad_LoadData
0x56FE73: mov     ecx, ds:0B33B00h
0x56FE79: push    2; Size
0x56FE7B: lea     edx, [esp+190h+var_170]
0x56FE7F: push    edx; Dst
0x56FE80: call    SaveLoad_LoadData
0x56FE85: movzx   esi, word ptr [esp+18Ch+var_16C]
0x56FE8A: xor     ecx, ecx
0x56FE8C: mov     eax, esi
0x56FE8E: mov     edx, 0Ch
0x56FE93: mul     edx
0x56FE95: seto    cl
0x56FE98: neg     ecx
0x56FE9A: or      ecx, eax
0x56FE9C: push    ecx; Size
0x56FE9D: call    FormHeapAlloc
0x56FEA2: mov     [esp+190h+var_158], eax
0x56FEA6: movzx   esi, word ptr [esp+190h+var_16C]
0x56FEAB: xor     ecx, ecx
0x56FEAD: mov     eax, esi
0x56FEAF: mov     edx, 0Ch
0x56FEB4: mul     edx
0x56FEB6: seto    cl
0x56FEB9: neg     ecx
0x56FEBB: or      ecx, eax
0x56FEBD: push    ecx; Size
0x56FEBE: call    FormHeapAlloc
0x56FEC3: mov     [esp+194h+var_14C], eax
0x56FEC7: movzx   eax, word ptr [esp+194h+var_148]
0x56FECC: xor     ecx, ecx
0x56FECE: mov     edx, 2
0x56FED3: mul     edx
0x56FED5: seto    cl
0x56FED8: neg     ecx
0x56FEDA: or      ecx, eax
0x56FEDC: push    ecx; Size
0x56FEDD: call    FormHeapAlloc
0x56FEE2: movzx   edi, [esp+198h+var_170]
0x56FEE7: mov     [esp+198h+var_154], eax
0x56FEEB: xor     ecx, ecx
0x56FEED: mov     eax, edi
0x56FEEF: mov     edx, 4Ch ; 'L'
0x56FEF4: mul     edx
0x56FEF6: seto    cl
0x56FEF9: neg     ecx
0x56FEFB: or      ecx, eax
0x56FEFD: push    ecx; Size
0x56FEFE: call    FormHeapAlloc
0x56FF03: mov     esi, eax
0x56FF05: add     esp, 10h
0x56FF08: mov     [esp+18Ch+var_140], esi
0x56FF0C: test    esi, esi
0x56FF0E: mov     [esp+18Ch+var_10], 1
0x56FF19: jz      short loc_56FF2F
0x56FF1B: push    offset sub_72EF90
0x56FF20: push    edi
0x56FF21: push    4Ch ; 'L'
0x56FF23: push    esi
0x56FF24: call    sub_401080
0x56FF29: mov     [esp+18Ch+var_164], esi
0x56FF2D: jmp     short loc_56FF37
0x56FF2F: mov     [esp+18Ch+var_164], 0
0x56FF37: movzx   eax, word ptr [esp+18Ch+var_16C]
0x56FF3C: mov     ecx, [esp+18Ch+var_158]
0x56FF40: lea     eax, [eax+eax*2]
0x56FF43: add     eax, eax
0x56FF45: add     eax, eax
0x56FF47: push    eax; Size
0x56FF48: push    ecx; Dst
0x56FF49: mov     ecx, ds:0B33B00h
0x56FF4F: mov     [esp+194h+var_10], 0FFFFFFFFh
0x56FF5A: call    SaveLoad_LoadData
0x56FF5F: movzx   eax, word ptr [esp+18Ch+var_16C]
0x56FF64: mov     ecx, ds:0B33B00h
0x56FF6A: lea     edx, [eax+eax*2]
0x56FF6D: mov     eax, [esp+18Ch+var_14C]
0x56FF71: add     edx, edx
0x56FF73: add     edx, edx
0x56FF75: push    edx; Size
0x56FF76: push    eax; Dst
0x56FF77: call    SaveLoad_LoadData
0x56FF7C: movzx   ecx, word ptr [esp+18Ch+var_148]
0x56FF81: mov     edx, [esp+18Ch+var_154]
0x56FF85: add     ecx, ecx
0x56FF87: push    ecx; Size
0x56FF88: mov     ecx, ds:0B33B00h
0x56FF8E: push    edx; Dst
0x56FF8F: call    SaveLoad_LoadData
0x56FF94: mov     eax, [ebx+18h]
0x56FF97: mov     eax, [eax+3Ch]
0x56FF9A: test    eax, eax
0x56FF9C: jz      loc_5700EF
0x56FFA2: push    0; int
0x56FFA4: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56FFA9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56FFAE: push    0; int
0x56FFB0: push    eax; a1
0x56FFB1: call    TESForm_LookupByFormID
0x56FFB6: add     esp, 4
0x56FFB9: push    eax; void *
0x56FFBA: call    OblivionDynamicCast
0x56FFBF: mov     esi, eax
0x56FFC1: add     esp, 14h
0x56FFC4: test    esi, esi
0x56FFC6: jz      loc_5700EF
0x56FFCC: mov     ebp, [esi+3Ch]
0x56FFCF: test    ebp, ebp
0x56FFD1: jz      loc_5700EF
0x56FFD7: push    0
0x56FFD9: push    1
0x56FFDB: push    ebp
0x56FFDC: call    sub_480F00
0x56FFE1: mov     edi, eax
0x56FFE3: mov     eax, [esp+198h+var_144]
0x56FFE7: add     esp, 0Ch
0x56FFEA: cmp     eax, edi
0x56FFEC: jz      short loc_57004F
0x56FFEE: mov     ecx, ds:0B333C4h
0x56FFF4: cmp     esi, ecx
0x56FFF6: jnz     short loc_570014
0x56FFF8: push    1
0x56FFFA: call    PlayerCharacter_GetPlayerNode
0x56FFFF: push    0
0x570001: mov     ebp, eax
0x570003: push    1
0x570005: push    ebp
0x570006: call    sub_480F00
0x57000B: mov     edi, eax
0x57000D: mov     eax, [esp+198h+var_144]
0x570011: add     esp, 0Ch
0x570014: cmp     eax, edi
0x570016: jz      short loc_57004F
0x570018: mov     ecx, [esi+0Ch]
0x57001B: mov     edx, [esi]
0x57001D: push    edi
0x57001E: mov     dword ptr [esp+190h+var_15C], ecx
0x570022: push    eax
0x570023: mov     eax, [edx+0D4h]
0x570029: mov     ecx, esi
0x57002B: call    eax
0x57002D: mov     ecx, dword ptr [esp+194h+var_15C]
0x570031: push    eax
0x570032: push    ecx; ArgList
0x570033: push    offset aGeometryCountH; "Geometry count has changed on reference"...
0x570038: call    PrintError
0x57003D: add     esp, 14h
0x570040: cmp     [esp+18Ch+var_144], edi
0x570044: mov     [esp+18Ch+var_175], 0
0x570049: jnz     loc_5700F4
0x57004F: mov     edx, dword ptr [esp+18Ch+var_160]
0x570053: push    0
0x570055: push    1
0x570057: push    edx
0x570058: push    ebp
0x570059: call    sub_481320
0x57005E: add     esp, 10h
0x570061: test    eax, eax
0x570063: jnz     short loc_570082
0x570065: mov     eax, [esi]
0x570067: mov     edx, [eax+0D4h]
0x57006D: mov     edi, [esi+0Ch]
0x570070: mov     ecx, esi
0x570072: call    edx
0x570074: push    eax
0x570075: mov     eax, dword ptr [esp+190h+var_160]
0x570079: push    edi
0x57007A: push    eax
0x57007B: push    offset aCouldNotFin_15; "Could not find geometry with index %i o"...
0x570080: jmp     short loc_5700E7
0x570082: mov     edx, [eax]
0x570084: mov     ecx, eax
0x570086: mov     eax, [edx+10h]
0x570089: lea     edi, [ebx+2Ch]
0x57008C: call    eax
0x57008E: push    eax; a2
0x57008F: mov     ecx, edi; this
0x570091: call    NiSmartPointer_Set??
0x570096: mov     eax, [edi]
0x570098: test    eax, eax
0x57009A: jnz     short loc_5700B9
0x57009C: mov     edx, [esi]
0x57009E: mov     eax, [edx+0D4h]
0x5700A4: mov     edi, [esi+0Ch]
0x5700A7: mov     ecx, esi
0x5700A9: call    eax
0x5700AB: mov     ecx, dword ptr [esp+18Ch+var_160]
0x5700AF: push    eax
0x5700B0: push    edi
0x5700B1: push    ecx
0x5700B2: push    offset aFoundGeometryW; "Found geometry with index %i on referen"...
0x5700B7: jmp     short loc_5700E7
0x5700B9: mov     eax, [eax+1Ch]
0x5700BC: lea     edi, [ebx+30h]
0x5700BF: push    eax; a2
0x5700C0: mov     ecx, edi; this
0x5700C2: call    NiSmartPointer_Set??
0x5700C7: cmp     dword ptr [edi], 0
0x5700CA: jnz     short loc_5700F4
0x5700CC: mov     edx, [esi]
0x5700CE: mov     eax, [edx+0D4h]
0x5700D4: mov     edi, [esi+0Ch]
0x5700D7: mov     ecx, esi
0x5700D9: call    eax
0x5700DB: mov     ecx, dword ptr [esp+18Ch+var_160]
0x5700DF: push    eax
0x5700E0: push    edi
0x5700E1: push    ecx; ArgList
0x5700E2: push    offset aFoundGeometr_0; "Found geometry with index %i on referen"...
0x5700E7: call    PrintError
0x5700EC: add     esp, 10h
0x5700EF: mov     [esp+18Ch+var_175], 0
0x5700F4: mov     eax, [ebx+2Ch]
0x5700F7: xor     ecx, ecx
0x5700F9: test    eax, eax
0x5700FB: jz      short loc_570129
0x5700FD: cmp     [eax+0B8h], ecx
0x570103: jz      short loc_570129
0x570105: mov     edx, [eax+0B8h]
0x57010B: cmp     [edx+8], ecx
0x57010E: jz      short loc_570129
0x570110: mov     eax, edx
0x570112: mov     eax, [eax+8]
0x570115: mov     eax, [eax+40h]
0x570118: mov     ecx, edx
0x57011A: movzx   edx, [esp+18Ch+var_170]
0x57011F: cmp     eax, edx
0x570121: mov     ecx, [ecx+8]
0x570124: mov     ecx, [ecx+44h]
0x570127: jz      short loc_57012E
0x570129: mov     [esp+18Ch+var_175], 0
0x57012E: cmp     [esp+18Ch+var_170], 0
0x570134: mov     dword ptr [esp+18Ch+var_15C], 0
0x57013C: jbe     loc_57026F
0x570142: mov     ebp, [esp+18Ch+var_164]
0x570146: sub     ecx, ebp
0x570148: mov     [esp+18Ch+var_140], ecx
0x57014C: lea     esp, [esp+0]
0x570150: mov     ecx, ds:0B33B00h
0x570156: push    2; Size
0x570158: lea     eax, [esp+190h+var_174]
0x57015C: push    eax; Dst
0x57015D: call    SaveLoad_LoadData
0x570162: cmp     [esp+18Ch+var_175], 0
0x570167: jz      loc_57023D
0x57016D: mov     cx, [esp+18Ch+var_174]
0x570172: mov     [ebp+48h], cx
0x570176: movzx   edi, [esp+18Ch+var_174]
0x57017B: xor     ecx, ecx
0x57017D: mov     eax, edi
0x57017F: mov     edx, 8
0x570184: mul     edx
0x570186: seto    cl
0x570189: neg     ecx
0x57018B: or      ecx, eax
0x57018D: push    ecx; Size
0x57018E: call    FormHeapAlloc
0x570193: add     esp, 4
0x570196: mov     [esp+18Ch+var_134], eax
0x57019A: test    eax, eax
0x57019C: mov     [esp+18Ch+var_10], 2
0x5701A7: jz      short loc_5701C5
0x5701A9: add     edi, 0FFFFFFFFh
0x5701AC: mov     esi, eax
0x5701AE: js      short loc_5701C7
0x5701B0: mov     ecx, esi
0x5701B2: call    sub_72EFA0
0x5701B7: add     esi, 8
0x5701BA: sub     edi, 1
0x5701BD: jns     short loc_5701B0
0x5701BF: mov     eax, [esp+18Ch+var_134]
0x5701C3: jmp     short loc_5701C7
0x5701C5: xor     eax, eax
0x5701C7: mov     [ebp+44h], eax
0x5701CA: mov     ecx, ds:0B33B00h
0x5701D0: cmp     byte ptr [ecx+7Ch], 67h ; 'g'
0x5701D4: mov     [esp+18Ch+var_10], 0FFFFFFFFh
0x5701DF: jb      short loc_570216
0x5701E1: xor     esi, esi
0x5701E3: cmp     [esp+18Ch+var_174], si
0x5701E8: jbe     short loc_570210
0x5701EA: lea     ebx, [ebx+0]
0x5701F0: mov     eax, [ebp+44h]
0x5701F3: push    8; Size
0x5701F5: lea     edx, [eax+esi*8]
0x5701F8: push    edx; Dst
0x5701F9: call    SaveLoad_LoadData
0x5701FE: movzx   eax, [esp+18Ch+var_174]
0x570203: mov     ecx, ds:0B33B00h
0x570209: add     esi, 1
0x57020C: cmp     esi, eax
0x57020E: jb      short loc_5701F0
0x570210: cmp     byte ptr [ecx+7Ch], 67h ; 'g'
0x570214: jnb     short loc_57022B
0x570216: movzx   edx, [esp+18Ch+var_174]
0x57021B: mov     eax, [ebp+44h]
0x57021E: add     edx, edx
0x570220: add     edx, edx
0x570222: add     edx, edx
0x570224: push    edx; Size
0x570225: push    eax; Dst
0x570226: call    SaveLoad_LoadData
0x57022B: mov     ecx, [esp+18Ch+var_140]
0x57022F: lea     esi, [ecx+ebp]
0x570232: mov     ecx, 0Dh
0x570237: mov     edi, ebp
0x570239: rep movsd
0x57023B: jmp     short loc_570254
0x57023D: movzx   edx, [esp+18Ch+var_174]
0x570242: mov     ecx, ds:0B33B00h
0x570248: add     edx, edx
0x57024A: add     edx, edx
0x57024C: add     edx, edx
0x57024E: push    edx
0x57024F: call    SaveLoad_AdvanceBufferOffset
0x570254: mov     eax, dword ptr [esp+18Ch+var_15C]
0x570258: movzx   ecx, [esp+18Ch+var_170]
0x57025D: add     eax, 1
0x570260: add     ebp, 4Ch ; 'L'
0x570263: cmp     eax, ecx
0x570265: mov     dword ptr [esp+18Ch+var_15C], eax
0x570269: jl      loc_570150
0x57026F: cmp     [esp+18Ch+var_175], 0
0x570274: jz      short loc_5702A4
0x570276: mov     edx, [esp+18Ch+var_164]
0x57027A: mov     eax, [esp+18Ch+var_154]
0x57027E: mov     ecx, [esp+18Ch+var_14C]
0x570282: push    edx
0x570283: mov     edx, [esp+190h+var_158]
0x570287: push    eax
0x570288: mov     eax, [esp+194h+var_148]
0x57028C: push    ecx
0x57028D: mov     ecx, [esp+198h+var_16C]
0x570291: push    edx
0x570292: mov     edx, [ebx+2Ch]
0x570295: push    eax
0x570296: push    ecx
0x570297: push    edx
0x570298: mov     ecx, ebx
0x57029A: call    sub_56CFF0
0x57029F: jmp     loc_570356
0x5702A4: mov     esi, [ebx+18h]
0x5702A7: mov     edi, [esi+48h]
0x5702AA: add     esi, 48h ; 'H'
0x5702AD: test    edi, edi
0x5702AF: jz      short loc_5702D3
0x5702B1: lea     eax, [edi+4]
0x5702B4: push    eax; lpAddend
0x5702B5: call    dword ptr ds:0A2807Ch
0x5702BB: test    eax, eax
0x5702BD: jnz     short loc_5702CD
0x5702BF: test    edi, edi
0x5702C1: jz      short loc_5702CD
0x5702C3: mov     edx, [edi]
0x5702C5: mov     eax, [edx]
0x5702C7: push    1
0x5702C9: mov     ecx, edi
0x5702CB: call    eax
0x5702CD: mov     dword ptr [esi], 0
0x5702D3: mov     esi, [ebx+1Ch]
0x5702D6: test    esi, esi
0x5702D8: jz      short loc_5702FD
0x5702DA: lea     ecx, [esi+4]
0x5702DD: push    ecx; lpAddend
0x5702DE: call    dword ptr ds:0A2807Ch
0x5702E4: test    eax, eax
0x5702E6: jnz     short loc_5702F6
0x5702E8: test    esi, esi
0x5702EA: jz      short loc_5702F6
0x5702EC: mov     edx, [esi]
0x5702EE: mov     eax, [edx]
0x5702F0: push    1
0x5702F2: mov     ecx, esi
0x5702F4: call    eax
0x5702F6: mov     dword ptr [ebx+1Ch], 0
0x5702FD: xor     esi, esi
0x5702FF: cmp     [esp+194h+var_178], si
0x570304: jbe     short loc_57032B
0x570306: mov     edi, [esp+194h+var_16C]
0x57030A: add     edi, 44h ; 'D'
0x57030D: mov     eax, [edi]
0x57030F: test    eax, eax
0x570311: jz      short loc_57031C
0x570313: push    eax
0x570314: call    FormHeapFree
0x570319: add     esp, 4
0x57031C: movzx   ecx, [esp+194h+var_178]
0x570321: add     esi, 1
0x570324: add     edi, 4Ch ; 'L'
0x570327: cmp     esi, ecx
0x570329: jb      short loc_57030D
0x57032B: mov     edx, [esp+194h+var_16C]
0x57032F: push    edx
0x570330: call    FormHeapFree
0x570335: mov     eax, dword ptr [esp+198h+var_160]
0x570339: push    eax
0x57033A: call    FormHeapFree
0x57033F: mov     ecx, [esp+19Ch+var_154]
0x570343: push    ecx
0x570344: call    FormHeapFree
0x570349: mov     edx, dword ptr [esp+1A0h+var_15C]
0x57034D: push    edx
0x57034E: call    FormHeapFree
0x570353: add     esp, 10h
0x570356: mov     ecx, ds:0B33B00h
0x57035C: call    sub_45A170
0x570361: test    al, al
0x570363: jz      loc_570469
0x570369: mov     ecx, ds:0B33B00h
0x57036F: mov     edi, [ecx+80h]
0x570375: test    edi, edi
0x570377: mov     esi, [ecx+14h]
0x57037A: jz      loc_57041B
0x570380: mov     eax, [edi]
0x570382: push    eax; a1
0x570383: call    TESForm_LookupByFormID
0x570388: movzx   ecx, [esp+190h+var_168]
0x57038D: mov     ebx, dword ptr [esp+190h+ArgList]
0x570391: add     ecx, ebx
0x570393: add     esp, 4
0x570396: cmp     esi, ecx
0x570398: jbe     short loc_5703D9
0x57039A: mov     edx, [edi+5]
0x57039D: movzx   ecx, byte ptr [edi+9]
0x5703A1: push    edx
0x5703A2: mov     edx, [eax]
0x5703A4: push    ecx
0x5703A5: mov     ecx, eax
0x5703A7: mov     eax, [edx+0D4h]
0x5703AD: call    eax
0x5703AF: mov     ecx, [edi]
0x5703B1: movzx   edx, [esp+194h+var_168]
0x5703B6: push    eax
0x5703B7: push    ecx
0x5703B8: push    643h
0x5703BD: sub     esi, edx
0x5703BF: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x5703C4: sub     esi, ebx
0x5703C6: push    esi; ArgList
0x5703C7: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x5703CC: call    PrintError
0x5703D1: add     esp, 20h
0x5703D4: jmp     loc_570469
0x5703D9: jnb     loc_570469
0x5703DF: mov     ecx, [edi+5]
0x5703E2: movzx   edx, byte ptr [edi+9]
0x5703E6: push    ecx
0x5703E7: push    edx
0x5703E8: mov     edx, [eax]
0x5703EA: mov     ecx, eax
0x5703EC: mov     eax, [edx+0D4h]
0x5703F2: call    eax
0x5703F4: mov     ecx, [edi]
0x5703F6: movzx   edx, [esp+194h+var_168]
0x5703FB: push    eax
0x5703FC: push    ecx
0x5703FD: push    643h
0x570402: sub     edx, esi
0x570404: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570409: add     edx, ebx
0x57040B: push    edx; ArgList
0x57040C: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x570411: call    PrintError
0x570416: add     esp, 20h
0x570419: jmp     short loc_570469
0x57041B: movzx   eax, [esp+18Ch+var_168]
0x570420: mov     edx, dword ptr [esp+18Ch+ArgList]
0x570424: lea     edi, [eax+edx]
0x570427: cmp     esi, edi
0x570429: jbe     short loc_570446
0x57042B: movzx   ecx, byte ptr [ecx+7Ch]
0x57042F: push    ecx
0x570430: push    643h
0x570435: sub     esi, eax
0x570437: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x57043C: sub     esi, edx
0x57043E: push    esi
0x57043F: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x570444: jmp     short loc_570461
0x570446: jnb     short loc_570469
0x570448: movzx   ecx, byte ptr [ecx+7Ch]
0x57044C: push    ecx
0x57044D: push    643h
0x570452: sub     eax, esi
0x570454: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570459: add     eax, edx
0x57045B: push    eax; ArgList
0x57045C: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x570461: call    PrintError
0x570466: add     esp, 14h
0x570469: mov     al, [esp+18Ch+var_175]
0x57046D: mov     ecx, [esp+18Ch+var_18]
0x570474: mov     large fs:0, ecx
0x57047B: pop     ecx
0x57047C: pop     edi
0x57047D: pop     esi
0x57047E: pop     ebp
0x57047F: pop     ebx
0x570480: mov     ecx, [esp+178h+var_1C]
0x570487: xor     ecx, esp
0x570489: call    @__security_check_cookie@4; __security_check_cookie(x)
0x57048E: add     esp, 16Ch
0x570494: retn
