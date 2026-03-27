0x614BE0: push    esi
0x614BE1: mov     esi, [esp+4+arg_0]
0x614BE5: test    esi, esi
0x614BE7: push    edi
0x614BE8: mov     edi, 2
0x614BED: jz      short loc_614C27
0x614BEF: nop
0x614BF0: cmp     dword ptr [esi+4], 0
0x614BF4: mov     eax, [esi]
0x614BF6: jnz     short loc_614BFE
0x614BF8: test    eax, eax
0x614BFA: jz      short loc_614C27
0x614BFC: jmp     short loc_614C02
0x614BFE: test    eax, eax
0x614C00: jz      short loc_614C20
0x614C02: mov     eax, [eax+4]
0x614C05: test    eax, eax
0x614C07: mov     ecx, 1
0x614C0C: jz      short loc_614C1C
0x614C0E: mov     ecx, eax
0x614C10: call    sub_485660
0x614C15: add     ax, 1
0x614C19: movzx   ecx, ax
0x614C1C: lea     edi, [edi+ecx+4]
0x614C20: mov     esi, [esi+4]
0x614C23: test    esi, esi
0x614C25: jnz     short loc_614BF0
0x614C27: mov     ax, di
0x614C2A: pop     edi
0x614C2B: pop     esi
0x614C2C: retn    4
