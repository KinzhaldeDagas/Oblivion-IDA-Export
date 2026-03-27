0x6B0098: mov     eax, [esp+arg_24]; jumptable 006B0024 default case
0x6B009C: add     eax, 1; switch 7 cases
0x6B009F: cmp     eax, 6
0x6B00A2: ja      short def_6B00A4
0x6B00A4: jmp     ds:jpt_6B00A4[eax*4]; switch jump
0x6B00AB: push    1; jumptable 006B00A4 case -1
0x6B00AD: push    4102h
0x6B00B2: push    offset aWpnblockhand; "WPNBlockHand"
0x6B00B7: jmp     short loc_6B00EF
0x6B00B9: push    1; jumptable 006B00A4 cases 0,1
0x6B00BB: push    4102h
0x6B00C0: push    offset aWpnblockblade; "WPNBlockBlade"
0x6B00C5: jmp     short loc_6B00EF
0x6B00C7: push    1; jumptable 006B00A4 cases 2,3
0x6B00C9: push    4102h
0x6B00CE: push    offset aWpnblockblunt; "WPNBlockBlunt"
0x6B00D3: jmp     short loc_6B00EF
0x6B00D5: push    1; jumptable 006B00A4 case 4
0x6B00D7: push    4102h
0x6B00DC: push    offset aWpnblockstaff; "WPNBlockStaff"
0x6B00E1: jmp     short loc_6B00EF
0x6B00E3: push    1; jumptable 006B00A4 case 5
0x6B00E5: push    4102h
0x6B00EA: push    offset aWpnblockbow; "WPNBlockBow"
0x6B00EF: call    PlaySound???
0x6B00F4: mov     edi, eax
