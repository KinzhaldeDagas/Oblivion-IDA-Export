0x403CF0: mov     eax, [esp+arg_0]
0x403CF4: cmp     eax, 0FFh
0x403CF9: ja      loc_403DB3
0x403CFF: mov     ecx, dword_B02C44
0x403D05: add     ecx, 0FFFFFFFFh; switch 4 cases
0x403D08: cmp     ecx, 3
0x403D0B: ja      ScancodeToChar___def_403D11; jumptable 00403D11 default case
0x403D11: jmp     ds:jpt_403D11[ecx*4]; switch jump
0x403D18: cmp     [esp+arg_4], 0; jumptable 00403D11 case 3
0x403D1D: jz      short loc_403D2B
0x403D1F: mov     al, byte_B02898[eax]
0x403D25: movzx   eax, al
0x403D28: retn    8
0x403D2B: mov     al, byte_B02798[eax]
0x403D31: movzx   eax, al
0x403D34: retn    8
0x403D37: cmp     [esp+arg_4], 0; jumptable 00403D11 case 4
0x403D3C: jz      short loc_403D4A
0x403D3E: mov     al, byte_B02A98[eax]
0x403D44: movzx   eax, al
0x403D47: retn    8
0x403D4A: mov     al, byte_B02998[eax]
0x403D50: movzx   eax, al
0x403D53: retn    8
0x403D56: cmp     [esp+arg_4], 0; jumptable 00403D11 case 2
0x403D5B: jz      short loc_403D69
0x403D5D: mov     al, byte_B02698[eax]
0x403D63: movzx   eax, al
0x403D66: retn    8
0x403D69: mov     al, byte_B02598[eax]
0x403D6F: movzx   eax, al
0x403D72: retn    8
0x403D75: cmp     [esp+arg_4], 0; jumptable 00403D11 case 1
0x403D7A: jz      short loc_403D88
0x403D7C: mov     al, byte_B02498[eax]
0x403D82: movzx   eax, al
0x403D85: retn    8
0x403D88: mov     al, byte_B02398[eax]
0x403D8E: movzx   eax, al
0x403D91: retn    8
0x403D94: cmp     [esp+arg_4], 0; jumptable 00403D11 default case
0x403D99: jz      short loc_403DA7
0x403D9B: mov     al, byte_B02298[eax]
0x403DA1: movzx   eax, al
0x403DA4: retn    8
0x403DA7: mov     al, byte_B02198[eax]
0x403DAD: movzx   eax, al
0x403DB0: retn    8
0x403DB3: or      eax, 0FFFFFFFFh
0x403DB6: retn    8
