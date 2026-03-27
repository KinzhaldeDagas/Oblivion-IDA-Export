0x4139F0: push    0FFFFFFFFh
0x4139F2: push    offset EffectItem_GetName_SEH
0x4139F7: mov     eax, large fs:0
0x4139FD: push    eax
0x4139FE: sub     esp, 0Ch
0x413A01: push    ebx
0x413A02: push    esi
0x413A03: mov     eax, ___security_cookie
0x413A08: xor     eax, esp
0x413A0A: push    eax
0x413A0B: lea     eax, [esp+24h+var_C]
0x413A0F: mov     large fs:0, eax
0x413A15: xor     ebx, ebx
0x413A17: mov     [esp+24h+var_18], ebx
0x413A1B: mov     eax, [ecx+18h]
0x413A1E: test    eax, eax
0x413A20: jz      short EffectItem_GetName___GetEffectSettingName
0x413A22: add     eax, 8
0x413A25: jmp     short EffectItem_GetName___CopyName
