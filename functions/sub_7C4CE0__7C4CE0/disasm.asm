0x7C4CE0: mov     edx, ds:0B2CBC8h
0x7C4CE6: sub     esp, 0Ch
0x7C4CE9: xor     eax, eax
0x7C4CEB: test    edx, edx
0x7C4CED: jbe     short loc_7C4D06
0x7C4CEF: mov     ecx, ds:0B2CBCCh
0x7C4CF5: cmp     dword ptr [ecx+eax*4], 0
0x7C4CF9: jnz     loc_7C4D7C
0x7C4CFF: add     eax, 1
0x7C4D02: cmp     eax, edx
0x7C4D04: jb      short loc_7C4CF5
0x7C4D06: xor     eax, eax
0x7C4D08: cmp     dword ptr ds:0B2CBD0h, 0
0x7C4D0F: mov     [esp+0Ch+var_8], eax
0x7C4D13: mov     [esp+0Ch+var_C], 0
0x7C4D1A: jbe     short loc_7C4D5A
0x7C4D1C: test    eax, eax
0x7C4D1E: jz      short loc_7C4D5A
0x7C4D20: push    esi
0x7C4D21: lea     eax, [esp+10h+var_C]
0x7C4D25: push    eax
0x7C4D26: lea     ecx, [esp+14h+var_4]
0x7C4D2A: push    ecx
0x7C4D2B: lea     edx, [esp+18h+var_8]
0x7C4D2F: push    edx
0x7C4D30: mov     ecx, offset off_B2CBC4
0x7C4D35: call    sub_452600
0x7C4D3A: mov     esi, [esp+10h+var_C]
0x7C4D3E: test    esi, esi
0x7C4D40: jz      short loc_7C4D52
0x7C4D42: mov     ecx, esi
0x7C4D44: call    sub_7C3850
0x7C4D49: push    esi
0x7C4D4A: call    FormHeapFree
0x7C4D4F: add     esp, 4
0x7C4D52: cmp     [esp+10h+var_8], 0
0x7C4D57: jnz     short loc_7C4D21
0x7C4D59: pop     esi
0x7C4D5A: mov     ecx, offset off_B2CBC4
0x7C4D5F: call    NiTMap_Clear
0x7C4D64: mov     dword ptr ds:0B43348h, 0
0x7C4D6E: mov     dword ptr ds:0B4334Ch, 0
0x7C4D78: add     esp, 0Ch
0x7C4D7B: retn
0x7C4D7C: mov     eax, [ecx+eax*4]
0x7C4D7F: jmp     short loc_7C4D08
