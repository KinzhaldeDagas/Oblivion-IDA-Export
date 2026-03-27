0x484A40: push    0FFFFFFFFh
0x484A42: push    offset SEH_787830
0x484A47: mov     eax, large fs:0
0x484A4D: push    eax
0x484A4E: push    ebx
0x484A4F: push    esi
0x484A50: push    edi
0x484A51: mov     eax, ds:0B30AACh
0x484A56: xor     eax, esp
0x484A58: push    eax
0x484A59: lea     eax, [esp+1Ch+var_C]
0x484A5D: mov     large fs:0, eax
0x484A63: mov     esi, ecx
0x484A65: mov     ebx, [esp+1Ch+arg_0]
0x484A69: test    ebx, ebx
0x484A6B: jz      loc_484B30
0x484A71: mov     eax, [esi]
0x484A73: test    eax, eax
0x484A75: jz      short loc_484A99
0x484A77: cmp     dword ptr [eax], 0
0x484A7A: jz      short loc_484A99
0x484A7C: mov     ecx, [eax]
0x484A7E: push    ebx
0x484A7F: call    ExtraDataList__SetOrRemoveExtraOwnership
0x484A84: mov     ecx, [esp+1Ch+var_C]
0x484A88: mov     large fs:0, ecx
0x484A8F: pop     ecx
0x484A90: pop     edi
0x484A91: pop     esi
0x484A92: pop     ebx
0x484A93: add     esp, 0Ch
0x484A96: retn    4
0x484A99: push    14h; Size
0x484A9B: call    FormHeapAlloc
0x484AA0: add     esp, 4
0x484AA3: mov     [esp+1Ch+arg_0], eax
0x484AA7: test    eax, eax
0x484AA9: mov     [esp+1Ch+var_4], 0
0x484AB1: jz      short loc_484ABE
0x484AB3: mov     ecx, eax
0x484AB5: call    ExtraDataList_constr
0x484ABA: mov     edi, eax
0x484ABC: jmp     short loc_484AC0
0x484ABE: xor     edi, edi
0x484AC0: push    ebx
0x484AC1: mov     ecx, edi
0x484AC3: mov     [esp+20h+var_4], 0FFFFFFFFh
0x484ACB: call    ExtraDataList__SetOrRemoveExtraOwnership
0x484AD0: cmp     dword ptr [esi], 0
0x484AD3: jnz     short loc_484B13
0x484AD5: push    8; Size
0x484AD7: call    FormHeapAlloc
0x484ADC: add     esp, 4
0x484ADF: test    eax, eax
0x484AE1: jz      short loc_484B0F
0x484AE3: mov     dword ptr [eax], 0
0x484AE9: mov     dword ptr [eax+4], 0
0x484AF0: push    edi
0x484AF1: mov     ecx, eax
0x484AF3: mov     [esi], eax
0x484AF5: call    BSSimpleList_PushFront
0x484AFA: mov     ecx, [esp+1Ch+var_C]
0x484AFE: mov     large fs:0, ecx
0x484B05: pop     ecx
0x484B06: pop     edi
0x484B07: pop     esi
0x484B08: pop     ebx
0x484B09: add     esp, 0Ch
0x484B0C: retn    4
0x484B0F: xor     eax, eax
0x484B11: mov     [esi], eax
0x484B13: mov     ecx, [esi]
0x484B15: push    edi
0x484B16: call    BSSimpleList_PushFront
0x484B1B: mov     ecx, [esp+1Ch+var_C]
0x484B1F: mov     large fs:0, ecx
0x484B26: pop     ecx
0x484B27: pop     edi
0x484B28: pop     esi
0x484B29: pop     ebx
0x484B2A: add     esp, 0Ch
0x484B2D: retn    4
0x484B30: mov     ecx, [esi]
0x484B32: test    ecx, ecx
0x484B34: jz      short loc_484B4C
0x484B36: mov     esi, [ecx]
0x484B38: test    esi, esi
0x484B3A: jz      short loc_484B4C
0x484B3C: push    esi
0x484B3D: call    BSSimpleList_Remove
0x484B42: mov     eax, [esi]
0x484B44: mov     edx, [eax]
0x484B46: push    1
0x484B48: mov     ecx, esi
0x484B4A: call    edx
0x484B4C: mov     ecx, [esp+1Ch+var_C]
0x484B50: mov     large fs:0, ecx
0x484B57: pop     ecx
0x484B58: pop     edi
0x484B59: pop     esi
0x484B5A: pop     ebx
0x484B5B: add     esp, 0Ch
0x484B5E: retn    4
