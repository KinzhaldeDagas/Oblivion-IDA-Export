0x4685B0: mov     edx, [esp+arg_0]
0x4685B4: movzx   edx, byte ptr [edx+4]
0x4685B8: add     edx, 0FFFFFFEDh; switch 22 cases
0x4685BB: xor     al, al
0x4685BD: cmp     edx, 15h
0x4685C0: ja      short TESAIForm_OffersServiceForItem___def_4685C9; jumptable 004685C9 default case, cases 23,24,28-32,35-37,39
0x4685C2: movzx   edx, ds:byte_468658[edx]
0x4685C9: jmp     ds:jpt_4685C9[edx*4]; switch jump
0x4685D0: mov     al, [ecx+8]; jumptable 004685C9 cases 33,34
0x4685D3: and     al, 1
0x4685D5: retn    4
0x4685D8: mov     al, [ecx+8]; jumptable 004685C9 case 20
0x4685DB: shr     al, 1
0x4685DD: and     al, 1
0x4685DF: retn    4
0x4685E2: mov     al, [ecx+8]; jumptable 004685C9 case 22
0x4685E5: shr     al, 2
0x4685E8: and     al, 1
0x4685EA: retn    4
0x4685ED: mov     al, [ecx+8]; jumptable 004685C9 case 21
0x4685F0: shr     al, 3
0x4685F3: and     al, 1
0x4685F5: retn    4
0x4685F8: mov     al, [ecx+8]; jumptable 004685C9 case 25
0x4685FB: shr     al, 4
0x4685FE: and     al, 1
0x468600: retn    4
0x468603: mov     al, [ecx+8]; jumptable 004685C9 case 26
0x468606: shr     al, 7
0x468609: retn    4
0x46860C: mov     eax, [ecx+8]; jumptable 004685C9 case 19
0x46860F: shr     eax, 8
0x468612: and     al, 1
0x468614: retn    4
0x468617: mov     eax, [ecx+8]; jumptable 004685C9 cases 27,38
0x46861A: shr     eax, 0Ah
0x46861D: and     al, 1
0x46861F: retn    4
0x468622: mov     eax, [ecx+8]; jumptable 004685C9 case 40
0x468625: shr     eax, 0Dh
0x468628: and     al, 1
0x46862A: retn    4; jumptable 004685C9 default case, cases 23,24,28-32,35-37,39
