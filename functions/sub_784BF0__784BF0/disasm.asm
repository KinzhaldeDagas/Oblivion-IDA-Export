0x784BF0: sub     esp, 8; Oblivion 1.2.0.416: vector clear implemented as checked erase(begin,end).
0x784BF3: push    ebx
0x784BF4: push    esi
0x784BF5: mov     esi, ecx
0x784BF7: mov     ebx, [esi+8]
0x784BFA: cmp     [esi+4], ebx
0x784BFD: push    edi
0x784BFE: jbe     short loc_784C05
0x784C00: call    __invalid_parameter_noinfo
0x784C05: mov     edi, [esi+4]
0x784C08: cmp     edi, [esi+8]
0x784C0B: jbe     short loc_784C12
0x784C0D: call    __invalid_parameter_noinfo
0x784C12: push    ebx
0x784C13: push    esi; last
0x784C14: push    edi
0x784C15: push    esi; first
0x784C16: lea     eax, [esp+24h+result]
0x784C1A: push    eax; result
0x784C1B: mov     ecx, esi; this
0x784C1D: call    OB_stVector24_EraseRange_010201A0; Oblivion 1.2.0.416: checked erase(first,last) for 0x18-byte records; compacts the tail, destroys remnants, updates end, and returns an iterator.
0x784C22: pop     edi
0x784C23: pop     esi
0x784C24: pop     ebx
0x784C25: add     esp, 8
0x784C28: retn
