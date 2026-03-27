0x757A90: push    esi
0x757A91: push    edi
0x757A92: push    48h ; 'H'; Size
0x757A94: mov     edi, ecx
0x757A96: call    FormHeapAlloc
0x757A9B: mov     esi, eax
0x757A9D: add     esp, 4
0x757AA0: test    esi, esi
0x757AA2: jz      short loc_757AC5
0x757AA4: mov     ecx, esi
0x757AA6: call    sub_75F510
0x757AAB: mov     eax, [esp+8+arg_0]
0x757AAF: push    eax
0x757AB0: push    esi
0x757AB1: mov     ecx, edi
0x757AB3: mov     dword ptr [esi], offset ??_7NiPSysFieldMagnitudeCtlr@@6B@; const NiPSysFieldMagnitudeCtlr::`vftable'
0x757AB9: call    sub_75F5A0
0x757ABE: pop     edi
0x757ABF: mov     eax, esi
0x757AC1: pop     esi
0x757AC2: retn    4
0x757AC5: mov     eax, [esp+8+arg_0]
0x757AC9: push    eax
0x757ACA: xor     esi, esi
0x757ACC: push    esi
0x757ACD: mov     ecx, edi
0x757ACF: call    sub_75F5A0
0x757AD4: pop     edi
0x757AD5: mov     eax, esi
0x757AD7: pop     esi
0x757AD8: retn    4
