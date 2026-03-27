0x65CD10: push    ebp
0x65CD11: push    esi
0x65CD12: mov     ebp, ecx
0x65CD14: call    AVCollection_ClearArrayAndList
0x65CD19: mov     esi, [esp+8+arg_0]
0x65CD1D: test    esi, esi
0x65CD1F: jz      loc_65D13A
0x65CD25: mov     eax, [esi+0Ch]
0x65CD28: test    eax, eax
0x65CD2A: jz      short loc_65CD31
0x65CD2C: fld     dword ptr [eax+4]
0x65CD2F: jmp     short loc_65CD33
0x65CD31: fldz
0x65CD33: fstp    [esp+8+arg_0]
0x65CD37: push    ecx
0x65CD38: fld     [esp+0Ch+arg_0]
0x65CD3C: mov     ecx, ebp
0x65CD3E: fstp    [esp+0Ch+var_C]; float
0x65CD41: push    0Ah; int
0x65CD43: call    AVCollection_ModAV
0x65CD48: mov     eax, [esi+8]
0x65CD4B: test    eax, eax
0x65CD4D: jz      short loc_65CD54
0x65CD4F: fld     dword ptr [eax+4]
0x65CD52: jmp     short loc_65CD56
0x65CD54: fldz
0x65CD56: fstp    [esp+8+arg_0]
0x65CD5A: push    ecx
0x65CD5B: fld     [esp+0Ch+arg_0]
0x65CD5F: mov     ecx, ebp
0x65CD61: fstp    [esp+0Ch+var_C]; float
0x65CD64: push    9; int
0x65CD66: call    AVCollection_ModAV
0x65CD6B: mov     eax, [esi+10h]
0x65CD6E: test    eax, eax
0x65CD70: jz      loc_65D107
0x65CD76: cmp     dword ptr [eax], 0
0x65CD79: jz      short loc_65CDA4
0x65CD7B: push    8; Size
0x65CD7D: call    FormHeapAlloc
0x65CD82: add     esp, 4
0x65CD85: test    eax, eax
0x65CD87: jz      short loc_65CD9A
0x65CD89: mov     ecx, [esi+10h]
0x65CD8C: mov     ecx, [ecx]
0x65CD8E: mov     dl, [ecx]
0x65CD90: mov     [eax], dl
0x65CD92: fld     dword ptr [ecx+4]
0x65CD95: fstp    dword ptr [eax+4]
0x65CD98: jmp     short loc_65CD9C
0x65CD9A: xor     eax, eax
0x65CD9C: push    eax
0x65CD9D: mov     ecx, ebp
0x65CD9F: call    AVCollection_Add
0x65CDA4: mov     eax, [esi+10h]
0x65CDA7: cmp     dword ptr [eax+4], 0
0x65CDAB: jz      short loc_65CDD7
0x65CDAD: push    8; Size
0x65CDAF: call    FormHeapAlloc
0x65CDB4: add     esp, 4
0x65CDB7: test    eax, eax
0x65CDB9: jz      short loc_65CDCD
0x65CDBB: mov     ecx, [esi+10h]
0x65CDBE: mov     ecx, [ecx+4]
0x65CDC1: mov     dl, [ecx]
0x65CDC3: mov     [eax], dl
0x65CDC5: fld     dword ptr [ecx+4]
0x65CDC8: fstp    dword ptr [eax+4]
0x65CDCB: jmp     short loc_65CDCF
0x65CDCD: xor     eax, eax
0x65CDCF: push    eax
0x65CDD0: mov     ecx, ebp
0x65CDD2: call    AVCollection_Add
0x65CDD7: mov     eax, [esi+10h]
0x65CDDA: cmp     dword ptr [eax+8], 0
0x65CDDE: jz      short loc_65CE0A
0x65CDE0: push    8; Size
0x65CDE2: call    FormHeapAlloc
0x65CDE7: add     esp, 4
0x65CDEA: test    eax, eax
0x65CDEC: jz      short loc_65CE00
0x65CDEE: mov     ecx, [esi+10h]
0x65CDF1: mov     ecx, [ecx+8]
0x65CDF4: mov     dl, [ecx]
0x65CDF6: mov     [eax], dl
0x65CDF8: fld     dword ptr [ecx+4]
0x65CDFB: fstp    dword ptr [eax+4]
0x65CDFE: jmp     short loc_65CE02
0x65CE00: xor     eax, eax
0x65CE02: push    eax
0x65CE03: mov     ecx, ebp
0x65CE05: call    AVCollection_Add
0x65CE0A: mov     eax, [esi+10h]
0x65CE0D: cmp     dword ptr [eax+0Ch], 0
0x65CE11: jz      short loc_65CE3D
0x65CE13: push    8; Size
0x65CE15: call    FormHeapAlloc
0x65CE1A: add     esp, 4
0x65CE1D: test    eax, eax
0x65CE1F: jz      short loc_65CE33
0x65CE21: mov     ecx, [esi+10h]
0x65CE24: mov     ecx, [ecx+0Ch]
0x65CE27: mov     dl, [ecx]
0x65CE29: mov     [eax], dl
0x65CE2B: fld     dword ptr [ecx+4]
0x65CE2E: fstp    dword ptr [eax+4]
0x65CE31: jmp     short loc_65CE35
0x65CE33: xor     eax, eax
0x65CE35: push    eax
0x65CE36: mov     ecx, ebp
0x65CE38: call    AVCollection_Add
0x65CE3D: mov     eax, [esi+10h]
0x65CE40: cmp     dword ptr [eax+10h], 0
0x65CE44: jz      short loc_65CE70
0x65CE46: push    8; Size
0x65CE48: call    FormHeapAlloc
0x65CE4D: add     esp, 4
0x65CE50: test    eax, eax
0x65CE52: jz      short loc_65CE66
0x65CE54: mov     ecx, [esi+10h]
0x65CE57: mov     ecx, [ecx+10h]
0x65CE5A: mov     dl, [ecx]
0x65CE5C: mov     [eax], dl
0x65CE5E: fld     dword ptr [ecx+4]
0x65CE61: fstp    dword ptr [eax+4]
0x65CE64: jmp     short loc_65CE68
0x65CE66: xor     eax, eax
0x65CE68: push    eax
0x65CE69: mov     ecx, ebp
0x65CE6B: call    AVCollection_Add
0x65CE70: mov     eax, [esi+10h]
0x65CE73: cmp     dword ptr [eax+14h], 0
0x65CE77: jz      short loc_65CEA3
0x65CE79: push    8; Size
0x65CE7B: call    FormHeapAlloc
0x65CE80: add     esp, 4
0x65CE83: test    eax, eax
0x65CE85: jz      short loc_65CE99
0x65CE87: mov     ecx, [esi+10h]
0x65CE8A: mov     ecx, [ecx+14h]
0x65CE8D: mov     dl, [ecx]
0x65CE8F: mov     [eax], dl
0x65CE91: fld     dword ptr [ecx+4]
0x65CE94: fstp    dword ptr [eax+4]
0x65CE97: jmp     short loc_65CE9B
0x65CE99: xor     eax, eax
0x65CE9B: push    eax
0x65CE9C: mov     ecx, ebp
0x65CE9E: call    AVCollection_Add
0x65CEA3: mov     eax, [esi+10h]
0x65CEA6: cmp     dword ptr [eax+18h], 0
0x65CEAA: jz      short loc_65CED6
0x65CEAC: push    8; Size
0x65CEAE: call    FormHeapAlloc
0x65CEB3: add     esp, 4
0x65CEB6: test    eax, eax
0x65CEB8: jz      short loc_65CECC
0x65CEBA: mov     ecx, [esi+10h]
0x65CEBD: mov     ecx, [ecx+18h]
0x65CEC0: mov     dl, [ecx]
0x65CEC2: mov     [eax], dl
0x65CEC4: fld     dword ptr [ecx+4]
0x65CEC7: fstp    dword ptr [eax+4]
0x65CECA: jmp     short loc_65CECE
0x65CECC: xor     eax, eax
0x65CECE: push    eax
0x65CECF: mov     ecx, ebp
0x65CED1: call    AVCollection_Add
0x65CED6: mov     eax, [esi+10h]
0x65CED9: cmp     dword ptr [eax+1Ch], 0
0x65CEDD: jz      short loc_65CF09
0x65CEDF: push    8; Size
0x65CEE1: call    FormHeapAlloc
0x65CEE6: add     esp, 4
0x65CEE9: test    eax, eax
0x65CEEB: jz      short loc_65CEFF
0x65CEED: mov     ecx, [esi+10h]
0x65CEF0: mov     ecx, [ecx+1Ch]
0x65CEF3: mov     dl, [ecx]
0x65CEF5: mov     [eax], dl
0x65CEF7: fld     dword ptr [ecx+4]
0x65CEFA: fstp    dword ptr [eax+4]
0x65CEFD: jmp     short loc_65CF01
0x65CEFF: xor     eax, eax
0x65CF01: push    eax
0x65CF02: mov     ecx, ebp
0x65CF04: call    AVCollection_Add
0x65CF09: mov     eax, [esi+10h]
0x65CF0C: cmp     dword ptr [eax+20h], 0
0x65CF10: jz      short loc_65CF3C
0x65CF12: push    8; Size
0x65CF14: call    FormHeapAlloc
0x65CF19: add     esp, 4
0x65CF1C: test    eax, eax
0x65CF1E: jz      short loc_65CF32
0x65CF20: mov     ecx, [esi+10h]
0x65CF23: mov     ecx, [ecx+20h]
0x65CF26: mov     dl, [ecx]
0x65CF28: mov     [eax], dl
0x65CF2A: fld     dword ptr [ecx+4]
0x65CF2D: fstp    dword ptr [eax+4]
0x65CF30: jmp     short loc_65CF34
0x65CF32: xor     eax, eax
0x65CF34: push    eax
0x65CF35: mov     ecx, ebp
0x65CF37: call    AVCollection_Add
0x65CF3C: mov     eax, [esi+10h]
0x65CF3F: cmp     dword ptr [eax+24h], 0
0x65CF43: jz      short loc_65CF6F
0x65CF45: push    8; Size
0x65CF47: call    FormHeapAlloc
0x65CF4C: add     esp, 4
0x65CF4F: test    eax, eax
0x65CF51: jz      short loc_65CF65
0x65CF53: mov     ecx, [esi+10h]
0x65CF56: mov     ecx, [ecx+24h]
0x65CF59: mov     dl, [ecx]
0x65CF5B: mov     [eax], dl
0x65CF5D: fld     dword ptr [ecx+4]
0x65CF60: fstp    dword ptr [eax+4]
0x65CF63: jmp     short loc_65CF67
0x65CF65: xor     eax, eax
0x65CF67: push    eax
0x65CF68: mov     ecx, ebp
0x65CF6A: call    AVCollection_Add
0x65CF6F: mov     eax, [esi+10h]
0x65CF72: cmp     dword ptr [eax+28h], 0
0x65CF76: jz      short loc_65CFA2
0x65CF78: push    8; Size
0x65CF7A: call    FormHeapAlloc
0x65CF7F: add     esp, 4
0x65CF82: test    eax, eax
0x65CF84: jz      short loc_65CF98
0x65CF86: mov     ecx, [esi+10h]
0x65CF89: mov     ecx, [ecx+28h]
0x65CF8C: mov     dl, [ecx]
0x65CF8E: mov     [eax], dl
0x65CF90: fld     dword ptr [ecx+4]
0x65CF93: fstp    dword ptr [eax+4]
0x65CF96: jmp     short loc_65CF9A
0x65CF98: xor     eax, eax
0x65CF9A: push    eax
0x65CF9B: mov     ecx, ebp
0x65CF9D: call    AVCollection_Add
0x65CFA2: mov     eax, [esi+10h]
0x65CFA5: cmp     dword ptr [eax+2Ch], 0
0x65CFA9: jz      short loc_65CFD5
0x65CFAB: push    8; Size
0x65CFAD: call    FormHeapAlloc
0x65CFB2: add     esp, 4
0x65CFB5: test    eax, eax
0x65CFB7: jz      short loc_65CFCB
0x65CFB9: mov     ecx, [esi+10h]
0x65CFBC: mov     ecx, [ecx+2Ch]
0x65CFBF: mov     dl, [ecx]
0x65CFC1: mov     [eax], dl
0x65CFC3: fld     dword ptr [ecx+4]
0x65CFC6: fstp    dword ptr [eax+4]
0x65CFC9: jmp     short loc_65CFCD
0x65CFCB: xor     eax, eax
0x65CFCD: push    eax
0x65CFCE: mov     ecx, ebp
0x65CFD0: call    AVCollection_Add
0x65CFD5: mov     eax, [esi+10h]
0x65CFD8: cmp     dword ptr [eax+30h], 0
0x65CFDC: jz      short loc_65D008
0x65CFDE: push    8; Size
0x65CFE0: call    FormHeapAlloc
0x65CFE5: add     esp, 4
0x65CFE8: test    eax, eax
0x65CFEA: jz      short loc_65CFFE
0x65CFEC: mov     ecx, [esi+10h]
0x65CFEF: mov     ecx, [ecx+30h]
0x65CFF2: mov     dl, [ecx]
0x65CFF4: mov     [eax], dl
0x65CFF6: fld     dword ptr [ecx+4]
0x65CFF9: fstp    dword ptr [eax+4]
0x65CFFC: jmp     short loc_65D000
0x65CFFE: xor     eax, eax
0x65D000: push    eax
0x65D001: mov     ecx, ebp
0x65D003: call    AVCollection_Add
0x65D008: mov     eax, [esi+10h]
0x65D00B: cmp     dword ptr [eax+34h], 0
0x65D00F: jz      short loc_65D03B
0x65D011: push    8; Size
0x65D013: call    FormHeapAlloc
0x65D018: add     esp, 4
0x65D01B: test    eax, eax
0x65D01D: jz      short loc_65D031
0x65D01F: mov     ecx, [esi+10h]
0x65D022: mov     ecx, [ecx+34h]
0x65D025: mov     dl, [ecx]
0x65D027: mov     [eax], dl
0x65D029: fld     dword ptr [ecx+4]
0x65D02C: fstp    dword ptr [eax+4]
0x65D02F: jmp     short loc_65D033
0x65D031: xor     eax, eax
0x65D033: push    eax
0x65D034: mov     ecx, ebp
0x65D036: call    AVCollection_Add
0x65D03B: mov     eax, [esi+10h]
0x65D03E: cmp     dword ptr [eax+38h], 0
0x65D042: jz      short loc_65D06E
0x65D044: push    8; Size
0x65D046: call    FormHeapAlloc
0x65D04B: add     esp, 4
0x65D04E: test    eax, eax
0x65D050: jz      short loc_65D064
0x65D052: mov     ecx, [esi+10h]
0x65D055: mov     ecx, [ecx+38h]
0x65D058: mov     dl, [ecx]
0x65D05A: mov     [eax], dl
0x65D05C: fld     dword ptr [ecx+4]
0x65D05F: fstp    dword ptr [eax+4]
0x65D062: jmp     short loc_65D066
0x65D064: xor     eax, eax
0x65D066: push    eax
0x65D067: mov     ecx, ebp
0x65D069: call    AVCollection_Add
0x65D06E: mov     eax, [esi+10h]
0x65D071: cmp     dword ptr [eax+3Ch], 0
0x65D075: jz      short loc_65D0A1
0x65D077: push    8; Size
0x65D079: call    FormHeapAlloc
0x65D07E: add     esp, 4
0x65D081: test    eax, eax
0x65D083: jz      short loc_65D097
0x65D085: mov     ecx, [esi+10h]
0x65D088: mov     ecx, [ecx+3Ch]
0x65D08B: mov     dl, [ecx]
0x65D08D: mov     [eax], dl
0x65D08F: fld     dword ptr [ecx+4]
0x65D092: fstp    dword ptr [eax+4]
0x65D095: jmp     short loc_65D099
0x65D097: xor     eax, eax
0x65D099: push    eax
0x65D09A: mov     ecx, ebp
0x65D09C: call    AVCollection_Add
0x65D0A1: mov     eax, [esi+10h]
0x65D0A4: cmp     dword ptr [eax+40h], 0
0x65D0A8: jz      short loc_65D0D4
0x65D0AA: push    8; Size
0x65D0AC: call    FormHeapAlloc
0x65D0B1: add     esp, 4
0x65D0B4: test    eax, eax
0x65D0B6: jz      short loc_65D0CA
0x65D0B8: mov     ecx, [esi+10h]
0x65D0BB: mov     ecx, [ecx+40h]
0x65D0BE: mov     dl, [ecx]
0x65D0C0: mov     [eax], dl
0x65D0C2: fld     dword ptr [ecx+4]
0x65D0C5: fstp    dword ptr [eax+4]
0x65D0C8: jmp     short loc_65D0CC
0x65D0CA: xor     eax, eax
0x65D0CC: push    eax
0x65D0CD: mov     ecx, ebp
0x65D0CF: call    AVCollection_Add
0x65D0D4: mov     eax, [esi+10h]
0x65D0D7: cmp     dword ptr [eax+44h], 0
0x65D0DB: jz      short loc_65D107
0x65D0DD: push    8; Size
0x65D0DF: call    FormHeapAlloc
0x65D0E4: add     esp, 4
0x65D0E7: test    eax, eax
0x65D0E9: jz      short loc_65D0FD
0x65D0EB: mov     ecx, [esi+10h]
0x65D0EE: mov     ecx, [ecx+44h]
0x65D0F1: mov     dl, [ecx]
0x65D0F3: mov     [eax], dl
0x65D0F5: fld     dword ptr [ecx+4]
0x65D0F8: fstp    dword ptr [eax+4]
0x65D0FB: jmp     short loc_65D0FF
0x65D0FD: xor     eax, eax
0x65D0FF: push    eax
0x65D100: mov     ecx, ebp
0x65D102: call    AVCollection_Add
0x65D107: push    edi
0x65D108: mov     edi, [esi]
0x65D10A: test    edi, edi
0x65D10C: jz      short loc_65D139
0x65D10E: push    8; Size
0x65D110: call    FormHeapAlloc
0x65D115: add     esp, 4
0x65D118: test    eax, eax
0x65D11A: jz      short loc_65D128
0x65D11C: mov     cl, [edi]
0x65D11E: mov     [eax], cl
0x65D120: fld     dword ptr [edi+4]
0x65D123: fstp    dword ptr [eax+4]
0x65D126: jmp     short loc_65D12A
0x65D128: xor     eax, eax
0x65D12A: push    eax
0x65D12B: mov     ecx, ebp
0x65D12D: call    AVCollection_Add
0x65D132: mov     esi, [esi+4]
0x65D135: test    esi, esi
0x65D137: jnz     short loc_65D108
0x65D139: pop     edi
0x65D13A: pop     esi
0x65D13B: pop     ebp
0x65D13C: retn    4
