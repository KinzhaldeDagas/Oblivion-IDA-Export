0x6EAD00: push    ebx
0x6EAD01: mov     ebx, [esp+4+arg_0]
0x6EAD05: push    esi
0x6EAD06: push    edi
0x6EAD07: push    ebx
0x6EAD08: mov     edi, ecx
0x6EAD0A: call    sub_6CD720
0x6EAD0F: lea     esi, [edi+30h]
0x6EAD12: push    ebx
0x6EAD13: mov     ecx, esi
0x6EAD15: call    sub_709430
0x6EAD1A: fld     dword ptr [esi]
0x6EAD1C: fld     dword ptr ds:0B24FC8h
0x6EAD22: fucompp
0x6EAD24: fnstsw  ax
0x6EAD26: test    ah, 44h
0x6EAD29: jp      short loc_6EAD4F
0x6EAD2B: fld     dword ptr [esi+4]
0x6EAD2E: fld     dword ptr ds:0B24FCCh
0x6EAD34: fucompp
0x6EAD36: fnstsw  ax
0x6EAD38: test    ah, 44h
0x6EAD3B: jp      short loc_6EAD4F
0x6EAD3D: fld     dword ptr [esi+8]
0x6EAD40: fld     dword ptr ds:0B24FD0h
0x6EAD46: fucompp
0x6EAD48: fnstsw  ax
0x6EAD4A: test    ah, 44h
0x6EAD4D: jnp     short loc_6EAD53
0x6EAD4F: mov     byte ptr [edi+3Ch], 1
0x6EAD53: pop     edi
0x6EAD54: pop     esi
0x6EAD55: pop     ebx
0x6EAD56: retn    4
