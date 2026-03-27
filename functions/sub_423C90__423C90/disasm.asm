0x423C90: push    0FFFFFFFFh
0x423C92: push    offset SEH_787830
0x423C97: mov     eax, large fs:0
0x423C9D: push    eax
0x423C9E: push    ebx
0x423C9F: push    esi
0x423CA0: push    edi
0x423CA1: mov     eax, ___security_cookie
0x423CA6: xor     eax, esp
0x423CA8: push    eax
0x423CA9: lea     eax, [esp+1Ch+var_C]
0x423CAD: mov     large fs:0, eax
0x423CB3: mov     edi, ecx
0x423CB5: mov     ebx, [esp+1Ch+arg_0]
0x423CB9: test    ebx, ebx
0x423CBB: push    53h ; 'S'; a2
0x423CBD: jnz     short loc_423CD9
0x423CBF: call    BaseExtraList_RemoveExtraByType
0x423CC4: mov     ecx, [esp+1Ch+var_C]; this
0x423CC8: mov     large fs:0, ecx
0x423CCF: pop     ecx
0x423CD0: pop     edi
0x423CD1: pop     esi
0x423CD2: pop     ebx
0x423CD3: add     esp, 0Ch
0x423CD6: retn    4
0x423CD9: call    BaseExtraList_GetExtraData
0x423CDE: mov     esi, eax
0x423CE0: test    esi, esi
0x423CE2: jnz     short loc_423D17
0x423CE4: push    10h; Size
0x423CE6: call    FormHeapAlloc
0x423CEB: add     esp, 4
0x423CEE: mov     [esp+1Ch+arg_0], eax
0x423CF2: test    eax, eax
0x423CF4: mov     [esp+1Ch+var_4], esi
0x423CF8: jz      short loc_423D03
0x423CFA: mov     ecx, eax
0x423CFC: call    sub_429950
0x423D01: jmp     short loc_423D05
0x423D03: xor     eax, eax
0x423D05: push    eax; BSExtraData *
0x423D06: mov     ecx, edi; ExtraDataList *
0x423D08: mov     [esp+20h+var_4], 0FFFFFFFFh
0x423D10: mov     esi, eax
0x423D12: call    BaseExtraList_AddExtra
0x423D17: mov     [esi+0Ch], ebx
0x423D1A: mov     ecx, [esp+1Ch+var_C]
0x423D1E: mov     large fs:0, ecx
0x423D25: pop     ecx
0x423D26: pop     edi
0x423D27: pop     esi
0x423D28: pop     ebx
0x423D29: add     esp, 0Ch
0x423D2C: retn    4
