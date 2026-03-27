0x730680: push    esi
0x730681: mov     esi, ecx
0x730683: mov     dword ptr [esi], offset ??_7NiColorExtraData@@6B@; const NiColorExtraData::`vftable'
0x730689: call    NiExtraData_dtor
0x73068E: test    byte ptr [esp+4+arg_0], 1
0x730693: jz      short loc_73069E
0x730695: push    esi
0x730696: call    FormHeapFree
0x73069B: add     esp, 4
0x73069E: mov     eax, esi
0x7306A0: pop     esi
0x7306A1: retn    4
