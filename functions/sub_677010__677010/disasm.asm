0x677010: push    ecx
0x677011: push    ebx
0x677012: push    esi
0x677013: push    edi
0x677014: mov     [esp+10h+var_4], 4
0x67701C: lea     edi, [ecx+28h]
0x67701F: mov     ebx, 6
0x677024: mov     esi, [edi]
0x677026: add     [esp+10h+var_4], 2
0x67702B: test    esi, esi
0x67702D: jz      short loc_67704E
0x67702F: nop
0x677030: cmp     dword ptr [esi+4], 0
0x677034: jnz     short loc_67703B
0x677036: cmp     dword ptr [esi], 0
0x677039: jz      short loc_67704E
0x67703B: mov     ecx, [esi]
0x67703D: call    sub_6061F0
0x677042: mov     esi, [esi+4]
0x677045: add     word ptr [esp+10h+var_4], ax
0x67704A: test    esi, esi
0x67704C: jnz     short loc_677030
0x67704E: add     edi, 4
0x677051: sub     ebx, 1
0x677054: jnz     short loc_677024
0x677056: mov     ax, word ptr [esp+10h+var_4]
0x67705B: pop     edi
0x67705C: pop     esi
0x67705D: pop     ebx
0x67705E: pop     ecx
0x67705F: retn
