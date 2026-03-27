0x99EB71: push    ebp
0x99EB72: mov     ebp, esp
0x99EB74: push    ecx
0x99EB75: push    esi
0x99EB76: lea     eax, [ebp+var_4]
0x99EB79: xor     esi, esi
0x99EB7B: push    eax
0x99EB7C: mov     [ebp+var_4], esi
0x99EB7F: call    sub_99EDAF
0x99EB84: test    eax, eax
0x99EB86: pop     ecx
0x99EB87: jz      short loc_99EB96
0x99EB89: push    esi
0x99EB8A: push    esi
0x99EB8B: push    esi
0x99EB8C: push    esi
0x99EB8D: push    esi
0x99EB8E: call    __invoke_watson
0x99EB93: add     esp, 14h
0x99EB96: cmp     [ebp+var_4], esi
0x99EB99: jnz     short loc_99EBA2
0x99EB9B: xor     eax, eax
0x99EB9D: jmp     loc_99ECD4
0x99EBA2: mov     edx, [edi+14h]
0x99EBA5: push    ebx
0x99EBA6: xor     ebx, ebx
0x99EBA8: inc     ebx
0x99EBA9: cmp     edx, dword_B31FD0
0x99EBAF: jnz     short loc_99EBBD
0x99EBB1: cmp     edx, dword_B31FDC
0x99EBB7: jz      loc_99ECAF
0x99EBBD: cmp     dword_BAA86C, esi
0x99EBC3: jz      loc_99EC81
0x99EBC9: cmp     TimeZoneInformation.DaylightDate.wYear, si
0x99EBD0: movzx   eax, TimeZoneInformation.DaylightDate.wMilliseconds
0x99EBD7: movzx   ecx, TimeZoneInformation.DaylightDate.wHour
0x99EBDE: push    eax
0x99EBDF: movzx   eax, TimeZoneInformation.DaylightDate.wSecond
0x99EBE6: push    eax
0x99EBE7: movzx   eax, TimeZoneInformation.DaylightDate.wMinute
0x99EBEE: push    eax
0x99EBEF: jnz     short loc_99EC06
0x99EBF1: movzx   eax, TimeZoneInformation.DaylightDate.wDayOfWeek
0x99EBF8: push    esi
0x99EBF9: push    eax
0x99EBFA: movzx   eax, TimeZoneInformation.DaylightDate.wDay
0x99EC01: push    eax
0x99EC02: push    edx
0x99EC03: push    ebx
0x99EC04: jmp     short loc_99EC12
0x99EC06: movzx   eax, TimeZoneInformation.DaylightDate.wDay
0x99EC0D: push    eax
0x99EC0E: push    esi
0x99EC0F: push    esi
0x99EC10: push    edx
0x99EC11: push    esi
0x99EC12: movzx   eax, TimeZoneInformation.DaylightDate.wMonth
0x99EC19: push    ebx
0x99EC1A: call    _cvtdate
0x99EC1F: movzx   eax, TimeZoneInformation.StandardDate.wMilliseconds
0x99EC26: movzx   ecx, TimeZoneInformation.StandardDate.wHour
0x99EC2D: add     esp, 24h
0x99EC30: cmp     TimeZoneInformation.StandardDate.wYear, si
0x99EC37: push    eax
0x99EC38: movzx   eax, TimeZoneInformation.StandardDate.wSecond
0x99EC3F: push    eax
0x99EC40: movzx   eax, TimeZoneInformation.StandardDate.wMinute
0x99EC47: push    eax
0x99EC48: jnz     short loc_99EC61
0x99EC4A: movzx   eax, TimeZoneInformation.StandardDate.wDayOfWeek
0x99EC51: push    esi
0x99EC52: push    eax
0x99EC53: movzx   eax, TimeZoneInformation.StandardDate.wDay
0x99EC5A: push    eax
0x99EC5B: push    dword ptr [edi+14h]
0x99EC5E: push    ebx
0x99EC5F: jmp     short loc_99EC6F
0x99EC61: movzx   eax, TimeZoneInformation.StandardDate.wDay
0x99EC68: push    eax
0x99EC69: push    esi
0x99EC6A: push    esi
0x99EC6B: push    dword ptr [edi+14h]
0x99EC6E: push    esi
0x99EC6F: movzx   eax, TimeZoneInformation.StandardDate.wMonth
0x99EC76: push    esi
0x99EC77: call    _cvtdate
0x99EC7C: add     esp, 24h
0x99EC7F: jmp     short loc_99ECAF
0x99EC81: push    esi
0x99EC82: push    esi
0x99EC83: push    esi
0x99EC84: push    esi
0x99EC85: push    esi
0x99EC86: push    ebx
0x99EC87: push    edx
0x99EC88: push    ebx
0x99EC89: push    ebx
0x99EC8A: push    2
0x99EC8C: pop     ecx
0x99EC8D: push    4
0x99EC8F: pop     eax
0x99EC90: call    _cvtdate
0x99EC95: push    esi
0x99EC96: push    esi
0x99EC97: push    esi
0x99EC98: push    esi
0x99EC99: push    esi
0x99EC9A: push    5
0x99EC9C: push    dword ptr [edi+14h]
0x99EC9F: push    ebx
0x99ECA0: push    esi
0x99ECA1: push    2
0x99ECA3: pop     ecx
0x99ECA4: push    0Ah
0x99ECA6: pop     eax
0x99ECA7: call    _cvtdate
0x99ECAC: add     esp, 48h
0x99ECAF: mov     ecx, dword_B31FD4
0x99ECB5: mov     eax, dword_B31FE0
0x99ECBA: cmp     ecx, eax
0x99ECBC: mov     edx, [edi+1Ch]
0x99ECBF: jge     short loc_99ECD7
0x99ECC1: cmp     edx, ecx
0x99ECC3: jl      short loc_99ECE7
0x99ECC5: cmp     edx, eax
0x99ECC7: jg      short loc_99ECE7
0x99ECC9: cmp     edx, ecx
0x99ECCB: jle     short loc_99ECEB
0x99ECCD: cmp     edx, eax
0x99ECCF: jge     short loc_99ECEB
0x99ECD1: mov     eax, ebx
0x99ECD3: pop     ebx
0x99ECD4: pop     esi
0x99ECD5: leave
0x99ECD6: retn
0x99ECD7: cmp     edx, eax
0x99ECD9: jl      short loc_99ECD1
0x99ECDB: cmp     edx, ecx
0x99ECDD: jg      short loc_99ECD1
0x99ECDF: cmp     edx, eax
0x99ECE1: jle     short loc_99ECEB
0x99ECE3: cmp     edx, ecx
0x99ECE5: jge     short loc_99ECEB
0x99ECE7: xor     eax, eax
0x99ECE9: jmp     short loc_99ECD3
0x99ECEB: mov     eax, [edi+8]
0x99ECEE: imul    eax, 3Ch ; '<'
0x99ECF1: add     eax, [edi+4]
0x99ECF4: imul    eax, 3Ch ; '<'
0x99ECF7: add     eax, [edi]
0x99ECF9: imul    eax, 3E8h
0x99ECFF: cmp     edx, ecx
0x99ED01: jnz     short loc_99ED10
0x99ED03: xor     ecx, ecx
0x99ED05: cmp     eax, dword_B31FD8
0x99ED0B: setnl   cl
0x99ED0E: jmp     short loc_99ED1B
0x99ED10: xor     ecx, ecx
0x99ED12: cmp     eax, dword_B31FE4
0x99ED18: setl    cl
0x99ED1B: mov     eax, ecx
0x99ED1D: jmp     short loc_99ECD3
