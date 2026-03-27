0x52B780: movsx   eax, [esp+arg_0]
0x52B785: cmp     eax, 0Fh; switch 16 cases
0x52B788: ja      short def_52B78A
0x52B78A: jmp     ds:jpt_52B78A[eax*4]; switch jump
0x52B791: mov     eax, ds:0B39338h; jumptable 0052B78A case 0
0x52B796: retn
0x52B797: mov     eax, ds:0B39340h; jumptable 0052B78A case 1
0x52B79C: retn
0x52B79D: mov     eax, ds:0B39348h; jumptable 0052B78A case 2
0x52B7A2: retn
0x52B7A3: mov     eax, ds:0B39350h; jumptable 0052B78A case 3
0x52B7A8: retn
0x52B7A9: mov     eax, ds:0B39358h; jumptable 0052B78A case 4
0x52B7AE: retn
0x52B7AF: mov     eax, ds:0B39360h; jumptable 0052B78A case 5
0x52B7B4: retn
0x52B7B5: mov     eax, ds:0B39368h; jumptable 0052B78A case 6
0x52B7BA: retn
0x52B7BB: mov     eax, ds:0B39370h; jumptable 0052B78A case 7
0x52B7C0: retn
0x52B7C1: mov     eax, ds:0B39378h; jumptable 0052B78A case 8
0x52B7C6: retn
0x52B7C7: mov     eax, ds:0B39380h; jumptable 0052B78A case 9
0x52B7CC: retn
0x52B7CD: mov     eax, ds:0B39388h; jumptable 0052B78A case 10
0x52B7D2: retn
0x52B7D3: mov     eax, ds:0B39390h; jumptable 0052B78A case 11
0x52B7D8: retn
0x52B7D9: mov     eax, ds:0B39398h; jumptable 0052B78A case 12
0x52B7DE: retn
0x52B7DF: mov     eax, ds:0B393A0h; jumptable 0052B78A case 13
0x52B7E4: retn
0x52B7E5: mov     eax, ds:0B393A8h; jumptable 0052B78A case 14
0x52B7EA: retn
0x52B7EB: mov     eax, ds:0B393B0h; jumptable 0052B78A case 15
0x52B7F0: retn
