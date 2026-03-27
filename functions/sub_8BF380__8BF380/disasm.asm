0x8BF380: push    ebx
0x8BF381: push    esi
0x8BF382: push    edi
0x8BF383: mov     edi, [esp+0Ch+arg_0]
0x8BF387: push    edi
0x8BF388: mov     esi, ecx
0x8BF38A: call    sub_8A0D20
0x8BF38F: mov     eax, [esi+4]
0x8BF392: test    eax, eax
0x8BF394: jz      short loc_8BF39B
0x8BF396: fld     dword ptr [eax+14h]
0x8BF399: jmp     short loc_8BF39D
0x8BF39B: fldz
0x8BF39D: fstp    [esp+0Ch+arg_0]
0x8BF3A1: push    ecx
0x8BF3A2: fld     [esp+10h+arg_0]
0x8BF3A6: fstp    [esp+10h+var_10]; float
0x8BF3A9: push    offset aDamping_0; "DAMPING"
0x8BF3AE: call    TESOutput_PrintLabeledFloat
0x8BF3B3: movzx   ebx, word ptr [edi+0Ah]
0x8BF3B7: mov     [esp+14h+arg_0], eax
0x8BF3BB: movzx   eax, word ptr [edi+8]
0x8BF3BF: add     esp, 8
0x8BF3C2: cmp     ebx, eax
0x8BF3C4: jb      short loc_8BF3D4
0x8BF3C6: movzx   ecx, word ptr [edi+0Eh]
0x8BF3CA: add     ecx, ebx
0x8BF3CC: push    ecx
0x8BF3CD: mov     ecx, edi
0x8BF3CF: call    NiTArray_SetSize
0x8BF3D4: lea     edx, [esp+0Ch+arg_0]
0x8BF3D8: push    edx
0x8BF3D9: push    ebx
0x8BF3DA: mov     ecx, edi
0x8BF3DC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BF3E1: mov     eax, [esi+4]
0x8BF3E4: test    eax, eax
0x8BF3E6: jz      short loc_8BF3ED
0x8BF3E8: fld     dword ptr [eax+10h]
0x8BF3EB: jmp     short loc_8BF3EF
0x8BF3ED: fldz
0x8BF3EF: fstp    [esp+0Ch+arg_0]
0x8BF3F3: push    ecx
0x8BF3F4: fld     [esp+10h+arg_0]
0x8BF3F8: fstp    [esp+10h+var_10]; float
0x8BF3FB: push    offset off_A98854; ArgList
0x8BF400: call    TESOutput_PrintLabeledFloat
0x8BF405: movzx   ebx, word ptr [edi+0Ah]
0x8BF409: mov     [esp+14h+arg_0], eax
0x8BF40D: movzx   eax, word ptr [edi+8]
0x8BF411: add     esp, 8
0x8BF414: cmp     ebx, eax
0x8BF416: jb      short loc_8BF426
0x8BF418: movzx   ecx, word ptr [edi+0Eh]
0x8BF41C: add     ecx, ebx
0x8BF41E: push    ecx
0x8BF41F: mov     ecx, edi
0x8BF421: call    NiTArray_SetSize
0x8BF426: lea     edx, [esp+0Ch+arg_0]
0x8BF42A: push    edx
0x8BF42B: push    ebx
0x8BF42C: mov     ecx, edi
0x8BF42E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BF433: mov     esi, [esi+4]
0x8BF436: test    esi, esi
0x8BF438: jz      short loc_8BF43F
0x8BF43A: mov     ebx, [esi+0Ch]
0x8BF43D: jmp     short loc_8BF441
0x8BF43F: xor     ebx, ebx
0x8BF441: test    ebx, ebx
0x8BF443: jz      short loc_8BF487
0x8BF445: mov     eax, [ebx]
0x8BF447: mov     edx, [eax+0Ch]
0x8BF44A: mov     ecx, ebx
0x8BF44C: call    edx
0x8BF44E: push    eax
0x8BF44F: call    sub_8E7E60
0x8BF454: mov     esi, eax
0x8BF456: add     esp, 4
0x8BF459: test    esi, esi
0x8BF45B: jz      short loc_8BF487
0x8BF45D: push    ebx
0x8BF45E: mov     ecx, esi
0x8BF460: call    sub_8A0200
0x8BF465: mov     eax, [esi]
0x8BF467: mov     edx, [eax+14h]
0x8BF46A: push    edi
0x8BF46B: mov     ecx, esi
0x8BF46D: call    edx
0x8BF46F: push    0
0x8BF471: mov     ecx, esi
0x8BF473: mov     dword ptr [esi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8BF479: call    sub_8A0200
0x8BF47E: push    esi
0x8BF47F: call    FormHeapFree
0x8BF484: add     esp, 4
0x8BF487: pop     edi
0x8BF488: pop     esi
0x8BF489: pop     ebx
0x8BF48A: retn    4
