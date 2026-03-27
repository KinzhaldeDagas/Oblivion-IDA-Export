0x6F6EB0: lea     eax, [ecx+4]
0x6F6EB3: mov     ecx, [eax-4]
0x6F6EB6: mov     edx, [ecx+4]
0x6F6EB9: mov     dword ptr [edx+eax-4], offset ??_7?$basic_ostream@DU?$char_traits@D@std@@@std@@6B?$_Iosb@H@std@@@; const std::ostream::`vftable'{for `std::_Iosb<int>'}
0x6F6EC1: push    eax; struct std::ios_base *
0x6F6EC2: mov     dword ptr [eax], offset ??_7ios_base@std@@6B@; const std::ios_base::`vftable'
0x6F6EC8: call    ?_Ios_base_dtor@ios_base@std@@CAXPAV12@@Z; std::ios_base::_Ios_base_dtor(std::ios_base *)
0x6F6ECD: pop     ecx
0x6F6ECE: retn
