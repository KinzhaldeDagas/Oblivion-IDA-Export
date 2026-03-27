0x5568E0: push    esi
0x5568E1: mov     esi, ecx
0x5568E3: call    NiExtraData_dtor
0x5568E8: test    byte ptr [esp+4+arg_0], 1
0x5568ED: jz      short loc_5568F8
0x5568EF: push    esi
0x5568F0: call    FormHeapFree
0x5568F5: add     esp, 4
0x5568F8: mov     eax, esi
0x5568FA: pop     esi
0x5568FB: retn    4
