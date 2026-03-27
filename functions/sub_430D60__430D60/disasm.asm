0x430D60: push    0FFFFFFFFh
0x430D62: push    offset SEH_8C62B0
0x430D67: mov     eax, large fs:0
0x430D6D: push    eax
0x430D6E: push    ecx
0x430D6F: push    esi
0x430D70: mov     eax, ___security_cookie
0x430D75: xor     eax, esp
0x430D77: push    eax
0x430D78: lea     eax, [esp+18h+var_C]
0x430D7C: mov     large fs:0, eax
0x430D82: push    210h; Size
0x430D87: call    FormHeapAlloc
0x430D8C: mov     esi, eax
0x430D8E: add     esp, 4
0x430D91: mov     [esp+18h+var_10], esi
0x430D95: xor     eax, eax
0x430D97: cmp     esi, eax
0x430D99: mov     [esp+18h+var_4], eax
0x430D9D: jz      short loc_430DAE
0x430D9F: mov     ecx, esi
0x430DA1: call    sub_7478C0
0x430DA6: mov     dword ptr [esi], offset ??_7BSSearchPath@@6B@; const BSSearchPath::`vftable'
0x430DAC: mov     eax, esi
0x430DAE: mov     ecx, [esp+18h+var_C]
0x430DB2: mov     large fs:0, ecx
0x430DB9: pop     ecx
0x430DBA: pop     esi
0x430DBB: add     esp, 10h
0x430DBE: retn
