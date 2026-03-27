0x69FB80: push    esi
0x69FB81: mov     esi, ecx
0x69FB83: call    MobileObject_GetCharProxy
0x69FB88: mov     ecx, eax
0x69FB8A: test    ecx, ecx
0x69FB8C: jz      short loc_69FBBD
0x69FB8E: cmp     [esp+4+arg_0], 0
0x69FB93: jz      short loc_69FBB1
0x69FB95: mov     eax, [ecx]
0x69FB97: mov     edx, [eax+88h]
0x69FB9D: push    0
0x69FB9F: call    edx
0x69FBA1: mov     eax, [esi]
0x69FBA3: mov     edx, [eax+214h]
0x69FBA9: mov     ecx, esi
0x69FBAB: call    edx
0x69FBAD: pop     esi
0x69FBAE: retn    4
0x69FBB1: call    sub_893950
0x69FBB6: mov     ecx, esi
0x69FBB8: call    sub_69F6D0
0x69FBBD: pop     esi
0x69FBBE: retn    4
