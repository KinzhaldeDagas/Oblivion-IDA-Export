0x4B3010: push    esi
0x4B3011: mov     esi, ecx
0x4B3013: mov     ecx, [esi+18h]
0x4B3016: test    ecx, ecx
0x4B3018: mov     dword ptr [esi], offset ??_7TESObject@@6B@; const TESObject::`vftable'
0x4B301E: jz      short loc_4B3026
0x4B3020: push    esi
0x4B3021: call    TESObjectListHead_RemoveObject
0x4B3026: mov     ecx, esi; this
0x4B3028: pop     esi
0x4B3029: jmp     TESForm_destr
