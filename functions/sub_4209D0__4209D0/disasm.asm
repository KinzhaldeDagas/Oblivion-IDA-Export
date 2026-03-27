0x4209D0: push    0FFFFFFFFh
0x4209D2: push    offset SEH_6F8920
0x4209D7: mov     eax, large fs:0
0x4209DD: push    eax
0x4209DE: push    esi
0x4209DF: mov     eax, ___security_cookie
0x4209E4: xor     eax, esp
0x4209E6: push    eax
0x4209E7: lea     eax, [esp+14h+var_C]
0x4209EB: mov     large fs:0, eax
0x4209F1: mov     esi, ecx
0x4209F3: cmp     byte ptr [esp+14h+arg_0], 0
0x4209F8: jz      short loc_420A4A
0x4209FA: movzx   eax, byte ptr [esi+0Eh]
0x4209FE: test    al, 20h
0x420A00: jnz     short loc_420A51
0x420A02: push    0Ch; Size
0x420A04: call    FormHeapAlloc
0x420A09: add     esp, 4
0x420A0C: mov     [esp+14h+arg_0], eax
0x420A10: test    eax, eax
0x420A12: mov     [esp+14h+var_4], 0
0x420A1A: jz      short loc_420A25
0x420A1C: mov     ecx, eax
0x420A1E: call    sub_429BF0
0x420A23: jmp     short loc_420A27
0x420A25: xor     eax, eax
0x420A27: push    eax; BSExtraData *
0x420A28: mov     ecx, esi; ExtraDataList *
0x420A2A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x420A32: call    BaseExtraList_AddExtra
0x420A37: mov     ecx, [esp+14h+var_C]
0x420A3B: mov     large fs:0, ecx
0x420A42: pop     ecx
0x420A43: pop     esi
0x420A44: add     esp, 0Ch
0x420A47: retn    4
0x420A4A: push    35h ; '5'
0x420A4C: call    BaseExtraList_RemoveExtraByType
0x420A51: mov     ecx, [esp+14h+var_C]
0x420A55: mov     large fs:0, ecx
0x420A5C: pop     ecx
0x420A5D: pop     esi
0x420A5E: add     esp, 0Ch
0x420A61: retn    4
