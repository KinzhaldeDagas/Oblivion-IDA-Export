0x52B440: push    esi
0x52B441: mov     esi, [ecx+0Ch]
0x52B444: test    esi, esi
0x52B446: jz      short loc_52B465
0x52B448: mov     eax, [esi+8]
0x52B44B: shr     eax, 5
0x52B44E: test    al, 1
0x52B450: jz      short loc_52B465
0x52B452: cmp     [esp+4+arg_0], 0
0x52B457: jz      short loc_52B465
0x52B459: lea     ecx, [esi+44h]
0x52B45C: call    ExtraDataList_GetReferencePointer
0x52B461: test    eax, eax
0x52B463: jnz     short loc_52B467
0x52B465: mov     eax, esi
0x52B467: pop     esi
0x52B468: retn    4
