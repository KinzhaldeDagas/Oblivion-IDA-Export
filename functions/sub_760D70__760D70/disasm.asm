0x760D70: mov     edx, [esp+a2]
0x760D74: xor     al, al
0x760D76: test    edx, edx
0x760D78: jz      short locret_760D98
0x760D7A: push    esi
0x760D7B: mov     esi, [edx+10h]
0x760D7E: cmp     [ecx+78h], esi
0x760D81: jz      short loc_760D85
0x760D83: mov     al, 1
0x760D85: mov     [ecx+78h], esi
0x760D88: add     ecx, 6Ch ; 'l'; this
0x760D8B: cmp     [ecx], edx
0x760D8D: pop     esi
0x760D8E: jz      short locret_760D98
0x760D90: push    edx; a2
0x760D91: call    NiSmartPointer_Set??
0x760D96: mov     al, 1
0x760D98: retn    4
