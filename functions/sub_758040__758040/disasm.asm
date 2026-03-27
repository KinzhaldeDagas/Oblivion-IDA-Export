0x758040: push    esi
0x758041: push    48h ; 'H'; Size
0x758043: call    FormHeapAlloc
0x758048: mov     esi, eax
0x75804A: add     esp, 4
0x75804D: test    esi, esi
0x75804F: jz      short loc_758062
0x758051: mov     ecx, esi
0x758053: call    sub_75F510
0x758058: mov     dword ptr [esi], offset ??_7NiPSysEmitterInitialRadiusCtlr@@6B@; const NiPSysEmitterInitialRadiusCtlr::`vftable'
0x75805E: mov     eax, esi
0x758060: pop     esi
0x758061: retn
0x758062: xor     eax, eax
0x758064: pop     esi
0x758065: retn
