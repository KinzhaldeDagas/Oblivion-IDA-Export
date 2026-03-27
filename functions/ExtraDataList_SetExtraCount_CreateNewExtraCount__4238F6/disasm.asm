0x4238F6: push    10h; Size
0x4238F8: call    FormHeapAlloc
0x4238FD: add     esp, 4
0x423900: mov     [esp+arg_18], eax
0x423904: test    eax, eax
0x423906: mov     [esp+arg_10], 0
0x42390E: jz      short loc_42391A
0x423910: push    esi
0x423911: mov     ecx, eax
0x423913: call    ExtraCount_constr
0x423918: jmp     short ExtraDataList_SetExtraCount___AddExtraToList
0x42391A: xor     eax, eax
