0x424A70: push    0FFFFFFFFh
0x424A72: push    offset SEH_787830
0x424A77: mov     eax, large fs:0
0x424A7D: push    eax
0x424A7E: push    ebx
0x424A7F: push    esi
0x424A80: push    edi
0x424A81: mov     eax, ___security_cookie
0x424A86: xor     eax, esp
0x424A88: push    eax
0x424A89: lea     eax, [esp+1Ch+var_C]
0x424A8D: mov     large fs:0, eax
0x424A93: mov     edi, ecx
0x424A95: mov     ebx, [esp+1Ch+arg_0]
0x424A99: test    ebx, ebx
0x424A9B: jz      short loc_424AF7
0x424A9D: push    40h ; '@'; a2
0x424A9F: call    BaseExtraList_GetExtraData
0x424AA4: mov     esi, eax
0x424AA6: test    esi, esi
0x424AA8: jnz     short loc_424ADD
0x424AAA: push    14h; Size
0x424AAC: call    FormHeapAlloc
0x424AB1: add     esp, 4
0x424AB4: mov     [esp+1Ch+arg_0], eax
0x424AB8: test    eax, eax
0x424ABA: mov     [esp+1Ch+var_4], esi
0x424ABE: jz      short loc_424AC9
0x424AC0: mov     ecx, eax; this
0x424AC2: call    ??0ExtraEnableStateChildren@@QAE@XZ; ExtraEnableStateChildren::ExtraEnableStateChildren(void)
0x424AC7: jmp     short loc_424ACB
0x424AC9: xor     eax, eax
0x424ACB: push    eax; BSExtraData *
0x424ACC: mov     ecx, edi; ExtraDataList *
0x424ACE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424AD6: mov     esi, eax
0x424AD8: call    BaseExtraList_AddExtra
0x424ADD: lea     ecx, [esi+0Ch]
0x424AE0: mov     eax, ecx
0x424AE2: test    eax, eax
0x424AE4: jz      short loc_424AF1
0x424AE6: cmp     [eax], ebx
0x424AE8: jz      short loc_424AF7
0x424AEA: mov     eax, [eax+4]
0x424AED: test    eax, eax
0x424AEF: jnz     short loc_424AE6
0x424AF1: push    ebx
0x424AF2: call    BSSimpleList_PushFront
0x424AF7: mov     ecx, [esp+1Ch+var_C]
0x424AFB: mov     large fs:0, ecx
0x424B02: pop     ecx
0x424B03: pop     edi
0x424B04: pop     esi
0x424B05: pop     ebx
0x424B06: add     esp, 0Ch
0x424B09: retn    4
