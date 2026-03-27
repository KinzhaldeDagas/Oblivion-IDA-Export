0x6ED580: push    ebx
0x6ED581: push    esi
0x6ED582: mov     esi, [esp+8+arg_0]
0x6ED586: push    edi
0x6ED587: push    esi
0x6ED588: mov     edi, ecx
0x6ED58A: call    sub_6EBAC0
0x6ED58F: mov     eax, ds:0B3EF9Ch
0x6ED594: push    eax; ArgList
0x6ED595: call    TESOutput_PrintString
0x6ED59A: movzx   ebx, word ptr [esi+0Ah]
0x6ED59E: movzx   ecx, word ptr [esi+8]
0x6ED5A2: add     esp, 4
0x6ED5A5: cmp     ebx, ecx
0x6ED5A7: mov     [esp+0Ch+arg_0], eax
0x6ED5AB: jb      short loc_6ED5BB
0x6ED5AD: movzx   edx, word ptr [esi+0Eh]
0x6ED5B1: add     edx, ebx
0x6ED5B3: push    edx
0x6ED5B4: mov     ecx, esi
0x6ED5B6: call    NiTArray_SetSize
0x6ED5BB: lea     eax, [esp+0Ch+arg_0]
0x6ED5BF: push    eax
0x6ED5C0: push    ebx
0x6ED5C1: mov     ecx, esi
0x6ED5C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ED5C8: fld     dword ptr [edi+0Ch]
0x6ED5CB: push    ecx
0x6ED5CC: fstp    [esp+10h+var_10]; float
0x6ED5CF: push    offset aM_fstarttime; "m_fStartTime"
0x6ED5D4: call    TESOutput_PrintLabeledFloat
0x6ED5D9: movzx   ebx, word ptr [esi+0Ah]
0x6ED5DD: movzx   ecx, word ptr [esi+8]
0x6ED5E1: add     esp, 8
0x6ED5E4: cmp     ebx, ecx
0x6ED5E6: mov     [esp+0Ch+arg_0], eax
0x6ED5EA: jb      short loc_6ED5FA
0x6ED5EC: movzx   edx, word ptr [esi+0Eh]
0x6ED5F0: add     edx, ebx
0x6ED5F2: push    edx
0x6ED5F3: mov     ecx, esi
0x6ED5F5: call    NiTArray_SetSize
0x6ED5FA: lea     eax, [esp+0Ch+arg_0]
0x6ED5FE: push    eax
0x6ED5FF: push    ebx
0x6ED600: mov     ecx, esi
0x6ED602: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ED607: fld     dword ptr [edi+10h]
0x6ED60A: push    ecx
0x6ED60B: fstp    [esp+10h+var_10]; float
0x6ED60E: push    offset aM_fendtime; "m_fEndTime"
0x6ED613: call    TESOutput_PrintLabeledFloat
0x6ED618: movzx   ebx, word ptr [esi+0Ah]
0x6ED61C: movzx   ecx, word ptr [esi+8]
0x6ED620: add     esp, 8
0x6ED623: cmp     ebx, ecx
0x6ED625: mov     [esp+0Ch+arg_0], eax
0x6ED629: jb      short loc_6ED639
0x6ED62B: movzx   edx, word ptr [esi+0Eh]
0x6ED62F: add     edx, ebx
0x6ED631: push    edx
0x6ED632: mov     ecx, esi
0x6ED634: call    NiTArray_SetSize
0x6ED639: lea     eax, [esp+0Ch+arg_0]
0x6ED63D: push    eax
0x6ED63E: push    ebx
0x6ED63F: mov     ecx, esi
0x6ED641: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ED646: mov     ecx, [edi+14h]
0x6ED649: test    ecx, ecx
0x6ED64B: jz      short loc_6ED655
0x6ED64D: mov     edx, [ecx]
0x6ED64F: mov     eax, [edx+30h]
0x6ED652: push    esi
0x6ED653: call    eax
0x6ED655: mov     ecx, [edi+18h]
0x6ED658: test    ecx, ecx
0x6ED65A: jz      short loc_6ED664
0x6ED65C: mov     edx, [ecx]
0x6ED65E: mov     eax, [edx+30h]
0x6ED661: push    esi
0x6ED662: call    eax
0x6ED664: pop     edi
0x6ED665: pop     esi
0x6ED666: pop     ebx
0x6ED667: retn    4
