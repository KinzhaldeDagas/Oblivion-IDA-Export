0x484EC0: push    ebx
0x484EC1: push    esi
0x484EC2: mov     esi, [ecx]
0x484EC4: test    esi, esi
0x484EC6: push    edi
0x484EC7: jz      short loc_484EE9
0x484EC9: mov     ebx, [esp+0Ch+arg_0]
0x484ECD: lea     ecx, [ecx+0]
0x484ED0: mov     edi, [esi]
0x484ED2: test    edi, edi
0x484ED4: jz      short loc_484EE9
0x484ED6: push    ebx
0x484ED7: mov     ecx, edi
0x484ED9: call    ExtraDataList_HasWorn
0x484EDE: test    al, al
0x484EE0: jnz     short loc_484EF1
0x484EE2: mov     esi, [esi+4]
0x484EE5: test    esi, esi
0x484EE7: jnz     short loc_484ED0
0x484EE9: pop     edi
0x484EEA: pop     esi
0x484EEB: mov     al, 1
0x484EED: pop     ebx
0x484EEE: retn    4
0x484EF1: push    0
0x484EF3: mov     ecx, edi
0x484EF5: call    ExtraDataList_IsExtraDefaultForContainer
0x484EFA: test    al, al
0x484EFC: jz      short loc_484F09
0x484EFE: mov     ecx, edi
0x484F00: call    ExtraDataList_GetOwner
0x484F05: test    eax, eax
0x484F07: jz      short loc_484EE9
0x484F09: pop     edi
0x484F0A: pop     esi
0x484F0B: xor     al, al
0x484F0D: pop     ebx
0x484F0E: retn    4
