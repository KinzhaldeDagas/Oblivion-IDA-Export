0x99CFB5: push    edi; Memory
0x99CFB6: call    __freea
0x99CFBB: pop     ecx
0x99CFBC: mov     eax, esi
0x99CFBE: jmp     short loc_99CFD2
0x99CFC0: push    dword ptr [ebp+18h]; cchData
0x99CFC3: push    dword ptr [ebp+14h]; lpLCData
0x99CFC6: push    dword ptr [ebp+10h]; LCType
0x99CFC9: push    dword ptr [ebp+0Ch]; Locale
0x99CFCC: call    ds:GetLocaleInfoA
0x99CFD2: lea     esp, [ebp-14h]
0x99CFD5: pop     edi
0x99CFD6: pop     esi
0x99CFD7: pop     ebx
0x99CFD8: mov     ecx, [ebp-4]
0x99CFDB: xor     ecx, ebp
0x99CFDD: call    @__security_check_cookie@4
0x99CFE2: leave
0x99CFE3: retn
