0x41F2F0: push    0FFFFFFFFh
0x41F2F2: push    offset SEH_8C62B0
0x41F2F7: mov     eax, large fs:0
0x41F2FD: push    eax
0x41F2FE: push    ecx
0x41F2FF: push    esi
0x41F300: mov     eax, ___security_cookie
0x41F305: xor     eax, esp
0x41F307: push    eax
0x41F308: lea     eax, [esp+18h+var_C]
0x41F30C: mov     large fs:0, eax
0x41F312: mov     esi, ecx
0x41F314: movzx   eax, byte ptr [esi+12h]
0x41F318: test    al, 1
0x41F31A: jnz     short loc_41F351
0x41F31C: push    0Ch; Size
0x41F31E: call    FormHeapAlloc
0x41F323: add     esp, 4
0x41F326: mov     [esp+18h+var_10], eax
0x41F32A: test    eax, eax
0x41F32C: mov     [esp+18h+var_4], 0
0x41F334: jz      short loc_41F33F
0x41F336: mov     ecx, eax
0x41F338: call    sub_42A010
0x41F33D: jmp     short loc_41F341
0x41F33F: xor     eax, eax
0x41F341: push    eax; BSExtraData *
0x41F342: mov     ecx, esi; ExtraDataList *
0x41F344: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41F34C: call    BaseExtraList_AddExtra
0x41F351: mov     ecx, [esp+18h+var_C]
0x41F355: mov     large fs:0, ecx
0x41F35C: pop     ecx
0x41F35D: pop     esi
0x41F35E: add     esp, 10h
0x41F361: retn
