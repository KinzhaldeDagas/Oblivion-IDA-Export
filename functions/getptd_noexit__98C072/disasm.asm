0x98C072: push    esi
0x98C073: push    edi
0x98C074: call    ds:GetLastError
0x98C07A: mov     edi, eax
0x98C07C: call    ___set_flsgetvalue
0x98C081: push    dword_B310AC
0x98C087: push    dwTlsIndex; dwTlsIndex
0x98C08D: call    ds:TlsGetValue
0x98C093: call    eax
0x98C095: mov     esi, eax
0x98C097: test    esi, esi
0x98C099: jnz     short loc_98C0E9
0x98C09B: push    214h
0x98C0A0: push    1
0x98C0A2: call    unknown_libname_74
0x98C0A7: mov     esi, eax
0x98C0A9: test    esi, esi
0x98C0AB: pop     ecx
0x98C0AC: pop     ecx
0x98C0AD: jz      short loc_98C0E9
0x98C0AF: push    esi
0x98C0B0: push    dword_B310AC
0x98C0B6: push    FlsSetValue
0x98C0BC: call    __decode_pointer
0x98C0C1: pop     ecx
0x98C0C2: call    eax
0x98C0C4: test    eax, eax
0x98C0C6: jz      short loc_98C0E0
0x98C0C8: push    0
0x98C0CA: push    esi
0x98C0CB: call    __initptd
0x98C0D0: pop     ecx
0x98C0D1: pop     ecx
0x98C0D2: call    ds:GetCurrentThreadId
0x98C0D8: or      dword ptr [esi+4], 0FFFFFFFFh
0x98C0DC: mov     [esi], eax
0x98C0DE: jmp     short loc_98C0E9
0x98C0E0: push    esi; Memory
0x98C0E1: call    _free
0x98C0E6: pop     ecx
0x98C0E7: xor     esi, esi
0x98C0E9: push    edi; dwErrCode
0x98C0EA: call    ds:SetLastError
0x98C0F0: pop     edi
0x98C0F1: mov     eax, esi
0x98C0F3: pop     esi
0x98C0F4: retn
