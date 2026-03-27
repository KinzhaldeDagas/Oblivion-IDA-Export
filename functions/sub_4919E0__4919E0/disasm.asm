0x4919E0: push    0FFFFFFFFh
0x4919E2: push    offset SEH_4919E0
0x4919E7: mov     eax, large fs:0
0x4919ED: push    eax
0x4919EE: sub     esp, 130h
0x4919F4: mov     eax, ds:0B30AACh
0x4919F9: xor     eax, esp
0x4919FB: mov     [esp+13Ch+var_10], eax
0x491A02: push    ebx
0x491A03: push    ebp
0x491A04: push    esi
0x491A05: push    edi
0x491A06: mov     eax, ds:0B30AACh
0x491A0B: xor     eax, esp
0x491A0D: push    eax
0x491A0E: lea     eax, [esp+150h+var_C]
0x491A15: mov     large fs:0, eax
0x491A1B: mov     esi, [ecx]
0x491A1D: mov     eax, [esp+150h+arg_0]
0x491A24: mov     edx, [esp+150h+arg_4]
0x491A2B: xor     ebx, ebx
0x491A2D: cmp     esi, ebx
0x491A2F: mov     [esp+150h+var_134], ecx
0x491A33: mov     [esp+150h+var_124], eax
0x491A37: mov     [esp+150h+var_11C], edx
0x491A3B: jz      loc_491CB6
0x491A41: mov     edi, [esi+4]
0x491A44: cmp     edi, ebx
0x491A46: mov     [esp+150h+var_120], edi
0x491A4A: jnz     short loc_491A54
0x491A4C: cmp     [esi], ebx
0x491A4E: jz      loc_491CB6
0x491A54: mov     ebp, [esi]
0x491A56: cmp     ebp, ebx
0x491A58: mov     [esp+150h+var_128], ebp
0x491A5C: mov     [esp+150h+var_13A], bl
0x491A60: jz      loc_491C9F
0x491A66: cmp     [ebp+4], ebx
0x491A69: jle     loc_491C9F
0x491A6F: mov     ecx, [ebp+8]
0x491A72: mov     eax, [ecx]
0x491A74: mov     edx, [eax+78h]
0x491A77: call    edx
0x491A79: test    al, al
0x491A7B: jnz     loc_491C9F
0x491A81: mov     eax, [ebp+0]
0x491A84: cmp     eax, ebx
0x491A86: mov     ebp, [ebp+8]
0x491A89: mov     [esp+150h+var_138], eax
0x491A8D: jz      loc_491C92
0x491A93: cmp     [eax], ebx
0x491A95: jz      loc_491C92
0x491A9B: jmp     short loc_491AA0
0x491A9D: align 10h
0x491AA0: mov     edi, [eax]
0x491AA2: cmp     edi, ebx
0x491AA4: jz      loc_491CAE
0x491AAA: cmp     [esp+150h+arg_8], ebx
0x491AB1: mov     eax, [eax+4]
0x491AB4: mov     [esp+150h+var_118], eax
0x491AB8: mov     [esp+150h+var_139], bl
0x491ABC: jz      short loc_491AD2
0x491ABE: mov     ecx, edi
0x491AC0: call    ExtraDataList_GetOwner
0x491AC5: cmp     [esp+150h+arg_8], eax
0x491ACC: jnz     loc_491C51
0x491AD2: mov     ecx, edi
0x491AD4: call    ExtraDataList_GetOwner
0x491AD9: test    eax, eax
0x491ADB: jz      loc_491C51
0x491AE1: mov     ecx, edi
0x491AE3: call    ExtraDataList_GetOwner
0x491AE8: cmp     eax, [esp+150h+var_124]
0x491AEC: jz      loc_491C51
0x491AF2: mov     ecx, [esp+150h+var_128]
0x491AF6: mov     eax, [ecx]
0x491AF8: xor     ecx, ecx
0x491AFA: cmp     eax, ebx
0x491AFC: jz      short loc_491B13
0x491AFE: mov     edi, edi
0x491B00: cmp     [eax], ebx
0x491B02: jz      short loc_491B07
0x491B04: add     ecx, 1
0x491B07: mov     eax, [eax+4]
0x491B0A: cmp     eax, ebx
0x491B0C: jnz     short loc_491B00
0x491B0E: cmp     ecx, 1
0x491B11: ja      short loc_491B1A
0x491B13: mov     [esp+150h+var_13A], 1
0x491B18: jmp     short loc_491B1F
0x491B1A: mov     [esp+150h+var_139], 1
0x491B1F: cmp     [esp+150h+arg_8], ebx
0x491B26: jz      loc_491C07
0x491B2C: mov     [esp+150h+var_130], ebx
0x491B30: mov     [esp+150h+var_12C], bx
0x491B35: mov     [esp+150h+var_12A], bx
0x491B3A: mov     ecx, edi
0x491B3C: mov     [esp+150h+var_4], ebx
0x491B43: call    ExtraDataList_GetExtraCount
0x491B48: mov     edx, ds:0B382B0h
0x491B4E: movsx   esi, ax
0x491B51: cmp     esi, 1
0x491B54: push    edx
0x491B55: jle     short loc_491B7C
0x491B57: mov     eax, ds:0B38298h
0x491B5C: push    eax
0x491B5D: push    ebp; a1
0x491B5E: call    TESFullName_GetNameForForm
0x491B63: add     esp, 4
0x491B66: push    eax
0x491B67: push    esi; ArgList
0x491B68: lea     ecx, [esp+160h+var_130]
0x491B6C: push    offset aISSS; "%i %s%s %s"
0x491B71: push    ecx; int
0x491B72: call    BSStringT_Static_Format
0x491B77: add     esp, 18h
0x491B7A: jmp     short loc_491B98
0x491B7C: push    ebp; a1
0x491B7D: call    TESFullName_GetNameForForm
0x491B82: add     esp, 4
0x491B85: push    eax; ArgList
0x491B86: lea     eax, [esp+158h+var_130]
0x491B8A: push    offset aSS; "%s %s"
0x491B8F: push    eax; int
0x491B90: call    BSStringT_Static_Format
0x491B95: add     esp, 10h
0x491B98: mov     ecx, ds:0B333C4h
0x491B9E: push    ecx
0x491B9F: push    ebp
0x491BA0: call    sub_4702D0
0x491BA5: push    eax
0x491BA6: push    offset aIcons; "Icons"
0x491BAB: lea     edx, [esp+160h+var_114]
0x491BAF: push    offset aSS_2; "%s\\%s"
0x491BB4: push    edx
0x491BB5: call    __sprintf
0x491BBA: mov     ecx, ds:0B333C4h
0x491BC0: add     esp, 18h
0x491BC3: push    ebx
0x491BC4: push    ebx
0x491BC5: push    ebp
0x491BC6: call    GetItemUpDownSound
0x491BCB: fld     dword ptr ds:0A379B4h
0x491BD1: mov     esi, [esp+150h+var_130]
0x491BD5: push    eax; int
0x491BD6: lea     eax, [esp+154h+var_114]
0x491BDA: push    eax; int
0x491BDB: push    ecx
0x491BDC: fstp    [esp+15Ch+var_15C]; float
0x491BDF: push    esi; int
0x491BE0: call    QueueUIMessage
0x491BE5: push    esi
0x491BE6: mov     [esp+164h+var_4], 0FFFFFFFFh
0x491BF1: call    FormHeapFree
0x491BF6: add     esp, 14h
0x491BF9: mov     [esp+150h+var_130], ebx
0x491BFD: mov     [esp+150h+var_12A], bx
0x491C02: mov     [esp+150h+var_12C], bx
0x491C07: mov     ecx, [esp+150h+var_11C]
0x491C0B: push    ebx
0x491C0C: push    1
0x491C0E: push    ebx
0x491C0F: push    ebx
0x491C10: push    ecx
0x491C11: push    ebx
0x491C12: push    edi
0x491C13: mov     ecx, edi
0x491C15: call    ExtraDataList_GetExtraCount
0x491C1A: mov     edi, [esp+16Ch+var_134]
0x491C1E: movsx   edx, ax
0x491C21: mov     eax, [esp+16Ch+var_124]
0x491C25: push    edx
0x491C26: push    ebx
0x491C27: push    ebp
0x491C28: push    eax
0x491C29: mov     ecx, edi
0x491C2B: call    ContainerExtraData_RemoveForm
0x491C30: cmp     [esp+150h+var_13A], bl
0x491C34: mov     esi, [edi]
0x491C36: jnz     short loc_491CAE
0x491C38: cmp     [esp+150h+var_139], bl
0x491C3C: jz      short loc_491C55
0x491C3E: mov     ecx, [esp+150h+var_128]
0x491C42: mov     eax, [ecx]
0x491C44: cmp     eax, ebx
0x491C46: mov     [esp+150h+var_138], eax
0x491C4A: jz      short loc_491CAE
0x491C4C: jmp     loc_491AA0
0x491C51: mov     edi, [esp+150h+var_134]
0x491C55: mov     eax, [esp+150h+var_118]
0x491C59: mov     edx, [esp+150h+var_138]
0x491C5D: cmp     eax, [edx+4]
0x491C60: jz      short loc_491C6E
0x491C62: mov     eax, [esp+150h+var_128]
0x491C66: mov     ecx, [eax]
0x491C68: mov     [esp+150h+var_138], ecx
0x491C6C: jmp     short loc_491C72
0x491C6E: mov     [esp+150h+var_138], eax
0x491C72: cmp     [esp+150h+var_138], ebx
0x491C76: jz      short loc_491C81
0x491C78: mov     eax, [esp+150h+var_138]
0x491C7C: jmp     loc_491AA0
0x491C81: mov     eax, [esp+150h+var_120]
0x491C85: cmp     eax, [esi+4]
0x491C88: jz      short loc_491C8E
0x491C8A: mov     esi, [edi]
0x491C8C: jmp     short loc_491CAE
0x491C8E: mov     esi, eax
0x491C90: jmp     short loc_491CAE
0x491C92: cmp     edi, [esi+4]
0x491C95: jz      short loc_491CAC
0x491C97: mov     edx, [esp+150h+var_134]
0x491C9B: mov     esi, [edx]
0x491C9D: jmp     short loc_491CAE
0x491C9F: cmp     edi, [esi+4]
0x491CA2: jz      short loc_491CAC
0x491CA4: mov     eax, [esp+150h+var_134]
0x491CA8: mov     esi, [eax]
0x491CAA: jmp     short loc_491CAE
0x491CAC: mov     esi, edi
0x491CAE: cmp     esi, ebx
0x491CB0: jnz     loc_491A41
0x491CB6: mov     ecx, [esp+150h+var_C]
0x491CBD: mov     large fs:0, ecx
0x491CC4: pop     ecx
0x491CC5: pop     edi
0x491CC6: pop     esi
0x491CC7: pop     ebp
0x491CC8: pop     ebx
0x491CC9: mov     ecx, [esp+13Ch+var_10]
0x491CD0: xor     ecx, esp
0x491CD2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x491CD7: add     esp, 13Ch
0x491CDD: retn    0Ch
