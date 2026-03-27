0x4234D0: push    0FFFFFFFFh
0x4234D2: push    offset SEH_787830
0x4234D7: mov     eax, large fs:0
0x4234DD: push    eax
0x4234DE: push    ebx
0x4234DF: push    esi
0x4234E0: push    edi
0x4234E1: mov     eax, ___security_cookie
0x4234E6: xor     eax, esp
0x4234E8: push    eax
0x4234E9: lea     eax, [esp+1Ch+var_C]
0x4234ED: mov     large fs:0, eax
0x4234F3: mov     edi, ecx
0x4234F5: push    32h ; '2'; a2
0x4234F7: call    BaseExtraList_GetExtraData
0x4234FC: mov     ebx, [esp+1Ch+arg_0]
0x423500: mov     esi, eax
0x423502: test    esi, esi
0x423504: jz      short loc_423532
0x423506: test    ebx, ebx
0x423508: jnz     short loc_423516
0x42350A: push    1
0x42350C: push    esi
0x42350D: mov     ecx, edi
0x42350F: call    BaseExtraList_RemoveExtraByPtr
0x423514: jmp     short loc_42356E
0x423516: mov     edi, [esi+0Ch]
0x423519: test    edi, edi
0x42351B: jz      short loc_42352D
0x42351D: mov     ecx, edi; this
0x42351F: call    ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x423524: push    edi
0x423525: call    FormHeapFree
0x42352A: add     esp, 4
0x42352D: mov     [esi+0Ch], ebx
0x423530: jmp     short loc_42356E
0x423532: test    ebx, ebx
0x423534: jz      short loc_423570
0x423536: push    10h; Size
0x423538: call    FormHeapAlloc
0x42353D: add     esp, 4
0x423540: mov     [esp+1Ch+arg_0], eax
0x423544: test    eax, eax
0x423546: mov     [esp+1Ch+var_4], 0
0x42354E: jz      short loc_42355C
0x423550: push    ebx
0x423551: mov     ecx, eax; this
0x423553: call    ??0ExtraTeleport@@QAE@XZ; ExtraTeleport::ExtraTeleport(void)
0x423558: mov     esi, eax
0x42355A: jmp     short loc_42355E
0x42355C: xor     esi, esi
0x42355E: push    esi; BSExtraData *
0x42355F: mov     ecx, edi; ExtraDataList *
0x423561: mov     [esp+20h+var_4], 0FFFFFFFFh
0x423569: call    BaseExtraList_AddExtra
0x42356E: mov     eax, esi
0x423570: mov     ecx, [esp+1Ch+var_C]
0x423574: mov     large fs:0, ecx
0x42357B: pop     ecx
0x42357C: pop     edi
0x42357D: pop     esi
0x42357E: pop     ebx
0x42357F: add     esp, 0Ch
0x423582: retn    4
