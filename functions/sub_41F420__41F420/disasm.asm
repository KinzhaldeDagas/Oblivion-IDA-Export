0x41F420: push    0FFFFFFFFh
0x41F422: push    offset SEH_8C62B0
0x41F427: mov     eax, large fs:0
0x41F42D: push    eax
0x41F42E: push    ecx
0x41F42F: push    esi
0x41F430: mov     eax, ___security_cookie
0x41F435: xor     eax, esp
0x41F437: push    eax
0x41F438: lea     eax, [esp+18h+var_C]
0x41F43C: mov     large fs:0, eax
0x41F442: mov     esi, ecx
0x41F444: push    52h ; 'R'; a2
0x41F446: call    BaseExtraList_GetExtraData
0x41F44B: test    eax, eax
0x41F44D: jnz     short loc_41F49C
0x41F44F: push    10h; Size
0x41F451: call    FormHeapAlloc
0x41F456: add     esp, 4
0x41F459: mov     [esp+18h+var_10], eax
0x41F45D: test    eax, eax
0x41F45F: mov     [esp+18h+var_4], 0
0x41F467: jz      short loc_41F477
0x41F469: mov     ecx, [esp+18h+arg_0]
0x41F46D: push    ecx
0x41F46E: mov     ecx, eax
0x41F470: call    sub_42A070
0x41F475: jmp     short loc_41F479
0x41F477: xor     eax, eax
0x41F479: push    eax; BSExtraData *
0x41F47A: mov     ecx, esi; ExtraDataList *
0x41F47C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41F484: call    BaseExtraList_AddExtra
0x41F489: mov     ecx, [esp+18h+var_C]
0x41F48D: mov     large fs:0, ecx
0x41F494: pop     ecx
0x41F495: pop     esi
0x41F496: add     esp, 10h
0x41F499: retn    4
0x41F49C: mov     edx, [esp+18h+arg_0]
0x41F4A0: mov     [eax+0Ch], edx
0x41F4A3: mov     ecx, [esp+18h+var_C]
0x41F4A7: mov     large fs:0, ecx
0x41F4AE: pop     ecx
0x41F4AF: pop     esi
0x41F4B0: add     esp, 10h
0x41F4B3: retn    4
