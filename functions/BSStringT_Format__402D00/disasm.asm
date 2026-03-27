0x402D00: sub     esp, 404h
0x402D06: mov     eax, ___security_cookie
0x402D0B: xor     eax, esp
0x402D0D: mov     [esp+404h+var_4], eax
0x402D14: mov     eax, [esp+404h+Format]
0x402D1B: push    esi
0x402D1C: push    edi
0x402D1D: mov     esi, ecx
0x402D1F: mov     ecx, [esp+40Ch+ArgList]
0x402D26: push    ecx; ArgList
0x402D27: push    eax; Format
0x402D28: lea     eax, [esp+414h+DstBuf]
0x402D2C: push    eax; DstBuf
0x402D2D: call    __vsprintf
0x402D32: add     esp, 0Ch
0x402D35: push    0; a3
0x402D37: lea     ecx, [esp+410h+DstBuf]
0x402D3B: push    ecx; a2
0x402D3C: mov     ecx, esi; this
0x402D3E: mov     edi, eax
0x402D40: call    BSStringT_Set
0x402D45: mov     ecx, [esp+40Ch+var_4]
0x402D4C: mov     eax, edi
0x402D4E: pop     edi
0x402D4F: pop     esi
0x402D50: xor     ecx, esp
0x402D52: call    @__security_check_cookie@4; __security_check_cookie(x)
0x402D57: add     esp, 404h
0x402D5D: retn    8
