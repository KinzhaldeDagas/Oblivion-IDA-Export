0x509D10: push    edi
0x509D11: mov     edi, ds:0B33A98h
0x509D17: add     edi, 84h ; '„'
0x509D1D: jz      short loc_509D63
0x509D1F: push    ebp
0x509D20: push    esi
0x509D21: mov     esi, [edi]
0x509D23: test    esi, esi
0x509D25: jz      short loc_509D61
0x509D27: test    byte ptr [esi+3Ch], 1
0x509D2B: mov     edi, [edi+4]
0x509D2E: mov     ebp, offset aOn_0
0x509D33: jnz     short loc_509D3A
0x509D35: mov     ebp, offset aOff
0x509D3A: mov     ecx, esi
0x509D3C: call    sub_529750
0x509D41: push    eax
0x509D42: mov     eax, [esi]
0x509D44: mov     edx, [eax+0D4h]
0x509D4A: push    ebp
0x509D4B: mov     ecx, esi
0x509D4D: call    edx
0x509D4F: push    eax
0x509D50: push    offset aSSStageD; "%s (%s) -- Stage %d"
0x509D55: call    Interface_ConsolePrint
0x509D5A: add     esp, 10h
0x509D5D: test    edi, edi
0x509D5F: jnz     short loc_509D21
0x509D61: pop     esi
0x509D62: pop     ebp
0x509D63: mov     al, 1
0x509D65: pop     edi
0x509D66: retn
