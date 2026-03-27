0x521BA0: push    esi
0x521BA1: mov     esi, [esp+4+arg_0]
0x521BA5: push    esi
0x521BA6: call    TESActorBase_GetModifiedSize
0x521BAB: test    esi, 200h
0x521BB1: movzx   eax, ax
0x521BB4: jz      short loc_521BB9
0x521BB6: add     eax, 15h
0x521BB9: test    esi, 400h
0x521BBF: pop     esi
0x521BC0: jz      short locret_521BC5
0x521BC2: add     eax, 4
0x521BC5: retn    4
