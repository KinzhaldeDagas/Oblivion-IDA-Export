0x7FF4A0: push    0FFFFFFFFh; Lighting30 consumer resets the queue then resolves only its own selector domain. Normal Lighting30 refraction 0x156..0x158 is valid; 0x160..0x162 and 0x177..0x17A resolve no pass, but neither family is stock-produced by exact Lighting30's +0x5C builder.
0x7FF4A2: push    offset SEH_7FF4A0
0x7FF4A7: mov     eax, large fs:0
0x7FF4AD: push    eax
0x7FF4AE: sub     esp, 34h
0x7FF4B1: push    ebx
0x7FF4B2: push    ebp
0x7FF4B3: push    esi
0x7FF4B4: push    edi
0x7FF4B5: mov     eax, ds:0B30AACh
0x7FF4BA: xor     eax, esp
0x7FF4BC: push    eax
0x7FF4BD: lea     eax, [esp+54h+var_C]
0x7FF4C1: mov     large fs:0, eax
0x7FF4C7: mov     ebx, ecx
0x7FF4C9: mov     [esp+54h+var_2C], ebx
0x7FF4CD: mov     eax, [ebx]
0x7FF4CF: mov     edx, [eax+80h]
0x7FF4D5: call    edx; Lighting30 vtable +0x80 = NiD3DShader_ResetPassQueue. Releases prior Passes and CurrentPass, then zeros PassCount/CurrentPassIndex before resolving this geometry's selector.
0x7FF4D7: mov     edi, [esp+54h+arg_C]
0x7FF4DB: mov     esi, [edi+18h]
0x7FF4DE: test    esi, esi
0x7FF4E0: jnz     short loc_7FF4E6
0x7FF4E2: xor     eax, eax
0x7FF4E4: jmp     short loc_7FF4F9
0x7FF4E6: mov     eax, [esi]
0x7FF4E8: mov     edx, [eax+54h]
0x7FF4EB: mov     ecx, esi
0x7FF4ED: call    edx
0x7FF4EF: xor     ecx, ecx
0x7FF4F1: cmp     eax, 0Ah
0x7FF4F4: setz    cl
0x7FF4F7: mov     eax, ecx
0x7FF4F9: mov     ebp, ds:0B42E90h
0x7FF4FF: neg     eax
0x7FF501: sbb     eax, eax
0x7FF503: and     eax, esi
0x7FF505: cmp     word ptr ds:0B42EACh, 5
0x7FF50D: mov     [esp+54h+property], eax
0x7FF511: mov     [esp+54h+var_3C], ebp
0x7FF515: jnz     short loc_7FF528
0x7FF517: push    edi
0x7FF518: push    ebp
0x7FF519: mov     edx, eax
0x7FF51B: push    edx
0x7FF51C: mov     ecx, ebx
0x7FF51E: call    Lighting30Shader_BuildMode5ShadowPass; Render-mode-5 call into Lighting30Shader_BuildMode5ShadowPass.
0x7FF523: jmp     loc_8000D9
0x7FF528: mov     esi, [edi+10h]
0x7FF52B: mov     eax, [esi+40h]
0x7FF52E: mov     ecx, [esi+44h]
0x7FF531: mov     edx, [esi+48h]
0x7FF534: push    ebp
0x7FF535: mov     [esp+58h+var_28.x], eax
0x7FF539: mov     eax, [esp+58h+property]
0x7FF53D: push    esi
0x7FF53E: mov     [esp+5Ch+var_28.y], ecx
0x7FF542: push    eax
0x7FF543: mov     ecx, ebx
0x7FF545: mov     [esp+60h+var_34], esi
0x7FF549: mov     [esp+60h+var_28.z], edx
0x7FF54D: call    Lighting30Shader_UpdateSpecialTimeEmission; Pass238: Lighting30 helper is not the alternate explicit fog writer.
0x7FF552: push    offset stru_B3FA90; other
0x7FF557: lea     ecx, [esp+58h+var_28]; this
0x7FF55B: call    NiPoint3__NotEqual; Lighting30 compares material+40 emission RGB with B3FA90. Equal values skip the emission block entirely, leaving c4 untouched. Nonzero/different emission is multiplied by selected HDR exposure before either glow output c4 or non-glow addition to ambient c0.
0x7FF560: fldz
0x7FF562: test    al, al
0x7FF564: fld1
0x7FF566: jz      loc_7FF701
0x7FF56C: cmp     byte ptr ds:0B43070h, 0
0x7FF573: fstp    st
0x7FF575: fstp    st
0x7FF577: jz      short loc_7FF5A2
0x7FF579: call    sub_507140
0x7FF57E: fstp    [esp+54h+variant]
0x7FF582: fld     [esp+54h+variant]
0x7FF586: fld     st
0x7FF588: fmul    [esp+54h+var_28.x]
0x7FF58C: fstp    [esp+54h+var_28.x]
0x7FF590: fld     st
0x7FF592: fmul    [esp+54h+var_28.y]
0x7FF596: fstp    [esp+54h+var_28.y]
0x7FF59A: fmul    [esp+54h+var_28.z]
0x7FF59E: fstp    [esp+54h+var_28.z]
0x7FF5A2: mov     edi, [esp+54h+property]
0x7FF5A6: mov     edx, [edi]
0x7FF5A8: mov     eax, [edx+90h]
0x7FF5AE: push    0
0x7FF5B0: mov     ecx, edi
0x7FF5B2: call    eax; Glow test calls shader-property virtual+90 with index0. Exact getter7D7810 returns property+C4 array[index]. Nonnull slot0 routes active emission to c4 (RGB upper-clamped only when HDR is off; w=0). Null routes emission into c0, preserving c0.w and upper-clamping the sum only when HDR is off.
0x7FF5B4: test    eax, eax
0x7FF5B6: jnz     loc_7FF680
0x7FF5BC: cmp     byte ptr ds:0B43070h, 0
0x7FF5C3: fld     [esp+54h+var_28.x]
0x7FF5C7: mov     ecx, ds:0B46F78h
0x7FF5CD: mov     edx, ds:0B46F7Ch
0x7FF5D3: mov     eax, ds:0B46F80h
0x7FF5D8: mov     [esp+54h+var_1C], ecx
0x7FF5DC: fadd    [esp+54h+var_1C]
0x7FF5E0: mov     ecx, ds:0B46F84h
0x7FF5E6: mov     [esp+54h+var_18], edx
0x7FF5EA: fstp    [esp+54h+var_1C]
0x7FF5EE: mov     [esp+54h+var_14], eax
0x7FF5F2: fld     [esp+54h+var_28.y]
0x7FF5F6: fadd    [esp+54h+var_18]
0x7FF5FA: fstp    [esp+54h+var_18]
0x7FF5FE: fld     [esp+54h+var_28.z]
0x7FF602: fadd    [esp+54h+var_14]
0x7FF606: fstp    [esp+54h+var_14]
0x7FF60A: fld1
0x7FF60C: jnz     short loc_7FF63B
0x7FF60E: fcom    [esp+54h+var_1C]
0x7FF612: fnstsw  ax
0x7FF614: test    ah, 41h
0x7FF617: jz      short loc_7FF61D
0x7FF619: fst     [esp+54h+var_1C]
0x7FF61D: fcom    [esp+54h+var_18]
0x7FF621: fnstsw  ax
0x7FF623: test    ah, 41h
0x7FF626: jz      short loc_7FF62C
0x7FF628: fst     [esp+54h+var_18]
0x7FF62C: fcom    [esp+54h+var_14]
0x7FF630: fnstsw  ax
0x7FF632: test    ah, 41h
0x7FF635: jz      short loc_7FF63B
0x7FF637: fst     [esp+54h+var_14]
0x7FF63B: mov     edx, [esp+54h+var_1C]
0x7FF63F: fldz
0x7FF641: mov     eax, [esp+54h+var_18]
0x7FF645: mov     ds:0B46F78h, edx
0x7FF64B: mov     edx, [esp+54h+var_14]
0x7FF64F: mov     ds:0B46F7Ch, eax
0x7FF654: mov     ds:0B46F80h, edx
0x7FF65A: mov     ds:0B46F84h, ecx
0x7FF660: fxch    st(1)
0x7FF662: mov     eax, ds:0B42F40h; PS c5 Lighting30 toggles derive from DWORD B42F40 bits0/1/2 and bit3 AND shader-property+1C bit0.14E/14F later override c5.w, so ordinary12D..146 capture must remain distinct.
0x7FF667: test    al, 8
0x7FF669: jle     loc_7FF70A
0x7FF66F: test    byte ptr [edi+1Ch], 1
0x7FF673: jbe     loc_7FF70A
0x7FF679: mov     cl, 1
0x7FF67B: jmp     loc_7FF70C
0x7FF680: cmp     byte ptr ds:0B43070h, 0
0x7FF687: fld1
0x7FF689: jnz     short loc_7FF6B8
0x7FF68B: fcom    [esp+54h+var_28.x]
0x7FF68F: fnstsw  ax
0x7FF691: test    ah, 41h
0x7FF694: jz      short loc_7FF69A
0x7FF696: fst     [esp+54h+var_28.x]
0x7FF69A: fcom    [esp+54h+var_28.y]
0x7FF69E: fnstsw  ax
0x7FF6A0: test    ah, 41h
0x7FF6A3: jz      short loc_7FF6A9
0x7FF6A5: fst     [esp+54h+var_28.y]
0x7FF6A9: fcom    [esp+54h+var_28.z]
0x7FF6AD: fnstsw  ax
0x7FF6AF: test    ah, 41h
0x7FF6B2: jz      short loc_7FF6B8
0x7FF6B4: fst     [esp+54h+var_28.z]
0x7FF6B8: fld     [esp+54h+var_28.x]
0x7FF6BC: fstp    [esp+54h+var_1C]
0x7FF6C0: mov     eax, [esp+54h+var_1C]
0x7FF6C4: fld     [esp+54h+var_28.y]
0x7FF6C8: mov     ds:0B46FB8h, eax
0x7FF6CD: fstp    [esp+54h+var_18]
0x7FF6D1: mov     ecx, [esp+54h+var_18]
0x7FF6D5: fld     [esp+54h+var_28.z]
0x7FF6D9: mov     ds:0B46FBCh, ecx
0x7FF6DF: fstp    [esp+54h+var_14]
0x7FF6E3: mov     edx, [esp+54h+var_14]
0x7FF6E7: fldz
0x7FF6E9: mov     ds:0B46FC0h, edx
0x7FF6EF: fst     [esp+54h+var_10]
0x7FF6F3: mov     eax, [esp+54h+var_10]
0x7FF6F7: mov     ds:0B46FC4h, eax
0x7FF6FC: jmp     loc_7FF660
0x7FF701: mov     edi, [esp+54h+property]
0x7FF705: jmp     loc_7FF662
0x7FF70A: xor     cl, cl
0x7FF70C: test    al, 1
0x7FF70E: mov     byte ptr [esp+54h+variant], cl
0x7FF712: jle     short loc_7FF71C
0x7FF714: fst     dword ptr ds:0B46FC8h; Pixel c5.x (ToggleADTS.x) from global shader mask bit 1.
0x7FF71A: jmp     short loc_7FF726
0x7FF71C: fxch    st(1)
0x7FF71E: fst     dword ptr ds:0B46FC8h
0x7FF724: fxch    st(1)
0x7FF726: test    al, 2
0x7FF728: jle     short loc_7FF732
0x7FF72A: fst     dword ptr ds:0B46FCCh; Pixel c5.y (ToggleADTS.y) from global shader mask bit 2.
0x7FF730: jmp     short loc_7FF73C
0x7FF732: fxch    st(1)
0x7FF734: fst     dword ptr ds:0B46FCCh
0x7FF73A: fxch    st(1)
0x7FF73C: test    al, 4
0x7FF73E: jle     short loc_7FF748
0x7FF740: fst     dword ptr ds:0B46FD0h; Pixel c5.z (ToggleADTS.z) from global shader mask bit 4.
0x7FF746: jmp     short loc_7FF752
0x7FF748: fxch    st(1)
0x7FF74A: fst     dword ptr ds:0B46FD0h
0x7FF750: fxch    st(1)
0x7FF752: test    cl, cl
0x7FF754: jz      short loc_7FF75E
0x7FF756: fst     dword ptr ds:0B46FD4h; Pixel c5.w general path: global mask bit 3 and property flags+0x1C bit 0.
0x7FF75C: jmp     short loc_7FF768
0x7FF75E: fxch    st(1)
0x7FF760: fst     dword ptr ds:0B46FD4h
0x7FF766: fxch    st(1)
0x7FF768: cmp     ebp, 14Eh
0x7FF76E: jz      short loc_7FF778
0x7FF770: cmp     ebp, 14Fh
0x7FF776: jnz     short loc_7FF78B; Selectors 0x14E/0x14F override pixel c5.w: property flag 0x800 gives 0, otherwise 1. Selectors 0x150/0x151 retain the general path.
0x7FF778: test    dword ptr [edi+1Ch], 800h
0x7FF77F: jbe     short loc_7FF7E9
0x7FF781: fxch    st(1)
0x7FF783: fst     dword ptr ds:0B46FD4h
0x7FF789: fxch    st(1)
0x7FF78B: cmp     ebp, 147h
0x7FF791: mov     ecx, ds:0B25AD0h
0x7FF797: mov     edx, ds:0B25AD4h
0x7FF79D: mov     eax, ds:0B25AD8h
0x7FF7A2: mov     ds:0B46DE8h, ecx
0x7FF7A8: mov     ecx, ds:0B25ADCh
0x7FF7AE: mov     ds:0B46DECh, edx
0x7FF7B4: mov     ds:0B46DF0h, eax
0x7FF7B9: mov     ds:0B46DF4h, ecx
0x7FF7BF: jge     loc_7FF8B0
0x7FF7C5: mov     edx, ds:0B42EB8h
0x7FF7CB: mov     al, [edx+8]
0x7FF7CE: test    al, al
0x7FF7D0: jbe     short loc_7FF7F1
0x7FF7D2: mov     ecx, ds:0B2DCFCh
0x7FF7D8: movzx   eax, al
0x7FF7DB: cmp     ecx, eax
0x7FF7DD: jge     short loc_7FF7E1
0x7FF7DF: mov     eax, ecx
0x7FF7E1: add     eax, 0FFFFFFFFh
0x7FF7E4: movzx   eax, ax
0x7FF7E7: jmp     short loc_7FF7F3
0x7FF7E9: fst     dword ptr ds:0B46FD4h
0x7FF7EF: jmp     short loc_7FF78B
0x7FF7F1: xor     eax, eax
0x7FF7F3: movzx   ecx, ax
0x7FF7F6: fst     dword ptr ds:0B46FD8h; For ordinary selector<147: PS c6.x=1; c6.y=0 if entry byte count is0, else low16(min(entryCount,signed B2DCFC)-1); c6.z=NiMaterialProperty+4C glossiness; c6.w=(geometryData+24 !=0). A zero/invalid maximum can wrap to65535; GPU ordinary profile limits max to1..20 and verifies actual words.
0x7FF7FC: mov     [esp+54h+var_30], ecx
0x7FF800: lea     edx, [ecx+ecx+0Bh]
0x7FF804: fild    [esp+54h+var_30]
0x7FF808: fstp    dword ptr ds:0B46FDCh
0x7FF80E: fld     dword ptr [esi+4Ch]
0x7FF811: fstp    dword ptr ds:0B46FE0h
0x7FF817: mov     eax, [ebx+9Ch]
0x7FF81D: mov     [eax+20h], edx
0x7FF820: mov     eax, [esp+54h+value]
0x7FF824: mov     eax, [eax+0B4h]
0x7FF82A: cmp     dword ptr [eax+24h], 0
0x7FF82E: setnz   al
0x7FF831: test    al, al
0x7FF833: jz      short loc_7FF839
0x7FF835: fstp    st(1)
0x7FF837: jmp     short loc_7FF83B
0x7FF839: fstp    st
0x7FF83B: add     ecx, 1
0x7FF83E: fstp    dword ptr ds:0B46FE4h
0x7FF844: xor     eax, eax
0x7FF846: test    ecx, ecx
0x7FF848: jle     short loc_7FF867
0x7FF84A: lea     ebx, [ebx+0]
0x7FF850: mov     byte ptr ds:0B4693Ah[eax*2], 1
0x7FF858: mov     byte ptr ds:0B46939h[eax*2], 1
0x7FF860: add     eax, 1
0x7FF863: cmp     eax, ecx
0x7FF865: jl      short loc_7FF850
0x7FF867: mov     ecx, ds:0B2DCFCh
0x7FF86D: cmp     eax, ecx
0x7FF86F: jge     short loc_7FF897
0x7FF871: jmp     short loc_7FF880
0x7FF880: mov     byte ptr ds:0B4693Ah[eax*2], 0
0x7FF888: mov     byte ptr ds:0B46939h[eax*2], 0
0x7FF890: add     eax, 1
0x7FF893: cmp     eax, ecx
0x7FF895: jl      short loc_7FF880
0x7FF897: mov     ecx, ds:0B46C18h
0x7FF89D: mov     byte ptr [ecx+8], 0
0x7FF8A1: mov     edx, ds:0B46C14h
0x7FF8A7: mov     byte ptr [edx+8], 0
0x7FF8AB: jmp     loc_7FFA30
0x7FF8B0: lea     eax, [ebp-152h]
0x7FF8B6: cmp     eax, 1
0x7FF8B9: ja      short loc_7FF8F4
0x7FF8BB: mov     ecx, ds:0B46C18h
0x7FF8C1: fstp    st
0x7FF8C3: mov     byte ptr [ecx+8], 1
0x7FF8C7: fstp    st
0x7FF8C9: mov     edx, ds:0B46C14h
0x7FF8CF: mov     byte ptr [edx+8], 1
0x7FF8D3: mov     eax, 1010101h
0x7FF8D8: mov     ds:0B46939h, eax
0x7FF8DD: mov     ds:0B4693Dh, eax
0x7FF8E2: mov     eax, [ebx+9Ch]
0x7FF8E8: mov     dword ptr [eax+20h], 11h
0x7FF8EF: jmp     loc_7FFA30
0x7FF8F4: cmp     ebp, 14Dh
0x7FF8FA: jnz     loc_7FF9D3
0x7FF900: fstp    st
0x7FF902: mov     ecx, edi; this
0x7FF904: fstp    st
0x7FF906: call    OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0; OBLIVION AUTHORITY (2026-08-24): Generic pass-list marker counter used by the SpeedTree leaf program selector. Walks property+0x70 entries and counts nonnull shader objects whose word at +0x118 is not 0x00FF. It does not test ShadowSceneLight disabled byte +0xF4. Result selects point-light shader program bit; it is not a leaf layer/card/LOD index.
0x7FF90B: test    ax, ax
0x7FF90E: jnz     short loc_7FF986
0x7FF910: cmp     ds:0B42CE3h, al
0x7FF916: jz      short loc_7FF958
0x7FF918: fld     dword ptr ds:0A3D65Ch
0x7FF91E: fst     [esp+54h+var_1C]
0x7FF922: mov     eax, [esp+54h+var_1C]
0x7FF926: fst     [esp+54h+var_18]
0x7FF92A: mov     ecx, [esp+54h+var_18]
0x7FF92E: fstp    [esp+54h+var_14]
0x7FF932: mov     edx, [esp+54h+var_14]
0x7FF936: fld1
0x7FF938: mov     ds:0B47008h, eax
0x7FF93D: fstp    [esp+54h+var_10]
0x7FF941: mov     ds:0B4700Ch, ecx
0x7FF947: mov     eax, [esp+54h+var_10]
0x7FF94B: mov     ds:0B47010h, edx
0x7FF951: mov     ds:0B47014h, eax
0x7FF956: jmp     short loc_7FF986
0x7FF958: mov     ecx, ds:0B46F78h
0x7FF95E: mov     edx, ds:0B46F7Ch
0x7FF964: mov     eax, ds:0B46F80h
0x7FF969: mov     ds:0B47008h, ecx
0x7FF96F: mov     ecx, ds:0B46F84h
0x7FF975: mov     ds:0B4700Ch, edx
0x7FF97B: mov     ds:0B47010h, eax
0x7FF980: mov     ds:0B47014h, ecx
0x7FF986: mov     eax, [ebx+9Ch]
0x7FF98C: mov     dword ptr [eax+20h], 0Ah
0x7FF993: mov     ecx, ds:0B2DCFCh
0x7FF999: mov     eax, 1
0x7FF99E: cmp     ecx, eax
0x7FF9A0: mov     byte ptr ds:0B46939h, 1
0x7FF9A7: mov     byte ptr ds:0B4693Ah, 0
0x7FF9AE: jle     short loc_7FF9C7
0x7FF9B0: mov     byte ptr ds:0B4693Ah[eax*2], 0
0x7FF9B8: mov     byte ptr ds:0B46939h[eax*2], 0
0x7FF9C0: add     eax, 1
0x7FF9C3: cmp     eax, ecx
0x7FF9C5: jl      short loc_7FF9B0
0x7FF9C7: mov     edx, ds:0B46C18h
0x7FF9CD: mov     byte ptr [edx+8], 0
0x7FF9D1: jmp     short loc_7FFA30
0x7FF9D3: lea     eax, [ebp-14Eh]; Lighting30 native-shadow selector family test: 0x14E..0x151 receives the 0x0B state-width path.
0x7FF9D9: cmp     eax, 3
0x7FF9DC: mov     eax, [ebx+9Ch]
0x7FF9E2: ja      short loc_7FF9F5
0x7FF9E4: fxch    st(1)
0x7FF9E6: mov     dword ptr [eax+20h], 0Bh
0x7FF9ED: fstp    dword ptr ds:0B46FD8h
0x7FF9F3: jmp     short loc_7FFA21
0x7FF9F5: mov     dword ptr [eax+20h], 9
0x7FF9FC: fstp    st
0x7FF9FE: mov     ecx, ds:0B2DCFCh
0x7FFA04: fstp    st
0x7FFA06: lea     edx, [ecx+ecx]
0x7FFA09: push    edx
0x7FFA0A: push    0
0x7FFA0C: push    offset unk_B46939
0x7FFA11: call    __memset
0x7FFA16: fldz
0x7FFA18: fst     dword ptr ds:0B46FD8h
0x7FFA1E: add     esp, 0Ch
0x7FFA21: mov     eax, ds:0B46C18h
0x7FFA26: fstp    dword ptr ds:0B46FDCh
0x7FFA2C: mov     byte ptr [eax+8], 0
0x7FFA30: mov     ecx, [ebx+30h]
0x7FFA33: mov     edx, [ecx]
0x7FFA35: mov     eax, [edx+48h]
0x7FFA38: call    eax
0x7FFA3A: mov     ecx, [ebx+2Ch]
0x7FFA3D: mov     edx, [ecx]
0x7FFA3F: mov     eax, [edx+48h]
0x7FFA42: call    eax
0x7FFA44: mov     ecx, [esp+54h+variant]
0x7FFA48: push    ecx; variant
0x7FFA49: push    edi; property
0x7FFA4A: push    ebp; selector
0x7FFA4B: mov     ecx, ebx; this
0x7FFA4D: call    Lighting30Shader_ResolveSelectorStages; Resolve selector to a concrete pooled NiD3DPass. Only selectors through 0x15F are accepted; 0x177..0x17A return null.
0x7FFA52: mov     esi, eax
0x7FFA54: test    esi, esi
0x7FFA56: jz      loc_8000D7; Null resolved pass branches directly to the setup exit. No pass-array insertion and no PassCount increment occur.
0x7FFA5C: add     ebp, 0FFFFFEA2h
0x7FFA62: cmp     ebp, 1
0x7FFA65: ja      short loc_7FFA75; Fog render consumer decode: Lighting30 selector range 0x15E..0x15F dispatches to TexEffect alternate payload writer 0x7FEE40.
0x7FFA67: mov     edx, [esp+54h+value]
0x7FFA6B: push    esi
0x7FFA6C: push    edi
0x7FFA6D: push    edx
0x7FFA6E: mov     ecx, ebx
0x7FFA70: call    sub_7FEE40; Fog render consumer decode: calls 0x7FEE40 to populate TexEffect alternate constants including FogParam/FogColor.
0x7FFA75: test    byte ptr [edi+1Ch], 2; Current effective property bit1 selects +90 skinned or +8C rigid declaration; +24 still belongs to preceding geometry until assignment.
0x7FFA79: mov     eax, ds:0A2807Ch
0x7FFA7E: mov     edi, [ebx+24h]
0x7FFA81: jbe     short loc_7FFA8B
0x7FFA83: mov     ebp, [ebx+90h]; Select shader+0x90: eight-element skinned declaration with BLENDWEIGHT/BLENDINDICES.
0x7FFA89: jmp     short loc_7FFA91
0x7FFA8B: mov     ebp, [ebx+8Ch]; Select shader+0x8C: six-element non-skinned object declaration.
0x7FFA91: cmp     edi, ebp
0x7FFA93: jz      short loc_7FFAC2
0x7FFA95: test    edi, edi
0x7FFA97: jz      short loc_7FFAB1
0x7FFA99: lea     ecx, [edi+4]
0x7FFA9C: push    ecx; lpAddend
0x7FFA9D: call    eax ; InterlockedDecrement
0x7FFA9F: test    eax, eax
0x7FFAA1: jnz     short loc_7FFAB1
0x7FFAA3: test    edi, edi
0x7FFAA5: jz      short loc_7FFAB1
0x7FFAA7: mov     edx, [edi]
0x7FFAA9: mov     eax, [edx]
0x7FFAAB: push    1
0x7FFAAD: mov     ecx, edi
0x7FFAAF: call    eax
0x7FFAB1: test    ebp, ebp
0x7FFAB3: mov     [ebx+24h], ebp; Publish selected NiDX9ShaderDeclaration into active shader+24 after old-owner release; retain new owner follows.
0x7FFAB6: jz      short loc_7FFAC2
0x7FFAB8: add     ebp, 4
0x7FFABB: push    ebp; lpAddend
0x7FFABC: call    dword ptr ds:0A28078h
0x7FFAC2: cmp     byte ptr ds:0B46973h, 0; Selector-mask-controlled fog producer: when enabled, populate Lighting30 vertex c15/c16.
0x7FFAC9: jz      loc_7FFC9E
0x7FFACF: mov     ecx, [esp+54h+arg_C]
0x7FFAD3: mov     ecx, [ecx+0Ch]; Fog render consumer decode: Lighting30 non-mode path loads active fog property from render/property state +0x0C.
0x7FFAD6: test    ecx, ecx
0x7FFAD8: jz      loc_7FFC2B
0x7FFADE: fld     dword ptr [ecx+2Ch]
0x7FFAE1: fstp    [esp+54h+var_30]
0x7FFAE5: fld     dword ptr [ecx+30h]
0x7FFAE8: fstp    [esp+54h+arg_C]
0x7FFAEC: fldz
0x7FFAEE: fld     st
0x7FFAF0: fld     [esp+54h+arg_C]
0x7FFAF4: fucom   st(1)
0x7FFAF6: fnstsw  ax
0x7FFAF8: fstp    st(1)
0x7FFAFA: test    ah, 44h
0x7FFAFD: fld     [esp+54h+var_30]
0x7FFB01: jp      loc_7FFB88
0x7FFB07: fld     st(2)
0x7FFB09: fucomp  st(1)
0x7FFB0B: fnstsw  ax
0x7FFB0D: test    ah, 44h
0x7FFB10: jp      short loc_7FFB88
0x7FFB12: fstp    st(1)
0x7FFB14: fstp    st
0x7FFB16: fld     dword ptr ds:0A93350h
0x7FFB1C: fstp    [esp+54h+var_1C]; Fog render consumer decode: Lighting30 non-mode zero/invalid fog range fallback writes default grouped FogParam/FogColor.
0x7FFB20: mov     edx, [esp+54h+var_1C]
0x7FFB24: mov     ds:0B46DB8h, edx; Fallback VS c15.x uses Oblivion default at A93350 when the fog range is absent/invalid.
0x7FFB2A: fst     [esp+54h+var_18]
0x7FFB2E: mov     eax, [esp+54h+var_18]
0x7FFB32: fld1
0x7FFB34: mov     ds:0B46DBCh, eax
0x7FFB39: mov     eax, ds:0B25AD0h
0x7FFB3E: fst     [esp+54h+var_14]
0x7FFB42: mov     ecx, [esp+54h+var_14]
0x7FFB46: fxch    st(1)
0x7FFB48: fst     [esp+54h+var_10]
0x7FFB4C: mov     ds:0B46DC0h, ecx
0x7FFB52: mov     edx, [esp+54h+var_10]
0x7FFB56: mov     ecx, ds:0B25AD4h
0x7FFB5C: mov     ds:0B46DC4h, edx
0x7FFB62: mov     edx, ds:0B25AD8h
0x7FFB68: mov     ds:0B46DC8h, eax; Fallback VS c16 begins with the native default fog-color tuple at B25AD0.
0x7FFB6D: mov     eax, ds:0B25ADCh
0x7FFB72: mov     ds:0B46DCCh, ecx
0x7FFB78: mov     ds:0B46DD0h, edx
0x7FFB7E: mov     ds:0B46DD4h, eax
0x7FFB83: jmp     loc_7FFCA4
0x7FFB88: mov     edx, [ecx+20h]
0x7FFB8B: fsubr   st, st(1)
0x7FFB8D: mov     eax, [ecx+24h]
0x7FFB90: mov     ecx, [ecx+28h]
0x7FFB93: fstp    [esp+54h+arg_C]
0x7FFB97: mov     [esp+54h+var_28.x], edx
0x7FFB9B: mov     [esp+54h+var_28.y], eax
0x7FFB9F: fstp    [esp+54h+var_1C]
0x7FFBA3: mov     edx, [esp+54h+var_1C]
0x7FFBA7: fld     [esp+54h+arg_C]
0x7FFBAB: mov     [esp+54h+var_28.z], ecx
0x7FFBAF: fstp    [esp+54h+var_18]
0x7FFBB3: mov     eax, [esp+54h+var_18]
0x7FFBB7: fld1
0x7FFBB9: mov     ds:0B46DB8h, edx; Write VS c15 FogParam = (fogEnd, fogEnd-fogStart, 1, 0).
0x7FFBBF: fst     [esp+54h+var_14]
0x7FFBC3: mov     ds:0B46DBCh, eax
0x7FFBC8: mov     ecx, [esp+54h+var_14]
0x7FFBCC: fxch    st(1)
0x7FFBCE: fst     [esp+54h+var_10]
0x7FFBD2: mov     ds:0B46DC0h, ecx
0x7FFBD8: fld     [esp+54h+var_28.x]
0x7FFBDC: mov     edx, [esp+54h+var_10]
0x7FFBE0: fstp    [esp+54h+var_1C]
0x7FFBE4: mov     ds:0B46DC4h, edx
0x7FFBEA: fld     [esp+54h+var_28.y]
0x7FFBEE: mov     eax, [esp+54h+var_1C]
0x7FFBF2: fstp    [esp+54h+var_18]
0x7FFBF6: mov     ds:0B46DC8h, eax; Write VS c16 FogColor = (fog.r, fog.g, fog.b, 1).
0x7FFBFB: fld     [esp+54h+var_28.z]
0x7FFBFF: mov     ecx, [esp+54h+var_18]
0x7FFC03: fstp    [esp+54h+var_14]
0x7FFC07: mov     ds:0B46DCCh, ecx
0x7FFC0D: mov     edx, [esp+54h+var_14]
0x7FFC11: fxch    st(1)
0x7FFC13: fst     [esp+54h+var_10]
0x7FFC17: mov     ds:0B46DD0h, edx
0x7FFC1D: mov     eax, [esp+54h+var_10]
0x7FFC21: mov     ds:0B46DD4h, eax
0x7FFC26: jmp     loc_7FFCA2
0x7FFC2B: fld     dword ptr ds:0A93350h
0x7FFC31: fstp    [esp+54h+var_1C]; Fog render consumer decode: Lighting30 non-mode null-property fallback writes default grouped FogParam/FogColor.
0x7FFC35: mov     ecx, [esp+54h+var_1C]
0x7FFC39: fldz
0x7FFC3B: mov     ds:0B46DB8h, ecx
0x7FFC41: fst     [esp+54h+var_18]
0x7FFC45: fld1
0x7FFC47: mov     edx, [esp+54h+var_18]
0x7FFC4B: fst     [esp+54h+var_14]
0x7FFC4F: mov     ds:0B46DBCh, edx
0x7FFC55: mov     edx, ds:0B25AD0h
0x7FFC5B: fxch    st(1)
0x7FFC5D: mov     eax, [esp+54h+var_14]
0x7FFC61: fst     [esp+54h+var_10]
0x7FFC65: mov     ds:0B46DC0h, eax
0x7FFC6A: mov     ecx, [esp+54h+var_10]
0x7FFC6E: mov     eax, ds:0B25AD4h
0x7FFC73: mov     ds:0B46DC4h, ecx
0x7FFC79: mov     ecx, ds:0B25AD8h
0x7FFC7F: mov     ds:0B46DC8h, edx
0x7FFC85: mov     edx, ds:0B25ADCh
0x7FFC8B: mov     ds:0B46DCCh, eax
0x7FFC90: mov     ds:0B46DD0h, ecx
0x7FFC96: mov     ds:0B46DD4h, edx
0x7FFC9C: jmp     short loc_7FFCA4
0x7FFC9E: fldz
0x7FFCA0: fld1
0x7FFCA2: fxch    st(1)
0x7FFCA4: cmp     byte ptr ds:0B42CE3h, 0
0x7FFCAB: mov     eax, ds:0B25AE0h
0x7FFCB0: mov     edx, ds:0B25AE8h
0x7FFCB6: mov     ecx, ds:0B25AE4h
0x7FFCBC: mov     ds:0B46FA8h, eax
0x7FFCC1: mov     eax, ds:0B25AECh
0x7FFCC6: mov     ds:0B46FB0h, edx
0x7FFCCC: mov     edx, [esp+54h+var_3C]
0x7FFCD0: mov     ds:0B46FACh, ecx
0x7FFCD6: mov     ds:0B46FB4h, eax
0x7FFCDB: jnz     short loc_7FFD2F
0x7FFCDD: lea     ecx, [edx-147h]
0x7FFCE3: cmp     ecx, 6
0x7FFCE6: ja      short loc_7FFD2F
0x7FFCE8: mov     ecx, [esp+54h+var_34]
0x7FFCEC: fld     dword ptr [ecx+50h]
0x7FFCEF: fstp    [esp+54h+arg_C]
0x7FFCF3: fxch    st(1)
0x7FFCF5: fcom    [esp+54h+arg_C]
0x7FFCF9: fnstsw  ax
0x7FFCFB: test    ah, 41h
0x7FFCFE: jnz     short loc_7FFD1D
0x7FFD00: fld     dword ptr [ecx+50h]
0x7FFD03: mov     eax, [esp+54h+property]
0x7FFD07: fstp    [esp+54h+arg_C]
0x7FFD0B: fld     dword ptr [eax+0A4h]
0x7FFD11: fmul    [esp+54h+arg_C]
0x7FFD15: fstp    dword ptr ds:0B46FA8h
0x7FFD1B: jmp     short loc_7FFD58
0x7FFD1D: mov     ecx, [esp+54h+property]
0x7FFD21: fld     dword ptr [ecx+0A4h]
0x7FFD27: fstp    dword ptr ds:0B46FA8h
0x7FFD2D: jmp     short loc_7FFD58
0x7FFD2F: mov     ecx, [esp+54h+var_34]
0x7FFD33: fld     dword ptr [ecx+50h]
0x7FFD36: fstp    [esp+54h+arg_C]
0x7FFD3A: fxch    st(1)
0x7FFD3C: fcom    [esp+54h+arg_C]
0x7FFD40: fnstsw  ax
0x7FFD42: test    ah, 41h
0x7FFD45: jnz     short loc_7FFD52
0x7FFD47: fld     dword ptr [ecx+50h]
0x7FFD4A: fstp    dword ptr ds:0B46FA8h
0x7FFD50: jmp     short loc_7FFD58
0x7FFD52: fst     dword ptr ds:0B46FA8h; Ordinary selectors12D..146 set PS c3.x to min(material+50,1.0), with no lower clamp. PS c3.yzw retain B25AE4/B25AE8/B25AEC defaults (all1 in this image).147..14D have separate alpha behavior and are excluded from the ordinary profile.
0x7FFD58: lea     eax, [edx-147h]
0x7FFD5E: cmp     eax, 18h
0x7FFD61: ja      short loc_7FFD72
0x7FFD63: add     edx, 0FFFFFEB2h
0x7FFD69: cmp     edx, 3
0x7FFD6C: ja      loc_7FFF4C
0x7FFD72: mov     ecx, [esi+24h]
0x7FFD75: fstp    st(1)
0x7FFD77: mov     ebx, [ecx]
0x7FFD79: fstp    st
0x7FFD7B: mov     ecx, [esp+54h+property]
0x7FFD7F: mov     edx, [ecx]
0x7FFD81: mov     eax, [edx+88h]
0x7FFD87: push    0
0x7FFD89: call    eax
0x7FFD8B: mov     edi, [ebx+4]
0x7FFD8E: mov     ebp, eax
0x7FFD90: cmp     edi, ebp
0x7FFD92: jz      short loc_7FFDC5
0x7FFD94: test    edi, edi
0x7FFD96: jz      short loc_7FFDB4
0x7FFD98: lea     ecx, [edi+4]
0x7FFD9B: push    ecx; lpAddend
0x7FFD9C: call    dword ptr ds:0A2807Ch
0x7FFDA2: test    eax, eax
0x7FFDA4: jnz     short loc_7FFDB4
0x7FFDA6: test    edi, edi
0x7FFDA8: jz      short loc_7FFDB4
0x7FFDAA: mov     edx, [edi]
0x7FFDAC: mov     eax, [edx]
0x7FFDAE: push    1
0x7FFDB0: mov     ecx, edi
0x7FFDB2: call    eax
0x7FFDB4: test    ebp, ebp
0x7FFDB6: mov     [ebx+4], ebp
0x7FFDB9: jz      short loc_7FFDC5
0x7FFDBB: add     ebp, 4
0x7FFDBE: push    ebp; lpAddend
0x7FFDBF: call    dword ptr ds:0A28078h
0x7FFDC5: mov     ecx, [esi+24h]
0x7FFDC8: mov     edi, [esp+54h+property]
0x7FFDCC: mov     edx, [edi]
0x7FFDCE: mov     ebx, [ecx+4]
0x7FFDD1: mov     eax, [edx+8Ch]
0x7FFDD7: push    0
0x7FFDD9: mov     ecx, edi
0x7FFDDB: call    eax
0x7FFDDD: test    eax, eax
0x7FFDDF: jz      short loc_7FFDF3
0x7FFDE1: mov     edx, [edi]
0x7FFDE3: mov     eax, [edx+8Ch]
0x7FFDE9: push    0
0x7FFDEB: mov     ecx, edi
0x7FFDED: call    eax
0x7FFDEF: mov     ebp, eax
0x7FFDF1: jmp     short loc_7FFDF9
0x7FFDF3: mov     ebp, ds:0B430DCh
0x7FFDF9: mov     edi, [ebx+4]
0x7FFDFC: cmp     edi, ebp
0x7FFDFE: jz      short loc_7FFE31
0x7FFE00: test    edi, edi
0x7FFE02: jz      short loc_7FFE20
0x7FFE04: lea     ecx, [edi+4]
0x7FFE07: push    ecx; lpAddend
0x7FFE08: call    dword ptr ds:0A2807Ch
0x7FFE0E: test    eax, eax
0x7FFE10: jnz     short loc_7FFE20
0x7FFE12: test    edi, edi
0x7FFE14: jz      short loc_7FFE20
0x7FFE16: mov     edx, [edi]
0x7FFE18: mov     eax, [edx]
0x7FFE1A: push    1
0x7FFE1C: mov     ecx, edi
0x7FFE1E: call    eax
0x7FFE20: test    ebp, ebp
0x7FFE22: mov     [ebx+4], ebp
0x7FFE25: jz      short loc_7FFE31
0x7FFE27: add     ebp, 4
0x7FFE2A: push    ebp; lpAddend
0x7FFE2B: call    dword ptr ds:0A28078h
0x7FFE31: mov     ecx, ds:0B25AD0h; Reset pixel c7 to (0,0,0,1). Stock Oblivion SM3023 does not reference c7.
0x7FFE37: mov     edx, ds:0B25AD4h
0x7FFE3D: mov     eax, ds:0B25AD8h
0x7FFE42: mov     ds:0B46FE8h, ecx
0x7FFE48: mov     ecx, ds:0B25ADCh
0x7FFE4E: mov     ds:0B46FF4h, ecx
0x7FFE54: mov     ecx, [esp+54h+property]; self
0x7FFE58: mov     ds:0B46FECh, edx
0x7FFE5E: mov     ds:0B46FF0h, eax
0x7FFE63: call    BSShaderProperty_GetShadowLightCount; The SimpleShadow consumer runs only when BSShaderProperty contains at least one native shadow light.
0x7FFE68: test    ax, ax
0x7FFE6B: jbe     loc_7FFF48
0x7FFE71: mov     edx, ds:0B42E90h; SimpleShadow setup binds only the source R32F texture/stage state; it does not switch render target or depth surface, so receiver composition uses the accumulator's inherited active surfaces.
0x7FFE77: add     edx, 0FFFFFEB2h
0x7FFE7D: cmp     edx, 3
0x7FFE80: ja      loc_7FFF48
0x7FFE86: mov     edi, ds:0B42EB8h
0x7FFE8C: mov     eax, [edi+0Ch]
0x7FFE8F: mov     ebp, [eax]
0x7FFE91: mov     al, [ebp+0F4h]; Current ShadowSceneLight +0xF4 selects the normal mapped path: it requires +0x114 BSRenderedTexture. Otherwise +0x120 can admit the override path.
0x7FFE97: test    al, al
0x7FFE99: jz      short loc_7FFEA4
0x7FFE9B: cmp     dword ptr [ebp+114h], 0
0x7FFEA2: jnz     short loc_7FFEB1
0x7FFEA4: cmp     byte ptr [ebp+120h], 0; ShadowSceneLight +0x120 is the alternate/override admission byte when +0xF4 is clear or no +0x114 map is present.
0x7FFEAB: jz      loc_7FFF48
0x7FFEB1: cmp     byte ptr [edi+8], 0; Require the current shadow-light render context state byte at +0x08 to be nonzero.
0x7FFEB5: jbe     loc_7FFF48
0x7FFEBB: test    al, al
0x7FFEBD: jz      short loc_7FFF01
0x7FFEBF: call    BSShaderManager_IsShadowMappingReady; [Verified] Returns true only when BSShaderPackageVersion (RendererGlobalState+0xAF) >= 3 and BSShaderFeatureMask (RendererGlobalState+0xA7) contains native shadow-map bit 0x10. The version comparison independently corroborates the selector field read by GetShaderProgramPackageIndex.
0x7FFEC4: test    al, al
0x7FFEC6: jz      short loc_7FFF01
0x7FFEC8: fld1; Mapped shadow readiness success writes pixel c7.y=1; stock SM3023 does not consume c7.
0x7FFECA: fstp    dword ptr ds:0B46FECh
0x7FFED0: mov     ecx, [esi+24h]; Select NiD3DPass texture-stage array entry 2, the SM3023 shadow-map sampler stage.
0x7FFED3: mov     edi, [ecx+8]
0x7FFED6: mov     ecx, [ebp+114h]; Fetch the current ShadowSceneLight +0x114 BSRenderedTexture inner texture for selector 0x14E..0x151.
0x7FFEDC: call    BSRenderedTexture__GetInnerTexture
0x7FFEE1: push    eax; texture
0x7FFEE2: mov     ecx, edi; this
0x7FFEE4: call    NiD3DTextureStage_SetTexture; Bind the current shadow render target to Lighting30 texture stage 2 with reference transfer.
0x7FFEE9: push    1; filterPreset
0x7FFEEB: mov     ecx, edi; this
0x7FFEED: call    NiD3DTextureStage_ApplyFilterPreset; Apply native texture-filter preset 1 to the shadow-map stage.
0x7FFEF2: push    0; preset
0x7FFEF4: mov     ecx, edi; this
0x7FFEF6: call    NiD3DTextureStage_ApplyAddressModePreset; Apply native texture-address preset 0 (ADDRESSU/ADDRESSV table entry 0) to the shadow-map stage.
0x7FFEFB: mov     edi, ds:0B42EB8h
0x7FFF01: mov     edx, [edi+0Ch]
0x7FFF04: mov     ecx, [edx]
0x7FFF06: mov     al, [ebp+120h]
0x7FFF0C: fld     dword ptr [ecx+128h]; Write ShadowSceneLight+0x128 falloff exponent to pixel c7.z.
0x7FFF12: test    al, al
0x7FFF14: fstp    [esp+54h+arg_C]
0x7FFF18: jz      short loc_7FFF30
0x7FFF1A: fldz
0x7FFF1C: fst     dword ptr ds:0B46FF4h; ShadowSceneLight+0x120 selects pixel c7.w: set => 0, clear => 1.
0x7FFF22: fld1
0x7FFF24: fld     [esp+54h+arg_C]
0x7FFF28: fstp    dword ptr ds:0B46FF0h; Pixel c7.z backing slot (global 0x477); shared native setup value, unused by stock SM3023.
0x7FFF2E: jmp     short loc_7FFF4C
0x7FFF30: fld1
0x7FFF32: fst     dword ptr ds:0B46FF4h; Pixel c7.w backing slot (global 0x478); shared native setup value, unused by stock SM3023.
0x7FFF38: fldz
0x7FFF3A: fxch    st(1)
0x7FFF3C: fld     [esp+54h+arg_C]
0x7FFF40: fstp    dword ptr ds:0B46FF0h
0x7FFF46: jmp     short loc_7FFF4C
0x7FFF48: fldz
0x7FFF4A: fld1
0x7FFF4C: mov     ecx, [esp+54h+var_3C]
0x7FFF50: cmp     ecx, 14Dh
0x7FFF56: jnz     short loc_7FFFA1
0x7FFF58: mov     eax, [esp+54h+value]
0x7FFF5C: fld     dword ptr [eax+20h]
0x7FFF5F: fsub    dword ptr ds:0B3F92Ch
0x7FFF65: fstp    [esp+54h+value]
0x7FFF69: fld     dword ptr [eax+24h]
0x7FFF6C: fsub    dword ptr ds:0B3F930h
0x7FFF72: fstp    [esp+54h+arg_C]
0x7FFF76: fld     dword ptr [eax+28h]
0x7FFF79: fsub    dword ptr ds:0B3F934h
0x7FFF7F: fstp    [esp+54h+var_30]
0x7FFF83: fld     [esp+54h+value]
0x7FFF87: fstp    dword ptr ds:0B46E08h
0x7FFF8D: fld     [esp+54h+arg_C]
0x7FFF91: fstp    dword ptr ds:0B46E0Ch
0x7FFF97: fld     [esp+54h+var_30]
0x7FFF9B: fstp    dword ptr ds:0B46E10h
0x7FFFA1: mov     edx, [esp+54h+property]
0x7FFFA5: test    dword ptr [edx+1Ch], 80000h; Lighting30 shader-property flag 0x80000 selects mode-5 caster bias slope 1.0 / depth +0.0005.
0x7FFFAC: jbe     short loc_7FFFFA
0x7FFFAE: cmp     dword ptr [esi+30h], 0
0x7FFFB2: fstp    st(1)
0x7FFFB4: fstp    [esp+54h+value]
0x7FFFB8: jnz     short loc_7FFFC2
0x7FFFBA: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FFFBF: mov     [esi+30h], eax
0x7FFFC2: mov     eax, [esp+54h+value]
0x7FFFC6: mov     ecx, [esi+30h]
0x7FFFC9: push    0
0x7FFFCB: push    eax
0x7FFFCC: push    0AFh ; '¯'
0x7FFFD1: call    NiD3DRenderStateGroup_SetRenderState; Write D3DRS_SLOPESCALEDEPTHBIAS=1.0 for the Lighting30 flag-0x80000 caster path.
0x7FFFD6: fld     dword ptr ds:0A77830h; Load Lighting30 mode-5 flag-0x80000 D3DRS_DEPTHBIAS=+0.0005.
0x7FFFDC: cmp     dword ptr [esi+30h], 0
0x7FFFE0: fstp    [esp+54h+value]
0x7FFFE4: jnz     short loc_7FFFEE
0x7FFFE6: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x7FFFEB: mov     [esi+30h], eax
0x7FFFEE: mov     ecx, [esp+54h+value]
0x7FFFF2: push    0
0x7FFFF4: push    ecx
0x7FFFF5: jmp     loc_80008B
0x7FFFFA: add     ecx, 0FFFFFEB2h
0x800000: fstp    st; When flag 0x00080000 is clear, detect the exact selector 0x14E..0x151 family for its native depth-bias policy.
0x800002: cmp     ecx, 3
0x800005: fstp    [esp+54h+value]
0x800009: ja      short loc_80004E
0x80000B: cmp     dword ptr [esi+30h], 0
0x80000F: jnz     short loc_800019
0x800011: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x800016: mov     [esi+30h], eax
0x800019: mov     edx, [esp+54h+value]
0x80001D: mov     ecx, [esi+30h]
0x800020: push    0
0x800022: push    edx
0x800023: push    0AFh ; '¯'
0x800028: call    NiD3DRenderStateGroup_SetRenderState; Selectors 0x14E..0x151: D3DRS_SLOPESCALEDEPTHBIAS (175) = 0.0.
0x80002D: fld     dword ptr ds:0A906F4h; Selectors 0x14E..0x151: D3DRS_DEPTHBIAS (195) = -0.0001.
0x800033: cmp     dword ptr [esi+30h], 0
0x800037: fstp    [esp+54h+value]
0x80003B: jnz     short loc_800045
0x80003D: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x800042: mov     [esi+30h], eax
0x800045: mov     eax, [esp+54h+value]
0x800049: push    0
0x80004B: push    eax
0x80004C: jmp     short loc_80008B
0x80004E: cmp     dword ptr [esi+30h], 0
0x800052: jnz     short loc_80005C
0x800054: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x800059: mov     [esi+30h], eax
0x80005C: mov     ecx, [esp+54h+value]
0x800060: push    0
0x800062: push    ecx
0x800063: mov     ecx, [esi+30h]
0x800066: push    0AFh ; '¯'
0x80006B: call    NiD3DRenderStateGroup_SetRenderState; Selectors 0x154/0x155 without flag 0x80000 explicitly use slope-scale depth bias 0.0.
0x800070: fldz
0x800072: cmp     dword ptr [esi+30h], 0
0x800076: fstp    [esp+54h+value]
0x80007A: jnz     short loc_800084
0x80007C: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x800081: mov     [esi+30h], eax
0x800084: mov     edx, [esp+54h+value]
0x800088: push    0
0x80008A: push    edx
0x80008B: mov     ecx, [esi+30h]
0x80008E: push    0C3h ; 'Ã'; Selectors 0x154/0x155 without flag 0x80000 use depth bias 0.0; flag 0x80000 uses +0.0005.
0x800093: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x800098: mov     ebx, 1
0x80009D: add     [esi+60h], ebx
0x8000A0: mov     [esp+54h+value], esi
0x8000A4: mov     edi, [esp+54h+var_2C]
0x8000A8: mov     ecx, [edi+38h]
0x8000AB: lea     eax, [esp+54h+value]
0x8000AF: push    eax; value
0x8000B0: push    ecx; index
0x8000B1: lea     ecx, [edi+40h]; this
0x8000B4: mov     [esp+5Ch+var_4], 0
0x8000BC: call    NiTArray_NiD3DPass_SetAt; Valid selector only: insert the resolved NiD3DPass into the shader pass array.
0x8000C1: or      eax, 0FFFFFFFFh
0x8000C4: add     [esi+60h], eax
0x8000C7: mov     [esp+54h+var_4], eax
0x8000CB: jnz     short loc_8000D4
0x8000CD: mov     ecx, esi
0x8000CF: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8000D4: add     [edi+38h], ebx; Valid selector only: increment PassCount after the resolved pass has been queued.
0x8000D7: xor     eax, eax; Null-selector exit returns with the queue cleared and PassCount zero; renderer BeginPassLoop will suppress drawing.
0x8000D9: mov     ecx, dword ptr [esp+54h+var_C]
0x8000DD: mov     large fs:0, ecx
0x8000E4: pop     ecx
0x8000E5: pop     edi
0x8000E6: pop     esi
0x8000E7: pop     ebp
0x8000E8: pop     ebx
0x8000E9: add     esp, 40h
0x8000EC: retn    1Ch
0x9D0640: lea     ecx, [ebp+4]; void *
0x9D0643: jmp     sub_4027D0
0x9D0648: mov     edx, [esp+arg_4]
0x9D064C: lea     eax, [edx-44h]
0x9D064F: mov     ecx, [edx-48h]
0x9D0652: xor     ecx, eax
0x9D0654: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0659: mov     eax, offset stru_AF8FBC
0x9D065E: jmp     ___CxxFrameHandler3
