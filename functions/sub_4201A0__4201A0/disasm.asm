0x4201A0: push    0FFFFFFFFh
0x4201A2: push    offset SEH_8094D0
0x4201A7: mov     eax, large fs:0
0x4201AD: push    eax
0x4201AE: push    ebx
0x4201AF: push    ebp
0x4201B0: push    esi
0x4201B1: push    edi
0x4201B2: mov     eax, ___security_cookie
0x4201B7: xor     eax, esp
0x4201B9: push    eax
0x4201BA: lea     eax, [esp+20h+var_C]
0x4201BE: mov     large fs:0, eax
0x4201C4: mov     ebp, ecx
0x4201C6: mov     edi, [esp+20h+arg_0]
0x4201CA: test    edi, edi
0x4201CC: jz      short loc_42023E
0x4201CE: mov     ebx, [esp+20h+arg_4]
0x4201D2: test    ebx, ebx
0x4201D4: jz      short loc_42023E
0x4201D6: push    3Eh ; '>'; a2
0x4201D8: call    BaseExtraList_GetExtraData
0x4201DD: mov     esi, eax
0x4201DF: test    esi, esi
0x4201E1: jz      short loc_420205
0x4201E3: mov     eax, [edi]
0x4201E5: mov     edx, [eax+174h]
0x4201EB: mov     ecx, edi
0x4201ED: call    edx
0x4201EF: mov     ecx, [eax]
0x4201F1: mov     [esi+0Ch], ecx
0x4201F4: mov     edx, [eax+4]
0x4201F7: mov     [esi+10h], edx
0x4201FA: mov     eax, [eax+8]
0x4201FD: mov     [esi+14h], eax
0x420200: mov     [esi+18h], ebx
0x420203: jmp     short loc_420245
0x420205: push    1Ch; Size
0x420207: call    FormHeapAlloc
0x42020C: add     esp, 4
0x42020F: mov     [esp+20h+arg_0], eax
0x420213: test    eax, eax
0x420215: mov     [esp+20h+var_4], 0
0x42021D: jz      short loc_42022A
0x42021F: push    ebx
0x420220: push    edi
0x420221: mov     ecx, eax
0x420223: call    sub_42A540
0x420228: jmp     short loc_42022C
0x42022A: xor     eax, eax
0x42022C: push    eax; BSExtraData *
0x42022D: mov     ecx, ebp; ExtraDataList *
0x42022F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x420237: call    BaseExtraList_AddExtra
0x42023C: jmp     short loc_420245
0x42023E: push    3Eh ; '>'
0x420240: call    BaseExtraList_RemoveExtraByType
0x420245: mov     ecx, [esp+20h+var_C]
0x420249: mov     large fs:0, ecx
0x420250: pop     ecx
0x420251: pop     edi
0x420252: pop     esi
0x420253: pop     ebp
0x420254: pop     ebx
0x420255: add     esp, 0Ch
0x420258: retn    8
