0x416303: test    ebx, ebx
0x416305: jz      short loc_416313
0x416307: lea     eax, [ebx+44h]
0x41630A: push    edi
0x41630B: push    eax
0x41630C: call    TESTexture_Load
0x416311: jmp     short EffectSetting_LoadForm___ChunkLoopContinue_
0x416313: xor     eax, eax
0x416315: push    edi
0x416316: push    eax
0x416317: call    TESTexture_Load
0x41631C: jmp     short EffectSetting_LoadForm___ChunkLoopContinue_
