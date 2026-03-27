0x41F150: push    0FFFFFFFFh
0x41F152: push    offset SEH_6F8920
0x41F157: mov     eax, large fs:0
0x41F15D: push    eax
0x41F15E: push    esi
0x41F15F: mov     eax, ___security_cookie
0x41F164: xor     eax, esp
0x41F166: push    eax
0x41F167: lea     eax, [esp+14h+var_C]
0x41F16B: mov     large fs:0, eax
0x41F171: mov     esi, ecx
0x41F173: movzx   ecx, byte ptr [esi+0Ch]
0x41F177: xor     al, al
0x41F179: test    cl, 20h
0x41F17C: jz      short loc_41F180
0x41F17E: mov     al, 1
0x41F180: cmp     byte ptr [esp+14h+arg_0], 0
0x41F185: jz      short loc_41F1D3
0x41F187: test    al, al
0x41F189: jnz     short loc_41F1E0
0x41F18B: push    0Ch; Size
0x41F18D: call    FormHeapAlloc
0x41F192: add     esp, 4
0x41F195: mov     [esp+14h+arg_0], eax
0x41F199: test    eax, eax
0x41F19B: mov     [esp+14h+var_4], 0
0x41F1A3: jz      short loc_41F1AE
0x41F1A5: mov     ecx, eax
0x41F1A7: call    sub_429FD0
0x41F1AC: jmp     short loc_41F1B0
0x41F1AE: xor     eax, eax
0x41F1B0: push    eax; BSExtraData *
0x41F1B1: mov     ecx, esi; ExtraDataList *
0x41F1B3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x41F1BB: call    BaseExtraList_AddExtra
0x41F1C0: mov     ecx, [esp+14h+var_C]
0x41F1C4: mov     large fs:0, ecx
0x41F1CB: pop     ecx
0x41F1CC: pop     esi
0x41F1CD: add     esp, 0Ch
0x41F1D0: retn    4
0x41F1D3: test    al, al
0x41F1D5: jz      short loc_41F1E0
0x41F1D7: push    25h ; '%'
0x41F1D9: mov     ecx, esi
0x41F1DB: call    BaseExtraList_RemoveExtraByType
0x41F1E0: mov     ecx, [esp+14h+var_C]
0x41F1E4: mov     large fs:0, ecx
0x41F1EB: pop     ecx
0x41F1EC: pop     esi
0x41F1ED: add     esp, 0Ch
0x41F1F0: retn    4
