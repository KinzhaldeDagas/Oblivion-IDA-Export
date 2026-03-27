0x55AFC0: push    esi
0x55AFC1: mov     esi, ecx
0x55AFC3: mov     eax, [esi+0Ch]
0x55AFC6: test    eax, eax
0x55AFC8: mov     dword ptr [esi], offset ??_7BSFaceGenBaseMorphExtraData@@6B@; const BSFaceGenBaseMorphExtraData::`vftable'
0x55AFCE: jz      short loc_55AFD9
0x55AFD0: push    eax
0x55AFD1: call    FormHeapFree
0x55AFD6: add     esp, 4
0x55AFD9: mov     ecx, esi
0x55AFDB: call    NiExtraData_dtor
0x55AFE0: test    [esp+4+arg_0], 1
0x55AFE5: jz      short loc_55AFF0
0x55AFE7: push    esi
0x55AFE8: call    FormHeapFree
0x55AFED: add     esp, 4
0x55AFF0: mov     eax, esi
0x55AFF2: pop     esi
0x55AFF3: retn    4
