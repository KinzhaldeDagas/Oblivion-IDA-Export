0x74A000: test    [esp+arg_0], 2
0x74A005: push    esi
0x74A006: push    edi
0x74A007: mov     edi, ecx
0x74A009: jz      short loc_74A064
0x74A00B: push    ebx
0x74A00C: lea     ebx, [edi-4]
0x74A00F: push    ebp
0x74A010: mov     ebp, [ebx]
0x74A012: lea     edi, [edi+ebp*4]
0x74A015: sub     ebp, 1
0x74A018: js      short loc_74A04B
0x74A01A: lea     ebx, [ebx+0]
0x74A020: mov     esi, [edi-4]
0x74A023: sub     edi, 4
0x74A026: test    esi, esi
0x74A028: jz      short loc_74A046
0x74A02A: lea     eax, [esi+4]
0x74A02D: push    eax; lpAddend
0x74A02E: call    dword ptr ds:0A2807Ch
0x74A034: test    eax, eax
0x74A036: jnz     short loc_74A046
0x74A038: test    esi, esi
0x74A03A: jz      short loc_74A046
0x74A03C: mov     edx, [esi]
0x74A03E: mov     eax, [edx]
0x74A040: push    1
0x74A042: mov     ecx, esi
0x74A044: call    eax
0x74A046: sub     ebp, 1
0x74A049: jns     short loc_74A020
0x74A04B: test    [esp+10h+arg_0], 1
0x74A050: jz      short loc_74A05B
0x74A052: push    ebx
0x74A053: call    FormHeapFree
0x74A058: add     esp, 4
0x74A05B: pop     ebp
0x74A05C: mov     eax, ebx
0x74A05E: pop     ebx
0x74A05F: pop     edi
0x74A060: pop     esi
0x74A061: retn    4
0x74A064: mov     esi, [edi]
0x74A066: test    esi, esi
0x74A068: jz      short loc_74A086
0x74A06A: lea     ecx, [esi+4]
0x74A06D: push    ecx; lpAddend
0x74A06E: call    dword ptr ds:0A2807Ch
0x74A074: test    eax, eax
0x74A076: jnz     short loc_74A086
0x74A078: test    esi, esi
0x74A07A: jz      short loc_74A086
0x74A07C: mov     edx, [esi]
0x74A07E: mov     eax, [edx]
0x74A080: push    1
0x74A082: mov     ecx, esi
0x74A084: call    eax
0x74A086: test    [esp+8+arg_0], 1
0x74A08B: jz      short loc_74A096
0x74A08D: push    edi
0x74A08E: call    FormHeapFree
0x74A093: add     esp, 4
0x74A096: mov     eax, edi
0x74A098: pop     edi
0x74A099: pop     esi
0x74A09A: retn    4
