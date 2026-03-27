0x7886C0: mov     ax, [esp+arg_0]
0x7886C5: cmp     ax, 0FFFFh
0x7886C9: push    edi
0x7886CA: mov     edi, ecx
0x7886CC: jle     short loc_78870C
0x7886CE: mov     ecx, [edi+4Ch]
0x7886D1: test    ecx, ecx
0x7886D3: push    esi
0x7886D4: movsx   esi, ax
0x7886D7: jz      short loc_7886E5
0x7886D9: mov     eax, [edi+50h]
0x7886DC: sub     eax, ecx
0x7886DE: sar     eax, 4
0x7886E1: cmp     esi, eax
0x7886E3: jb      short loc_7886EA
0x7886E5: call    __invalid_parameter_noinfo
0x7886EA: shl     esi, 4
0x7886ED: add     esi, [edi+4Ch]
0x7886F0: mov     eax, [esi+4]
0x7886F3: test    eax, eax
0x7886F5: jnz     short loc_7886FC
0x7886F7: pop     esi
0x7886F8: pop     edi
0x7886F9: retn    4
0x7886FC: mov     ecx, [esi+8]
0x7886FF: sub     ecx, eax
0x788701: sar     ecx, 2
0x788704: pop     esi
0x788705: movzx   eax, cx
0x788708: pop     edi
0x788709: retn    4
0x78870C: xor     eax, eax
0x78870E: pop     edi
0x78870F: retn    4
