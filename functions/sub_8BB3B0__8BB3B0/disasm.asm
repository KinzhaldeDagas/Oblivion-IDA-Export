0x8BB3B0: push    esi
0x8BB3B1: mov     esi, ecx
0x8BB3B3: mov     dword ptr [esi], offset off_A982A0
0x8BB3B9: call    sub_8BB320
0x8BB3BE: test    [esp+4+arg_0], 1
0x8BB3C3: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BB3C9: jz      short loc_8BB3DE
0x8BB3CB: movzx   edx, word ptr [esi+4]
0x8BB3CF: mov     ecx, ds:0BA7D98h
0x8BB3D5: mov     eax, [ecx]
0x8BB3D7: push    17h
0x8BB3D9: push    edx
0x8BB3DA: push    esi
0x8BB3DB: call    dword ptr [eax+14h]
0x8BB3DE: mov     eax, esi
0x8BB3E0: pop     esi
0x8BB3E1: retn    4
