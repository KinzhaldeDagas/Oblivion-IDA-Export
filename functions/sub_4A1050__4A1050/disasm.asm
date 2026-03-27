0x4A1050: push    ebx
0x4A1051: push    esi
0x4A1052: mov     esi, [esp+8+arg_0]
0x4A1056: push    edi
0x4A1057: push    esi
0x4A1058: mov     edi, ecx
0x4A105A: call    sub_70BAE0
0x4A105F: mov     eax, ds:0B35288h
0x4A1064: push    eax; ArgList
0x4A1065: call    TESOutput_PrintString
0x4A106A: movzx   ebx, word ptr [esi+0Ah]
0x4A106E: movzx   ecx, word ptr [esi+8]
0x4A1072: add     esp, 4
0x4A1075: cmp     ebx, ecx
0x4A1077: mov     [esp+0Ch+arg_0], eax
0x4A107B: jb      short loc_4A108B
0x4A107D: movzx   edx, word ptr [esi+0Eh]
0x4A1081: add     edx, ebx
0x4A1083: push    edx
0x4A1084: mov     ecx, esi
0x4A1086: call    NiTArray_SetSize
0x4A108B: lea     eax, [esp+0Ch+arg_0]
0x4A108F: push    eax
0x4A1090: push    ebx
0x4A1091: mov     ecx, esi
0x4A1093: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A1098: push    20h ; ' '; Size
0x4A109A: call    FormHeapAlloc
0x4A109F: fld     dword ptr [edi+0E0h]
0x4A10A5: push    ecx
0x4A10A6: fstp    [esp+14h+var_14]
0x4A10A9: push    offset aFneardistsqr_2; "fNearDistSqr = %.2f"
0x4A10AE: push    eax
0x4A10AF: mov     [esp+1Ch+arg_0], eax
0x4A10B3: call    __sprintf
0x4A10B8: movzx   ebx, word ptr [esi+0Ah]
0x4A10BC: movzx   ecx, word ptr [esi+8]
0x4A10C0: add     esp, 10h
0x4A10C3: cmp     ebx, ecx
0x4A10C5: jb      short loc_4A10D5
0x4A10C7: movzx   edx, word ptr [esi+0Eh]
0x4A10CB: add     edx, ebx
0x4A10CD: push    edx
0x4A10CE: mov     ecx, esi
0x4A10D0: call    NiTArray_SetSize
0x4A10D5: lea     eax, [esp+0Ch+arg_0]
0x4A10D9: push    eax
0x4A10DA: push    ebx
0x4A10DB: mov     ecx, esi
0x4A10DD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A10E2: push    20h ; ' '; Size
0x4A10E4: call    FormHeapAlloc
0x4A10E9: fld     dword ptr [edi+0E4h]
0x4A10EF: push    ecx
0x4A10F0: fstp    [esp+14h+var_14]
0x4A10F3: push    offset aFfardistsqr_2f; "fFarDistSqr = %.2f"
0x4A10F8: push    eax
0x4A10F9: mov     [esp+1Ch+arg_0], eax
0x4A10FD: call    __sprintf
0x4A1102: movzx   ebx, word ptr [esi+0Ah]
0x4A1106: movzx   ecx, word ptr [esi+8]
0x4A110A: add     esp, 10h
0x4A110D: cmp     ebx, ecx
0x4A110F: jb      short loc_4A111F
0x4A1111: movzx   edx, word ptr [esi+0Eh]
0x4A1115: add     edx, ebx
0x4A1117: push    edx
0x4A1118: mov     ecx, esi
0x4A111A: call    NiTArray_SetSize
0x4A111F: lea     eax, [esp+0Ch+arg_0]
0x4A1123: push    eax
0x4A1124: push    ebx
0x4A1125: mov     ecx, esi
0x4A1127: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A112C: push    20h ; ' '; Size
0x4A112E: call    FormHeapAlloc
0x4A1133: movzx   ecx, byte ptr [edi+0ECh]
0x4A113A: push    ecx
0x4A113B: push    offset aCmulttypeD; "cMultType = %d"
0x4A1140: push    eax
0x4A1141: mov     [esp+1Ch+arg_0], eax
0x4A1145: call    __sprintf
0x4A114A: movzx   edi, word ptr [esi+0Ah]
0x4A114E: movzx   edx, word ptr [esi+8]
0x4A1152: add     esp, 10h
0x4A1155: cmp     edi, edx
0x4A1157: jb      short loc_4A1167
0x4A1159: movzx   eax, word ptr [esi+0Eh]
0x4A115D: add     eax, edi
0x4A115F: push    eax
0x4A1160: mov     ecx, esi
0x4A1162: call    NiTArray_SetSize
0x4A1167: lea     ecx, [esp+0Ch+arg_0]
0x4A116B: push    ecx
0x4A116C: push    edi
0x4A116D: mov     ecx, esi
0x4A116F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A1174: pop     edi
0x4A1175: pop     esi
0x4A1176: pop     ebx
0x4A1177: retn    4
