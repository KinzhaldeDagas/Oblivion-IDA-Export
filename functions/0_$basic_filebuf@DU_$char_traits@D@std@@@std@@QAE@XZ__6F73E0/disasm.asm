0x6F73E0: push    esi
0x6F73E1: mov     esi, ecx
0x6F73E3: call    ??0?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE@XZ; std::streambuf::streambuf(void)
0x6F73E8: mov     ecx, esi
0x6F73EA: mov     dword ptr [esi], offset ??_7?$basic_filebuf@DU?$char_traits@D@std@@@std@@6B@; const std::filebuf::`vftable'
0x6F73F0: mov     byte ptr [esi+48h], 0
0x6F73F4: mov     byte ptr [esi+41h], 0
0x6F73F8: call    sub_6F6F40
0x6F73FD: mov     eax, [esp+4+arg_0]
0x6F7401: test    eax, eax
0x6F7403: jz      short loc_6F741D
0x6F7405: lea     ecx, [eax+8]
0x6F7408: mov     [esi+10h], ecx
0x6F740B: mov     [esi+14h], ecx
0x6F740E: lea     ecx, [eax+4]
0x6F7411: mov     [esi+20h], eax
0x6F7414: mov     [esi+24h], eax
0x6F7417: mov     [esi+30h], ecx
0x6F741A: mov     [esi+34h], ecx
0x6F741D: mov     [esi+4Ch], eax
0x6F7420: mov     eax, ds:0B3F16Ch
0x6F7425: mov     [esi+44h], eax
0x6F7428: mov     dword ptr [esi+3Ch], 0
0x6F742F: mov     eax, esi
0x6F7431: pop     esi
0x6F7432: retn    4
