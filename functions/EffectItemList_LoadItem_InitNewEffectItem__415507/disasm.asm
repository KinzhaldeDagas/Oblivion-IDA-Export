0x415507: push    24h ; '$'; Size
0x415509: call    FormHeapAlloc
0x41550E: add     esp, 4
0x415511: mov     [esp+arg_14], eax
0x415515: cmp     eax, ebx
0x415517: mov     [esp+arg_2C], ebx
0x41551B: jz      short loc_415527
0x41551D: push    edi
0x41551E: mov     ecx, eax
0x415520: call    EffectItem_constr
0x415525: mov     ebx, eax
0x415527: test    ebx, ebx
0x415529: mov     [esp+arg_2C], ebp
0x41552D: jz      EffectItemList_LoadItem___Done
0x415533: mov     ebp, [esp+arg_38]
0x415537: mov     edx, [esp+arg_34]
0x41553B: push    ebp
0x41553C: push    edx
0x41553D: mov     ecx, ebx
0x41553F: call    EffectItem_Load
0x415544: test    al, al
0x415546: jz      short EffectItemList_LoadItem___LoadFailed
