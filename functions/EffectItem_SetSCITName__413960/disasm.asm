0x413960: push    0FFFFFFFFh
0x413962: push    offset SEH_5C3110
0x413967: mov     eax, large fs:0
0x41396D: push    eax
0x41396E: push    esi
0x41396F: push    edi
0x413970: mov     eax, ___security_cookie
0x413975: xor     eax, esp
0x413977: push    eax
0x413978: lea     eax, [esp+18h+var_C]
0x41397C: mov     large fs:0, eax
0x413982: mov     edi, ecx
0x413984: mov     eax, [edi+18h]
0x413987: test    eax, eax
0x413989: mov     esi, [esp+18h+Str2]
0x41398D: mov     [esp+18h+var_4], 0
0x413995: jz      short EffectItem_SetSCITName___Done
0x413997: test    esi, esi
0x413999: jz      short EffectItem_SetSCITName___BadArg
0x41399B: mov     eax, [eax+8]
0x41399E: test    eax, eax
0x4139A0: jz      short EffectItem_SetSCITName___BadArg
0x4139A2: push    esi; Str2
0x4139A3: push    eax; Str1
0x4139A4: call    __strcmp
0x4139A9: add     esp, 8
0x4139AC: jmp     short EffectItem_SetSCITName___CopyName
