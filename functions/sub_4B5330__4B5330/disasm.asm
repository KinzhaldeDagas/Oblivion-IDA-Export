0x4B5330: push    ebx
0x4B5331: mov     ebx, dword ptr [esp+4+a2]
0x4B5335: push    esi
0x4B5336: push    ebx; a2
0x4B5337: mov     esi, ecx
0x4B5339: call    TESForm_SaveModifiedForm
0x4B533E: push    ebx
0x4B533F: lea     ecx, [esi+70h]
0x4B5342: call    TESValueForm_SaveModified
0x4B5347: test    bl, 4
0x4B534A: jz      short loc_4B5360
0x4B534C: mov     ecx, ds:0B33B00h
0x4B5352: push    1; Size
0x4B5354: add     esi, 89h ; '‰'
0x4B535A: push    esi; Src
0x4B535B: call    SaveLoad_SaveData
0x4B5360: pop     esi
0x4B5361: pop     ebx
0x4B5362: retn    4
