0x779710: push    ebp; MoonSugar build 39: base shader +0x34 transform slot branches skinned partition to CalculateBoneMatrixes/sub_765560, otherwise pass-0 non-skinned to sub_765480. Confirms hardware skin needs separate post-flush hook.
0x779711: mov     ebp, [esp+4+a3]
0x779715: test    ebp, ebp
0x779717: push    esi
0x779718: mov     esi, ecx
0x77971A: jz      short loc_77975F
0x77971C: cmp     dword ptr [esi+34h], 0
0x779720: push    ebx
0x779721: mov     ebx, [esp+0Ch+a2]
0x779725: push    edi
0x779726: mov     edi, [esp+10h+a4]
0x77972A: jnz     short loc_77973C
0x77972C: mov     ecx, [esi+14h]
0x77972F: push    0
0x779731: push    4
0x779733: push    0
0x779735: push    edi
0x779736: push    ebx
0x779737: call    NiDX9Renderer__CalculateBoneMatrixes; MoonSugar build 39: CalculateBoneMatrixes owns NiSkinInstance cached bone matrix rebuild and camera-relative skin transforms. Do not mutate for Moon Sugar wobble; hook after native setup instead.
0x77973C: mov     ecx, [esi+18h]
0x77973F: movzx   edx, word ptr [ebp+24h]
0x779743: mov     eax, [ecx]
0x779745: mov     eax, [eax+30h]
0x779748: push    edx
0x779749: call    eax
0x77974B: mov     ecx, [esi+14h]; this
0x77974E: push    edi; a4
0x77974F: push    ebp; a3
0x779750: push    ebx; a2
0x779751: call    sub_765560; MoonSugar build 39: skinned transform upload writes renderer world/bone transform state and D3DTS_WORLD+i for small blend counts. Not a good Moon Sugar detour point; preserve this native path.
0x779756: pop     edi
0x779757: pop     ebx
0x779758: pop     esi
0x779759: xor     eax, eax
0x77975B: pop     ebp
0x77975C: retn    20h ; ' '
0x77975F: cmp     dword ptr [esi+34h], 0
0x779763: jnz     short loc_779780
0x779765: mov     ecx, [esi+18h]
0x779768: mov     edx, [ecx]
0x77976A: mov     eax, [edx+30h]
0x77976D: push    0
0x77976F: call    eax
0x779771: mov     ecx, [esp+8+a4]
0x779775: push    1
0x779777: push    ecx
0x779778: mov     ecx, [esi+14h]
0x77977B: call    NiDX9Renderer_SetModelTransform; MoonSugar build 39: common non-skinned transform upload has many shader-family xrefs (generic, water, grass, precipitation, SpeedTree, LOD, GeometryDecal, Lighting30). Do not globally detour for Moon Sugar; use scoped caller/hook windows.
0x779780: pop     esi
0x779781: xor     eax, eax
0x779783: pop     ebp
0x779784: retn    20h ; ' '
