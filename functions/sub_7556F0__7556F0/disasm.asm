0x7556F0: push    esi
0x7556F1: push    edi
0x7556F2: push    18h; Size
0x7556F4: mov     edi, ecx
0x7556F6: call    FormHeapAlloc
0x7556FB: mov     esi, eax
0x7556FD: add     esp, 4
0x755700: test    esi, esi
0x755702: jz      short loc_755725
0x755704: mov     ecx, esi
0x755706: call    sub_752BF0
0x75570B: mov     eax, [esp+8+arg_0]
0x75570F: push    eax
0x755710: push    esi
0x755711: mov     ecx, edi
0x755713: mov     dword ptr [esi], offset ??_7NiPSysPositionModifier@@6B@; const NiPSysPositionModifier::`vftable'
0x755719: call    sub_752C40
0x75571E: pop     edi
0x75571F: mov     eax, esi
0x755721: pop     esi
0x755722: retn    4
0x755725: mov     eax, [esp+8+arg_0]
0x755729: push    eax
0x75572A: xor     esi, esi
0x75572C: push    esi
0x75572D: mov     ecx, edi
0x75572F: call    sub_752C40
0x755734: pop     edi
0x755735: mov     eax, esi
0x755737: pop     esi
0x755738: retn    4
