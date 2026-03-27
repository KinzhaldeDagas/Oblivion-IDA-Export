0x5EE3A7: push    esi
0x5EE3A8: mov     [esp+4+arg_0], ecx
0x5EE3AC: call    BaseExtraList_HasGhost
0x5EE3B1: test    al, al
0x5EE3B3: mov     esi, [esp+4+arg_C]
0x5EE3B7: jz      short Actor_MagicTarget_AttemptAddEffect___AttemptAdd
0x5EE3B9: mov     eax, [esi]
0x5EE3BB: mov     edx, [eax+18h]
0x5EE3BE: mov     ecx, esi
0x5EE3C0: call    edx
0x5EE3C2: cmp     eax, 4
0x5EE3C5: jz      short Actor_MagicTarget_AttemptAddEffect___AttemptAdd
0x5EE3C7: pop     esi
0x5EE3C8: xor     al, al
0x5EE3CA: pop     ebp
0x5EE3CB: pop     ecx
0x5EE3CC: retn    10h
