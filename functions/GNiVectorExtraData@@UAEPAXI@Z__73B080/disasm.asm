0x73B080: push    esi
0x73B081: mov     esi, ecx
0x73B083: mov     dword ptr [esi], offset ??_7NiVectorExtraData@@6B@; const NiVectorExtraData::`vftable'
0x73B089: call    NiExtraData_dtor
0x73B08E: test    byte ptr [esp+4+arg_0], 1
0x73B093: jz      short loc_73B09E
0x73B095: push    esi
0x73B096: call    FormHeapFree
0x73B09B: add     esp, 4
0x73B09E: mov     eax, esi
0x73B0A0: pop     esi
0x73B0A1: retn    4
