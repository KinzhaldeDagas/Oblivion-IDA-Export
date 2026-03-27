0x75D300: push    esi
0x75D301: push    48h ; 'H'; Size
0x75D303: call    FormHeapAlloc
0x75D308: mov     esi, eax
0x75D30A: add     esp, 4
0x75D30D: test    esi, esi
0x75D30F: jz      short loc_75D322
0x75D311: mov     ecx, esi
0x75D313: call    sub_75F510
0x75D318: mov     dword ptr [esi], offset ??_7NiPSysAirFieldInheritVelocityCtlr@@6B@; const NiPSysAirFieldInheritVelocityCtlr::`vftable'
0x75D31E: mov     eax, esi
0x75D320: pop     esi
0x75D321: retn
0x75D322: xor     eax, eax
0x75D324: pop     esi
0x75D325: retn
