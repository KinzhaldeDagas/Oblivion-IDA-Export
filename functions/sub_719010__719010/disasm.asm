0x719010: push    0FFFFFFFFh
0x719012: push    offset SEH_8C8970
0x719017: mov     eax, large fs:0
0x71901D: push    eax
0x71901E: push    ecx
0x71901F: push    esi
0x719020: push    edi
0x719021: mov     eax, ds:0B30AACh
0x719026: xor     eax, esp
0x719028: push    eax
0x719029: lea     eax, [esp+1Ch+var_C]
0x71902D: mov     large fs:0, eax
0x719033: push    24h ; '$'; Size
0x719035: call    FormHeapAlloc
0x71903A: mov     esi, eax
0x71903C: add     esp, 4
0x71903F: mov     [esp+1Ch+var_10], esi
0x719043: or      edi, 0FFFFFFFFh
0x719046: test    esi, esi
0x719048: mov     [esp+1Ch+var_4], 0
0x719050: jz      short loc_719071
0x719052: mov     ecx, esi; this
0x719054: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x719059: mov     dword ptr [esi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x71905F: mov     dword ptr [esi+1Ch], 0
0x719066: mov     [esi+20h], edi
0x719069: mov     word ptr [esi+18h], 4180h
0x71906F: jmp     short loc_719073
0x719071: xor     esi, esi
0x719073: mov     eax, ds:0B3FCF8h
0x719078: cmp     eax, esi
0x71907A: mov     [esp+1Ch+var_4], edi
0x71907E: jz      short loc_7190B6
0x719080: test    eax, eax
0x719082: jz      short loc_7190A2
0x719084: mov     edi, eax
0x719086: add     eax, 4
0x719089: push    eax; lpAddend
0x71908A: call    dword ptr ds:0A2807Ch
0x719090: test    eax, eax
0x719092: jnz     short loc_7190A2
0x719094: test    edi, edi
0x719096: jz      short loc_7190A2
0x719098: mov     eax, [edi]
0x71909A: mov     edx, [eax]
0x71909C: push    1
0x71909E: mov     ecx, edi
0x7190A0: call    edx
0x7190A2: test    esi, esi
0x7190A4: mov     ds:0B3FCF8h, esi
0x7190AA: jz      short loc_7190B6
0x7190AC: add     esi, 4
0x7190AF: push    esi; lpAddend
0x7190B0: call    dword ptr ds:0A28078h
0x7190B6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7190BA: mov     large fs:0, ecx
0x7190C1: pop     ecx
0x7190C2: pop     edi
0x7190C3: pop     esi
0x7190C4: add     esp, 10h
0x7190C7: retn
