0x6FAC00: push    0FFFFFFFFh
0x6FAC02: push    offset SEH_8C62B0
0x6FAC07: mov     eax, large fs:0
0x6FAC0D: push    eax
0x6FAC0E: push    ecx
0x6FAC0F: push    esi
0x6FAC10: mov     eax, ds:0B30AACh
0x6FAC15: xor     eax, esp
0x6FAC17: push    eax
0x6FAC18: lea     eax, [esp+18h+var_C]
0x6FAC1C: mov     large fs:0, eax
0x6FAC22: push    1Ch; Size
0x6FAC24: call    FormHeapAlloc
0x6FAC29: mov     esi, eax
0x6FAC2B: add     esp, 4
0x6FAC2E: mov     [esp+18h+var_10], esi
0x6FAC32: xor     eax, eax
0x6FAC34: cmp     esi, eax
0x6FAC36: mov     [esp+18h+var_4], eax
0x6FAC3A: jz      short loc_6FAC57
0x6FAC3C: mov     ecx, esi
0x6FAC3E: call    sub_752BF0
0x6FAC43: fld1
0x6FAC45: fstp    dword ptr [esi+18h]
0x6FAC48: mov     dword ptr [esi], offset ??_7BSWindModifier@@6B@; const BSWindModifier::`vftable'
0x6FAC4E: mov     dword ptr [esi+0Ch], 0FA0h
0x6FAC55: mov     eax, esi
0x6FAC57: mov     ecx, [esp+18h+var_C]
0x6FAC5B: mov     large fs:0, ecx
0x6FAC62: pop     ecx
0x6FAC63: pop     esi
0x6FAC64: add     esp, 10h
0x6FAC67: retn
