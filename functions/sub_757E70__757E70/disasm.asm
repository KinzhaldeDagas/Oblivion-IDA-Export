0x757E70: push    esi
0x757E71: push    edi
0x757E72: push    48h ; 'H'; Size
0x757E74: mov     edi, ecx
0x757E76: call    FormHeapAlloc
0x757E7B: mov     esi, eax
0x757E7D: add     esp, 4
0x757E80: test    esi, esi
0x757E82: jz      short loc_757EA5
0x757E84: mov     ecx, esi
0x757E86: call    sub_75F510
0x757E8B: mov     eax, [esp+8+arg_0]
0x757E8F: push    eax
0x757E90: push    esi
0x757E91: mov     ecx, edi
0x757E93: mov     dword ptr [esi], offset ??_7NiPSysEmitterPlanarAngleCtlr@@6B@; const NiPSysEmitterPlanarAngleCtlr::`vftable'
0x757E99: call    sub_75F5A0
0x757E9E: pop     edi
0x757E9F: mov     eax, esi
0x757EA1: pop     esi
0x757EA2: retn    4
0x757EA5: mov     eax, [esp+8+arg_0]
0x757EA9: push    eax
0x757EAA: xor     esi, esi
0x757EAC: push    esi
0x757EAD: mov     ecx, edi
0x757EAF: call    sub_75F5A0
0x757EB4: pop     edi
0x757EB5: mov     eax, esi
0x757EB7: pop     esi
0x757EB8: retn    4
