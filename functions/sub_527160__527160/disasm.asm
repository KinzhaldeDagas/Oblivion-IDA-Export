0x527160: sub     esp, 8; Vector resize: retain existing prefix, erase surplus elements when shrinking, fill only newly inserted elements when growing. Equal size does not overwrite coefficients. Matrix dimension products must already be valid; no recovery from rows*columns overflow.
0x527163: push    ebx
0x527164: push    ebp
0x527165: push    esi
0x527166: mov     esi, ecx
0x527168: mov     ecx, [esi+4]
0x52716B: test    ecx, ecx
0x52716D: push    edi
0x52716E: jnz     short loc_527174
0x527170: xor     eax, eax
0x527172: jmp     short loc_52717C
0x527174: mov     eax, [esi+8]
0x527177: sub     eax, ecx
0x527179: sar     eax, 2
0x52717C: mov     ebx, [esp+18h+arg_0]
0x527180: cmp     eax, ebx
0x527182: jnb     short loc_5271BB
0x527184: test    ecx, ecx
0x527186: jnz     short loc_52718C
0x527188: xor     edi, edi
0x52718A: jmp     short loc_527194
0x52718C: mov     edi, [esi+8]
0x52718F: sub     edi, ecx
0x527191: sar     edi, 2
0x527194: mov     ebp, [esi+8]
0x527197: cmp     ecx, ebp
0x527199: jbe     short loc_5271A0
0x52719B: call    __invalid_parameter_noinfo
0x5271A0: lea     eax, [esp+18h+value]
0x5271A4: push    eax; value
0x5271A5: sub     ebx, edi
0x5271A7: push    ebx; count
0x5271A8: push    ebp; Src
0x5271A9: push    esi; position
0x5271AA: mov     ecx, esi; this
0x5271AC: call    OB_stVectorFloat_InsertFill_CompilerCopy_010201A0; Oblivion 1.2.0.416: compiler-emitted vector<float>::insert(position,count,value) body used by the checked float insert-one wrapper; 4-byte stride, 1.5x growth, alias-safe local fill value, in-place shift or FormHeap reallocation. Named CompilerCopy because equivalent specializations also exist at other addresses.
0x5271B1: pop     edi
0x5271B2: pop     esi
0x5271B3: pop     ebp
0x5271B4: pop     ebx
0x5271B5: add     esp, 8
0x5271B8: retn    8
0x5271BB: test    ecx, ecx
0x5271BD: jz      short loc_527209
0x5271BF: mov     ebp, [esi+8]
0x5271C2: mov     eax, ebp
0x5271C4: sub     eax, ecx
0x5271C6: sar     eax, 2
0x5271C9: cmp     ebx, eax
0x5271CB: jnb     short loc_527209
0x5271CD: cmp     ecx, ebp
0x5271CF: jbe     short loc_5271D6
0x5271D1: call    __invalid_parameter_noinfo
0x5271D6: mov     edi, [esi+4]
0x5271D9: cmp     edi, [esi+8]
0x5271DC: jbe     short loc_5271E3
0x5271DE: call    __invalid_parameter_noinfo
0x5271E3: mov     [esp+18h+result.current], edi
0x5271E7: lea     edi, [edi+ebx*4]
0x5271EA: cmp     edi, [esi+8]
0x5271ED: ja      short loc_5271F4
0x5271EF: cmp     edi, [esi+4]
0x5271F2: jnb     short loc_5271F9
0x5271F4: call    __invalid_parameter_noinfo
0x5271F9: push    ebp; last
0x5271FA: push    esi; last
0x5271FB: push    edi; first
0x5271FC: push    esi; first
0x5271FD: lea     ecx, [esp+28h+result]
0x527201: push    ecx; result
0x527202: mov     ecx, esi; this
0x527204: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x527209: pop     edi
0x52720A: pop     esi
0x52720B: pop     ebp
0x52720C: pop     ebx
0x52720D: add     esp, 8
0x527210: retn    8
