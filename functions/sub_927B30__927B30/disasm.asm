0x927B30: push    esi
0x927B31: push    edi
0x927B32: mov     edi, [esp+8+arg_0]
0x927B36: test    edi, edi
0x927B38: mov     esi, ecx
0x927B3A: jz      short loc_927B5B
0x927B3C: push    edi
0x927B3D: lea     eax, [esp+0Ch+arg_0]
0x927B41: push    eax
0x927B42: lea     ecx, [esi-18h]
0x927B45: call    sub_927AD0
0x927B4A: lea     eax, [esi-18h]
0x927B4D: neg     eax
0x927B4F: sbb     eax, eax
0x927B51: and     eax, esi
0x927B53: push    eax
0x927B54: mov     ecx, edi
0x927B56: call    sub_8A6300
0x927B5B: pop     edi
0x927B5C: pop     esi
0x927B5D: retn    4
