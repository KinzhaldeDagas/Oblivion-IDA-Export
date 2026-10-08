0x7B1670: push    0FFFFFFFFh
0x7B1672: push    offset SEH_7B1670
0x7B1677: mov     eax, large fs:0
0x7B167D: push    eax
0x7B167E: sub     esp, 8
0x7B1681: push    ebx
0x7B1682: push    ebp
0x7B1683: push    esi
0x7B1684: push    edi
0x7B1685: mov     eax, ds:0B30AACh
0x7B168A: xor     eax, esp
0x7B168C: push    eax
0x7B168D: lea     eax, [esp+28h+var_C]
0x7B1691: mov     large fs:0, eax
0x7B1697: mov     edi, ecx
0x7B1699: xor     esi, esi
0x7B169B: xor     ebx, ebx
0x7B169D: mov     [esp+28h+var_14], esi
0x7B16A1: lea     eax, [esp+28h+var_10]
0x7B16A5: push    eax
0x7B16A6: mov     [esp+2Ch+var_4], ebx
0x7B16AA: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7B16AF: add     esp, 4
0x7B16B2: mov     ebp, eax
0x7B16B4: mov     ecx, [edi+94h]
0x7B16BA: cmp     ecx, [ebp+0]
0x7B16BD: mov     byte ptr [esp+28h+var_4], 1
0x7B16C2: jz      short loc_7B16E4
0x7B16C4: cmp     ecx, ebx
0x7B16C6: jz      short loc_7B16D3
0x7B16C8: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7B16CC: jnz     short loc_7B16D3
0x7B16CE: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7B16D3: mov     eax, [ebp+0]
0x7B16D6: cmp     eax, ebx
0x7B16D8: mov     [edi+94h], eax
0x7B16DE: jz      short loc_7B16E4
0x7B16E0: add     dword ptr [eax+60h], 1
0x7B16E4: mov     eax, [esp+28h+var_10]
0x7B16E8: cmp     eax, ebx
0x7B16EA: mov     byte ptr [esp+28h+var_4], bl
0x7B16EE: jz      short loc_7B1702
0x7B16F0: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7B16F4: mov     ecx, eax
0x7B16F6: add     eax, 60h ; '`'
0x7B16F9: cmp     [eax], ebx
0x7B16FB: jnz     short loc_7B1702
0x7B16FD: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7B1702: lea     ecx, [esp+28h+var_10]
0x7B1706: push    ecx
0x7B1707: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7B170C: add     esp, 4
0x7B170F: mov     eax, [eax]
0x7B1711: cmp     eax, ebx
0x7B1713: jz      short loc_7B171F
0x7B1715: mov     esi, eax
0x7B1717: add     dword ptr [esi+5Ch], 1
0x7B171B: mov     [esp+28h+var_14], esi
0x7B171F: mov     eax, [esp+28h+var_10]
0x7B1723: cmp     eax, ebx
0x7B1725: mov     byte ptr [esp+28h+var_4], bl
0x7B1729: jz      short loc_7B173D
0x7B172B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7B172F: mov     ecx, eax
0x7B1731: add     eax, 5Ch ; '\'
0x7B1734: cmp     [eax], ebx
0x7B1736: jnz     short loc_7B173D
0x7B1738: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B173D: push    2
0x7B173F: push    3
0x7B1741: push    ebx
0x7B1742: push    esi
0x7B1743: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7B1748: add     esp, 10h
0x7B174B: push    1; filterPreset
0x7B174D: mov     ecx, esi; this
0x7B174F: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7B1754: mov     ecx, [edi+94h]; this
0x7B175A: mov     edx, [ecx+14h]
0x7B175D: push    esi; a3
0x7B175E: push    edx; a2
0x7B175F: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7B1764: lea     eax, [esp+28h+var_10]
0x7B1768: push    eax
0x7B1769: call    NiD3DTextureStagePool_Acquire; Acquire a renderer-owned NiD3DTextureStage from the global texture-stage pool and return it with a reference.
0x7B176E: add     esp, 4
0x7B1771: mov     ebp, eax
0x7B1773: cmp     esi, [ebp+0]
0x7B1776: mov     byte ptr [esp+28h+var_4], 3
0x7B177B: jz      short loc_7B179D
0x7B177D: cmp     esi, ebx
0x7B177F: jz      short loc_7B178E
0x7B1781: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7B1785: jnz     short loc_7B178E
0x7B1787: mov     ecx, esi
0x7B1789: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B178E: mov     esi, [ebp+0]
0x7B1791: cmp     esi, ebx
0x7B1793: mov     [esp+28h+var_14], esi
0x7B1797: jz      short loc_7B179D
0x7B1799: add     dword ptr [esi+5Ch], 1
0x7B179D: mov     eax, [esp+28h+var_10]
0x7B17A1: cmp     eax, ebx
0x7B17A3: mov     byte ptr [esp+28h+var_4], bl
0x7B17A7: jz      short loc_7B17BB
0x7B17A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7B17AD: mov     ecx, eax
0x7B17AF: add     eax, 5Ch ; '\'
0x7B17B2: cmp     [eax], ebx
0x7B17B4: jnz     short loc_7B17BB
0x7B17B6: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B17BB: push    2
0x7B17BD: push    3
0x7B17BF: push    1
0x7B17C1: push    esi
0x7B17C2: call    BSShader_ConfigureTextureStageSampler; Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
0x7B17C7: add     esp, 10h
0x7B17CA: push    ebx; filterPreset
0x7B17CB: mov     ecx, esi; this
0x7B17CD: call    NiD3DTextureStage_ApplyFilterPreset; Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
0x7B17D2: mov     ecx, [edi+94h]; this
0x7B17D8: mov     edx, [ecx+14h]
0x7B17DB: push    esi; a3
0x7B17DC: push    edx; a2
0x7B17DD: call    NiD3DPass_SetTextureStage; Attach or replace a NiD3DTextureStage at a pass stage index while maintaining stage count, current-stage bookkeeping, and references.
0x7B17E2: mov     ebp, [edi+94h]
0x7B17E8: cmp     [ebp+30h], ebx
0x7B17EB: jnz     short loc_7B17F5
0x7B17ED: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7B17F2: mov     [ebp+30h], eax
0x7B17F5: mov     ecx, [ebp+30h]
0x7B17F8: push    ebx
0x7B17F9: push    ebx
0x7B17FA: push    7
0x7B17FC: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7B1801: mov     ebp, [edi+94h]
0x7B1807: cmp     [ebp+30h], ebx
0x7B180A: jnz     short loc_7B1814
0x7B180C: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7B1811: mov     [ebp+30h], eax
0x7B1814: mov     ecx, [ebp+30h]
0x7B1817: push    ebx
0x7B1818: push    ebx
0x7B1819: push    0Eh
0x7B181B: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7B1820: mov     ebp, [edi+94h]
0x7B1826: cmp     [ebp+30h], ebx
0x7B1829: jnz     short loc_7B1833
0x7B182B: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7B1830: mov     [ebp+30h], eax
0x7B1833: mov     ecx, [ebp+30h]
0x7B1836: push    ebx
0x7B1837: push    ebx
0x7B1838: push    1Bh
0x7B183A: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7B183F: mov     ebp, [edi+94h]
0x7B1845: cmp     [ebp+30h], ebx
0x7B1848: jnz     short loc_7B1852
0x7B184A: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7B184F: mov     [ebp+30h], eax
0x7B1852: mov     ecx, [ebp+30h]
0x7B1855: push    ebx
0x7B1856: push    ebx
0x7B1857: push    0Fh
0x7B1859: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7B185E: mov     ebp, [edi+94h]
0x7B1864: cmp     [ebp+30h], ebx
0x7B1867: jnz     short loc_7B1871
0x7B1869: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7B186E: mov     [ebp+30h], eax
0x7B1871: mov     ecx, [ebp+30h]
0x7B1874: push    ebx
0x7B1875: push    0Fh
0x7B1877: push    0A8h ; '¨'
0x7B187C: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x7B1881: mov     eax, [edi]
0x7B1883: mov     edx, [eax+0B8h]
0x7B1889: mov     ecx, edi
0x7B188B: call    edx
0x7B188D: or      eax, 0FFFFFFFFh
0x7B1890: cmp     esi, ebx
0x7B1892: mov     [esp+28h+var_4], eax
0x7B1896: jz      short loc_7B18A4
0x7B1898: add     [esi+5Ch], eax
0x7B189B: jnz     short loc_7B18A4
0x7B189D: mov     ecx, esi
0x7B189F: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x7B18A4: mov     al, 1
0x7B18A6: mov     ecx, [esp+28h+var_C]
0x7B18AA: mov     large fs:0, ecx
0x7B18B1: pop     ecx
0x7B18B2: pop     edi
0x7B18B3: pop     esi
0x7B18B4: pop     ebp
0x7B18B5: pop     ebx
0x7B18B6: add     esp, 14h
0x7B18B9: retn
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9CD760: lea     ecx, [ebp-14h]
0x9CD763: jmp     loc_75FA70
0x9CD768: lea     ecx, [ebp-10h]; void *
0x9CD76B: jmp     sub_4027D0
0x9CD770: lea     ecx, [ebp-10h]
0x9CD773: jmp     loc_75FA70
0x9CD778: lea     ecx, [ebp-10h]
0x9CD77B: jmp     loc_75FA70
0x9CD780: mov     edx, [esp+arg_4]
0x9CD784: lea     eax, [edx-18h]
0x9CD787: mov     ecx, [edx-1Ch]
0x9CD78A: xor     ecx, eax
0x9CD78C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD791: mov     eax, offset stru_AF69E8
0x9CD796: jmp     ___CxxFrameHandler3
