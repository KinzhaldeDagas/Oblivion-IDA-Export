0x6D7CF0: push    ebx
0x6D7CF1: mov     ebx, [esp+4+a2]
0x6D7CF5: push    esi
0x6D7CF6: push    edi
0x6D7CF7: push    ebx; a2
0x6D7CF8: mov     esi, ecx
0x6D7CFA: call    sub_7008A0
0x6D7CFF: mov     eax, [ebx+21Ch]
0x6D7D05: mov     edx, [eax+4]
0x6D7D08: push    1
0x6D7D0A: lea     ecx, [esp+10h+a2]
0x6D7D0E: push    ecx
0x6D7D0F: push    4
0x6D7D11: lea     edi, [esi+0Ch]
0x6D7D14: push    edi
0x6D7D15: push    eax
0x6D7D16: mov     [esp+20h+a2], 4
0x6D7D1E: call    edx
0x6D7D20: mov     eax, [edi]
0x6D7D22: add     esp, 14h
0x6D7D25: test    eax, eax
0x6D7D27: jbe     short loc_6D7D54
0x6D7D29: push    eax; Size
0x6D7D2A: call    FormHeapAlloc
0x6D7D2F: push    1
0x6D7D31: lea     edx, [esp+14h+a2]
0x6D7D35: push    edx
0x6D7D36: mov     edx, [edi]
0x6D7D38: push    edx
0x6D7D39: mov     [esi+8], eax
0x6D7D3C: mov     ecx, [ebx+21Ch]
0x6D7D42: push    eax
0x6D7D43: mov     eax, [ecx+4]
0x6D7D46: push    ecx
0x6D7D47: mov     [esp+24h+a2], 1
0x6D7D4F: call    eax
0x6D7D51: add     esp, 18h
0x6D7D54: mov     ebx, [ebx+21Ch]
0x6D7D5A: mov     edx, [ebx+4]
0x6D7D5D: push    1
0x6D7D5F: lea     ecx, [esp+10h+a2]
0x6D7D63: push    ecx
0x6D7D64: push    4
0x6D7D66: add     esi, 10h
0x6D7D69: push    esi
0x6D7D6A: push    ebx
0x6D7D6B: mov     [esp+20h+a2], 4
0x6D7D73: call    edx
0x6D7D75: add     esp, 14h
0x6D7D78: pop     edi
0x6D7D79: pop     esi
0x6D7D7A: pop     ebx
0x6D7D7B: retn    4
