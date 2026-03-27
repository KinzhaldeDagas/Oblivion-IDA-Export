0x8CAB80: push    esi
0x8CAB81: mov     esi, ecx
0x8CAB83: call    sub_8CA770
0x8CAB88: test    [esp+4+arg_0], 1
0x8CAB8D: jz      short loc_8CABA2
0x8CAB8F: movzx   edx, word ptr [esi+4]
0x8CAB93: mov     ecx, ds:0BA7D98h
0x8CAB99: mov     eax, [ecx]
0x8CAB9B: push    32h ; '2'
0x8CAB9D: push    edx
0x8CAB9E: push    esi
0x8CAB9F: call    dword ptr [eax+14h]
0x8CABA2: mov     eax, esi
0x8CABA4: pop     esi
0x8CABA5: retn    4
