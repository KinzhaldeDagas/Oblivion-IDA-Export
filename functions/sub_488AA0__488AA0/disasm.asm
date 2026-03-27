0x488AA0: push    0FFFFFFFFh
0x488AA2: push    offset SEH_4CCEE0
0x488AA7: mov     eax, large fs:0
0x488AAD: push    eax
0x488AAE: push    ecx
0x488AAF: push    ebp
0x488AB0: push    esi
0x488AB1: push    edi
0x488AB2: mov     eax, ds:0B30AACh
0x488AB7: xor     eax, esp
0x488AB9: push    eax
0x488ABA: lea     eax, [esp+20h+var_C]
0x488ABE: mov     large fs:0, eax
0x488AC4: mov     ebp, ecx
0x488AC6: mov     eax, [ebp+8]
0x488AC9: push    0; int
0x488ACB: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x488AD0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488AD5: push    0; int
0x488AD7: push    eax; void *
0x488AD8: call    OblivionDynamicCast
0x488ADD: add     esp, 14h
0x488AE0: test    eax, eax
0x488AE2: jz      loc_488C8D
0x488AE8: movzx   eax, word ptr [eax+8]
0x488AEC: movzx   ecx, ax
0x488AEF: mov     [esp+20h+var_10], ecx
0x488AF3: fild    [esp+20h+var_10]
0x488AF7: fstp    [esp+20h+var_10]
0x488AFB: fld     [esp+20h+arg_0]
0x488AFF: fld     [esp+20h+var_10]
0x488B03: fcomp   st(1)
0x488B05: fnstsw  ax
0x488B07: test    ah, 1
0x488B0A: mov     eax, [ebp+0]
0x488B0D: jnz     loc_488C2D
0x488B13: test    eax, eax
0x488B15: jnz     loc_488B9C
0x488B1B: push    14h; Size
0x488B1D: fstp    st
0x488B1F: call    FormHeapAlloc
0x488B24: add     esp, 4
0x488B27: mov     [esp+20h+arg_8], eax
0x488B2B: test    eax, eax
0x488B2D: mov     [esp+20h+var_4], 0
0x488B35: jz      short loc_488B42
0x488B37: mov     ecx, eax
0x488B39: call    ExtraDataList_constr
0x488B3E: mov     edi, eax
0x488B40: jmp     short loc_488B44
0x488B42: xor     edi, edi
0x488B44: push    8; Size
0x488B46: mov     [esp+24h+var_4], 0FFFFFFFFh
0x488B4E: call    FormHeapAlloc
0x488B53: add     esp, 4
0x488B56: test    eax, eax
0x488B58: jz      short loc_488B6B
0x488B5A: mov     dword ptr [eax], 0
0x488B60: mov     dword ptr [eax+4], 0
0x488B67: mov     esi, eax
0x488B69: jmp     short loc_488B6D
0x488B6B: xor     esi, esi
0x488B6D: fld     [esp+20h+arg_0]
0x488B71: push    ecx
0x488B72: mov     ecx, edi
0x488B74: fstp    [esp+24h+var_24]; float
0x488B77: call    sub_41EE90
0x488B7C: push    edi
0x488B7D: mov     ecx, esi
0x488B7F: call    BSSimpleList_PushFront
0x488B84: mov     [ebp+0], esi
0x488B87: mov     ecx, [esp+20h+var_C]
0x488B8B: mov     large fs:0, ecx
0x488B92: pop     ecx
0x488B93: pop     edi
0x488B94: pop     esi
0x488B95: pop     ebp
0x488B96: add     esp, 10h
0x488B99: retn    0Ch
0x488B9C: mov     edx, [esp+20h+arg_8]
0x488BA0: mov     ecx, [eax]
0x488BA2: test    ecx, ecx
0x488BA4: jz      short loc_488BB1
0x488BA6: cmp     ecx, edx
0x488BA8: jz      short loc_488BD8
0x488BAA: mov     eax, [eax+4]
0x488BAD: test    eax, eax
0x488BAF: jnz     short loc_488BA0
0x488BB1: push    14h; Size
0x488BB3: fstp    st
0x488BB5: call    FormHeapAlloc
0x488BBA: add     esp, 4
0x488BBD: mov     [esp+20h+arg_8], eax
0x488BC1: test    eax, eax
0x488BC3: mov     [esp+20h+var_4], 1
0x488BCB: jz      short loc_488BF6
0x488BCD: mov     ecx, eax
0x488BCF: call    ExtraDataList_constr
0x488BD4: mov     esi, eax
0x488BD6: jmp     short loc_488BF8
0x488BD8: push    ecx
0x488BD9: fstp    [esp+24h+var_24]; float
0x488BDC: call    sub_41EE90
0x488BE1: mov     ecx, [esp+20h+var_C]
0x488BE5: mov     large fs:0, ecx
0x488BEC: pop     ecx
0x488BED: pop     edi
0x488BEE: pop     esi
0x488BEF: pop     ebp
0x488BF0: add     esp, 10h
0x488BF3: retn    0Ch
0x488BF6: xor     esi, esi
0x488BF8: fld     [esp+20h+arg_0]
0x488BFC: push    ecx
0x488BFD: mov     ecx, esi
0x488BFF: fstp    [esp+24h+var_24]; float
0x488C02: mov     [esp+24h+var_4], 0FFFFFFFFh
0x488C0A: call    sub_41EE90
0x488C0F: mov     ecx, [ebp+0]
0x488C12: push    esi
0x488C13: call    BSSimpleList_PushFront
0x488C18: mov     ecx, [esp+20h+var_C]
0x488C1C: mov     large fs:0, ecx
0x488C23: pop     ecx
0x488C24: pop     edi
0x488C25: pop     esi
0x488C26: pop     ebp
0x488C27: add     esp, 10h
0x488C2A: retn    0Ch
0x488C2D: test    eax, eax
0x488C2F: fstp    st
0x488C31: jz      short loc_488C8D
0x488C33: mov     ecx, [esp+20h+arg_8]
0x488C37: mov     esi, [eax]
0x488C39: test    esi, esi
0x488C3B: jz      short loc_488C8D
0x488C3D: cmp     esi, ecx
0x488C3F: jz      short loc_488C5D
0x488C41: mov     eax, [eax+4]
0x488C44: test    eax, eax
0x488C46: jnz     short loc_488C37
0x488C48: mov     ecx, [esp+20h+var_C]
0x488C4C: mov     large fs:0, ecx
0x488C53: pop     ecx
0x488C54: pop     edi
0x488C55: pop     esi
0x488C56: pop     ebp
0x488C57: add     esp, 10h
0x488C5A: retn    0Ch
0x488C5D: mov     ecx, esi
0x488C5F: call    sub_41F640
0x488C64: cmp     dword ptr [esi+4], 0
0x488C68: jnz     short loc_488C8D
0x488C6A: mov     eax, [ebp+8]
0x488C6D: mov     ecx, [esp+20h+arg_4]
0x488C71: push    0
0x488C73: push    1
0x488C75: push    eax
0x488C76: call    ContainerExtraData_GetEntryForForm
0x488C7B: mov     ecx, [eax]
0x488C7D: push    esi
0x488C7E: call    BSSimpleList_Remove
0x488C83: mov     edx, [esi]
0x488C85: mov     eax, [edx]
0x488C87: push    1
0x488C89: mov     ecx, esi
0x488C8B: call    eax
0x488C8D: mov     ecx, [esp+20h+var_C]
0x488C91: mov     large fs:0, ecx
0x488C98: pop     ecx
0x488C99: pop     edi
0x488C9A: pop     esi
0x488C9B: pop     ebp
0x488C9C: add     esp, 10h
0x488C9F: retn    0Ch
