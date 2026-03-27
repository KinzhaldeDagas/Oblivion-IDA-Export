0x41622E: test    ebx, ebx
0x416230: jz      short loc_416241
0x416232: lea     eax, [ebx+30h]
0x416235: push    edi
0x416236: push    eax
0x416237: call    TESDescription_Load
0x41623C: jmp     EffectSetting_LoadForm___ChunkLoopContinue_
0x416241: xor     eax, eax
0x416243: push    edi
0x416244: push    eax
0x416245: call    TESDescription_Load
0x41624A: jmp     EffectSetting_LoadForm___ChunkLoopContinue_
