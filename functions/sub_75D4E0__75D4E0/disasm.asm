0x75D4E0: push    esi
0x75D4E1: push    edi
0x75D4E2: push    48h ; 'H'; Size
0x75D4E4: mov     edi, ecx
0x75D4E6: call    FormHeapAlloc
0x75D4EB: mov     esi, eax
0x75D4ED: add     esp, 4
0x75D4F0: test    esi, esi
0x75D4F2: jz      short loc_75D515
0x75D4F4: mov     ecx, esi
0x75D4F6: call    sub_75F510
0x75D4FB: mov     eax, [esp+8+arg_0]
0x75D4FF: push    eax
0x75D500: push    esi
0x75D501: mov     ecx, edi
0x75D503: mov     dword ptr [esi], offset ??_7NiPSysAirFieldAirFrictionCtlr@@6B@; const NiPSysAirFieldAirFrictionCtlr::`vftable'
0x75D509: call    sub_75F5A0
0x75D50E: pop     edi
0x75D50F: mov     eax, esi
0x75D511: pop     esi
0x75D512: retn    4
0x75D515: mov     eax, [esp+8+arg_0]
0x75D519: push    eax
0x75D51A: xor     esi, esi
0x75D51C: push    esi
0x75D51D: mov     ecx, edi
0x75D51F: call    sub_75F5A0
0x75D524: pop     edi
0x75D525: mov     eax, esi
0x75D527: pop     esi
0x75D528: retn    4
