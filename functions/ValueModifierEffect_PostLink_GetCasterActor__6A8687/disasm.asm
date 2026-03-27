0x6A8687: mov     ecx, [esi+24h]; this
0x6A868A: test    ecx, ecx
0x6A868C: push    ebx; int
0x6A868D: push    ebp
0x6A868E: jz      short loc_6A8699
0x6A8690: call    MagicCaster_GetParentActor
0x6A8695: mov     ebp, eax
0x6A8697: jmp     short ValueModifierEffect_PostLink___FixupBoundObjEffects
0x6A8699: xor     ebp, ebp
