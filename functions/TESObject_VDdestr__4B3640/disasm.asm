0x4B3640: push    esi
0x4B3641: mov     esi, ecx
0x4B3643: mov     ecx, [esi+18h]
0x4B3646: test    ecx, ecx
0x4B3648: mov     dword ptr [esi], offset ??_7TESObject@@6B@; const TESObject::`vftable'
0x4B364E: jz      short loc_4B3656
0x4B3650: push    esi
0x4B3651: call    TESObjectListHead_RemoveObject
0x4B3656: mov     ecx, esi; this
0x4B3658: call    TESForm_destr
0x4B365D: test    [esp+4+arg_0], 1
0x4B3662: jz      short loc_4B366D
0x4B3664: push    esi
0x4B3665: call    FormHeapFree
0x4B366A: add     esp, 4
0x4B366D: mov     eax, esi
0x4B366F: pop     esi
0x4B3670: retn    4
