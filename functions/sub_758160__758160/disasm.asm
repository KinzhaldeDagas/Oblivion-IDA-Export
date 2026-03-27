0x758160: push    esi
0x758161: push    edi
0x758162: push    48h ; 'H'; Size
0x758164: mov     edi, ecx
0x758166: call    FormHeapAlloc
0x75816B: mov     esi, eax
0x75816D: add     esp, 4
0x758170: test    esi, esi
0x758172: jz      short loc_758195
0x758174: mov     ecx, esi
0x758176: call    sub_75F510
0x75817B: mov     eax, [esp+8+arg_0]
0x75817F: push    eax
0x758180: push    esi
0x758181: mov     ecx, edi
0x758183: mov     dword ptr [esi], offset ??_7NiPSysEmitterDeclinationVarCtlr@@6B@; const NiPSysEmitterDeclinationVarCtlr::`vftable'
0x758189: call    sub_75F5A0
0x75818E: pop     edi
0x75818F: mov     eax, esi
0x758191: pop     esi
0x758192: retn    4
0x758195: mov     eax, [esp+8+arg_0]
0x758199: push    eax
0x75819A: xor     esi, esi
0x75819C: push    esi
0x75819D: mov     ecx, edi
0x75819F: call    sub_75F5A0
0x7581A4: pop     edi
0x7581A5: mov     eax, esi
0x7581A7: pop     esi
0x7581A8: retn    4
