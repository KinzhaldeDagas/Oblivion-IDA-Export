0x68E060: push    esi; Verified post-link entry iterates the target ActiveEffect EffectNode list and dispatches each ActiveEffect virtual +0x1C with the target/reference linkContext. TESObjectREFR_PostLinkModifiedExtraList calls this for a linked NonActorMagicTarget list (null context); actor/player post-link paths pass their reference context.
0x68E061: mov     esi, [esp+4+activeEffectList]
0x68E065: test    esi, esi
0x68E067: push    edi
0x68E068: mov     edi, [esp+8+linkContext]
0x68E06C: jz      short loc_68E08C
0x68E06E: mov     edi, edi
0x68E070: cmp     dword ptr [esi+4], 0
0x68E074: jnz     short loc_68E07B
0x68E076: cmp     dword ptr [esi], 0
0x68E079: jz      short loc_68E08C
0x68E07B: mov     ecx, [esi]
0x68E07D: mov     eax, [ecx]
0x68E07F: mov     edx, [eax+1Ch]
0x68E082: push    edi
0x68E083: call    edx
0x68E085: mov     esi, [esi+4]
0x68E088: test    esi, esi
0x68E08A: jnz     short loc_68E070
0x68E08C: test    edi, edi
0x68E08E: jz      short loc_68E0A8
0x68E090: mov     ecx, [edi+58h]
0x68E093: test    ecx, ecx
0x68E095: jz      short loc_68E0A8
0x68E097: mov     eax, [ecx]
0x68E099: mov     edx, [eax+42Ch]
0x68E09F: push    1
0x68E0A1: push    1
0x68E0A3: push    1
0x68E0A5: push    edi
0x68E0A6: call    edx
0x68E0A8: pop     edi
0x68E0A9: pop     esi
0x68E0AA: retn
