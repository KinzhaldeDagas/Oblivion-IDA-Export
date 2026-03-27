0x6CDDB0: push    ecx
0x6CDDB1: push    ebx
0x6CDDB2: push    esi
0x6CDDB3: mov     esi, dword ptr [esp+0Ch+arg_0]
0x6CDDB7: push    edi
0x6CDDB8: push    esi
0x6CDDB9: mov     edi, ecx
0x6CDDBB: call    sub_6EBAC0
0x6CDDC0: mov     eax, ds:0B3CC5Ch
0x6CDDC5: push    eax; ArgList
0x6CDDC6: call    TESOutput_PrintString
0x6CDDCB: movzx   ebx, word ptr [esi+0Ah]
0x6CDDCF: movzx   ecx, word ptr [esi+8]
0x6CDDD3: add     esp, 4
0x6CDDD6: cmp     ebx, ecx
0x6CDDD8: mov     dword ptr [esp+10h+arg_0], eax
0x6CDDDC: jb      short loc_6CDDEC
0x6CDDDE: movzx   edx, word ptr [esi+0Eh]
0x6CDDE2: add     edx, ebx
0x6CDDE4: push    edx
0x6CDDE5: mov     ecx, esi
0x6CDDE7: call    NiTArray_SetSize
0x6CDDEC: lea     eax, [esp+10h+arg_0]
0x6CDDF0: push    eax
0x6CDDF1: push    ebx
0x6CDDF2: mov     ecx, esi
0x6CDDF4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDDF9: movzx   ecx, byte ptr [edi+0Dh]
0x6CDDFD: push    ecx; char
0x6CDDFE: push    offset aM_ucarraysize; "m_ucArraySize"
0x6CDE03: call    sub_70FA00
0x6CDE08: movzx   ebx, word ptr [esi+0Ah]
0x6CDE0C: movzx   edx, word ptr [esi+8]
0x6CDE10: add     esp, 8
0x6CDE13: cmp     ebx, edx
0x6CDE15: mov     dword ptr [esp+10h+arg_0], eax
0x6CDE19: jb      short loc_6CDE29
0x6CDE1B: movzx   eax, word ptr [esi+0Eh]
0x6CDE1F: add     eax, ebx
0x6CDE21: push    eax
0x6CDE22: mov     ecx, esi
0x6CDE24: call    NiTArray_SetSize
0x6CDE29: lea     ecx, [esp+10h+arg_0]
0x6CDE2D: push    ecx
0x6CDE2E: push    ebx
0x6CDE2F: mov     ecx, esi
0x6CDE31: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDE36: movzx   edx, byte ptr ds:0B242A0h
0x6CDE3D: push    edx; char
0x6CDE3E: push    offset aMs_ucarraygrow; "ms_ucArrayGrowBy"
0x6CDE43: call    sub_70FA00
0x6CDE48: movzx   ebx, word ptr [esi+0Ah]
0x6CDE4C: mov     dword ptr [esp+18h+arg_0], eax
0x6CDE50: movzx   eax, word ptr [esi+8]
0x6CDE54: add     esp, 8
0x6CDE57: cmp     ebx, eax
0x6CDE59: jb      short loc_6CDE69
0x6CDE5B: movzx   ecx, word ptr [esi+0Eh]
0x6CDE5F: add     ecx, ebx
0x6CDE61: push    ecx
0x6CDE62: mov     ecx, esi
0x6CDE64: call    NiTArray_SetSize
0x6CDE69: lea     edx, [esp+10h+arg_0]
0x6CDE6D: push    edx
0x6CDE6E: push    ebx
0x6CDE6F: mov     ecx, esi
0x6CDE71: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDE76: mov     al, [edi+0Ch]
0x6CDE79: and     al, 1
0x6CDE7B: mov     [esp+10h+arg_0], al
0x6CDE7F: mov     ecx, dword ptr [esp+10h+arg_0]
0x6CDE83: push    ecx; char
0x6CDE84: push    offset aManagercontrol; "ManagerControlled"
0x6CDE89: call    TESOutput_PrintLabeledBool
0x6CDE8E: movzx   ebx, word ptr [esi+0Ah]
0x6CDE92: movzx   edx, word ptr [esi+8]
0x6CDE96: add     esp, 8
0x6CDE99: cmp     ebx, edx
0x6CDE9B: mov     dword ptr [esp+10h+arg_0], eax
0x6CDE9F: jb      short loc_6CDEAF
0x6CDEA1: movzx   eax, word ptr [esi+0Eh]
0x6CDEA5: add     eax, ebx
0x6CDEA7: push    eax
0x6CDEA8: mov     ecx, esi
0x6CDEAA: call    NiTArray_SetSize
0x6CDEAF: lea     ecx, [esp+10h+arg_0]
0x6CDEB3: push    ecx
0x6CDEB4: push    ebx
0x6CDEB5: mov     ecx, esi
0x6CDEB7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDEBC: fld     dword ptr [edi+1Ch]
0x6CDEBF: push    ecx
0x6CDEC0: fstp    [esp+14h+var_14]; float
0x6CDEC3: push    offset aM_fweightthres; "m_fWeightThreshold"
0x6CDEC8: call    TESOutput_PrintLabeledFloat
0x6CDECD: movzx   ebx, word ptr [esi+0Ah]
0x6CDED1: movzx   edx, word ptr [esi+8]
0x6CDED5: add     esp, 8
0x6CDED8: cmp     ebx, edx
0x6CDEDA: mov     dword ptr [esp+10h+arg_0], eax
0x6CDEDE: jb      short loc_6CDEEE
0x6CDEE0: movzx   eax, word ptr [esi+0Eh]
0x6CDEE4: add     eax, ebx
0x6CDEE6: push    eax
0x6CDEE7: mov     ecx, esi
0x6CDEE9: call    NiTArray_SetSize
0x6CDEEE: lea     ecx, [esp+10h+arg_0]
0x6CDEF2: push    ecx
0x6CDEF3: push    ebx
0x6CDEF4: mov     ecx, esi
0x6CDEF6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDEFB: mov     dl, [edi+0Ch]
0x6CDEFE: shr     dl, 1
0x6CDF00: and     dl, 1
0x6CDF03: mov     [esp+10h+arg_0], dl
0x6CDF07: mov     eax, dword ptr [esp+10h+arg_0]
0x6CDF0B: push    eax; char
0x6CDF0C: push    offset aM_bonlyusehigh; "m_bOnlyUseHighestWeight"
0x6CDF11: call    TESOutput_PrintLabeledBool
0x6CDF16: movzx   ebx, word ptr [esi+0Ah]
0x6CDF1A: movzx   ecx, word ptr [esi+8]
0x6CDF1E: add     esp, 8
0x6CDF21: cmp     ebx, ecx
0x6CDF23: mov     dword ptr [esp+10h+arg_0], eax
0x6CDF27: jb      short loc_6CDF37
0x6CDF29: movzx   edx, word ptr [esi+0Eh]
0x6CDF2D: add     edx, ebx
0x6CDF2F: push    edx
0x6CDF30: mov     ecx, esi
0x6CDF32: call    NiTArray_SetSize
0x6CDF37: lea     eax, [esp+10h+arg_0]
0x6CDF3B: push    eax
0x6CDF3C: push    ebx
0x6CDF3D: mov     ecx, esi
0x6CDF3F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDF44: movzx   ecx, byte ptr [edi+0Eh]
0x6CDF48: push    ecx; char
0x6CDF49: push    offset aM_ucinterpcoun; "m_ucInterpCount"
0x6CDF4E: call    sub_70FA00
0x6CDF53: movzx   ebx, word ptr [esi+0Ah]
0x6CDF57: movzx   edx, word ptr [esi+8]
0x6CDF5B: add     esp, 8
0x6CDF5E: cmp     ebx, edx
0x6CDF60: mov     dword ptr [esp+10h+arg_0], eax
0x6CDF64: jb      short loc_6CDF74
0x6CDF66: movzx   eax, word ptr [esi+0Eh]
0x6CDF6A: add     eax, ebx
0x6CDF6C: push    eax
0x6CDF6D: mov     ecx, esi
0x6CDF6F: call    NiTArray_SetSize
0x6CDF74: lea     ecx, [esp+10h+arg_0]
0x6CDF78: push    ecx
0x6CDF79: push    ebx
0x6CDF7A: mov     ecx, esi
0x6CDF7C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDF81: movzx   edx, byte ptr [edi+0Fh]
0x6CDF85: push    edx; char
0x6CDF86: push    offset aM_ucsingleidx; "m_ucSingleIdx"
0x6CDF8B: call    sub_70FA00
0x6CDF90: movzx   ebx, word ptr [esi+0Ah]
0x6CDF94: mov     dword ptr [esp+18h+arg_0], eax
0x6CDF98: movzx   eax, word ptr [esi+8]
0x6CDF9C: add     esp, 8
0x6CDF9F: cmp     ebx, eax
0x6CDFA1: jb      short loc_6CDFB1
0x6CDFA3: movzx   ecx, word ptr [esi+0Eh]
0x6CDFA7: add     ecx, ebx
0x6CDFA9: push    ecx
0x6CDFAA: mov     ecx, esi
0x6CDFAC: call    NiTArray_SetSize
0x6CDFB1: lea     edx, [esp+10h+arg_0]
0x6CDFB5: push    edx
0x6CDFB6: push    ebx
0x6CDFB7: mov     ecx, esi
0x6CDFB9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CDFBE: xor     ebx, ebx
0x6CDFC0: cmp     [edi+0Dh], bl
0x6CDFC3: mov     dword ptr [esp+10h+arg_0], ebx
0x6CDFC7: jbe     loc_6CE17D
0x6CDFCD: push    ebp
0x6CDFCE: mov     edi, edi
0x6CDFD0: mov     eax, [edi+14h]
0x6CDFD3: mov     eax, [ebx+eax]
0x6CDFD6: test    eax, eax
0x6CDFD8: jz      loc_6CE162
0x6CDFDE: mov     ecx, ds:0B3CC30h
0x6CDFE4: test    ecx, ecx
0x6CDFE6: jz      loc_6CE162
0x6CDFEC: push    1
0x6CDFEE: push    eax
0x6CDFEF: call    sub_6C4390
0x6CDFF4: test    eax, eax
0x6CDFF6: jnz     short loc_6CE01C
0x6CDFF8: mov     ecx, ds:0B3CC34h
0x6CDFFE: test    ecx, ecx
0x6CE000: jz      loc_6CE162
0x6CE006: mov     edx, [edi+14h]
0x6CE009: mov     eax, [ebx+edx]
0x6CE00C: push    1
0x6CE00E: push    eax
0x6CE00F: call    sub_6C4390
0x6CE014: test    eax, eax
0x6CE016: jz      loc_6CE162
0x6CE01C: mov     eax, [eax+8]
0x6CE01F: push    eax; int
0x6CE020: push    offset aNicontroller_3; "NiControllerSequence"
0x6CE025: call    TESOutput_PrintLabeledString
0x6CE02A: movzx   ebp, word ptr [esi+0Ah]
0x6CE02E: mov     [esp+1Ch+var_4], eax
0x6CE032: movzx   eax, word ptr [esi+8]
0x6CE036: add     esp, 8
0x6CE039: cmp     ebp, eax
0x6CE03B: jb      short loc_6CE04B
0x6CE03D: movzx   ecx, word ptr [esi+0Eh]
0x6CE041: add     ecx, ebp
0x6CE043: push    ecx
0x6CE044: mov     ecx, esi
0x6CE046: call    NiTArray_SetSize
0x6CE04B: lea     edx, [esp+14h+var_4]
0x6CE04F: push    edx
0x6CE050: push    ebp
0x6CE051: mov     ecx, esi
0x6CE053: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE058: mov     eax, [edi+14h]
0x6CE05B: movzx   ecx, byte ptr [ebx+eax+0Ch]
0x6CE060: push    ecx; char
0x6CE061: push    offset aM_cpriority; "m_cPriority"
0x6CE066: call    sub_70FA00
0x6CE06B: movzx   ebp, word ptr [esi+0Ah]
0x6CE06F: movzx   edx, word ptr [esi+8]
0x6CE073: add     esp, 8
0x6CE076: cmp     ebp, edx
0x6CE078: mov     [esp+14h+var_4], eax
0x6CE07C: jb      short loc_6CE08C
0x6CE07E: movzx   eax, word ptr [esi+0Eh]
0x6CE082: add     eax, ebp
0x6CE084: push    eax
0x6CE085: mov     ecx, esi
0x6CE087: call    NiTArray_SetSize
0x6CE08C: lea     ecx, [esp+14h+var_4]
0x6CE090: push    ecx
0x6CE091: push    ebp
0x6CE092: mov     ecx, esi
0x6CE094: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE099: mov     edx, [edi+14h]
0x6CE09C: fld     dword ptr [ebx+edx+4]
0x6CE0A0: push    ecx
0x6CE0A1: fstp    [esp+18h+var_18]; float
0x6CE0A4: push    offset aM_fweight; "m_fWeight"
0x6CE0A9: call    TESOutput_PrintLabeledFloat
0x6CE0AE: movzx   ebp, word ptr [esi+0Ah]
0x6CE0B2: mov     [esp+1Ch+var_4], eax
0x6CE0B6: movzx   eax, word ptr [esi+8]
0x6CE0BA: add     esp, 8
0x6CE0BD: cmp     ebp, eax
0x6CE0BF: jb      short loc_6CE0CF
0x6CE0C1: movzx   ecx, word ptr [esi+0Eh]
0x6CE0C5: add     ecx, ebp
0x6CE0C7: push    ecx
0x6CE0C8: mov     ecx, esi
0x6CE0CA: call    NiTArray_SetSize
0x6CE0CF: lea     edx, [esp+14h+var_4]
0x6CE0D3: push    edx
0x6CE0D4: push    ebp
0x6CE0D5: mov     ecx, esi
0x6CE0D7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE0DC: mov     eax, [edi+14h]
0x6CE0DF: fld     dword ptr [ebx+eax+8]
0x6CE0E3: push    ecx
0x6CE0E4: fstp    [esp+18h+var_18]; float
0x6CE0E7: push    offset aM_fnormalizedw; "m_fNormalizedWeight"
0x6CE0EC: call    TESOutput_PrintLabeledFloat
0x6CE0F1: movzx   ebp, word ptr [esi+0Ah]
0x6CE0F5: movzx   ecx, word ptr [esi+8]
0x6CE0F9: add     esp, 8
0x6CE0FC: cmp     ebp, ecx
0x6CE0FE: mov     [esp+14h+var_4], eax
0x6CE102: jb      short loc_6CE112
0x6CE104: movzx   edx, word ptr [esi+0Eh]
0x6CE108: add     edx, ebp
0x6CE10A: push    edx
0x6CE10B: mov     ecx, esi
0x6CE10D: call    NiTArray_SetSize
0x6CE112: lea     eax, [esp+14h+var_4]
0x6CE116: push    eax
0x6CE117: push    ebp
0x6CE118: mov     ecx, esi
0x6CE11A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE11F: mov     ecx, [edi+14h]
0x6CE122: fld     dword ptr [ebx+ecx+10h]
0x6CE126: push    ecx
0x6CE127: fstp    [esp+18h+var_18]; float
0x6CE12A: push    offset aM_feasespinner; "m_fEaseSpinner"
0x6CE12F: call    TESOutput_PrintLabeledFloat
0x6CE134: movzx   ebp, word ptr [esi+0Ah]
0x6CE138: movzx   edx, word ptr [esi+8]
0x6CE13C: add     esp, 8
0x6CE13F: cmp     ebp, edx
0x6CE141: mov     [esp+14h+var_4], eax
0x6CE145: jb      short loc_6CE155
0x6CE147: movzx   eax, word ptr [esi+0Eh]
0x6CE14B: add     eax, ebp
0x6CE14D: push    eax
0x6CE14E: mov     ecx, esi
0x6CE150: call    NiTArray_SetSize
0x6CE155: lea     ecx, [esp+14h+var_4]
0x6CE159: push    ecx
0x6CE15A: push    ebp
0x6CE15B: mov     ecx, esi
0x6CE15D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE162: mov     eax, dword ptr [esp+14h+arg_0]
0x6CE166: movzx   edx, byte ptr [edi+0Dh]
0x6CE16A: add     eax, 1
0x6CE16D: add     ebx, 18h
0x6CE170: cmp     eax, edx
0x6CE172: mov     dword ptr [esp+14h+arg_0], eax
0x6CE176: jb      loc_6CDFD0
0x6CE17C: pop     ebp
0x6CE17D: pop     edi
0x6CE17E: pop     esi
0x6CE17F: pop     ebx
0x6CE180: pop     ecx
0x6CE181: retn    4
