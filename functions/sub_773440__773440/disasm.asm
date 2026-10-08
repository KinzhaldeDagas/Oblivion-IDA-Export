0x773440: push    ebx; Apply one stage's tracked texture-stage states, then tracked sampler states.
0x773441: mov     ebx, [esp+4+arg_0]
0x773445: push    esi
0x773446: xor     esi, esi
0x773448: cmp     ebx, ds:0B28CB0h
0x77344E: push    edi
0x77344F: mov     edi, ecx
0x773451: jnb     short loc_77345B
0x773453: push    ebx; stage
0x773454: call    OB_NiD3DTextureStageStateGroup_ApplyStageStates_010201A0; Oblivion draw-time texture-stage application: exactly eight tracked D3DTSS slots; no sampler LOD or texture-factor state.
0x773459: mov     esi, eax
0x77345B: push    ebx; stage
0x77345C: mov     ecx, edi; this
0x77345E: call    OB_NiD3DTextureStageStateGroup_ApplySamplerStates_010201A0; Oblivion draw-time stage sampler application: exactly five tracked slots (ADDRESSU/V, MAG/MIN/MIP).
0x773463: test    esi, esi
0x773465: jz      short loc_773469
0x773467: mov     eax, esi
0x773469: pop     edi
0x77346A: pop     esi
0x77346B: pop     ebx
0x77346C: retn    4
