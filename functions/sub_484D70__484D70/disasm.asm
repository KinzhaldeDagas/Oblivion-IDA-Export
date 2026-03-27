0x484D70: push    ebx
0x484D71: push    esi
0x484D72: push    edi
0x484D73: mov     edi, ecx
0x484D75: mov     eax, [edi]
0x484D77: or      ebx, 0FFFFFFFFh
0x484D7A: test    eax, eax
0x484D7C: jz      short loc_484DA6
0x484D7E: mov     esi, [eax]
0x484D80: test    esi, esi
0x484D82: jz      short loc_484DA6
0x484D84: mov     ecx, esi
0x484D86: call    ExtraDataList_GetExtraSoul
0x484D8B: test    eax, eax
0x484D8D: jz      short loc_484DA6
0x484D8F: mov     ecx, esi
0x484D91: call    ExtraDataList_GetExtraSoul
0x484D96: push    eax
0x484D97: call    Actor__GetSoulValueFromLevel
0x484D9C: mov     ebx, eax
0x484D9E: add     esp, 4
0x484DA1: cmp     ebx, 0FFFFFFFFh
0x484DA4: jnz     short loc_484DDD
0x484DA6: mov     eax, [edi+8]
0x484DA9: push    0; int
0x484DAB: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x484DB0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x484DB5: push    0; int
0x484DB7: push    eax; void *
0x484DB8: call    OblivionDynamicCast
0x484DBD: add     esp, 14h
0x484DC0: test    eax, eax
0x484DC2: jz      short loc_484DDB
0x484DC4: mov     al, [eax+70h]
0x484DC7: test    al, al
0x484DC9: jz      short loc_484DDB
0x484DCB: movzx   eax, al
0x484DCE: push    eax
0x484DCF: call    Actor__GetSoulValueFromLevel
0x484DD4: add     esp, 4
0x484DD7: pop     edi
0x484DD8: pop     esi
0x484DD9: pop     ebx
0x484DDA: retn
0x484DDB: mov     eax, ebx
0x484DDD: pop     edi
0x484DDE: pop     esi
0x484DDF: pop     ebx
0x484DE0: retn
