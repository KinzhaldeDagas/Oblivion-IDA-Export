0x5AC630: cmp     [esp+arg_0], 3
0x5AC635: push    edi
0x5AC636: mov     edi, ecx
0x5AC638: jnz     short loc_5AC697
0x5AC63A: mov     ecx, [esp+4+arg_4]
0x5AC63E: push    ebx
0x5AC63F: push    esi
0x5AC640: push    0FAAh
0x5AC645: call    Tile_GetFloat
0x5AC64A: call    Double_To_SInt32
0x5AC64F: push    eax
0x5AC650: push    0
0x5AC652: call    ActorValue_GetAVFromGroupOffset
0x5AC657: mov     ebx, [edi+4]
0x5AC65A: mov     esi, eax
0x5AC65C: push    esi
0x5AC65D: call    ActorValue_GetIcon
0x5AC662: add     esp, 0Ch
0x5AC665: push    eax
0x5AC666: push    0FB2h
0x5AC66B: mov     ecx, ebx
0x5AC66D: call    Tile_SetString
0x5AC672: mov     edi, [edi+4]
0x5AC675: push    esi
0x5AC676: call    ActorValue_GetDescription
0x5AC67B: add     esp, 4
0x5AC67E: push    eax
0x5AC67F: push    0FB3h
0x5AC684: mov     ecx, edi
0x5AC686: call    Tile_SetString
0x5AC68B: push    4; int
0x5AC68D: call    sub_57DE50
0x5AC692: add     esp, 4
0x5AC695: pop     esi
0x5AC696: pop     ebx
0x5AC697: pop     edi
0x5AC698: retn    8
