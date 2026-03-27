0x41FA93: push    10h; Size
0x41FA95: call    FormHeapAlloc
0x41FA9A: add     esp, 4
0x41FA9D: mov     [esp+arg_18], eax
0x41FAA1: test    eax, eax
0x41FAA3: mov     [esp+arg_10], 0
0x41FAAB: jz      short loc_41FAB7
0x41FAAD: push    esi
0x41FAAE: mov     ecx, eax
0x41FAB0: call    ExtraReferencePointer_constr
0x41FAB5: jmp     short loc_41FAB9
0x41FAB7: xor     eax, eax
0x41FAB9: push    eax; BSExtraData *
0x41FABA: mov     ecx, edi; ExtraDataList *
0x41FABC: mov     [esp+4+arg_10], 0FFFFFFFFh
0x41FAC4: call    BaseExtraList_AddExtra
0x41FAC9: mov     ecx, [esp+arg_8]
0x41FACD: mov     large fs:0, ecx
0x41FAD4: pop     ecx
0x41FAD5: pop     edi
0x41FAD6: pop     esi
0x41FAD7: add     esp, 0Ch
0x41FADA: retn    4
