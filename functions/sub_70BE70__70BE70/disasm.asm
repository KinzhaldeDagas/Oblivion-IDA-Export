0x70BE70: push    0FFFFFFFFh
0x70BE72: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x70BE77: mov     eax, large fs:0
0x70BE7D: push    eax
0x70BE7E: push    ecx
0x70BE7F: push    ebx
0x70BE80: push    esi
0x70BE81: push    edi
0x70BE82: mov     eax, ds:0B30AACh
0x70BE87: xor     eax, esp
0x70BE89: push    eax
0x70BE8A: lea     eax, [esp+20h+var_C]
0x70BE8E: mov     large fs:0, eax
0x70BE94: push    18h; Size
0x70BE96: call    FormHeapAlloc
0x70BE9B: mov     esi, eax
0x70BE9D: add     esp, 4
0x70BEA0: mov     [esp+20h+var_10], esi
0x70BEA4: test    esi, esi
0x70BEA6: mov     [esp+20h+var_4], 0
0x70BEAE: jz      short loc_70BEC6
0x70BEB0: mov     ecx, esi
0x70BEB2: call    sub_731EA0
0x70BEB7: mov     dword ptr [esi], offset ??_7NiDepthStencilBuffer@@6B@; const NiDepthStencilBuffer::`vftable'
0x70BEBD: mov     dword ptr [esi+14h], 0
0x70BEC4: jmp     short loc_70BEC8
0x70BEC6: xor     esi, esi
0x70BEC8: mov     eax, [esp+20h+arg_0]
0x70BECC: mov     ecx, [esp+20h+arg_4]
0x70BED0: mov     ebx, [esp+20h+arg_8]
0x70BED4: mov     [esi+8], eax
0x70BED7: mov     [esi+0Ch], ecx
0x70BEDA: mov     edi, [esi+10h]
0x70BEDD: cmp     edi, ebx
0x70BEDF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x70BEE7: jz      short loc_70BF1A
0x70BEE9: test    edi, edi
0x70BEEB: jz      short loc_70BF09
0x70BEED: lea     edx, [edi+4]
0x70BEF0: push    edx; lpAddend
0x70BEF1: call    dword ptr ds:0A2807Ch
0x70BEF7: test    eax, eax
0x70BEF9: jnz     short loc_70BF09
0x70BEFB: test    edi, edi
0x70BEFD: jz      short loc_70BF09
0x70BEFF: mov     eax, [edi]
0x70BF01: mov     edx, [eax]
0x70BF03: push    1
0x70BF05: mov     ecx, edi
0x70BF07: call    edx
0x70BF09: test    ebx, ebx
0x70BF0B: mov     [esi+10h], ebx
0x70BF0E: jz      short loc_70BF1A
0x70BF10: add     ebx, 4
0x70BF13: push    ebx; lpAddend
0x70BF14: call    dword ptr ds:0A28078h
0x70BF1A: mov     eax, esi
0x70BF1C: mov     ecx, dword ptr [esp+20h+var_C]
0x70BF20: mov     large fs:0, ecx
0x70BF27: pop     ecx
0x70BF28: pop     edi
0x70BF29: pop     esi
0x70BF2A: pop     ebx
0x70BF2B: add     esp, 10h
0x70BF2E: retn
