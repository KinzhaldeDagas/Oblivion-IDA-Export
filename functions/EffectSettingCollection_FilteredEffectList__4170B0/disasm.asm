0x4170B0: push    ebp
0x4170B1: push    esi
0x4170B2: push    8; Size
0x4170B4: call    FormHeapAlloc
0x4170B9: add     esp, 4
0x4170BC: test    eax, eax
0x4170BE: jz      short loc_4170D1
0x4170C0: mov     dword ptr [eax], 0
0x4170C6: mov     dword ptr [eax+4], 0
0x4170CD: mov     ebp, eax
0x4170CF: jmp     short EffectSettingCollection_FilteredEffectList___FindFirstNonEmptyBucket
0x4170D1: xor     ebp, ebp
