0x705DF4: push    ebp; jumptable 00705C0A default case
0x705DF5: push    offset aMultitexture_1; "MultiTexture Decal Map"
0x705DFA: call    TESOutput_PrintLabeledUnsignedInt
0x705DFF: movzx   edx, word ptr [esi+8]
0x705E03: movzx   ebx, word ptr [esi+0Ah]
0x705E07: add     esp, 8
0x705E0A: cmp     ebx, edx
0x705E0C: mov     [esp+arg_C], eax
0x705E10: jb      short loc_705E20
0x705E12: movzx   eax, word ptr [esi+0Eh]
0x705E16: add     eax, ebx
0x705E18: push    eax
0x705E19: mov     ecx, esi
0x705E1B: call    NiTArray_SetSize
0x705E20: lea     ecx, [esp+arg_C]
0x705E24: push    ecx
0x705E25: push    ebx
0x705E26: mov     ecx, esi
0x705E28: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705E2D: push    offset aM_sptexture; "m_spTexture "
0x705E32: lea     edx, [esp+4+DstBuf]
0x705E36: push    40h ; '@'; SizeInBytes
0x705E38: push    edx; DstBuf
0x705E39: call    sub_6C5D40
0x705E3E: mov     eax, [edi+8]
0x705E41: push    eax; int
0x705E42: lea     eax, [esp+10h+DstBuf]
0x705E46: push    eax; ArgList
0x705E47: call    TESOutput_PrintLabeledPointer
0x705E4C: movzx   ebx, word ptr [esi+0Ah]
0x705E50: movzx   ecx, word ptr [esi+8]
0x705E54: add     esp, 14h
0x705E57: cmp     ebx, ecx
0x705E59: mov     [esp+arg_C], eax
0x705E5D: jb      short loc_705E6D
0x705E5F: movzx   edx, word ptr [esi+0Eh]
0x705E63: add     edx, ebx
0x705E65: push    edx
0x705E66: mov     ecx, esi
0x705E68: call    NiTArray_SetSize
0x705E6D: lea     eax, [esp+arg_C]
0x705E71: push    eax
0x705E72: push    ebx
0x705E73: mov     ecx, esi
0x705E75: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705E7A: push    offset aClampMode; "Clamp Mode "
0x705E7F: lea     ecx, [esp+4+DstBuf]
0x705E83: push    40h ; '@'; SizeInBytes
0x705E85: push    ecx; DstBuf
0x705E86: call    sub_6C5D40
0x705E8B: movzx   eax, word ptr [edi+4]
0x705E8F: shr     eax, 0Ch
0x705E92: and     eax, 3
0x705E95: push    eax; int
0x705E96: lea     edx, [esp+10h+DstBuf]
0x705E9A: push    edx; ArgList
0x705E9B: call    sub_703A70
0x705EA0: movzx   ebx, word ptr [esi+0Ah]
0x705EA4: mov     [esp+14h+arg_C], eax
0x705EA8: movzx   eax, word ptr [esi+8]
0x705EAC: add     esp, 14h
0x705EAF: cmp     ebx, eax
0x705EB1: jb      short loc_705EC1
0x705EB3: movzx   ecx, word ptr [esi+0Eh]
0x705EB7: add     ecx, ebx
0x705EB9: push    ecx
0x705EBA: mov     ecx, esi
0x705EBC: call    NiTArray_SetSize
0x705EC1: lea     edx, [esp+arg_C]
0x705EC5: push    edx
0x705EC6: push    ebx
0x705EC7: mov     ecx, esi
0x705EC9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705ECE: push    offset aFilterMode; "Filter Mode"
0x705ED3: lea     eax, [esp+4+DstBuf]
0x705ED7: push    40h ; '@'; SizeInBytes
0x705ED9: push    eax; DstBuf
0x705EDA: call    sub_6C5D40
0x705EDF: movzx   eax, byte ptr [edi+5]
0x705EE3: and     eax, 0Fh
0x705EE6: push    eax; int
0x705EE7: lea     ecx, [esp+10h+DstBuf]
0x705EEB: push    ecx; ArgList
0x705EEC: call    sub_703B20
0x705EF1: movzx   ebx, word ptr [esi+0Ah]
0x705EF5: movzx   edx, word ptr [esi+8]
0x705EF9: add     esp, 14h
0x705EFC: cmp     ebx, edx
0x705EFE: mov     [esp+arg_C], eax
0x705F02: jb      short loc_705F12
0x705F04: movzx   eax, word ptr [esi+0Eh]
0x705F08: add     eax, ebx
0x705F0A: push    eax
0x705F0B: mov     ecx, esi
0x705F0D: call    NiTArray_SetSize
0x705F12: lea     ecx, [esp+arg_C]
0x705F16: push    ecx
0x705F17: push    ebx
0x705F18: mov     ecx, esi
0x705F1A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705F1F: push    offset aTextureCoordIn; "Texture Coord Index "
0x705F24: lea     edx, [esp+4+DstBuf]
0x705F28: push    40h ; '@'; SizeInBytes
0x705F2A: push    edx; DstBuf
0x705F2B: call    sub_6C5D40
0x705F30: movzx   eax, byte ptr [edi+4]
0x705F34: push    eax; int
0x705F35: lea     eax, [esp+10h+DstBuf]
0x705F39: push    eax; ArgList
0x705F3A: call    TESOutput_PrintLabeledUnsignedInt
0x705F3F: movzx   edi, word ptr [esi+0Ah]
0x705F43: movzx   ecx, word ptr [esi+8]
0x705F47: add     esp, 14h
0x705F4A: cmp     edi, ecx
0x705F4C: mov     [esp+arg_C], eax
0x705F50: jb      short loc_705F60
0x705F52: movzx   edx, word ptr [esi+0Eh]
0x705F56: add     edx, edi
0x705F58: push    edx
0x705F59: mov     ecx, esi
0x705F5B: call    NiTArray_SetSize
0x705F60: lea     eax, [esp+arg_C]
0x705F64: push    eax
0x705F65: push    edi
0x705F66: mov     ecx, esi
0x705F68: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x705F6D: mov     ebx, [esp+arg_14]
0x705F71: add     ebp, 1
0x705F74: cmp     ebp, [esp+arg_10]
0x705F78: jb      loc_705BF0
0x705F7E: mov     eax, [ebx+2Ch]
0x705F81: test    eax, eax
0x705F83: jz      loc_7062C0
0x705F89: movzx   eax, word ptr [eax+0Ah]
0x705F8D: test    eax, eax
0x705F8F: mov     [esp+arg_10], eax
0x705F93: mov     [esp+arg_C], 0
0x705F9B: jbe     loc_7062C0
0x705FA1: mov     eax, [esp+arg_C]
0x705FA5: mov     ecx, [esp+arg_14]
0x705FA9: mov     edx, [ecx+2Ch]
0x705FAC: mov     ecx, [edx+4]
0x705FAF: mov     ebp, [ecx+eax*4]
0x705FB2: test    ebp, ebp
0x705FB4: jz      loc_7062AF
0x705FBA: mov     edx, [esp+arg_C]
0x705FBE: push    edx; int
0x705FBF: push    offset aShaderMap; "Shader Map"
0x705FC4: call    TESOutput_PrintLabeledUnsignedInt
0x705FC9: movzx   edi, word ptr [esi+0Ah]
0x705FCD: mov     ebx, eax
0x705FCF: movzx   eax, word ptr [esi+8]
0x705FD3: add     esp, 8
0x705FD6: cmp     edi, eax
0x705FD8: jb      short loc_705FE8
0x705FDA: movzx   ecx, word ptr [esi+0Eh]
0x705FDE: add     ecx, edi
0x705FE0: push    ecx
0x705FE1: mov     ecx, esi
0x705FE3: call    NiTArray_SetSize
0x705FE8: movzx   edx, word ptr [esi+0Ah]
0x705FEC: cmp     edi, edx
0x705FEE: jb      short loc_706002
0x705FF0: test    ebx, ebx
0x705FF2: lea     eax, [edi+1]
0x705FF5: mov     [esi+0Ah], ax
0x705FF9: jz      short loc_706025
0x705FFB: add     word ptr [esi+0Ch], 1
0x706000: jmp     short loc_706025
0x706002: test    ebx, ebx
0x706004: jz      short loc_706016
0x706006: mov     ecx, [esi+4]
0x706009: cmp     dword ptr [ecx+edi*4], 0
0x70600D: jnz     short loc_706025
0x70600F: add     word ptr [esi+0Ch], 1
0x706014: jmp     short loc_706025
0x706016: mov     edx, [esi+4]
0x706019: cmp     dword ptr [edx+edi*4], 0
0x70601D: jz      short loc_706025
0x70601F: add     word ptr [esi+0Ch], 0FFFFh
0x706025: mov     eax, [esi+4]
0x706028: mov     [eax+edi*4], ebx
0x70602B: mov     eax, [ebp+10h]
0x70602E: push    eax; int
0x70602F: push    offset aM_uiid; "m_uiID"
0x706034: call    TESOutput_PrintLabeledUnsignedInt
0x706039: movzx   edi, word ptr [esi+0Ah]
0x70603D: movzx   ecx, word ptr [esi+8]
0x706041: add     esp, 8
0x706044: cmp     edi, ecx
0x706046: mov     ebx, eax
0x706048: jb      short loc_706058
0x70604A: movzx   edx, word ptr [esi+0Eh]
0x70604E: add     edx, edi
0x706050: push    edx
0x706051: mov     ecx, esi
0x706053: call    NiTArray_SetSize
0x706058: movzx   eax, word ptr [esi+0Ah]
0x70605C: cmp     edi, eax
0x70605E: jb      short loc_706072
0x706060: test    ebx, ebx
0x706062: lea     ecx, [edi+1]
0x706065: mov     [esi+0Ah], cx
0x706069: jz      short loc_706095
0x70606B: add     word ptr [esi+0Ch], 1
0x706070: jmp     short loc_706095
0x706072: test    ebx, ebx
0x706074: jz      short loc_706086
0x706076: mov     edx, [esi+4]
0x706079: cmp     dword ptr [edx+edi*4], 0
0x70607D: jnz     short loc_706095
0x70607F: add     word ptr [esi+0Ch], 1
0x706084: jmp     short loc_706095
0x706086: mov     eax, [esi+4]
0x706089: cmp     dword ptr [eax+edi*4], 0
0x70608D: jz      short loc_706095
0x70608F: add     word ptr [esi+0Ch], 0FFFFh
0x706095: mov     ecx, [esi+4]
0x706098: push    offset aM_sptexture; "m_spTexture "
0x70609D: lea     edx, [esp+4+DstBuf]
0x7060A1: push    40h ; '@'; SizeInBytes
0x7060A3: push    edx; DstBuf
0x7060A4: mov     [ecx+edi*4], ebx
0x7060A7: call    sub_6C5D40
0x7060AC: mov     eax, [ebp+8]
0x7060AF: push    eax; int
0x7060B0: lea     eax, [esp+10h+DstBuf]
0x7060B4: push    eax; ArgList
0x7060B5: call    TESOutput_PrintLabeledPointer
0x7060BA: movzx   edi, word ptr [esi+0Ah]
0x7060BE: movzx   ecx, word ptr [esi+8]
0x7060C2: add     esp, 14h
0x7060C5: cmp     edi, ecx
0x7060C7: mov     ebx, eax
0x7060C9: jb      short loc_7060D9
0x7060CB: movzx   edx, word ptr [esi+0Eh]
0x7060CF: add     edx, edi
0x7060D1: push    edx
0x7060D2: mov     ecx, esi
0x7060D4: call    NiTArray_SetSize
0x7060D9: movzx   eax, word ptr [esi+0Ah]
0x7060DD: cmp     edi, eax
0x7060DF: jb      short loc_7060F3
0x7060E1: test    ebx, ebx
0x7060E3: lea     ecx, [edi+1]
0x7060E6: mov     [esi+0Ah], cx
0x7060EA: jz      short loc_706116
0x7060EC: add     word ptr [esi+0Ch], 1
0x7060F1: jmp     short loc_706116
0x7060F3: test    ebx, ebx
0x7060F5: jz      short loc_706107
0x7060F7: mov     edx, [esi+4]
0x7060FA: cmp     dword ptr [edx+edi*4], 0
0x7060FE: jnz     short loc_706116
0x706100: add     word ptr [esi+0Ch], 1
0x706105: jmp     short loc_706116
0x706107: mov     eax, [esi+4]
0x70610A: cmp     dword ptr [eax+edi*4], 0
0x70610E: jz      short loc_706116
0x706110: add     word ptr [esi+0Ch], 0FFFFh
0x706116: mov     ecx, [esi+4]
0x706119: push    offset aClampMode; "Clamp Mode "
0x70611E: lea     edx, [esp+4+DstBuf]
0x706122: push    40h ; '@'; SizeInBytes
0x706124: push    edx; DstBuf
0x706125: mov     [ecx+edi*4], ebx
0x706128: call    sub_6C5D40
0x70612D: movzx   eax, word ptr [ebp+4]
0x706131: shr     eax, 0Ch
0x706134: and     eax, 3
0x706137: push    eax; int
0x706138: lea     eax, [esp+10h+DstBuf]
0x70613C: push    eax; ArgList
0x70613D: call    sub_703A70
0x706142: movzx   edi, word ptr [esi+0Ah]
0x706146: movzx   ecx, word ptr [esi+8]
0x70614A: add     esp, 14h
0x70614D: cmp     edi, ecx
0x70614F: mov     ebx, eax
0x706151: jb      short loc_706161
0x706153: movzx   edx, word ptr [esi+0Eh]
0x706157: add     edx, edi
0x706159: push    edx
0x70615A: mov     ecx, esi
0x70615C: call    NiTArray_SetSize
0x706161: movzx   eax, word ptr [esi+0Ah]
0x706165: cmp     edi, eax
0x706167: jb      short loc_70617B
0x706169: test    ebx, ebx
0x70616B: lea     ecx, [edi+1]
0x70616E: mov     [esi+0Ah], cx
0x706172: jz      short loc_70619E
0x706174: add     word ptr [esi+0Ch], 1
0x706179: jmp     short loc_70619E
0x70617B: test    ebx, ebx
0x70617D: jz      short loc_70618F
0x70617F: mov     edx, [esi+4]
0x706182: cmp     dword ptr [edx+edi*4], 0
0x706186: jnz     short loc_70619E
0x706188: add     word ptr [esi+0Ch], 1
0x70618D: jmp     short loc_70619E
0x70618F: mov     eax, [esi+4]
0x706192: cmp     dword ptr [eax+edi*4], 0
0x706196: jz      short loc_70619E
0x706198: add     word ptr [esi+0Ch], 0FFFFh
0x70619E: mov     ecx, [esi+4]
0x7061A1: push    offset aFilterMode; "Filter Mode"
0x7061A6: lea     edx, [esp+4+DstBuf]
0x7061AA: push    40h ; '@'; SizeInBytes
0x7061AC: push    edx; DstBuf
0x7061AD: mov     [ecx+edi*4], ebx
0x7061B0: call    sub_6C5D40
0x7061B5: movzx   eax, byte ptr [ebp+5]
0x7061B9: and     eax, 0Fh
0x7061BC: push    eax; int
0x7061BD: lea     eax, [esp+10h+DstBuf]
0x7061C1: push    eax; ArgList
0x7061C2: call    sub_703B20
0x7061C7: movzx   edi, word ptr [esi+0Ah]
0x7061CB: movzx   ecx, word ptr [esi+8]
0x7061CF: add     esp, 14h
0x7061D2: cmp     edi, ecx
0x7061D4: mov     ebx, eax
0x7061D6: jb      short loc_7061E6
0x7061D8: movzx   edx, word ptr [esi+0Eh]
0x7061DC: add     edx, edi
0x7061DE: push    edx
0x7061DF: mov     ecx, esi
0x7061E1: call    NiTArray_SetSize
0x7061E6: movzx   eax, word ptr [esi+0Ah]
0x7061EA: cmp     edi, eax
0x7061EC: jb      short loc_706200
0x7061EE: test    ebx, ebx
0x7061F0: lea     ecx, [edi+1]
0x7061F3: mov     [esi+0Ah], cx
0x7061F7: jz      short loc_706223
0x7061F9: add     word ptr [esi+0Ch], 1
0x7061FE: jmp     short loc_706223
0x706200: test    ebx, ebx
0x706202: jz      short loc_706214
0x706204: mov     edx, [esi+4]
0x706207: cmp     dword ptr [edx+edi*4], 0
0x70620B: jnz     short loc_706223
0x70620D: add     word ptr [esi+0Ch], 1
0x706212: jmp     short loc_706223
0x706214: mov     eax, [esi+4]
0x706217: cmp     dword ptr [eax+edi*4], 0
0x70621B: jz      short loc_706223
0x70621D: add     word ptr [esi+0Ch], 0FFFFh
0x706223: mov     ecx, [esi+4]
0x706226: push    offset aTextureCoordIn; "Texture Coord Index "
0x70622B: lea     edx, [esp+4+DstBuf]
0x70622F: push    40h ; '@'; SizeInBytes
0x706231: push    edx; DstBuf
0x706232: mov     [ecx+edi*4], ebx
0x706235: call    sub_6C5D40
0x70623A: movzx   eax, byte ptr [ebp+4]
0x70623E: push    eax; int
0x70623F: lea     eax, [esp+10h+DstBuf]
0x706243: push    eax; ArgList
0x706244: call    TESOutput_PrintLabeledUnsignedInt
0x706249: movzx   edi, word ptr [esi+0Ah]
0x70624D: movzx   ecx, word ptr [esi+8]
0x706251: add     esp, 14h
0x706254: cmp     edi, ecx
0x706256: mov     ebx, eax
0x706258: jb      short loc_706268
0x70625A: movzx   edx, word ptr [esi+0Eh]
0x70625E: add     edx, edi
0x706260: push    edx
0x706261: mov     ecx, esi
0x706263: call    NiTArray_SetSize
0x706268: movzx   eax, word ptr [esi+0Ah]
0x70626C: cmp     edi, eax
0x70626E: jb      short loc_706282
0x706270: test    ebx, ebx
0x706272: lea     ecx, [edi+1]
0x706275: mov     [esi+0Ah], cx
0x706279: jz      short loc_7062A5
0x70627B: add     word ptr [esi+0Ch], 1
0x706280: jmp     short loc_7062A5
0x706282: test    ebx, ebx
0x706284: jz      short loc_706296
0x706286: mov     edx, [esi+4]
0x706289: cmp     dword ptr [edx+edi*4], 0
0x70628D: jnz     short loc_7062A5
0x70628F: add     word ptr [esi+0Ch], 1
0x706294: jmp     short loc_7062A5
0x706296: mov     eax, [esi+4]
0x706299: cmp     dword ptr [eax+edi*4], 0
0x70629D: jz      short loc_7062A5
0x70629F: add     word ptr [esi+0Ch], 0FFFFh
0x7062A5: mov     ecx, [esi+4]
0x7062A8: mov     eax, [esp+arg_C]
0x7062AC: mov     [ecx+edi*4], ebx
0x7062AF: add     eax, 1
0x7062B2: cmp     eax, [esp+arg_10]
0x7062B6: mov     [esp+arg_C], eax
0x7062BA: jb      loc_705FA5
0x7062C0: mov     ecx, [esp+arg_98]
0x7062C7: pop     edi
0x7062C8: pop     esi
0x7062C9: pop     ebp
0x7062CA: pop     ebx
0x7062CB: xor     ecx, esp
0x7062CD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7062D2: add     esp, 90h
0x7062D8: retn    4
