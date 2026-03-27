0x7B4890: cmp     dword ptr ds:0B42EACh, 4
0x7B4897: push    esi
0x7B4898: mov     si, [esp+4+arg_0]
0x7B489D: jz      short loc_7B48B9
0x7B489F: cmp     si, 4
0x7B48A3: jnz     short loc_7B48AF
0x7B48A5: push    1
0x7B48A7: call    sub_7AB1D0
0x7B48AC: add     esp, 4
0x7B48AF: movzx   eax, si
0x7B48B2: mov     ds:0B42EACh, eax
0x7B48B7: pop     esi
0x7B48B8: retn
0x7B48B9: cmp     si, 4
0x7B48BD: jz      short loc_7B48D4
0x7B48BF: push    0
0x7B48C1: call    sub_7AB1D0
0x7B48C6: movzx   ecx, si
0x7B48C9: add     esp, 4
0x7B48CC: mov     ds:0B42EACh, ecx
0x7B48D2: pop     esi
0x7B48D3: retn
0x7B48D4: movzx   edx, si
0x7B48D7: mov     ds:0B42EACh, edx
0x7B48DD: pop     esi
0x7B48DE: retn
