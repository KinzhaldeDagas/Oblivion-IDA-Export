0x4AF886: mov     ecx, edi
0x4AF888: call    TESFile_GetNextChunk
0x4AF88D: test    al, al
0x4AF88F: jnz     TESLevCreature_LoadForm___SwitchChunkType
0x4AF895: push    0; a2
0x4AF897: mov     ecx, esi; this
0x4AF899: call    TESForm_SetIsLinked
0x4AF89E: mov     al, 1
0x4AF8A0: lea     esp, [ebp-24h]
0x4AF8A3: pop     edi
0x4AF8A4: pop     esi
0x4AF8A5: pop     ebx
0x4AF8A6: mov     ecx, [ebp-4]
0x4AF8A9: xor     ecx, ebp
0x4AF8AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4AF8B0: mov     esp, ebp
0x4AF8B2: pop     ebp
0x4AF8B3: retn    4
