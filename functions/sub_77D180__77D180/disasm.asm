0x77D180: cmp     dword ptr ds:0B42898h, 0
0x77D187: jnz     short loc_77D1AC
0x77D189: push    38h ; '8'; Size
0x77D18B: call    FormHeapAlloc
0x77D190: add     esp, 4
0x77D193: test    eax, eax
0x77D195: jz      short loc_77D1A0
0x77D197: mov     ecx, eax; this
0x77D199: call    ??0NiD3DShaderFactory@@QAE@XZ; NiD3DShaderFactory::NiD3DShaderFactory(void)
0x77D19E: jmp     short loc_77D1A2
0x77D1A0: xor     eax, eax
0x77D1A2: mov     ds:0B42898h, eax
0x77D1A7: mov     ds:0B40120h, eax
0x77D1AC: cmp     dword ptr ds:0B40120h, 0
0x77D1B3: jnz     short locret_77D1C0
0x77D1B5: push    offset aFailedToCrea_1; "Failed to create shader factory!"
0x77D1BA: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x77D1BF: pop     ecx
0x77D1C0: retn
