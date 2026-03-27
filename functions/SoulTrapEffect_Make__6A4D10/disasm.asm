0x6A4D10: push    0FFFFFFFFh
0x6A4D12: push    offset SEH_8C62B0
0x6A4D17: mov     eax, large fs:0
0x6A4D1D: push    eax
0x6A4D1E: push    ecx
0x6A4D1F: push    esi
0x6A4D20: mov     eax, ds:0B30AACh
0x6A4D25: xor     eax, esp
0x6A4D27: push    eax
0x6A4D28: lea     eax, [esp+18h+var_C]
0x6A4D2C: mov     large fs:0, eax
0x6A4D32: push    38h ; '8'; Size
0x6A4D34: call    FormHeapAlloc
0x6A4D39: mov     esi, eax
0x6A4D3B: add     esp, 4
0x6A4D3E: mov     [esp+18h+var_10], esi
0x6A4D42: xor     eax, eax
0x6A4D44: cmp     esi, eax
0x6A4D46: mov     [esp+18h+var_4], eax
0x6A4D4A: jz      short loc_6A4D6A
0x6A4D4C: mov     eax, [esp+18h+arg_8]
0x6A4D50: mov     ecx, [esp+18h+arg_4]
0x6A4D54: mov     edx, [esp+18h+arg_0]
0x6A4D58: push    eax
0x6A4D59: push    ecx
0x6A4D5A: push    edx
0x6A4D5B: mov     ecx, esi; this
0x6A4D5D: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A4D62: mov     dword ptr [esi], offset ??_7SoulTrapEffect@@6B@; const SoulTrapEffect::`vftable'
0x6A4D68: mov     eax, esi
0x6A4D6A: mov     ecx, [esp+18h+var_C]
0x6A4D6E: mov     large fs:0, ecx
0x6A4D75: pop     ecx
0x6A4D76: pop     esi
0x6A4D77: add     esp, 10h
0x6A4D7A: retn
