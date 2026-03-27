0x41E060: push    esi
0x41E061: push    edi
0x41E062: mov     edi, ecx
0x41E064: push    offset aBaseextralistI; lpCriticalSection
0x41E069: mov     ecx, offset BSExtraDataCS
0x41E06E: call    NiEnterCriticalSection
0x41E073: mov     eax, [edi+4]
0x41E076: xor     esi, esi
0x41E078: test    eax, eax
0x41E07A: jz      short loc_41E08A
0x41E07C: lea     esp, [esp+0]
0x41E080: mov     eax, [eax+8]
0x41E083: add     esi, 1
0x41E086: test    eax, eax
0x41E088: jnz     short loc_41E080
0x41E08A: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E08F: call    NiLeaveCriticalSection_0
0x41E094: pop     edi
0x41E095: mov     eax, esi
0x41E097: pop     esi
0x41E098: retn
