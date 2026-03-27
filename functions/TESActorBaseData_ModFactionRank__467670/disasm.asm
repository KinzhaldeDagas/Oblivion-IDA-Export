0x467670: push    esi
0x467671: push    edi
0x467672: mov     edi, [esp+8+arg_0]
0x467676: test    edi, edi
0x467678: mov     esi, ecx
0x46767A: jz      short loc_4676A0
0x46767C: mov     eax, [esp+8+arg_8]
0x467680: push    eax
0x467681: push    edi
0x467682: call    TESActorBaseData_GetFactionRank
0x467687: cmp     eax, 0FFFFFFFFh
0x46768A: jle     short loc_4676A0
0x46768C: movsx   ecx, [esp+8+arg_4]
0x467691: add     eax, ecx
0x467693: jns     short loc_467697
0x467695: xor     eax, eax
0x467697: push    eax
0x467698: push    edi
0x467699: mov     ecx, esi
0x46769B: call    TESActorBaseData_SetFactionRank
0x4676A0: pop     edi
0x4676A1: pop     esi
0x4676A2: retn    0Ch
