0x44F0C0: sub     esp, 11Ch
0x44F0C6: mov     eax, ds:0B30AACh
0x44F0CB: xor     eax, esp
0x44F0CD: mov     [esp+11Ch+var_4], eax
0x44F0D4: push    ebx
0x44F0D5: push    ebp
0x44F0D6: push    esi
0x44F0D7: mov     esi, [esp+128h+arg_0]
0x44F0DE: push    edi; ArgList
0x44F0DF: xor     ebp, ebp
0x44F0E1: mov     edi, ecx
0x44F0E3: push    ebp
0x44F0E4: push    ebp
0x44F0E5: mov     ecx, esi
0x44F0E7: mov     [esp+134h+var_10C], edi
0x44F0EB: call    TESFile_OpenBSFileWrapper??
0x44F0F0: test    al, al
0x44F0F2: jnz     short loc_44F101
0x44F0F4: push    offset aDatahandlerInt; "DataHandler: internal error"
0x44F0F9: call    PrintError
0x44F0FE: add     esp, 4
0x44F101: mov     [esp+12Ch+var_114], 1
0x44F109: mov     [esp+12Ch+var_110], ebp
0x44F10D: mov     ds:0B33A9Ch, ebp
0x44F113: mov     ds:0B33AA0h, ebp
0x44F119: mov     ds:0B33AA4h, ebp
0x44F11F: jmp     short loc_44F125
0x44F121: mov     edi, [esp+12Ch+var_10C]
0x44F125: mov     ecx, esi
0x44F127: mov     [esp+12Ch+var_119], 1
0x44F12C: mov     bl, 1
0x44F12E: call    TESFile_GetRecordType
0x44F133: cmp     eax, 2
0x44F136: jnz     short loc_44F169
0x44F138: lea     eax, [esi+23Ch]
0x44F13E: push    eax
0x44F13F: push    esi
0x44F140: mov     ecx, edi
0x44F142: call    sub_448C60
0x44F147: test    al, al
0x44F149: jnz     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F14F: mov     ecx, esi
0x44F151: mov     [esp+12Ch+var_119], al
0x44F155: call    TESFile__NextGroup
0x44F15A: test    al, al
0x44F15C: jnz     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F162: xor     bl, bl
0x44F164: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F169: mov     ecx, esi
0x44F16B: call    TESFile_GetRecordType
0x44F170: cmp     eax, 44h ; 'D'
0x44F173: jnz     loc_44F211
0x44F179: mov     edi, [esi+248h]
0x44F17F: cmp     edi, 0FFFFFFFFh
0x44F182: jnz     short loc_44F190
0x44F184: mov     [esp+12Ch+var_119], 0
0x44F189: xor     bl, bl
0x44F18B: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F190: cmp     edi, 0FFFFFFFEh
0x44F193: jnz     short loc_44F1B9
0x44F195: mov     ecx, [esi+240h]
0x44F19B: mov     edx, [esi+25Ch]
0x44F1A1: push    ecx
0x44F1A2: add     edx, 14h
0x44F1A5: push    edx
0x44F1A6: mov     ecx, esi
0x44F1A8: call    sub_738500
0x44F1AD: mov     [esp+12Ch+var_119], 0
0x44F1B2: xor     bl, bl
0x44F1B4: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F1B9: mov     eax, ds:0B33AA4h
0x44F1BE: cmp     eax, ebp
0x44F1C0: jz      short loc_44F1CA
0x44F1C2: mov     [eax+34h], edi
0x44F1C5: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F1CA: mov     ecx, ds:0B33AA0h
0x44F1D0: cmp     ecx, ebp
0x44F1D2: jz      short loc_44F1E5
0x44F1D4: sub     edi, [esi+25Ch]
0x44F1DA: push    edi
0x44F1DB: call    sub_4EF030
0x44F1E0: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F1E5: mov     ecx, ds:0B33A9Ch; this
0x44F1EB: cmp     ecx, ebp
0x44F1ED: jz      loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F1F3: call    TESObjectCELL_IsInterior
0x44F1F8: test    al, al
0x44F1FA: jz      loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F200: mov     ecx, ds:0B33A9Ch
0x44F206: push    edi
0x44F207: call    sub_4C9D20
0x44F20C: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F211: mov     eax, [esp+12Ch+arg_4]
0x44F218: push    eax
0x44F219: push    esi
0x44F21A: mov     ecx, edi
0x44F21C: call    TESDataHandler_LoadFormRecord
0x44F221: test    eax, eax
0x44F223: jnz     short loc_44F22E
0x44F225: mov     [esp+12Ch+var_114], ebp
0x44F229: jmp     loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F22E: mov     ecx, ds:0B33B00h
0x44F234: cmp     ecx, ebp
0x44F236: jz      short loc_44F281
0x44F238: mov     edx, [ecx+18h]
0x44F23B: shr     edx, 0Ch
0x44F23E: test    dl, 1
0x44F241: jz      short loc_44F281
0x44F243: mov     eax, ds:0B33AD8h
0x44F248: add     eax, 1
0x44F24B: test    al, al
0x44F24D: mov     ds:0B33AD8h, eax
0x44F252: jnz     short loc_44F260
0x44F254: fld1
0x44F256: push    ecx
0x44F257: fstp    [esp+130h+var_130]; float
0x44F25A: push    ebp; int
0x44F25B: call    sub_4523A0
0x44F260: mov     eax, [esi+248h]
0x44F266: push    eax; a1
0x44F267: call    TESForm_LookupByFormID
0x44F26C: add     esp, 4
0x44F26F: cmp     eax, ebp
0x44F271: jz      short loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F273: mov     ecx, ds:0B33B00h
0x44F279: push    eax
0x44F27A: call    sub_461FA0
0x44F27F: jmp     short loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F281: mov     eax, [esi+248h]
0x44F287: push    eax; a1
0x44F288: call    TESForm_LookupByFormID
0x44F28D: mov     edi, eax
0x44F28F: add     esp, 4
0x44F292: cmp     edi, ebp
0x44F294: jz      short loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F296: movzx   eax, byte ptr [edi+4]
0x44F29A: add     eax, 0FFFFFFDDh; switch 17 cases
0x44F29D: cmp     eax, 10h
0x44F2A0: ja      short TESDataHandler_LoadFile___def_44F2A9; jumptable 0044F2A9 default case, cases 37-48
0x44F2A2: movzx   eax, ds:byte_44F3B0[eax]
0x44F2A9: jmp     ds:jpt_44F2A9[eax*4]; switch jump
0x44F2B0: mov     edx, [edi]; jumptable 0044F2A9 default case, cases 37-48
0x44F2B2: mov     eax, [edx+0D4h]
0x44F2B8: mov     ecx, edi
0x44F2BA: call    eax
0x44F2BC: cmp     eax, ebp
0x44F2BE: jz      short loc_44F2E0; jumptable 0044F2A9 cases 35,36,49-51
0x44F2C0: mov     ecx, eax
0x44F2C2: lea     ebp, [ecx+1]
0x44F2C5: mov     dl, [ecx]
0x44F2C7: add     ecx, 1
0x44F2CA: test    dl, dl
0x44F2CC: jnz     short loc_44F2C5
0x44F2CE: sub     ecx, ebp
0x44F2D0: jz      short loc_44F2DE
0x44F2D2: push    edi
0x44F2D3: push    eax
0x44F2D4: mov     ecx, offset off_B06164
0x44F2D9: call    sub_412D30
0x44F2DE: xor     ebp, ebp
0x44F2E0: mov     eax, ds:0B33A94h; jumptable 0044F2A9 cases 35,36,49-51
0x44F2E5: add     eax, 1
0x44F2E8: test    eax, eax
0x44F2EA: mov     [esp+12Ch+var_118], eax
0x44F2EE: fild    [esp+12Ch+var_118]
0x44F2F2: mov     ds:0B33A94h, eax
0x44F2F7: jge     short loc_44F2FF
0x44F2F9: fadd    dword ptr ds:0A2FC78h
0x44F2FF: mov     ecx, ds:0B33A90h
0x44F305: fild    dword ptr ds:0B33A90h
0x44F30B: test    ecx, ecx
0x44F30D: jge     short loc_44F315
0x44F30F: fadd    dword ptr ds:0A2FC78h
0x44F315: fdivp   st(1), st
0x44F317: fmul    qword ptr ds:0A309F0h
0x44F31D: call    Double_To_SInt32
0x44F322: cmp     eax, [esp+12Ch+var_110]
0x44F326: mov     [esp+12Ch+var_118], eax
0x44F32A: jz      short loc_44F357
0x44F32C: lea     edx, [esi+1Ch]
0x44F32F: push    edx
0x44F330: push    eax
0x44F331: mov     [esp+134h+var_110], eax
0x44F335: lea     eax, [esp+134h+var_108]
0x44F339: push    offset aLoadingFilesDS; "Loading Files %d%% (%s)"
0x44F33E: push    eax
0x44F33F: call    __sprintf
0x44F344: fild    [esp+13Ch+var_118]
0x44F348: add     esp, 0Ch
0x44F34B: fstp    [esp+130h+var_130]; float
0x44F34E: push    ebp; int
0x44F34F: call    sub_57B950
0x44F354: add     esp, 8
0x44F357: cmp     [esp+12Ch+var_119], 0
0x44F35C: jz      short loc_44F369
0x44F35E: push    1
0x44F360: mov     ecx, esi
0x44F362: call    TESFile_NextRecordEx; NextForm?
0x44F367: mov     bl, al
0x44F369: test    bl, bl
0x44F36B: jnz     loc_44F121
0x44F371: mov     ecx, esi
0x44F373: call    TESFile_Close
0x44F378: test    al, al
0x44F37A: pop     edi
0x44F37B: pop     esi
0x44F37C: pop     ebp
0x44F37D: pop     ebx
0x44F37E: jnz     short loc_44F38D
0x44F380: push    offset aDatahandlerInt; "DataHandler: internal error"
0x44F385: call    PrintError
0x44F38A: add     esp, 4
0x44F38D: mov     ecx, [esp+11Ch+var_4]
0x44F394: mov     eax, [esp+11Ch+var_114]
0x44F398: xor     ecx, esp
0x44F39A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44F39F: add     esp, 11Ch
0x44F3A5: retn    8
