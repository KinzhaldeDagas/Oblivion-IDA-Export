0x625BC0: mov     edx, [esp+arg_0]
0x625BC4: lea     eax, [edx-4]; switch 125 cases
0x625BC7: cmp     eax, 7Ch
0x625BCA: ja      short def_625BD3; jumptable 00625BD3 default case, cases 5-7,9-15,17-31,33-63,65-127
0x625BCC: movzx   eax, ds:byte_625C50[eax]
0x625BD3: jmp     ds:jpt_625BD3[eax*4]; switch jump
0x625BDA: cmp     dword ptr ds:0B35740h, 0; jumptable 00625BD3 case 32
0x625BE1: setnz   al
0x625BE4: retn    4
0x625BE7: cmp     dword ptr ds:0B35748h, 0; jumptable 00625BD3 case 8
0x625BEE: setnz   al
0x625BF1: retn    4
0x625BF4: cmp     dword ptr ds:0B35750h, 0; jumptable 00625BD3 case 16
0x625BFB: setnz   al
0x625BFE: retn    4
0x625C01: cmp     dword ptr ds:0B35758h, 0; jumptable 00625BD3 case 64
0x625C08: setnz   al
0x625C0B: retn    4
0x625C0E: cmp     dword ptr ds:0B35760h, 0; jumptable 00625BD3 case 128
0x625C15: setnz   al
0x625C18: retn    4
0x625C1B: cmp     dword ptr ds:0B35768h, 0; jumptable 00625BD3 case 4
0x625C22: setnz   al
0x625C25: retn    4
0x625C28: mov     [esp+arg_0], edx; jumptable 00625BD3 default case, cases 5-7,9-15,17-31,33-63,65-127
0x625C2C: jmp     sub_4A98A0
