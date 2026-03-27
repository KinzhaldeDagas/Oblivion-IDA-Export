0x4B4590: push    esi
0x4B4591: mov     esi, ecx
0x4B4593: mov     eax, [esi+8]
0x4B4596: shr     eax, 3
0x4B4599: test    al, 1
0x4B459B: jnz     short loc_4B45AF
0x4B459D: push    esi
0x4B459E: lea     ecx, [esi+54h]
0x4B45A1: call    TESScriptableForm_Link
0x4B45A6: push    1; a2
0x4B45A8: mov     ecx, esi; this
0x4B45AA: call    TESForm_SetIsLinked
0x4B45AF: pop     esi
0x4B45B0: retn
