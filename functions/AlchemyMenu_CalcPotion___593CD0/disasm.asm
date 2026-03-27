0x593CD0: push    0FFFFFFFFh
0x593CD2: push    offset AlchemyMenu_CalcPotion?_SEH
0x593CD7: mov     eax, large fs:0
0x593CDD: push    eax
0x593CDE: sub     esp, 7Ch
0x593CE1: mov     eax, ds:0B30AACh
0x593CE6: xor     eax, esp
0x593CE8: mov     [esp+88h+var_10], eax
0x593CEC: push    ebx
0x593CED: push    ebp
0x593CEE: push    esi
0x593CEF: push    edi
0x593CF0: mov     eax, ds:0B30AACh
0x593CF5: xor     eax, esp
0x593CF7: push    eax
0x593CF8: lea     eax, [esp+9Ch+var_C]
0x593CFF: mov     large fs:0, eax
0x593D05: mov     ebx, ecx
0x593D07: mov     ecx, [ebx+94h]
0x593D0D: xor     eax, eax
0x593D0F: add     ecx, 30h ; '0'
0x593D12: mov     dword ptr [esp+9Ch+var_7C], ebx
0x593D16: mov     [esp+9Ch+var_68], eax
0x593D1A: mov     [esp+9Ch+var_64], eax
0x593D1E: mov     [esp+9Ch+var_60], eax
0x593D22: mov     [esp+9Ch+var_5C], eax
0x593D26: call    EffectItemList_Clear
0x593D2B: mov     eax, [ebx+50h]
0x593D2E: mov     esi, [eax+34h]
0x593D31: test    esi, esi
0x593D33: jz      short loc_593D4D
0x593D35: mov     ecx, [esi+8]
0x593D38: test    ecx, ecx
0x593D3A: lea     eax, [esi+8]
0x593D3D: mov     esi, [esi]
0x593D3F: jz      short loc_593D49
0x593D41: mov     edx, [ecx]
0x593D43: mov     eax, [edx]
0x593D45: push    1
0x593D47: call    eax
0x593D49: test    esi, esi
0x593D4B: jnz     short loc_593D35
0x593D4D: cmp     dword ptr [ebx+0ACh], 0
0x593D54: lea     ebp, [ebx+0A8h]
0x593D5A: jz      short loc_593D76
0x593D5C: lea     esp, [esp+0]
0x593D60: mov     eax, [ebp+4]
0x593D63: mov     esi, [eax+4]
0x593D66: push    eax
0x593D67: call    FormHeapFree
0x593D6C: add     esp, 4
0x593D6F: test    esi, esi
0x593D71: mov     [ebp+4], esi
0x593D74: jnz     short loc_593D60
0x593D76: mov     dword ptr [ebp+0], 0
0x593D7D: mov     esi, [ebx+50h]
0x593D80: mov     edi, [esi+34h]
0x593D83: add     esi, 30h ; '0'
0x593D86: xor     eax, eax
0x593D88: cmp     edi, eax
0x593D8A: jz      short loc_593DA4
0x593D8C: lea     esp, [esp+0]
0x593D90: mov     edx, [esi]
0x593D92: mov     eax, edi
0x593D94: mov     edi, [edi]
0x593D96: push    eax; a3
0x593D97: mov     eax, [edx+8]
0x593D9A: mov     ecx, esi
0x593D9C: call    eax
0x593D9E: test    edi, edi
0x593DA0: jnz     short loc_593D90
0x593DA2: xor     eax, eax
0x593DA4: mov     [esi+0Ch], eax
0x593DA7: mov     [esi+4], eax
0x593DAA: mov     [esi+8], eax
0x593DAD: mov     ecx, [ebx+50h]
0x593DB0: call    sub_58E870
0x593DB5: mov     ecx, ds:0B333C4h
0x593DBB: xor     esi, esi
0x593DBD: push    13h
0x593DBF: mov     [esp+0A0h+var_58], esi
0x593DC3: call    Actor_GetBaseCalcAVi
0x593DC8: push    eax
0x593DC9: call    Magic_GetWortcraftMaxEffects
0x593DCE: add     esp, 4
0x593DD1: add     ebx, 0B0h ; '°'
0x593DD7: mov     dword ptr [esp+9Ch+var_74], eax
0x593DDB: mov     [esp+9Ch+var_78], esi
0x593DDF: mov     [esp+9Ch+var_70], ebx
0x593DE3: mov     ecx, [esp+9Ch+var_70]
0x593DE7: mov     eax, [ecx]
0x593DE9: test    eax, eax
0x593DEB: jz      loc_593EB8
0x593DF1: mov     eax, [eax+8]
0x593DF4: push    0; int
0x593DF6: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x593DFB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x593E00: push    0; int
0x593E02: push    eax; void *
0x593E03: call    OblivionDynamicCast
0x593E08: mov     edx, [esp+0B0h+var_78]
0x593E0C: add     [esp+0B0h+var_58], 1
0x593E11: mov     [esp+edx*4+0B0h+var_68], eax
0x593E15: mov     eax, [esp+0B0h+var_70]
0x593E19: mov     ecx, [eax]
0x593E1B: mov     ebx, [ecx+8]
0x593E1E: add     esp, 14h
0x593E21: xor     edi, edi
0x593E23: test    ebx, ebx
0x593E25: jz      loc_593EB8
0x593E2B: xor     ecx, ecx
0x593E2D: lea     eax, [ebx+34h]
0x593E30: test    eax, eax
0x593E32: mov     [esp+9Ch+var_88], ecx
0x593E36: jz      short loc_593E4B
0x593E38: cmp     dword ptr [eax], 0
0x593E3B: jz      short loc_593E40
0x593E3D: add     ecx, 1
0x593E40: mov     eax, [eax+4]
0x593E43: test    eax, eax
0x593E45: jnz     short loc_593E38
0x593E47: mov     [esp+9Ch+var_88], ecx
0x593E4B: test    ecx, ecx
0x593E4D: jbe     short loc_593EB8
0x593E4F: cmp     edi, dword ptr [esp+9Ch+var_74]
0x593E53: jge     short loc_593EB8
0x593E55: lea     esi, [ebx+30h]
0x593E58: push    edi
0x593E59: mov     ecx, esi
0x593E5B: call    EffectItemList_GetItemByIndex2
0x593E60: mov     ecx, ebp
0x593E62: test    ecx, ecx
0x593E64: jz      short loc_593E71
0x593E66: cmp     [ecx], eax
0x593E68: jz      short loc_593EAF
0x593E6A: mov     ecx, [ecx+4]
0x593E6D: test    ecx, ecx
0x593E6F: jnz     short loc_593E66
0x593E71: push    edi
0x593E72: mov     ecx, esi
0x593E74: call    EffectItemList_GetItemByIndex2
0x593E79: mov     esi, eax
0x593E7B: test    esi, esi
0x593E7D: jz      short loc_593EAF
0x593E7F: cmp     dword ptr [ebp+0], 0
0x593E83: jz      short loc_593EAC
0x593E85: push    8; Size
0x593E87: call    FormHeapAlloc
0x593E8C: add     esp, 4
0x593E8F: test    eax, eax
0x593E91: jz      short loc_593EA1
0x593E93: mov     edx, [ebp+0]
0x593E96: mov     [eax], edx
0x593E98: mov     dword ptr [eax+4], 0
0x593E9F: jmp     short loc_593EA3
0x593EA1: xor     eax, eax
0x593EA3: mov     ecx, [ebp+4]
0x593EA6: mov     [eax+4], ecx
0x593EA9: mov     [ebp+4], eax
0x593EAC: mov     [ebp+0], esi
0x593EAF: add     edi, 1
0x593EB2: cmp     edi, [esp+9Ch+var_88]
0x593EB6: jb      short loc_593E4F
0x593EB8: mov     eax, [esp+9Ch+var_78]
0x593EBC: add     [esp+9Ch+var_70], 4
0x593EC1: add     eax, 1
0x593EC4: cmp     eax, 4
0x593EC7: mov     [esp+9Ch+var_78], eax
0x593ECB: jl      loc_593DE3
0x593ED1: mov     ecx, ds:0B333C4h
0x593ED7: push    13h
0x593ED9: call    Actor_GetBaseCalcAVi
0x593EDE: push    eax
0x593EDF: call    Magic_GetWortcraftMaxEffects
0x593EE4: mov     ecx, ds:0B333C4h
0x593EEA: add     esp, 4
0x593EED: push    13h
0x593EEF: mov     [esp+0A0h+var_84], eax
0x593EF3: mov     [esp+0A0h+var_80], 0
0x593EFB: call    Actor_GetSkillMasteryLevel
0x593F00: cmp     eax, 4
0x593F03: jl      loc_593F94
0x593F09: cmp     [esp+9Ch+var_58], 1
0x593F0E: jnz     loc_593F94
0x593F14: xor     ecx, ecx
0x593F16: xor     eax, eax
0x593F18: cmp     [esp+eax*4+9Ch+var_68], ecx
0x593F1C: jnz     short loc_593F28
0x593F1E: add     eax, 1
0x593F21: cmp     eax, 4
0x593F24: jl      short loc_593F18
0x593F26: jmp     short loc_593F2C
0x593F28: mov     ecx, [esp+eax*4+9Ch+var_68]
0x593F2C: push    0
0x593F2E: add     ecx, 0Ch
0x593F31: call    EffectItemList_GetItemByIndex2
0x593F36: mov     esi, eax
0x593F38: test    esi, esi
0x593F3A: jz      loc_59485E
0x593F40: push    24h ; '$'; Size
0x593F42: call    FormHeapAlloc
0x593F47: add     esp, 4
0x593F4A: mov     [esp+9Ch+var_88], eax
0x593F4E: test    eax, eax
0x593F50: mov     [esp+9Ch+var_4], 0
0x593F5B: jz      short loc_593F67
0x593F5D: push    esi
0x593F5E: mov     ecx, eax
0x593F60: call    EffectItem_constrCopy
0x593F65: jmp     short loc_593F69
0x593F67: xor     eax, eax
0x593F69: mov     edx, dword ptr [esp+9Ch+var_7C]
0x593F6D: mov     ecx, [edx+94h]
0x593F73: push    eax
0x593F74: add     ecx, 30h ; '0'
0x593F77: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x593F82: call    EffectItemList_AddItem
0x593F87: mov     [esp+9Ch+var_80], 1
0x593F8F: jmp     loc_59485E
0x593F94: cmp     [esp+9Ch+var_68], 0
0x593F99: jz      loc_5944D2
0x593F9F: cmp     [esp+9Ch+var_64], 0
0x593FA4: jz      loc_59422B
0x593FAA: xor     eax, eax
0x593FAC: cmp     [esp+9Ch+var_84], eax
0x593FB0: mov     [esp+9Ch+var_88], eax
0x593FB4: jle     loc_59407B
0x593FBA: lea     ebx, [ebx+0]
0x593FC0: mov     ecx, [esp+9Ch+var_68]
0x593FC4: push    eax
0x593FC5: add     ecx, 0Ch
0x593FC8: call    EffectItemList_GetItemByIndex2
0x593FCD: mov     ebp, eax
0x593FCF: xor     edi, edi
0x593FD1: mov     ecx, [esp+9Ch+var_64]
0x593FD5: push    edi
0x593FD6: add     ecx, 0Ch
0x593FD9: call    EffectItemList_GetItemByIndex2
0x593FDE: test    ebp, ebp
0x593FE0: jz      short loc_594059
0x593FE2: test    eax, eax
0x593FE4: jz      short loc_594059
0x593FE6: push    eax
0x593FE7: mov     ecx, ebp
0x593FE9: call    EffectItem_Match
0x593FEE: test    al, al
0x593FF0: jz      short loc_594059
0x593FF2: push    24h ; '$'; Size
0x593FF4: call    FormHeapAlloc
0x593FF9: add     esp, 4
0x593FFC: mov     dword ptr [esp+9Ch+var_74], eax
0x594000: test    eax, eax
0x594002: mov     [esp+9Ch+var_4], 1
0x59400D: jz      short loc_59401B
0x59400F: push    ebp
0x594010: mov     ecx, eax
0x594012: call    EffectItem_constrCopy
0x594017: mov     esi, eax
0x594019: jmp     short loc_59401D
0x59401B: xor     esi, esi
0x59401D: mov     eax, [esi+14h]
0x594020: mov     ecx, [esi]
0x594022: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x594026: push    eax
0x594027: push    ecx
0x594028: mov     ecx, [ebx+94h]
0x59402E: add     ecx, 30h ; '0'
0x594031: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x59403C: call    EffectItemList_HasEffect
0x594041: test    al, al
0x594043: jnz     short loc_594059
0x594045: mov     ecx, [ebx+94h]
0x59404B: push    esi
0x59404C: add     ecx, 30h ; '0'
0x59404F: call    EffectItemList_AddItem
0x594054: add     [esp+9Ch+var_80], 1
0x594059: add     edi, 1
0x59405C: cmp     edi, [esp+9Ch+var_84]
0x594060: jl      loc_593FD1
0x594066: mov     eax, [esp+9Ch+var_88]
0x59406A: add     eax, 1
0x59406D: cmp     eax, [esp+9Ch+var_84]
0x594071: mov     [esp+9Ch+var_88], eax
0x594075: jl      loc_593FC0
0x59407B: cmp     [esp+9Ch+var_60], 0
0x594080: jz      loc_594153
0x594086: xor     eax, eax
0x594088: cmp     [esp+9Ch+var_84], eax
0x59408C: mov     [esp+9Ch+var_88], eax
0x594090: jle     loc_594153
0x594096: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x59409A: mov     ecx, [esp+9Ch+var_64]
0x59409E: push    eax
0x59409F: add     ecx, 0Ch
0x5940A2: call    EffectItemList_GetItemByIndex2
0x5940A7: mov     ebp, eax
0x5940A9: xor     edi, edi
0x5940AB: mov     ecx, [esp+9Ch+var_60]
0x5940AF: push    edi
0x5940B0: add     ecx, 0Ch
0x5940B3: call    EffectItemList_GetItemByIndex2
0x5940B8: test    ebp, ebp
0x5940BA: jz      short loc_59412F
0x5940BC: test    eax, eax
0x5940BE: jz      short loc_59412F
0x5940C0: push    eax
0x5940C1: mov     ecx, ebp
0x5940C3: call    EffectItem_Match
0x5940C8: test    al, al
0x5940CA: jz      short loc_59412F
0x5940CC: push    24h ; '$'; Size
0x5940CE: call    FormHeapAlloc
0x5940D3: add     esp, 4
0x5940D6: mov     dword ptr [esp+9Ch+var_74], eax
0x5940DA: test    eax, eax
0x5940DC: mov     [esp+9Ch+var_4], 2
0x5940E7: jz      short loc_5940F5
0x5940E9: push    ebp
0x5940EA: mov     ecx, eax
0x5940EC: call    EffectItem_constrCopy
0x5940F1: mov     esi, eax
0x5940F3: jmp     short loc_5940F7
0x5940F5: xor     esi, esi
0x5940F7: mov     eax, [esi+14h]
0x5940FA: mov     ecx, [esi]
0x5940FC: push    eax
0x5940FD: push    ecx
0x5940FE: mov     ecx, [ebx+94h]
0x594104: add     ecx, 30h ; '0'
0x594107: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x594112: call    EffectItemList_HasEffect
0x594117: test    al, al
0x594119: jnz     short loc_59412F
0x59411B: mov     ecx, [ebx+94h]
0x594121: push    esi
0x594122: add     ecx, 30h ; '0'
0x594125: call    EffectItemList_AddItem
0x59412A: add     [esp+9Ch+var_80], 1
0x59412F: mov     ecx, [esp+9Ch+var_84]
0x594133: add     edi, 1
0x594136: cmp     edi, ecx
0x594138: jl      loc_5940AB
0x59413E: mov     eax, [esp+9Ch+var_88]
0x594142: add     eax, 1
0x594145: cmp     eax, ecx
0x594147: mov     [esp+9Ch+var_88], eax
0x59414B: jl      loc_59409A
0x594151: jmp     short loc_59415B
0x594153: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x594157: mov     ecx, [esp+9Ch+var_84]
0x59415B: cmp     [esp+9Ch+var_5C], 0
0x594160: jz      loc_59422B
0x594166: xor     eax, eax
0x594168: test    ecx, ecx
0x59416A: mov     [esp+9Ch+var_88], eax
0x59416E: jle     loc_59422B
0x594174: mov     ecx, [esp+9Ch+var_64]
0x594178: push    eax
0x594179: add     ecx, 0Ch
0x59417C: call    EffectItemList_GetItemByIndex2
0x594181: mov     ebp, eax
0x594183: xor     edi, edi
0x594185: mov     ecx, [esp+9Ch+var_5C]
0x594189: push    edi
0x59418A: add     ecx, 0Ch
0x59418D: call    EffectItemList_GetItemByIndex2
0x594192: test    ebp, ebp
0x594194: jz      short loc_594209
0x594196: test    eax, eax
0x594198: jz      short loc_594209
0x59419A: push    eax
0x59419B: mov     ecx, ebp
0x59419D: call    EffectItem_Match
0x5941A2: test    al, al
0x5941A4: jz      short loc_594209
0x5941A6: push    24h ; '$'; Size
0x5941A8: call    FormHeapAlloc
0x5941AD: add     esp, 4
0x5941B0: mov     dword ptr [esp+9Ch+var_74], eax
0x5941B4: test    eax, eax
0x5941B6: mov     [esp+9Ch+var_4], 3
0x5941C1: jz      short loc_5941CF
0x5941C3: push    ebp
0x5941C4: mov     ecx, eax
0x5941C6: call    EffectItem_constrCopy
0x5941CB: mov     esi, eax
0x5941CD: jmp     short loc_5941D1
0x5941CF: xor     esi, esi
0x5941D1: mov     eax, [esi+14h]
0x5941D4: mov     ecx, [esi]
0x5941D6: push    eax
0x5941D7: push    ecx
0x5941D8: mov     ecx, [ebx+94h]
0x5941DE: add     ecx, 30h ; '0'
0x5941E1: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x5941EC: call    EffectItemList_HasEffect
0x5941F1: test    al, al
0x5941F3: jnz     short loc_594209
0x5941F5: mov     ecx, [ebx+94h]
0x5941FB: push    esi
0x5941FC: add     ecx, 30h ; '0'
0x5941FF: call    EffectItemList_AddItem
0x594204: add     [esp+9Ch+var_80], 1
0x594209: mov     ecx, [esp+9Ch+var_84]
0x59420D: add     edi, 1
0x594210: cmp     edi, ecx
0x594212: jl      loc_594185
0x594218: mov     eax, [esp+9Ch+var_88]
0x59421C: add     eax, 1
0x59421F: cmp     eax, ecx
0x594221: mov     [esp+9Ch+var_88], eax
0x594225: jl      loc_594174
0x59422B: mov     eax, [esp+9Ch+var_60]
0x59422F: test    eax, eax
0x594231: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x594235: jz      loc_5943F0
0x59423B: xor     ecx, ecx
0x59423D: cmp     [esp+9Ch+var_84], ecx
0x594241: mov     [esp+9Ch+var_88], ecx
0x594245: jle     loc_59430E
0x59424B: mov     edx, [esp+9Ch+var_68]
0x59424F: add     edx, 0Ch
0x594252: add     eax, 0Ch
0x594255: mov     [esp+9Ch+var_78], edx
0x594259: mov     [esp+9Ch+var_6C], eax
0x59425D: push    ecx
0x59425E: mov     ecx, [esp+0A0h+var_78]
0x594262: call    EffectItemList_GetItemByIndex2
0x594267: mov     ebp, eax
0x594269: xor     edi, edi
0x59426B: mov     ecx, [esp+9Ch+var_6C]
0x59426F: push    edi
0x594270: call    EffectItemList_GetItemByIndex2
0x594275: test    ebp, ebp
0x594277: jz      short loc_5942EC
0x594279: test    eax, eax
0x59427B: jz      short loc_5942EC
0x59427D: push    eax
0x59427E: mov     ecx, ebp
0x594280: call    EffectItem_Match
0x594285: test    al, al
0x594287: jz      short loc_5942EC
0x594289: push    24h ; '$'; Size
0x59428B: call    FormHeapAlloc
0x594290: add     esp, 4
0x594293: mov     dword ptr [esp+9Ch+var_74], eax
0x594297: test    eax, eax
0x594299: mov     [esp+9Ch+var_4], 4
0x5942A4: jz      short loc_5942B2
0x5942A6: push    ebp
0x5942A7: mov     ecx, eax
0x5942A9: call    EffectItem_constrCopy
0x5942AE: mov     esi, eax
0x5942B0: jmp     short loc_5942B4
0x5942B2: xor     esi, esi
0x5942B4: mov     eax, [esi+14h]
0x5942B7: mov     ecx, [esi]
0x5942B9: push    eax
0x5942BA: push    ecx
0x5942BB: mov     ecx, [ebx+94h]
0x5942C1: add     ecx, 30h ; '0'
0x5942C4: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x5942CF: call    EffectItemList_HasEffect
0x5942D4: test    al, al
0x5942D6: jnz     short loc_5942EC
0x5942D8: mov     ecx, [ebx+94h]
0x5942DE: push    esi
0x5942DF: add     ecx, 30h ; '0'
0x5942E2: call    EffectItemList_AddItem
0x5942E7: add     [esp+9Ch+var_80], 1
0x5942EC: add     edi, 1
0x5942EF: cmp     edi, [esp+9Ch+var_84]
0x5942F3: jl      loc_59426B
0x5942F9: mov     ecx, [esp+9Ch+var_88]
0x5942FD: add     ecx, 1
0x594300: cmp     ecx, [esp+9Ch+var_84]
0x594304: mov     [esp+9Ch+var_88], ecx
0x594308: jl      loc_59425D
0x59430E: cmp     [esp+9Ch+var_5C], 0
0x594313: jz      loc_5944D2
0x594319: xor     eax, eax
0x59431B: cmp     [esp+9Ch+var_84], eax
0x59431F: mov     [esp+9Ch+var_88], eax
0x594323: jle     loc_5943F0
0x594329: mov     ecx, [esp+9Ch+var_60]
0x59432D: mov     edx, [esp+9Ch+var_5C]
0x594331: add     ecx, 0Ch
0x594334: add     edx, 0Ch
0x594337: mov     [esp+9Ch+var_6C], ecx
0x59433B: mov     [esp+9Ch+var_70], edx
0x59433F: mov     ecx, [esp+9Ch+var_6C]
0x594343: push    eax
0x594344: call    EffectItemList_GetItemByIndex2
0x594349: mov     ebp, eax
0x59434B: xor     edi, edi
0x59434D: mov     ecx, [esp+9Ch+var_70]
0x594351: push    edi
0x594352: call    EffectItemList_GetItemByIndex2
0x594357: test    ebp, ebp
0x594359: jz      short loc_5943CE
0x59435B: test    eax, eax
0x59435D: jz      short loc_5943CE
0x59435F: push    eax
0x594360: mov     ecx, ebp
0x594362: call    EffectItem_Match
0x594367: test    al, al
0x594369: jz      short loc_5943CE
0x59436B: push    24h ; '$'; Size
0x59436D: call    FormHeapAlloc
0x594372: add     esp, 4
0x594375: mov     dword ptr [esp+9Ch+var_74], eax
0x594379: test    eax, eax
0x59437B: mov     [esp+9Ch+var_4], 5
0x594386: jz      short loc_594394
0x594388: push    ebp
0x594389: mov     ecx, eax
0x59438B: call    EffectItem_constrCopy
0x594390: mov     esi, eax
0x594392: jmp     short loc_594396
0x594394: xor     esi, esi
0x594396: mov     eax, [esi+14h]
0x594399: mov     ecx, [esi]
0x59439B: push    eax
0x59439C: push    ecx
0x59439D: mov     ecx, [ebx+94h]
0x5943A3: add     ecx, 30h ; '0'
0x5943A6: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x5943B1: call    EffectItemList_HasEffect
0x5943B6: test    al, al
0x5943B8: jnz     short loc_5943CE
0x5943BA: mov     ecx, [ebx+94h]
0x5943C0: push    esi
0x5943C1: add     ecx, 30h ; '0'
0x5943C4: call    EffectItemList_AddItem
0x5943C9: add     [esp+9Ch+var_80], 1
0x5943CE: add     edi, 1
0x5943D1: cmp     edi, [esp+9Ch+var_84]
0x5943D5: jl      loc_59434D
0x5943DB: mov     eax, [esp+9Ch+var_88]
0x5943DF: add     eax, 1
0x5943E2: cmp     eax, [esp+9Ch+var_84]
0x5943E6: mov     [esp+9Ch+var_88], eax
0x5943EA: jl      loc_59433F
0x5943F0: cmp     [esp+9Ch+var_5C], 0
0x5943F5: jz      loc_5944D2
0x5943FB: xor     eax, eax
0x5943FD: cmp     [esp+9Ch+var_84], eax
0x594401: mov     [esp+9Ch+var_88], eax
0x594405: jle     loc_5944D2
0x59440B: mov     ecx, [esp+9Ch+var_68]
0x59440F: mov     edx, [esp+9Ch+var_5C]
0x594413: add     ecx, 0Ch
0x594416: add     edx, 0Ch
0x594419: mov     [esp+9Ch+var_78], ecx
0x59441D: mov     [esp+9Ch+var_70], edx
0x594421: mov     ecx, [esp+9Ch+var_78]
0x594425: push    eax
0x594426: call    EffectItemList_GetItemByIndex2
0x59442B: mov     ebp, eax
0x59442D: xor     edi, edi
0x59442F: mov     ecx, [esp+9Ch+var_70]
0x594433: push    edi
0x594434: call    EffectItemList_GetItemByIndex2
0x594439: test    ebp, ebp
0x59443B: jz      short loc_5944B0
0x59443D: test    eax, eax
0x59443F: jz      short loc_5944B0
0x594441: push    eax
0x594442: mov     ecx, ebp
0x594444: call    EffectItem_Match
0x594449: test    al, al
0x59444B: jz      short loc_5944B0
0x59444D: push    24h ; '$'; Size
0x59444F: call    FormHeapAlloc
0x594454: add     esp, 4
0x594457: mov     dword ptr [esp+9Ch+var_74], eax
0x59445B: test    eax, eax
0x59445D: mov     [esp+9Ch+var_4], 6
0x594468: jz      short loc_594476
0x59446A: push    ebp
0x59446B: mov     ecx, eax
0x59446D: call    EffectItem_constrCopy
0x594472: mov     esi, eax
0x594474: jmp     short loc_594478
0x594476: xor     esi, esi
0x594478: mov     eax, [esi+14h]
0x59447B: mov     ecx, [esi]
0x59447D: push    eax
0x59447E: push    ecx
0x59447F: mov     ecx, [ebx+94h]
0x594485: add     ecx, 30h ; '0'
0x594488: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x594493: call    EffectItemList_HasEffect
0x594498: test    al, al
0x59449A: jnz     short loc_5944B0
0x59449C: mov     ecx, [ebx+94h]
0x5944A2: push    esi
0x5944A3: add     ecx, 30h ; '0'
0x5944A6: call    EffectItemList_AddItem
0x5944AB: add     [esp+9Ch+var_80], 1
0x5944B0: add     edi, 1
0x5944B3: cmp     edi, [esp+9Ch+var_84]
0x5944B7: jl      loc_59442F
0x5944BD: mov     eax, [esp+9Ch+var_88]
0x5944C1: add     eax, 1
0x5944C4: cmp     eax, [esp+9Ch+var_84]
0x5944C8: mov     [esp+9Ch+var_88], eax
0x5944CC: jl      loc_594421
0x5944D2: cmp     [esp+9Ch+var_64], 0
0x5944D7: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x5944DB: jz      loc_594777
0x5944E1: cmp     [esp+9Ch+var_60], 0
0x5944E6: jz      loc_59469D
0x5944EC: mov     ecx, [esp+9Ch+var_84]
0x5944F0: xor     eax, eax
0x5944F2: test    ecx, ecx
0x5944F4: mov     [esp+9Ch+var_88], eax
0x5944F8: jle     loc_5945B5
0x5944FE: mov     ecx, [esp+9Ch+var_64]
0x594502: push    eax
0x594503: add     ecx, 0Ch
0x594506: call    EffectItemList_GetItemByIndex2
0x59450B: mov     ebp, eax
0x59450D: xor     edi, edi
0x59450F: mov     ecx, [esp+9Ch+var_60]
0x594513: push    edi
0x594514: add     ecx, 0Ch
0x594517: call    EffectItemList_GetItemByIndex2
0x59451C: test    ebp, ebp
0x59451E: jz      short loc_594593
0x594520: test    eax, eax
0x594522: jz      short loc_594593
0x594524: push    eax
0x594525: mov     ecx, ebp
0x594527: call    EffectItem_Match
0x59452C: test    al, al
0x59452E: jz      short loc_594593
0x594530: push    24h ; '$'; Size
0x594532: call    FormHeapAlloc
0x594537: add     esp, 4
0x59453A: mov     dword ptr [esp+9Ch+var_74], eax
0x59453E: test    eax, eax
0x594540: mov     [esp+9Ch+var_4], 7
0x59454B: jz      short loc_594559
0x59454D: push    ebp
0x59454E: mov     ecx, eax
0x594550: call    EffectItem_constrCopy
0x594555: mov     esi, eax
0x594557: jmp     short loc_59455B
0x594559: xor     esi, esi
0x59455B: mov     eax, [esi+14h]
0x59455E: mov     ecx, [esi]
0x594560: push    eax
0x594561: push    ecx
0x594562: mov     ecx, [ebx+94h]
0x594568: add     ecx, 30h ; '0'
0x59456B: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x594576: call    EffectItemList_HasEffect
0x59457B: test    al, al
0x59457D: jnz     short loc_594593
0x59457F: mov     ecx, [ebx+94h]
0x594585: push    esi
0x594586: add     ecx, 30h ; '0'
0x594589: call    EffectItemList_AddItem
0x59458E: add     [esp+9Ch+var_80], 1
0x594593: mov     ecx, [esp+9Ch+var_84]
0x594597: add     edi, 1
0x59459A: cmp     edi, ecx
0x59459C: jl      loc_59450F
0x5945A2: mov     eax, [esp+9Ch+var_88]
0x5945A6: add     eax, 1
0x5945A9: cmp     eax, ecx
0x5945AB: mov     [esp+9Ch+var_88], eax
0x5945AF: jl      loc_5944FE
0x5945B5: cmp     [esp+9Ch+var_5C], 0
0x5945BA: jz      loc_594777
0x5945C0: test    ecx, ecx
0x5945C2: mov     [esp+9Ch+var_78], 0
0x5945CA: jle     loc_59469D
0x5945D0: mov     ebx, [esp+9Ch+var_5C]
0x5945D4: add     ebx, 0Ch
0x5945D7: mov     eax, [esp+9Ch+var_78]
0x5945DB: mov     ecx, [esp+9Ch+var_60]
0x5945DF: push    eax
0x5945E0: add     ecx, 0Ch
0x5945E3: call    EffectItemList_GetItemByIndex2
0x5945E8: mov     ebp, eax
0x5945EA: xor     edi, edi
0x5945EC: push    edi
0x5945ED: mov     ecx, ebx
0x5945EF: call    EffectItemList_GetItemByIndex2
0x5945F4: test    ebp, ebp
0x5945F6: jz      loc_594677
0x5945FC: test    eax, eax
0x5945FE: jz      short loc_594677
0x594600: push    eax
0x594601: mov     ecx, ebp
0x594603: call    EffectItem_Match
0x594608: test    al, al
0x59460A: jz      short loc_594677
0x59460C: push    24h ; '$'; Size
0x59460E: call    FormHeapAlloc
0x594613: add     esp, 4
0x594616: mov     [esp+9Ch+var_88], eax
0x59461A: test    eax, eax
0x59461C: mov     [esp+9Ch+var_4], 8
0x594627: jz      short loc_594635
0x594629: push    ebp
0x59462A: mov     ecx, eax
0x59462C: call    EffectItem_constrCopy
0x594631: mov     esi, eax
0x594633: jmp     short loc_594637
0x594635: xor     esi, esi
0x594637: mov     eax, [esi+14h]
0x59463A: mov     ecx, [esi]
0x59463C: push    eax
0x59463D: push    ecx
0x59463E: mov     ecx, dword ptr [esp+0A4h+var_7C]
0x594642: mov     ecx, [ecx+94h]
0x594648: add     ecx, 30h ; '0'
0x59464B: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x594656: call    EffectItemList_HasEffect
0x59465B: test    al, al
0x59465D: jnz     short loc_594677
0x59465F: mov     edx, dword ptr [esp+9Ch+var_7C]
0x594663: mov     ecx, [edx+94h]
0x594669: push    esi
0x59466A: add     ecx, 30h ; '0'
0x59466D: call    EffectItemList_AddItem
0x594672: add     [esp+9Ch+var_80], 1
0x594677: mov     eax, [esp+9Ch+var_84]
0x59467B: add     edi, 1
0x59467E: cmp     edi, eax
0x594680: jl      loc_5945EC
0x594686: mov     ecx, [esp+9Ch+var_78]
0x59468A: add     ecx, 1
0x59468D: cmp     ecx, eax
0x59468F: mov     [esp+9Ch+var_78], ecx
0x594693: jl      loc_5945D7
0x594699: mov     ebx, dword ptr [esp+9Ch+var_7C]
0x59469D: cmp     [esp+9Ch+var_5C], 0
0x5946A2: jz      loc_594777
0x5946A8: xor     eax, eax
0x5946AA: cmp     [esp+9Ch+var_84], eax
0x5946AE: mov     [esp+9Ch+var_88], eax
0x5946B2: jle     loc_594777
0x5946B8: mov     ecx, [esp+9Ch+var_64]
0x5946BC: add     ecx, 0Ch
0x5946BF: mov     dword ptr [esp+9Ch+var_74], ecx
0x5946C3: mov     ecx, dword ptr [esp+9Ch+var_74]
0x5946C7: push    eax
0x5946C8: call    EffectItemList_GetItemByIndex2
0x5946CD: mov     ebp, eax
0x5946CF: xor     edi, edi
0x5946D1: mov     ecx, [esp+9Ch+var_5C]
0x5946D5: push    edi
0x5946D6: add     ecx, 0Ch
0x5946D9: call    EffectItemList_GetItemByIndex2
0x5946DE: test    ebp, ebp
0x5946E0: jz      short loc_594755
0x5946E2: test    eax, eax
0x5946E4: jz      short loc_594755
0x5946E6: push    eax
0x5946E7: mov     ecx, ebp
0x5946E9: call    EffectItem_Match
0x5946EE: test    al, al
0x5946F0: jz      short loc_594755
0x5946F2: push    24h ; '$'; Size
0x5946F4: call    FormHeapAlloc
0x5946F9: add     esp, 4
0x5946FC: mov     [esp+9Ch+var_78], eax
0x594700: test    eax, eax
0x594702: mov     [esp+9Ch+var_4], 9
0x59470D: jz      short loc_59471B
0x59470F: push    ebp
0x594710: mov     ecx, eax
0x594712: call    EffectItem_constrCopy
0x594717: mov     esi, eax
0x594719: jmp     short loc_59471D
0x59471B: xor     esi, esi
0x59471D: mov     eax, [esi+14h]
0x594720: mov     ecx, [esi]
0x594722: push    eax
0x594723: push    ecx
0x594724: mov     ecx, [ebx+94h]
0x59472A: add     ecx, 30h ; '0'
0x59472D: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x594738: call    EffectItemList_HasEffect
0x59473D: test    al, al
0x59473F: jnz     short loc_594755
0x594741: mov     ecx, [ebx+94h]
0x594747: push    esi
0x594748: add     ecx, 30h ; '0'
0x59474B: call    EffectItemList_AddItem
0x594750: add     [esp+9Ch+var_80], 1
0x594755: mov     ecx, [esp+9Ch+var_84]
0x594759: add     edi, 1
0x59475C: cmp     edi, ecx
0x59475E: jl      loc_5946D1
0x594764: mov     eax, [esp+9Ch+var_88]
0x594768: add     eax, 1
0x59476B: cmp     eax, ecx
0x59476D: mov     [esp+9Ch+var_88], eax
0x594771: jl      loc_5946C3
0x594777: mov     edx, [esp+9Ch+var_60]
0x59477B: test    edx, edx
0x59477D: jz      loc_59485E
0x594783: mov     ecx, [esp+9Ch+var_5C]
0x594787: test    ecx, ecx
0x594789: jz      loc_59485E
0x59478F: xor     eax, eax
0x594791: cmp     [esp+9Ch+var_84], eax
0x594795: mov     [esp+9Ch+var_88], eax
0x594799: jle     loc_59485E
0x59479F: add     edx, 0Ch
0x5947A2: add     ecx, 0Ch
0x5947A5: mov     [esp+9Ch+var_6C], edx
0x5947A9: mov     [esp+9Ch+var_70], ecx
0x5947AD: mov     ecx, [esp+9Ch+var_6C]
0x5947B1: push    eax
0x5947B2: call    EffectItemList_GetItemByIndex2
0x5947B7: mov     ebp, eax
0x5947B9: xor     edi, edi
0x5947BB: mov     ecx, [esp+9Ch+var_70]
0x5947BF: push    edi
0x5947C0: call    EffectItemList_GetItemByIndex2
0x5947C5: test    ebp, ebp
0x5947C7: jz      short loc_59483C
0x5947C9: test    eax, eax
0x5947CB: jz      short loc_59483C
0x5947CD: push    eax
0x5947CE: mov     ecx, ebp
0x5947D0: call    EffectItem_Match
0x5947D5: test    al, al
0x5947D7: jz      short loc_59483C
0x5947D9: push    24h ; '$'; Size
0x5947DB: call    FormHeapAlloc
0x5947E0: add     esp, 4
0x5947E3: mov     dword ptr [esp+9Ch+var_74], eax
0x5947E7: test    eax, eax
0x5947E9: mov     [esp+9Ch+var_4], 0Ah
0x5947F4: jz      short loc_594802
0x5947F6: push    ebp
0x5947F7: mov     ecx, eax
0x5947F9: call    EffectItem_constrCopy
0x5947FE: mov     esi, eax
0x594800: jmp     short loc_594804
0x594802: xor     esi, esi
0x594804: mov     eax, [esi+14h]
0x594807: mov     ecx, [esi]
0x594809: push    eax
0x59480A: push    ecx
0x59480B: mov     ecx, [ebx+94h]
0x594811: add     ecx, 30h ; '0'
0x594814: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x59481F: call    EffectItemList_HasEffect
0x594824: test    al, al
0x594826: jnz     short loc_59483C
0x594828: mov     ecx, [ebx+94h]
0x59482E: push    esi
0x59482F: add     ecx, 30h ; '0'
0x594832: call    EffectItemList_AddItem
0x594837: add     [esp+9Ch+var_80], 1
0x59483C: mov     ecx, [esp+9Ch+var_84]
0x594840: add     edi, 1
0x594843: cmp     edi, ecx
0x594845: jl      loc_5947BB
0x59484B: mov     eax, [esp+9Ch+var_88]
0x59484F: add     eax, 1
0x594852: cmp     eax, ecx
0x594854: mov     [esp+9Ch+var_88], eax
0x594858: jl      loc_5947AD
0x59485E: mov     ebp, dword ptr [esp+9Ch+var_7C]
0x594862: mov     edx, [ebp+78h]
0x594865: mov     eax, [edx+8]
0x594868: push    eax
0x594869: call    sub_46E3F0
0x59486E: mov     ecx, [ebp+94h]
0x594874: movzx   eax, al
0x594877: mov     [esp+0A0h+var_88], eax
0x59487B: add     esp, 4
0x59487E: fild    [esp+9Ch+var_88]
0x594882: add     ecx, 30h ; '0'
0x594885: mov     [esp+9Ch+var_7C], 0
0x59488A: fstp    dword ptr [esp+9Ch+var_74]
0x59488E: fldz
0x594890: fst     [esp+9Ch+var_54]
0x594894: fst     [esp+9Ch+var_58]
0x594898: fstp    [esp+9Ch+var_84]
0x59489C: call    EffectItemList_AllEffectsHostile
0x5948A1: test    al, al
0x5948A3: jz      short loc_5948AA
0x5948A5: mov     [esp+9Ch+var_7C], 1
0x5948AA: mov     eax, [ebp+7Ch]
0x5948AD: test    eax, eax
0x5948AF: jz      short loc_5948CC
0x5948B1: mov     eax, [eax+8]
0x5948B4: push    eax
0x5948B5: call    sub_46E3F0
0x5948BA: movzx   ecx, al
0x5948BD: mov     [esp+0A0h+var_88], ecx
0x5948C1: add     esp, 4
0x5948C4: fild    [esp+9Ch+var_88]
0x5948C8: fstp    [esp+9Ch+var_54]
0x5948CC: mov     eax, [ebp+84h]
0x5948D2: test    eax, eax
0x5948D4: jz      short loc_5948F1
0x5948D6: mov     eax, [eax+8]
0x5948D9: push    eax
0x5948DA: call    sub_46E3F0
0x5948DF: movzx   edx, al
0x5948E2: mov     [esp+0A0h+var_88], edx
0x5948E6: add     esp, 4
0x5948E9: fild    [esp+9Ch+var_88]
0x5948ED: fstp    [esp+9Ch+var_58]
0x5948F1: mov     eax, [ebp+80h]
0x5948F7: test    eax, eax
0x5948F9: jz      short loc_594916
0x5948FB: mov     eax, [eax+8]
0x5948FE: push    eax
0x5948FF: call    sub_46E3F0
0x594904: movzx   eax, al
0x594907: mov     [esp+0A0h+var_88], eax
0x59490B: add     esp, 4
0x59490E: fild    [esp+9Ch+var_88]
0x594912: fstp    [esp+9Ch+var_84]
0x594916: mov     ecx, ds:0B333C4h
0x59491C: push    13h
0x59491E: xor     esi, esi
0x594920: call    Actor_GetLuckModifiedBaseAV
0x594925: fstp    [esp+9Ch+var_88]
0x594929: fld     [esp+9Ch+var_88]
0x59492D: sub     esp, 8
0x594930: fst     dword ptr [ebp+88h]
0x594936: fstp    [esp+0A4h+a3]; float
0x59493A: fld     dword ptr [esp+0A4h+var_74]
0x59493E: fstp    [esp+0A4h+var_A4]; float
0x594941: call    Calc_MortarPestleModifiedSkill
0x594946: add     esp, 8
0x594949: fstp    [esp+9Ch+var_78]
0x59494D: xor     ebx, ebx
0x59494F: fld1
0x594951: mov     ecx, [ebp+94h]
0x594957: fst     [esp+9Ch+var_70]
0x59495B: push    ebx
0x59495C: add     ecx, 30h ; '0'
0x59495F: fstp    [esp+0A0h+var_6C]
0x594963: call    EffectItemList_GetItemByIndex2
0x594968: mov     edi, eax
0x59496A: test    edi, edi
0x59496C: jz      loc_594C00
0x594972: mov     ecx, edi
0x594974: call    EffectItem_IsHostile
0x594979: test    al, al
0x59497B: mov     ecx, [edi+1Ch]
0x59497E: mov     [esp+9Ch+var_74], al
0x594982: jz      short loc_59499C
0x594984: cmp     dword ptr [ebp+7Ch], 0
0x594988: jz      short loc_5949B7
0x59498A: mov     esi, [ebp+80h]
0x594990: neg     esi
0x594992: sbb     esi, esi
0x594994: and     esi, 3
0x594997: add     esi, 2
0x59499A: jmp     short loc_5949C5
0x59499C: cmp     dword ptr [ebp+84h], 0
0x5949A3: jz      short loc_5949B7
0x5949A5: mov     esi, [ebp+80h]
0x5949AB: neg     esi
0x5949AD: sbb     esi, esi
0x5949AF: and     esi, 3
0x5949B2: add     esi, 1
0x5949B5: jmp     short loc_5949C5
0x5949B7: cmp     dword ptr [ebp+80h], 0
0x5949BE: jz      short loc_5949C5
0x5949C0: mov     esi, 3
0x5949C5: fld     dword ptr [ecx+5Ch]
0x5949C8: mov     ecx, [ecx+58h]
0x5949CB: mov     eax, ecx
0x5949CD: fstp    [esp+9Ch+var_88]
0x5949D1: shr     eax, 7
0x5949D4: and     al, 1
0x5949D6: jnz     short loc_594A30
0x5949D8: mov     edx, ecx
0x5949DA: shr     edx, 8
0x5949DD: test    dl, 1
0x5949E0: jnz     short loc_594A30
0x5949E2: mov     eax, dword ptr [esp+9Ch+var_7C]
0x5949E6: fld     [esp+9Ch+var_84]
0x5949EA: mov     ecx, dword ptr [esp+9Ch+var_74]
0x5949EE: push    eax; char
0x5949EF: sub     esp, 0Ch
0x5949F2: fstp    [esp+0ACh+var_A4]; float
0x5949F6: lea     edx, [esp+0ACh+var_70]
0x5949FA: fld     [esp+0ACh+var_54]
0x5949FE: lea     eax, [esp+0ACh+var_6C]
0x594A02: fstp    [esp+0ACh+a2]; float
0x594A06: fld     [esp+0ACh+var_58]
0x594A0A: fstp    [esp+0ACh+var_AC]; float
0x594A0D: push    ecx; char
0x594A0E: fld     [esp+0B0h+var_78]
0x594A12: push    esi; int
0x594A13: sub     esp, 8
0x594A16: fstp    [esp+0BCh+var_B8]; float
0x594A1A: fld     [esp+0BCh+var_88]
0x594A1E: fstp    [esp+0BCh+var_BC]; float
0x594A21: push    edx; int
0x594A22: push    eax; int
0x594A23: call    Calc_T1PotionStrength
0x594A28: add     esp, 28h
0x594A2B: jmp     loc_594AD1
0x594A30: test    al, al
0x594A32: jnz     short loc_594A85
0x594A34: mov     edx, ecx
0x594A36: shr     edx, 8
0x594A39: test    dl, 1
0x594A3C: jz      short loc_594A81
0x594A3E: mov     eax, dword ptr [esp+9Ch+var_7C]
0x594A42: fld     [esp+9Ch+var_84]
0x594A46: mov     ecx, dword ptr [esp+9Ch+var_74]
0x594A4A: push    eax; char
0x594A4B: sub     esp, 0Ch
0x594A4E: fstp    [esp+0ACh+var_A4]; float
0x594A52: lea     edx, [esp+0ACh+var_70]
0x594A56: fld     [esp+0ACh+var_54]
0x594A5A: fstp    [esp+0ACh+a2]; float
0x594A5E: fld     [esp+0ACh+var_58]
0x594A62: fstp    [esp+0ACh+var_AC]; float
0x594A65: push    ecx; char
0x594A66: fld     [esp+0B0h+var_78]
0x594A6A: push    esi; int
0x594A6B: sub     esp, 8
0x594A6E: fstp    [esp+0BCh+var_B8]; float
0x594A72: fld     [esp+0BCh+var_88]
0x594A76: fstp    [esp+0BCh+var_BC]; float
0x594A79: push    edx; int
0x594A7A: call    Calc_T2PotionStrength
0x594A7F: jmp     short loc_594ACE
0x594A81: test    al, al
0x594A83: jz      short loc_594AD1
0x594A85: shr     ecx, 8
0x594A88: test    cl, 1
0x594A8B: jnz     short loc_594AD1
0x594A8D: mov     eax, dword ptr [esp+9Ch+var_7C]
0x594A91: fld     [esp+9Ch+var_84]
0x594A95: mov     ecx, dword ptr [esp+9Ch+var_74]
0x594A99: push    eax; char
0x594A9A: sub     esp, 0Ch
0x594A9D: fstp    [esp+0ACh+var_A4]; float
0x594AA1: lea     edx, [esp+0ACh+var_6C]
0x594AA5: fld     [esp+0ACh+var_54]
0x594AA9: fstp    [esp+0ACh+a2]; float
0x594AAD: fld     [esp+0ACh+var_58]
0x594AB1: fstp    [esp+0ACh+var_AC]; float
0x594AB4: push    ecx; char
0x594AB5: fld     [esp+0B0h+var_78]
0x594AB9: push    esi; int
0x594ABA: sub     esp, 8
0x594ABD: fstp    [esp+0BCh+var_B8]; float
0x594AC1: fld     [esp+0BCh+var_88]
0x594AC5: fstp    [esp+0BCh+var_BC]; float
0x594AC8: push    edx; int
0x594AC9: call    Calc_T3PotionStrength
0x594ACE: add     esp, 24h
0x594AD1: fld     [esp+9Ch+var_70]
0x594AD5: fld     st
0x594AD7: call    Double_To_SInt32
0x594ADC: mov     ecx, eax
0x594ADE: mov     [esp+9Ch+var_88], ecx
0x594AE2: fisub   [esp+9Ch+var_88]
0x594AE6: fld     qword ptr ds:0A2FAA0h
0x594AEC: fcom    st(1)
0x594AEE: fnstsw  ax
0x594AF0: fstp    st(1)
0x594AF2: test    ah, 41h
0x594AF5: jnz     short loc_594AFB
0x594AF7: xor     eax, eax
0x594AF9: jmp     short loc_594B00
0x594AFB: mov     eax, 1
0x594B00: add     ecx, eax
0x594B02: mov     [esp+9Ch+var_88], ecx
0x594B06: fild    [esp+9Ch+var_88]
0x594B0A: fstp    [esp+9Ch+var_70]
0x594B0E: fld     [esp+9Ch+var_6C]
0x594B12: fld     st
0x594B14: call    Double_To_SInt32
0x594B19: mov     ecx, eax
0x594B1B: mov     [esp+9Ch+var_88], ecx
0x594B1F: fisub   [esp+9Ch+var_88]
0x594B23: fcompp
0x594B25: fnstsw  ax
0x594B27: test    ah, 5
0x594B2A: jp      short loc_594B30
0x594B2C: xor     eax, eax
0x594B2E: jmp     short loc_594B35
0x594B30: mov     eax, 1
0x594B35: add     ecx, eax
0x594B37: mov     [esp+9Ch+var_88], ecx
0x594B3B: fild    [esp+9Ch+var_88]
0x594B3F: fstp    [esp+9Ch+var_6C]
0x594B43: fld     [esp+9Ch+var_70]
0x594B47: call    Double_To_SInt32
0x594B4C: cmp     eax, 1
0x594B4F: jge     short loc_594B56
0x594B51: mov     eax, 1
0x594B56: push    eax
0x594B57: mov     ecx, edi
0x594B59: call    EffectItem_SetDuration
0x594B5E: fld     [esp+9Ch+var_6C]
0x594B62: call    Double_To_SInt32
0x594B67: cmp     eax, 1
0x594B6A: jge     short loc_594B71
0x594B6C: mov     eax, 1
0x594B71: push    eax
0x594B72: mov     ecx, edi
0x594B74: call    EffectItem_SetMagnitude
0x594B79: push    0
0x594B7B: mov     ecx, edi
0x594B7D: call    EffectItem_SetArea
0x594B82: push    ebx
0x594B83: push    edi
0x594B84: mov     ecx, ebp
0x594B86: call    sub_593B20
0x594B8B: mov     al, [ebp+0A4h]
0x594B91: cmp     al, 2
0x594B93: jz      short loc_594BC9
0x594B95: cmp     al, 3
0x594B97: jz      short loc_594BC9
0x594B99: test    ebx, ebx
0x594B9B: jnz     short loc_594BE7
0x594B9D: lea     eax, [esp+9Ch+var_50]
0x594BA1: push    eax
0x594BA2: mov     ecx, edi
0x594BA4: call    EffectItem_GetQualifiedName_SkillAttr
0x594BA9: lea     ecx, [esp+9Ch+var_50]
0x594BAD: push    ecx
0x594BAE: mov     ecx, [ebp+0A0h]
0x594BB4: call    sub_57FF20
0x594BB9: mov     ecx, ebp
0x594BBB: mov     byte ptr [ebp+0A4h], 1
0x594BC2: call    sub_593710
0x594BC7: jmp     short loc_594BE7
0x594BC9: mov     ecx, [ebp+2Ch]
0x594BCC: push    0FDEh
0x594BD1: call    sub_588C10
0x594BD6: mov     ecx, [ebp+94h]
0x594BDC: push    0; a3
0x594BDE: push    eax; a2
0x594BDF: add     ecx, 28h ; '('; this
0x594BE2: call    BSStringT_Set
0x594BE7: fld     dword ptr ds:0A379B4h
0x594BED: push    ecx
0x594BEE: mov     ecx, [ebp+58h]; this
0x594BF1: fstp    [esp+0A0h+a3]; a3
0x594BF4: push    0FAFh; a2
0x594BF9: call    Tile_SetFloat
0x594BFE: jmp     short loc_594C04
0x594C00: test    ebx, ebx
0x594C02: jz      short loc_594C34
0x594C04: fld     [esp+9Ch+var_78]
0x594C08: fmul    dword ptr ds:0B37A48h
0x594C0E: call    Double_To_SInt32
0x594C13: mov     edx, [ebp+94h]
0x594C19: mov     [edx+78h], eax
0x594C1C: mov     eax, [ebp+94h]
0x594C22: or      byte ptr [eax+7Ch], 1
0x594C26: add     ebx, 1
0x594C29: cmp     ebx, [esp+9Ch+var_80]
0x594C2D: jge     short loc_594C6F
0x594C2F: jmp     loc_59494F
0x594C34: cmp     byte ptr [ebp+0A4h], 2
0x594C3B: jz      short loc_594C5C
0x594C3D: mov     eax, ds:0B38900h
0x594C42: mov     ecx, [ebp+0A0h]
0x594C48: push    eax
0x594C49: call    sub_57FF20
0x594C4E: mov     ecx, ebp
0x594C50: call    sub_593710
0x594C55: mov     byte ptr [ebp+0A4h], 0
0x594C5C: fld1
0x594C5E: push    ecx
0x594C5F: mov     ecx, [ebp+58h]; this
0x594C62: fstp    [esp+0A0h+a3]; a3
0x594C65: push    0FAFh; a2
0x594C6A: call    Tile_SetFloat
0x594C6F: mov     ecx, dword ptr [esp+9Ch+var_C]
0x594C76: mov     large fs:0, ecx
0x594C7D: pop     ecx
0x594C7E: pop     edi
0x594C7F: pop     esi
0x594C80: pop     ebp
0x594C81: pop     ebx
0x594C82: mov     ecx, [esp+88h+var_10]
0x594C86: xor     ecx, esp
0x594C88: call    @__security_check_cookie@4; __security_check_cookie(x)
0x594C8D: add     esp, 88h
0x594C93: retn
