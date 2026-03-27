0x8E9FE0: test    [esp+arg_0], 1
0x8E9FE5: push    esi
0x8E9FE6: mov     esi, ecx
0x8E9FE8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E9FEE: jz      short loc_8EA003
0x8E9FF0: movzx   edx, word ptr [esi+4]
0x8E9FF4: mov     ecx, ds:0BA7D98h
0x8E9FFA: mov     eax, [ecx]
0x8E9FFC: push    28h ; '('
0x8E9FFE: push    edx
0x8E9FFF: push    esi
0x8EA000: call    dword ptr [eax+14h]
0x8EA003: mov     eax, esi
0x8EA005: pop     esi
0x8EA006: retn    4
