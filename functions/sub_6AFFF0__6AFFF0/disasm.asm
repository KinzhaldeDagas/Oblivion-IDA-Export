0x6AFFF0: mov     ecx, ds:0B3C0F0h
0x6AFFF6: sub     esp, 18h
0x6AFFF9: push    esi
0x6AFFFA: push    edi
0x6AFFFB: xor     esi, esi
0x6AFFFD: xor     edi, edi
0x6AFFFF: test    ecx, ecx
0x6B0001: jz      loc_6B0305
0x6B0007: mov     eax, ds:0B3C20Ch
0x6B000C: cmp     eax, ds:0B16304h
0x6B0012: jnb     loc_6B0305
0x6B0018: mov     eax, [esp+20h+arg_0]
0x6B001C: add     eax, 1; switch 7 cases
0x6B001F: cmp     eax, 6
0x6B0022: ja      short def_6B0024
0x6B0024: jmp     ds:jpt_6B0024[eax*4]; switch jump
0x6B002B: push    1; jumptable 006B0024 case -1
0x6B002D: push    4102h
0x6B0032: push    offset aWpnblockhand; "WPNBlockHand"
0x6B0037: jmp     short loc_6B008B
0x6B0039: cmp     [esp+20h+arg_20], 0; jumptable 006B0024 cases 0,1
0x6B003E: push    1
0x6B0040: push    4102h
0x6B0045: jz      short loc_6B004E
0x6B0047: push    offset aWpnhitbladeenc; "WPNHitBladeEnchanted"
0x6B004C: jmp     short loc_6B008B
0x6B004E: push    offset aWpnblockblade; "WPNBlockBlade"
0x6B0053: jmp     short loc_6B008B
0x6B0055: cmp     [esp+20h+arg_20], 0; jumptable 006B0024 cases 2,3
0x6B005A: push    1
0x6B005C: push    4102h
0x6B0061: jz      short loc_6B006A
0x6B0063: push    offset aWpnhitbluntenc; "WPNHitBluntEnchanted"
0x6B0068: jmp     short loc_6B008B
0x6B006A: push    offset aWpnblockblunt; "WPNBlockBlunt"
0x6B006F: jmp     short loc_6B008B
0x6B0071: push    1; jumptable 006B0024 case 4
0x6B0073: push    4102h
0x6B0078: push    offset aWpnblockstaff; "WPNBlockStaff"
0x6B007D: jmp     short loc_6B008B
0x6B007F: push    1; jumptable 006B0024 case 5
0x6B0081: push    4102h
0x6B0086: push    offset aWpnblockbow; "WPNBlockBow"
0x6B008B: call    PlaySound???
0x6B0090: mov     ecx, ds:0B3C0F0h
0x6B0096: mov     esi, eax
