0x41DC80: push    0FFFFFFFFh
0x41DC82: push    offset ??1ExtraCellCanopyShadowMask@@UAE@XZ_SEH
0x41DC87: mov     eax, large fs:0
0x41DC8D: push    eax
0x41DC8E: push    ecx
0x41DC8F: push    ebx
0x41DC90: push    ebp
0x41DC91: push    esi
0x41DC92: push    edi
0x41DC93: mov     eax, ___security_cookie
0x41DC98: xor     eax, esp
0x41DC9A: push    eax
0x41DC9B: lea     eax, [esp+24h+var_C]
0x41DC9F: mov     large fs:0, eax
0x41DCA5: mov     esi, ecx
0x41DCA7: mov     [esp+24h+var_10], esi
0x41DCAB: xor     ebp, ebp
0x41DCAD: mov     byte ptr [esi+4], 0Fh
0x41DCB1: mov     [esi+8], ebp
0x41DCB4: mov     dword ptr [esi], offset ??_7ExtraCellCanopyShadowMask@@6B@; const ExtraCellCanopyShadowMask::`vftable'
0x41DCBA: mov     [esp+24h+var_4], ebp
0x41DCBE: mov     [esi+10h], ebp
0x41DCC1: mov     eax, [esp+24h+arg_0]
0x41DCC5: mov     ebx, [esp+24h+arg_4]
0x41DCC9: mov     [esi+0Ch], eax
0x41DCCC: mov     edi, [esi+10h]
0x41DCCF: cmp     edi, ebx
0x41DCD1: mov     byte ptr [esp+24h+var_4], 1
0x41DCD6: jz      short loc_41DD09
0x41DCD8: cmp     edi, ebp
0x41DCDA: jz      short loc_41DCF8
0x41DCDC: lea     ecx, [edi+4]
0x41DCDF: push    ecx; lpAddend
0x41DCE0: call    ds:InterlockedDecrement
0x41DCE6: test    eax, eax
0x41DCE8: jnz     short loc_41DCF8
0x41DCEA: cmp     edi, ebp
0x41DCEC: jz      short loc_41DCF8
0x41DCEE: mov     edx, [edi]
0x41DCF0: mov     eax, [edx]
0x41DCF2: push    1
0x41DCF4: mov     ecx, edi
0x41DCF6: call    eax
0x41DCF8: cmp     ebx, ebp
0x41DCFA: mov     [esi+10h], ebx
0x41DCFD: jz      short loc_41DD09
0x41DCFF: add     ebx, 4
0x41DD02: push    ebx; lpAddend
0x41DD03: call    ds:InterlockedIncrement
0x41DD09: mov     [esi+18h], ebp
0x41DD0C: mov     eax, esi
0x41DD0E: mov     ecx, dword ptr [esp+24h+var_C]
0x41DD12: mov     large fs:0, ecx
0x41DD19: pop     ecx
0x41DD1A: pop     edi
0x41DD1B: pop     esi
0x41DD1C: pop     ebp
0x41DD1D: pop     ebx
0x41DD1E: add     esp, 10h
0x41DD21: retn    8
