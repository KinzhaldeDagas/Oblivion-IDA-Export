0x758120: push    esi
0x758121: push    48h ; 'H'; Size
0x758123: call    FormHeapAlloc
0x758128: mov     esi, eax
0x75812A: add     esp, 4
0x75812D: test    esi, esi
0x75812F: jz      short loc_758142
0x758131: mov     ecx, esi
0x758133: call    sub_75F510
0x758138: mov     dword ptr [esi], offset ??_7NiPSysEmitterDeclinationVarCtlr@@6B@; const NiPSysEmitterDeclinationVarCtlr::`vftable'
0x75813E: mov     eax, esi
0x758140: pop     esi
0x758141: retn
0x758142: xor     eax, eax
0x758144: pop     esi
0x758145: retn
