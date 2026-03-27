0x76FB30: push    esi
0x76FB31: mov     esi, [esp+4+arg_8]
0x76FB35: xor     edx, edx
0x76FB37: cmp     esi, 0Eh; switch 15 cases
0x76FB3A: ja      def_76FB40
0x76FB40: jmp     ds:jpt_76FB40[esi*4]; switch jump
0x76FB47: xor     eax, eax; jumptable 0076FB40 case 0
0x76FB49: jmp     loc_76FBCE
0x76FB4E: mov     eax, 1; jumptable 0076FB40 case 1
0x76FB53: jmp     short loc_76FBCE
0x76FB55: mov     eax, 2; jumptable 0076FB40 case 2
0x76FB5A: jmp     short loc_76FBCE
0x76FB5C: mov     eax, 3; jumptable 0076FB40 case 3
0x76FB61: jmp     short loc_76FBCE
0x76FB63: mov     eax, 0Ah; jumptable 0076FB40 case 4
0x76FB68: jmp     short loc_76FBCE
0x76FB6A: mov     eax, 5; jumptable 0076FB40 case 5
0x76FB6F: jmp     short loc_76FBCE
0x76FB71: mov     eax, 5; jumptable 0076FB40 case 6
0x76FB76: mov     edx, 1
0x76FB7B: jmp     short loc_76FBCE
0x76FB7D: mov     eax, 5; jumptable 0076FB40 case 7
0x76FB82: mov     edx, 2
0x76FB87: jmp     short loc_76FBCE
0x76FB89: mov     eax, 5; jumptable 0076FB40 case 8
0x76FB8E: mov     edx, 3
0x76FB93: jmp     short loc_76FBCE
0x76FB95: mov     eax, 5; jumptable 0076FB40 case 9
0x76FB9A: mov     edx, 4
0x76FB9F: jmp     short loc_76FBCE
0x76FBA1: mov     eax, 5; jumptable 0076FB40 case 10
0x76FBA6: mov     edx, eax
0x76FBA8: jmp     short loc_76FBCE
0x76FBAA: mov     eax, 5; jumptable 0076FB40 case 11
0x76FBAF: mov     edx, 6
0x76FBB4: jmp     short loc_76FBCE
0x76FBB6: mov     eax, 5; jumptable 0076FB40 case 12
0x76FBBB: mov     edx, 7
0x76FBC0: jmp     short loc_76FBCE
0x76FBC2: mov     eax, 6; jumptable 0076FB40 case 13
0x76FBC7: jmp     short loc_76FBCE
0x76FBC9: mov     eax, 7; jumptable 0076FB40 case 14
0x76FBCE: push    edi
0x76FBCF: mov     edi, [ecx]
0x76FBD1: push    0
0x76FBD3: push    edx
0x76FBD4: mov     edx, [esp+10h+arg_4]
0x76FBD8: push    eax
0x76FBD9: mov     eax, [esp+14h+arg_C]
0x76FBDD: push    eax
0x76FBDE: mov     eax, [esp+18h+arg_0]
0x76FBE2: push    esi
0x76FBE3: push    edx
0x76FBE4: mov     edx, [esp+20h+arg_10]
0x76FBE8: push    eax
0x76FBE9: mov     eax, [edi+4Ch]
0x76FBEC: push    edx
0x76FBED: call    eax
0x76FBEF: pop     edi
0x76FBF0: pop     esi
0x76FBF1: retn    14h
