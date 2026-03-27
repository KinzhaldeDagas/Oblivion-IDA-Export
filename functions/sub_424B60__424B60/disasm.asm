0x424B60: push    0FFFFFFFFh
0x424B62: push    offset SEH_787830
0x424B67: mov     eax, large fs:0
0x424B6D: push    eax
0x424B6E: push    ebx
0x424B6F: push    esi
0x424B70: push    edi
0x424B71: mov     eax, ___security_cookie
0x424B76: xor     eax, esp
0x424B78: push    eax
0x424B79: lea     eax, [esp+1Ch+var_C]
0x424B7D: mov     large fs:0, eax
0x424B83: mov     edi, ecx
0x424B85: mov     ebx, [esp+1Ch+arg_0]
0x424B89: test    ebx, ebx
0x424B8B: jz      short loc_424BE7
0x424B8D: push    42h ; 'B'; a2
0x424B8F: call    BaseExtraList_GetExtraData
0x424B94: mov     esi, eax
0x424B96: test    esi, esi
0x424B98: jnz     short loc_424BCD
0x424B9A: push    14h; Size
0x424B9C: call    FormHeapAlloc
0x424BA1: add     esp, 4
0x424BA4: mov     [esp+1Ch+arg_0], eax
0x424BA8: test    eax, eax
0x424BAA: mov     [esp+1Ch+var_4], esi
0x424BAE: jz      short loc_424BB9
0x424BB0: mov     ecx, eax; this
0x424BB2: call    ??0ExtraDroppedItemList@@QAE@XZ; ExtraDroppedItemList::ExtraDroppedItemList(void)
0x424BB7: jmp     short loc_424BBB
0x424BB9: xor     eax, eax
0x424BBB: push    eax; BSExtraData *
0x424BBC: mov     ecx, edi; ExtraDataList *
0x424BBE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424BC6: mov     esi, eax
0x424BC8: call    BaseExtraList_AddExtra
0x424BCD: lea     ecx, [esi+0Ch]
0x424BD0: mov     eax, ecx
0x424BD2: test    eax, eax
0x424BD4: jz      short loc_424BE1
0x424BD6: cmp     [eax], ebx
0x424BD8: jz      short loc_424BE7
0x424BDA: mov     eax, [eax+4]
0x424BDD: test    eax, eax
0x424BDF: jnz     short loc_424BD6
0x424BE1: push    ebx
0x424BE2: call    BSSimpleList_PushFront
0x424BE7: mov     ecx, [esp+1Ch+var_C]
0x424BEB: mov     large fs:0, ecx
0x424BF2: pop     ecx
0x424BF3: pop     edi
0x424BF4: pop     esi
0x424BF5: pop     ebx
0x424BF6: add     esp, 0Ch
0x424BF9: retn    4
