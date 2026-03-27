0x6F70F0: push    esi
0x6F70F1: lea     esi, [ecx-4]
0x6F70F4: mov     ecx, [esi]
0x6F70F6: mov     edx, [ecx+4]
0x6F70F9: lea     eax, [esi+4]
0x6F70FC: mov     dword ptr [edx+eax-4], offset ??_7?$basic_ostream@DU?$char_traits@D@std@@@std@@6B?$_Iosb@H@std@@@; const std::ostream::`vftable'{for `std::_Iosb<int>'}
0x6F7104: push    eax; struct std::ios_base *
0x6F7105: mov     dword ptr [eax], offset ??_7ios_base@std@@6B@; const std::ios_base::`vftable'
0x6F710B: call    ?_Ios_base_dtor@ios_base@std@@CAXPAV12@@Z; std::ios_base::_Ios_base_dtor(std::ios_base *)
0x6F7110: add     esp, 4
0x6F7113: test    [esp+4+arg_0], 1
0x6F7118: jz      short loc_6F7123
0x6F711A: push    esi
0x6F711B: call    FormHeapFree
0x6F7120: add     esp, 4
0x6F7123: mov     eax, esi
0x6F7125: pop     esi
0x6F7126: retn    4
