0x5359E0: test    byte ptr [esp+arg_0], 1
0x5359E5: push    esi
0x5359E6: mov     esi, ecx
0x5359E8: mov     dword ptr [esi], offset ??_7hkRayHitCollector@@6B@; const hkRayHitCollector::`vftable'
0x5359EE: jz      short loc_5359F9
0x5359F0: push    esi
0x5359F1: call    FormHeapFree
0x5359F6: add     esp, 4
0x5359F9: mov     eax, esi
0x5359FB: pop     esi
0x5359FC: retn    4
