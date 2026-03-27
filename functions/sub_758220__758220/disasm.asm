0x758220: push    esi
0x758221: push    48h ; 'H'; Size
0x758223: call    FormHeapAlloc
0x758228: mov     esi, eax
0x75822A: add     esp, 4
0x75822D: test    esi, esi
0x75822F: jz      short loc_758242
0x758231: mov     ecx, esi
0x758233: call    sub_75F510
0x758238: mov     dword ptr [esi], offset ??_7NiPSysEmitterDeclinationCtlr@@6B@; const NiPSysEmitterDeclinationCtlr::`vftable'
0x75823E: mov     eax, esi
0x758240: pop     esi
0x758241: retn
0x758242: xor     eax, eax
0x758244: pop     esi
0x758245: retn
