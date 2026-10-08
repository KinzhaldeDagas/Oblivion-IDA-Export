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
0x9AB0A0: mov     eax, [ebp-18h]
0x9AB0A3: and     eax, 1
0x9AB0A6: jz      locret_9AB0B8
0x9AB0AC: and     dword ptr [ebp-18h], 0FFFFFFFEh
0x9AB0B0: lea     ecx, [ebp-14h]; void *
0x9AB0B3: jmp     BSStringT_Clear
0x9AB0B8: retn
0x9AB0B9: mov     eax, [ebp-18h]
0x9AB0BC: and     eax, 2
0x9AB0BF: jz      locret_9AB0D1
0x9AB0C5: and     dword ptr [ebp-18h], 0FFFFFFFDh
0x9AB0C9: mov     ecx, [ebp+4]; void *
0x9AB0CC: jmp     BSStringT_Clear
0x9AB0D1: retn
0x9AB0D2: mov     edx, [esp+arg_4]
0x9AB0D6: lea     eax, [edx-14h]
0x9AB0D9: mov     ecx, [edx-18h]
0x9AB0DC: xor     ecx, eax
0x9AB0DE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB0E3: mov     eax, offset stru_AD8024
0x9AB0E8: jmp     ___CxxFrameHandler3
