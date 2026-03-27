0x51EF30: push    0FFFFFFFFh
0x51EF32: push    offset ??1TESEyes@@UAE@XZ_SEH
0x51EF37: mov     eax, large fs:0
0x51EF3D: push    eax
0x51EF3E: sub     esp, 0Ch
0x51EF41: push    esi
0x51EF42: push    edi
0x51EF43: mov     eax, ds:0B30AACh
0x51EF48: xor     eax, esp
0x51EF4A: push    eax
0x51EF4B: lea     eax, [esp+24h+var_C]
0x51EF4F: mov     large fs:0, eax
0x51EF55: mov     esi, ecx
0x51EF57: mov     [esp+24h+var_10], esi
0x51EF5B: lea     edi, [esi+24h]
0x51EF5E: mov     dword ptr [esi], offset ??_7TESEyes@@6BTESEyes@@@; const TESEyes::`vftable'{for `TESEyes'}
0x51EF64: mov     dword ptr [esi+18h], offset ??_7TESEyes@@6BTESFullName@@@; const TESEyes::`vftable'{for `TESFullName'}
0x51EF6B: mov     dword ptr [edi], offset ??_7TESEyes@@6BTESTexture@@@; const TESEyes::`vftable'{for `TESTexture'}
0x51EF71: mov     [esp+24h+var_4], 2
0x51EF79: call    j_TESForm_ClearComponentReferences
0x51EF7E: mov     ecx, edi; void *
0x51EF80: mov     byte ptr [esp+24h+var_4], 1
0x51EF85: call    TESTexture_destr
0x51EF8A: mov     eax, [esi+1Ch]
0x51EF8D: push    eax
0x51EF8E: call    FormHeapFree
0x51EF93: xor     eax, eax
0x51EF95: add     esp, 4
0x51EF98: mov     ecx, esi; this
0x51EF9A: mov     [esi+1Ch], eax
0x51EF9D: mov     [esi+22h], ax
0x51EFA1: mov     [esi+20h], ax
0x51EFA5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x51EFAD: call    TESForm_destr
0x51EFB2: mov     ecx, [esp+24h+var_C]
0x51EFB6: mov     large fs:0, ecx
0x51EFBD: pop     ecx
0x51EFBE: pop     edi
0x51EFBF: pop     esi
0x51EFC0: add     esp, 18h
0x51EFC3: retn
