0x406950: push    0FFFFFFFFh; Retail world-scene construction: creates the world SceneGraph/ShadowSceneNode state consumed by NiRenderer_Render and ShadowPass.
0x406952: push    offset SEH_406950
0x406957: mov     eax, large fs:0
0x40695D: push    eax
0x40695E: sub     esp, 14h
0x406961: push    ebx
0x406962: push    ebp
0x406963: push    esi
0x406964: push    edi
0x406965: mov     eax, ___security_cookie
0x40696A: xor     eax, esp
0x40696C: push    eax
0x40696D: lea     eax, [esp+34h+var_C]
0x406971: mov     large fs:0, eax
0x406977: push    0F0h ; 'ð'; Size
0x40697C: call    FormHeapAlloc
0x406981: add     esp, 4
0x406984: mov     [esp+34h+a2], eax
0x406988: test    eax, eax
0x40698A: mov     [esp+34h+var_4], 0
0x406992: jz      short loc_4069A8
0x406994: push    0
0x406996: push    0
0x406998: push    offset aWorld; "World"
0x40699D: mov     ecx, eax; this
0x40699F: call    ??0SceneGraph@@QAE@XZ; MoonSugarEffect decode: SceneGraph constructor creates camera at +0xDC and cullingProcess at +0xE4; world scenegraph uses these in NiRenderer_Render.
0x4069A4: mov     esi, eax
0x4069A6: jmp     short loc_4069AA
0x4069A8: xor     esi, esi
0x4069AA: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x4069AF: cmp     eax, esi
0x4069B1: mov     ebx, ds:InterlockedDecrement
0x4069B7: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4069BF: jz      short loc_4069F3
0x4069C1: test    eax, eax
0x4069C3: jz      short loc_4069DF
0x4069C5: mov     edi, eax
0x4069C7: add     eax, 4
0x4069CA: push    eax; lpAddend
0x4069CB: call    ebx ; InterlockedDecrement
0x4069CD: test    eax, eax
0x4069CF: jnz     short loc_4069DF
0x4069D1: test    edi, edi
0x4069D3: jz      short loc_4069DF
0x4069D5: mov     eax, [edi]
0x4069D7: mov     edx, [eax]
0x4069D9: push    1
0x4069DB: mov     ecx, edi
0x4069DD: call    edx
0x4069DF: test    esi, esi
0x4069E1: mov     g_WorldSceneReceiverRoot, esi; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x4069E7: jz      short loc_4069F3
0x4069E9: add     esi, 4
0x4069EC: push    esi; lpAddend
0x4069ED: call    ds:InterlockedIncrement
0x4069F3: push    130h; Size
0x4069F8: call    FormHeapAlloc
0x4069FD: add     esp, 4
0x406A00: mov     [esp+34h+a2], eax
0x406A04: test    eax, eax
0x406A06: mov     [esp+34h+var_4], 1
0x406A0E: jz      short loc_406A1B
0x406A10: mov     ecx, eax; this
0x406A12: call    ??0ShadowSceneNode@@QAE@XZ; ShadowSceneNode constructor. Initializes full list (+0xE4..+0xF0), active list (+0xF4..+0x100), iterator/partition anchors, and persistent lights at +0x110/+0x114.
0x406A17: mov     ebp, eax
0x406A19: jmp     short loc_406A1D
0x406A1B: xor     ebp, ebp
0x406A1D: mov     ecx, ds:0B350D8h
0x406A23: mov     eax, dword ptr unk_B43104
0x406A28: cmp     eax, ecx
0x406A2A: mov     [esp+34h+var_4], 0FFFFFFFFh
0x406A32: mov     edi, ecx
0x406A34: jz      short loc_406A68
0x406A36: test    eax, eax
0x406A38: jz      short loc_406A54
0x406A3A: mov     esi, eax
0x406A3C: add     eax, 4
0x406A3F: push    eax; lpAddend
0x406A40: call    ebx ; InterlockedDecrement
0x406A42: test    eax, eax
0x406A44: jnz     short loc_406A54
0x406A46: test    esi, esi
0x406A48: jz      short loc_406A54
0x406A4A: mov     eax, [esi]
0x406A4C: mov     edx, [eax]
0x406A4E: push    1
0x406A50: mov     ecx, esi
0x406A52: call    edx
0x406A54: test    edi, edi
0x406A56: mov     dword ptr unk_B43104, edi
0x406A5C: jz      short loc_406A68
0x406A5E: add     edi, 4
0x406A61: push    edi; lpAddend
0x406A62: call    ds:InterlockedIncrement
0x406A68: xor     eax, eax
0x406A6A: lea     ebx, [ebx+0]
0x406A70: mov     cl, byte ptr ds:dataShaderPath[eax]; "data\\shaders\\"
0x406A76: mov     (OB_RendererGlobalState_010201A0.pad_0B3+1Ch)[eax], cl
0x406A7C: add     eax, 1
0x406A7F: test    cl, cl
0x406A81: jnz     short loc_406A70
0x406A83: call    sub_7BA0F0; MoonSugarEffect decode: shader system init prewarms shader definitions 1..27, then constructs imageSpaceShaderList if ImageSpaceEffectEnabled.
0x406A88: push    ebp
0x406A89: push    0
0x406A8B: mov     byte ptr [ebp+11Ch], 0
0x406A92: call    sub_7B4270
0x406A97: push    ebp
0x406A98: push    0
0x406A9A: call    sub_7B4270
0x406A9F: mov     cl, byte_B06CDC
0x406AA5: mov     al, byte_B06CE4
0x406AAA: sub     cl, 1
0x406AAD: mov     dl, byte_B06CD4
0x406AB3: add     esp, 10h
0x406AB6: neg     cl
0x406AB8: mov     edi, 2
0x406ABD: mov     OB_RendererGlobalState_010201A0.pad_00D+1, 0
0x406AC4: mov     OB_ShaderPassControl_010201A0.unk_01, 0; [Verified] World/display initialization clears OB_ShaderPassControl+1 before composing the independent BSShaderFeatureMask and shadow-caster category mask.
0x406ACB: sbb     ecx, ecx
0x406ACD: and     ecx, 0FFFFFFF8h
0x406AD0: sub     al, 1
0x406AD2: add     ecx, 8
0x406AD5: neg     al
0x406AD7: sbb     eax, eax
0x406AD9: and     eax, 0FFFFFFFCh
0x406ADC: add     eax, 4
0x406ADF: or      ecx, eax
0x406AE1: sub     dl, 1
0x406AE4: neg     dl
0x406AE6: sbb     edx, edx
0x406AE8: and     edx, 0FFFFFFFEh
0x406AEB: add     edx, edi
0x406AED: or      ecx, edx
0x406AEF: xor     eax, eax
0x406AF1: cmp     byte_B06CCC, 1
0x406AF8: setz    al
0x406AFB: or      ecx, eax
0x406AFD: or      ecx, 10h; Native world/display initialization unconditionally contributes BSShaderFeatureMask shadow-map bit 0x10.
0x406B00: cmp     byte_B06CBC, 0
0x406B07: jz      short loc_406B18
0x406B09: cmp     dword ptr OB_RendererGlobalState_010201A0.shaderPackageVersion_le, edi
0x406B0F: jl      short loc_406B18
0x406B11: mov     eax, 20h ; ' '
0x406B16: jmp     short loc_406B1A
0x406B18: xor     eax, eax
0x406B1A: or      eax, ecx; Display initialization conditionally contributes native canopy-shadow category bit 0x20.
0x406B1C: mov     cl, g_bDoStaticAndArchShadowsSetting; Read bDoStaticAndArchShadows:Display for startup category-mask composition.
0x406B22: mov     edx, dword ptr unk_B43104
0x406B28: mov     dword ptr OB_RendererGlobalState_010201A0.pad_00D+9Ah, eax; Publish the complete BSShaderFeatureMask assembled from display settings plus native shadow-map bit 0x10 and the conditional canopy bit 0x20.
0x406B2D: mov     al, g_bDoActorShadowsSetting
0x406B32: neg     al
0x406B34: push    edx
0x406B35: sbb     eax, eax
0x406B37: and     eax, 8
0x406B3A: neg     cl
0x406B3C: sbb     ecx, ecx
0x406B3E: and     ecx, edi
0x406B40: or      ecx, eax
0x406B42: mov     g_ShadowCasterCategoryMask, ecx; Publish g_ShadowCasterCategoryMask = (bDoStaticAndArchShadows ? 0x02 : 0) | (bDoActorShadows ? 0x08 : 0). This is separate from the master shadow-map feature bit.
0x406B48: mov     ecx, dword ptr OB_RendererGlobalState_010201A0.pad_0B3+4
0x406B4E: call    sub_7C2450; MoonSugarEffect decode: texture-manager render-target prewarm/release. Allocates/retrieves common HDR/image-space/default surfaces then returns them to the manager cache with sub_7C1EE0.
0x406B53: call    sub_4814C0
0x406B58: fldz
0x406B5A: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x406B60: fstp    flt_B44EE4; ShadowLight native caster depth-origin/override parameter. Zero selects the normal projected view-Z path; a positive value selects SLS2056/SLS2062 and supplies the alternate origin/range setup.
0x406B66: mov     dword ptr OB_RendererGlobalState_010201A0.pad_00D+0Eh, offset ClassifyShadowCasterCategory; Classify owner/base form into retail shadow category 0..6: unresolved, architecture, furniture, actors, items, misc, other.
0x406B70: mov     eax, [ecx]
0x406B72: mov     edx, [eax+84h]
0x406B78: push    0
0x406B7A: push    ebp
0x406B7B: call    edx
0x406B7D: push    1Ch; Size
0x406B7F: call    FormHeapAlloc
0x406B84: mov     esi, eax
0x406B86: add     esp, 4
0x406B89: mov     [esp+34h+a2], esi
0x406B8D: test    esi, esi
0x406B8F: mov     [esp+34h+var_4], edi
0x406B93: jz      short loc_406BAA
0x406B95: mov     ecx, esi; this
0x406B97: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x406B9C: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x406BA2: mov     word ptr [esi+18h], 8
0x406BA8: jmp     short loc_406BAC
0x406BAA: xor     esi, esi
0x406BAC: mov     ax, [esi+18h]
0x406BB0: and     ax, 0FFEFh
0x406BB4: or      ax, 28h
0x406BB8: push    esi; a2
0x406BB9: mov     ecx, ebp; this
0x406BBB: mov     [esp+38h+a2], esi
0x406BBF: mov     [esp+38h+var_4], 0FFFFFFFFh
0x406BC7: mov     [esi+18h], ax
0x406BCB: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406BD0: push    1Ch; Size
0x406BD2: call    FormHeapAlloc
0x406BD7: mov     edi, eax
0x406BD9: add     esp, 4
0x406BDC: mov     [esp+34h+var_1C], edi
0x406BE0: test    edi, edi
0x406BE2: mov     esi, 3
0x406BE7: mov     [esp+34h+var_4], esi
0x406BEB: jz      short loc_406C04
0x406BED: mov     ecx, edi; this
0x406BEF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x406BF4: mov     dword ptr [edi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x406BFA: mov     word ptr [edi+18h], 0Fh
0x406C00: mov     ebx, edi
0x406C02: jmp     short loc_406C06
0x406C04: xor     ebx, ebx
0x406C06: or      [ebx+18h], si
0x406C0A: or      edi, 0FFFFFFFFh
0x406C0D: push    ebx; a2
0x406C0E: mov     ecx, ebp; this
0x406C10: mov     [esp+38h+var_4], edi
0x406C14: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406C19: push    1Ch; Size
0x406C1B: call    FormHeapAlloc
0x406C20: mov     esi, eax
0x406C22: add     esp, 4
0x406C25: mov     [esp+34h+var_1C], esi
0x406C29: test    esi, esi
0x406C2B: mov     [esp+34h+var_4], 4
0x406C33: jz      short loc_406C4A
0x406C35: mov     ecx, esi; this
0x406C37: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x406C3C: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x406C42: mov     word ptr [esi+18h], 0
0x406C48: jmp     short loc_406C4C
0x406C4A: xor     esi, esi
0x406C4C: mov     eax, dword ptr unk_B333E0
0x406C51: cmp     eax, esi
0x406C53: mov     [esp+34h+var_4], edi
0x406C57: jz      short loc_406C95
0x406C59: test    eax, eax
0x406C5B: jz      short loc_406C7B
0x406C5D: mov     edi, eax
0x406C5F: add     eax, 4
0x406C62: push    eax; lpAddend
0x406C63: call    ds:InterlockedDecrement
0x406C69: test    eax, eax
0x406C6B: jnz     short loc_406C7B
0x406C6D: test    edi, edi
0x406C6F: jz      short loc_406C7B
0x406C71: mov     edx, [edi]
0x406C73: mov     eax, [edx]
0x406C75: push    1
0x406C77: mov     ecx, edi
0x406C79: call    eax
0x406C7B: test    esi, esi
0x406C7D: mov     eax, esi
0x406C7F: mov     dword ptr unk_B333E0, eax
0x406C84: jz      short loc_406C95
0x406C86: add     esi, 4
0x406C89: push    esi; lpAddend
0x406C8A: call    ds:InterlockedIncrement
0x406C90: mov     eax, dword ptr unk_B333E0
0x406C95: and     word ptr [eax+18h], 0FFFEh
0x406C9B: mov     ecx, dword ptr unk_B333E0
0x406CA1: push    ecx; a2
0x406CA2: mov     ecx, ebp; this
0x406CA4: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406CA9: push    34h ; '4'; Size
0x406CAB: call    FormHeapAlloc
0x406CB0: add     esp, 4
0x406CB3: mov     [esp+34h+var_1C], eax
0x406CB7: test    eax, eax
0x406CB9: mov     [esp+34h+var_4], 5
0x406CC1: jz      short loc_406CCE
0x406CC3: mov     ecx, eax
0x406CC5: call    NiFogProperty_constr; Fog decode: constructs full BSFogProperty. Base NiFogProperty fields use default color; extension adds fogStart +0x2C and fogEnd +0x30.
0x406CCA: mov     esi, eax; Fog decode: scene setup constructs the global active BSFogProperty for B333E4 via NiFogProperty_constr. This is the active world fog object, not the plain startup NiFogProperty default.
0x406CCC: jmp     short loc_406CD0
0x406CCE: xor     esi, esi
0x406CD0: mov     eax, dword ptr unk_B333E4
0x406CD5: cmp     eax, esi
0x406CD7: mov     [esp+34h+var_4], 0FFFFFFFFh
0x406CDF: jz      short loc_406D1D
0x406CE1: test    eax, eax
0x406CE3: jz      short loc_406D03
0x406CE5: mov     edi, eax
0x406CE7: add     eax, 4
0x406CEA: push    eax; lpAddend
0x406CEB: call    ds:InterlockedDecrement
0x406CF1: test    eax, eax
0x406CF3: jnz     short loc_406D03
0x406CF5: test    edi, edi
0x406CF7: jz      short loc_406D03
0x406CF9: mov     edx, [edi]
0x406CFB: mov     eax, [edx]
0x406CFD: push    1
0x406CFF: mov     ecx, edi
0x406D01: call    eax
0x406D03: test    esi, esi
0x406D05: mov     eax, esi
0x406D07: mov     dword ptr unk_B333E4, eax; Fog decode: stores the active global BSFogProperty pointer into B333E4.
0x406D0C: jz      short loc_406D1D
0x406D0E: add     esi, 4
0x406D11: push    esi; lpAddend
0x406D12: call    ds:InterlockedIncrement
0x406D18: mov     eax, dword ptr unk_B333E4
0x406D1D: or      word ptr [eax+18h], 1; Fog decode: enables the B333E4 fog property by setting flags bit 0.
0x406D22: fld1
0x406D24: push    ecx
0x406D25: fstp    [esp+38h+a6]; float
0x406D28: mov     ecx, dword ptr unk_B333E4
0x406D2E: call    sub_7C8270; Fog decode: initializes B333E4 BSFogProperty default fogStart/fogEnd through 0x7C8270.
0x406D33: mov     ecx, dword ptr unk_B333E4
0x406D39: push    ecx; a2
0x406D3A: mov     ecx, ebp; this
0x406D3C: call    sub_405680; Fog decode: attaches B333E4 to the root/sky scene node. Property propagation puts it in NiPropertyState slot type 1 / +0x0C for render consumers.
0x406D41: push    0DCh ; 'Ü'; Size
0x406D46: call    FormHeapAlloc
0x406D4B: add     esp, 4
0x406D4E: mov     [esp+34h+var_1C], eax
0x406D52: test    eax, eax
0x406D54: mov     [esp+34h+var_4], 6
0x406D5C: jz      short loc_406D6B
0x406D5E: push    0
0x406D60: mov     ecx, eax; this
0x406D62: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x406D67: mov     esi, eax
0x406D69: jmp     short loc_406D6D
0x406D6B: xor     esi, esi
0x406D6D: mov     ecx, dword ptr root
0x406D73: cmp     ecx, esi
0x406D75: mov     [esp+34h+var_4], 0FFFFFFFFh
0x406D7D: jz      short loc_406DBD
0x406D7F: test    ecx, ecx
0x406D81: jz      short loc_406DA1
0x406D83: mov     edi, ecx
0x406D85: add     ecx, 4
0x406D88: push    ecx; lpAddend
0x406D89: call    ds:InterlockedDecrement
0x406D8F: test    eax, eax
0x406D91: jnz     short loc_406DA1
0x406D93: test    edi, edi
0x406D95: jz      short loc_406DA1
0x406D97: mov     edx, [edi]
0x406D99: mov     eax, [edx]
0x406D9B: push    1
0x406D9D: mov     ecx, edi
0x406D9F: call    eax
0x406DA1: test    esi, esi
0x406DA3: mov     ecx, esi
0x406DA5: mov     dword ptr root, ecx
0x406DAB: jz      short loc_406DBD
0x406DAD: add     esi, 4
0x406DB0: push    esi; lpAddend
0x406DB1: call    ds:InterlockedIncrement
0x406DB7: mov     ecx, dword ptr root
0x406DBD: push    offset off_A30044; Src
0x406DC2: call    NiObjectNET_SetName
0x406DC7: mov     edx, [ebp+0]
0x406DCA: mov     eax, dword ptr root
0x406DCF: mov     edx, [edx+84h]
0x406DD5: push    0
0x406DD7: push    eax
0x406DD8: mov     ecx, ebp
0x406DDA: call    edx
0x406DDC: push    0DCh ; 'Ü'; Size
0x406DE1: call    FormHeapAlloc
0x406DE6: add     esp, 4
0x406DE9: mov     [esp+34h+var_1C], eax
0x406DED: test    eax, eax
0x406DEF: mov     [esp+34h+var_4], 7
0x406DF7: jz      short loc_406E06
0x406DF9: push    0
0x406DFB: mov     ecx, eax; this
0x406DFD: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x406E02: mov     esi, eax
0x406E04: jmp     short loc_406E08
0x406E06: xor     esi, esi
0x406E08: mov     ecx, dword ptr unk_B333DC
0x406E0E: cmp     ecx, esi
0x406E10: mov     [esp+34h+var_4], 0FFFFFFFFh
0x406E18: jz      short loc_406E58
0x406E1A: test    ecx, ecx
0x406E1C: jz      short loc_406E3C
0x406E1E: mov     edi, ecx
0x406E20: add     ecx, 4
0x406E23: push    ecx; lpAddend
0x406E24: call    ds:InterlockedDecrement
0x406E2A: test    eax, eax
0x406E2C: jnz     short loc_406E3C
0x406E2E: test    edi, edi
0x406E30: jz      short loc_406E3C
0x406E32: mov     eax, [edi]
0x406E34: mov     edx, [eax]
0x406E36: push    1
0x406E38: mov     ecx, edi
0x406E3A: call    edx
0x406E3C: test    esi, esi
0x406E3E: mov     ecx, esi
0x406E40: mov     dword ptr unk_B333DC, ecx
0x406E46: jz      short loc_406E58
0x406E48: add     esi, 4
0x406E4B: push    esi; lpAddend
0x406E4C: call    ds:InterlockedIncrement
0x406E52: mov     ecx, dword ptr unk_B333DC
0x406E58: push    offset aWeather; "Weather"
0x406E5D: call    NiObjectNET_SetName
0x406E62: mov     ecx, dword ptr unk_B333DC; this
0x406E68: push    ebx; a2
0x406E69: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406E6E: mov     eax, dword ptr unk_B333E0
0x406E73: mov     ecx, dword ptr unk_B333DC; this
0x406E79: push    eax; a2
0x406E7A: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406E7F: mov     ecx, [esp+34h+a2]
0x406E83: push    ecx; a2
0x406E84: mov     ecx, dword ptr unk_B333DC; this
0x406E8A: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x406E8F: mov     edx, [ebp+0]
0x406E92: mov     eax, dword ptr unk_B333DC
0x406E97: mov     edx, [edx+84h]
0x406E9D: push    0
0x406E9F: push    eax
0x406EA0: mov     ecx, ebp
0x406EA2: call    edx
0x406EA4: call    InterfaceMenuScenegraph_Create
0x406EA9: call    Interface3dScenegraph_Create
0x406EAE: push    0E8h ; 'è'; Size
0x406EB3: call    FormHeapAlloc
0x406EB8: add     esp, 4
0x406EBB: mov     [esp+34h+var_1C], eax
0x406EBF: test    eax, eax
0x406EC1: mov     [esp+34h+var_4], 8
0x406EC9: jz      short loc_406ED4
0x406ECB: mov     ecx, eax
0x406ECD: call    sub_49FFE0
0x406ED2: jmp     short loc_406ED6
0x406ED4: xor     eax, eax
0x406ED6: or      edi, 0FFFFFFFFh
0x406ED9: push    offset aLodroot; "LODRoot"
0x406EDE: mov     ecx, eax
0x406EE0: mov     [esp+38h+var_4], edi
0x406EE4: mov     ds:0B333A8h, eax
0x406EE9: call    NiObjectNET_SetName
0x406EEE: mov     ecx, ds:0B333A8h
0x406EF4: mov     eax, [ebp+0]
0x406EF7: mov     edx, [eax+84h]
0x406EFD: push    0
0x406EFF: push    ecx
0x406F00: mov     ecx, ebp
0x406F02: call    edx
0x406F04: push    0DCh ; 'Ü'; Size
0x406F09: call    FormHeapAlloc
0x406F0E: add     esp, 4
0x406F11: mov     [esp+34h+var_1C], eax
0x406F15: test    eax, eax
0x406F17: mov     [esp+34h+var_4], 9
0x406F1F: jz      short loc_406F2E
0x406F21: push    0
0x406F23: mov     ecx, eax; this
0x406F25: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x406F2A: mov     esi, eax
0x406F2C: jmp     short loc_406F30
0x406F2E: xor     esi, esi
0x406F30: push    offset aLandlod; "LandLOD"
0x406F35: mov     ecx, esi
0x406F37: mov     [esp+38h+var_4], edi
0x406F3B: call    NiObjectNET_SetName
0x406F40: mov     ecx, ds:0B333A8h
0x406F46: mov     eax, [ecx]
0x406F48: mov     edx, [eax+84h]
0x406F4E: push    0
0x406F50: push    esi
0x406F51: call    edx
0x406F53: fldz
0x406F55: fst     [esp+34h+var_18]
0x406F59: push    0DCh ; 'Ü'; Size
0x406F5E: mov     eax, [esp+38h+var_18]
0x406F62: fstp    [esp+38h+var_14]
0x406F66: fld     flt_B02D68
0x406F6C: mov     ecx, [esp+38h+var_14]
0x406F70: mov     [esi+54h], eax
0x406F73: fstp    [esp+38h+var_10]
0x406F77: mov     edx, [esp+38h+var_10]
0x406F7B: mov     [esi+58h], ecx
0x406F7E: mov     [esi+5Ch], edx
0x406F81: call    FormHeapAlloc
0x406F86: add     esp, 4
0x406F89: mov     [esp+34h+var_1C], eax
0x406F8D: test    eax, eax
0x406F8F: mov     [esp+34h+var_4], 0Ah
0x406F97: jz      short loc_406FA6
0x406F99: push    0
0x406F9B: mov     ecx, eax; this
0x406F9D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x406FA2: mov     esi, eax
0x406FA4: jmp     short loc_406FA8
0x406FA6: xor     esi, esi
0x406FA8: push    offset aDistantreflod; "DistantRefLOD"
0x406FAD: mov     ecx, esi
0x406FAF: mov     [esp+38h+var_4], edi
0x406FB3: call    NiObjectNET_SetName
0x406FB8: mov     ecx, ds:0B333A8h
0x406FBE: mov     eax, [ecx]
0x406FC0: mov     edx, [eax+84h]
0x406FC6: push    0
0x406FC8: push    esi
0x406FC9: call    edx
0x406FCB: push    0DCh ; 'Ü'; Size
0x406FD0: call    FormHeapAlloc
0x406FD5: add     esp, 4
0x406FD8: mov     [esp+34h+var_1C], eax
0x406FDC: test    eax, eax
0x406FDE: mov     [esp+34h+var_4], 0Bh
0x406FE6: jz      short loc_406FF5
0x406FE8: push    0
0x406FEA: mov     ecx, eax; this
0x406FEC: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x406FF1: mov     edi, eax
0x406FF3: jmp     short loc_406FF7
0x406FF5: xor     edi, edi
0x406FF7: or      ebx, 0FFFFFFFFh
0x406FFA: push    offset aLodTrees; "LOD Trees"
0x406FFF: mov     ecx, edi
0x407001: mov     [esp+38h+var_4], ebx
0x407005: call    NiObjectNET_SetName
0x40700A: mov     eax, [esi]
0x40700C: mov     edx, [eax+84h]
0x407012: push    0
0x407014: push    edi
0x407015: mov     ecx, esi
0x407017: call    edx
0x407019: push    0DCh ; 'Ü'; Size
0x40701E: mov     ds:0B42D64h, edi
0x407024: call    FormHeapAlloc
0x407029: add     esp, 4
0x40702C: mov     [esp+34h+var_1C], eax
0x407030: test    eax, eax
0x407032: mov     [esp+34h+var_4], 0Ch
0x40703A: jz      short loc_407047
0x40703C: push    0
0x40703E: mov     ecx, eax; this
0x407040: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x407045: jmp     short loc_407049
0x407047: xor     eax, eax
0x407049: push    offset aObjectlodroot; "ObjectLODRoot"
0x40704E: mov     ecx, eax
0x407050: mov     [esp+38h+var_4], ebx
0x407054: mov     ds:0B333ACh, eax
0x407059: call    NiObjectNET_SetName
0x40705E: mov     ecx, ds:0B333ACh
0x407064: mov     eax, [ebp+0]
0x407067: mov     edx, [eax+84h]
0x40706D: push    0
0x40706F: push    ecx
0x407070: mov     ecx, ebp
0x407072: call    edx
0x407074: push    0DCh ; 'Ü'; Size
0x407079: call    FormHeapAlloc
0x40707E: add     esp, 4
0x407081: mov     [esp+34h+var_1C], eax
0x407085: test    eax, eax
0x407087: mov     [esp+34h+var_4], 0Dh
0x40708F: jz      short loc_40709C
0x407091: push    0
0x407093: mov     ecx, eax; this
0x407095: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x40709A: jmp     short loc_40709E
0x40709C: xor     eax, eax
0x40709E: push    offset aMagicprojectil; "MagicProjectileRoot"
0x4070A3: mov     ecx, eax
0x4070A5: mov     [esp+38h+var_4], ebx
0x4070A9: mov     ds:0B333A4h, eax
0x4070AE: call    NiObjectNET_SetName
0x4070B3: mov     ecx, ds:0B333A4h
0x4070B9: mov     eax, [ebp+0]
0x4070BC: mov     edx, [eax+84h]
0x4070C2: push    0
0x4070C4: push    ecx
0x4070C5: mov     ecx, ebp
0x4070C7: call    edx
0x4070C9: mov     eax, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x4070CE: cmp     word ptr [eax+0B6h], 0
0x4070D6: ja      short loc_4070DC
0x4070D8: xor     eax, eax
0x4070DA: jmp     short loc_4070E4
0x4070DC: mov     eax, [eax+0B0h]
0x4070E2: mov     eax, [eax]
0x4070E4: fldz
0x4070E6: fst     [esp+34h+var_18]
0x4070EA: mov     ecx, [esp+34h+var_18]
0x4070EE: fstp    [esp+34h+var_14]
0x4070F2: fld     ds:flt_A2FFE8
0x4070F8: mov     edx, [esp+34h+var_14]
0x4070FC: mov     [eax+54h], ecx
0x4070FF: fstp    [esp+34h+var_10]
0x407103: mov     ecx, [esp+34h+var_10]
0x407107: mov     [eax+58h], edx
0x40710A: mov     [eax+5Ch], ecx
0x40710D: mov     ecx, g_WorldSceneReceiverRoot; this
0x407113: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x407118: mov     ecx, g_WorldSceneReceiverRoot; Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
0x40711E: call    NiNode_UpdateDynamicEffectState
0x407123: fldz
0x407125: push    1; a3
0x407127: push    ecx
0x407128: mov     ecx, g_WorldSceneReceiverRoot; this
0x40712E: fstp    [esp+3Ch+a5]; a2
0x407131: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x407136: cmp     dword ptr ds:0B333ECh, 0
0x40713D: mov     dl, byte_B06DC4
0x407143: mov     byte ptr unk_B33396, dl
0x407149: jnz     loc_4073B8
0x40714F: cmp     OB_RendererGlobalState_010201A0.pad_00D+98h, 0
0x407156: jnz     loc_4073B8
0x40715C: push    0C0h ; 'À'; Size
0x407161: call    FormHeapAlloc
0x407166: mov     esi, eax
0x407168: add     esp, 4
0x40716B: mov     [esp+34h+var_1C], esi
0x40716F: test    esi, esi
0x407171: mov     ebx, 0Eh
0x407176: mov     [esp+34h+var_4], ebx
0x40717A: jz      short loc_4071CA
0x40717C: push    70h ; 'p'; Size
0x40717E: call    FormHeapAlloc
0x407183: add     esp, 4
0x407186: mov     [esp+34h+a2], eax
0x40718A: test    eax, eax
0x40718C: mov     byte ptr [esp+34h+var_4], 0Fh
0x407191: jz      short loc_4071BA
0x407193: push    1; a10
0x407195: push    2; a9
0x407197: push    1; a8
0x407199: push    4; a7
0x40719B: push    1; a6
0x40719D: push    1; a5
0x40719F: push    1; a4
0x4071A1: push    0; a3
0x4071A3: push    0; a2
0x4071A5: mov     ecx, eax; this
0x4071A7: call    NiScreenElementsData__Construct
0x4071AC: push    eax; a2
0x4071AD: mov     ecx, esi; this
0x4071AF: mov     byte ptr [esp+38h+var_4], bl
0x4071B3: call    NiScreenElements__NiScreenElements
0x4071B8: jmp     short loc_4071CC
0x4071BA: xor     eax, eax
0x4071BC: push    eax; a2
0x4071BD: mov     ecx, esi; this
0x4071BF: mov     byte ptr [esp+38h+var_4], bl
0x4071C3: call    NiScreenElements__NiScreenElements
0x4071C8: jmp     short loc_4071CC
0x4071CA: xor     eax, eax
0x4071CC: or      edi, 0FFFFFFFFh
0x4071CF: push    eax; a2
0x4071D0: mov     ecx, 0B333ECh; this
0x4071D5: mov     [esp+38h+var_4], edi
0x4071D9: call    NiSmartPointer_Set??
0x4071DE: mov     eax, ds:0B333ECh
0x4071E3: mov     ecx, [eax+0B4h]; this
0x4071E9: push    0; Src
0x4071EB: push    0; a3
0x4071ED: push    4; a2
0x4071EF: call    sub_702970
0x4071F4: fld1
0x4071F6: mov     ecx, ds:0B333ECh
0x4071FC: mov     ecx, [ecx+0B4h]; this
0x407202: sub     esp, 10h
0x407205: fst     [esp+44h+a6]; a6
0x407209: fstp    [esp+44h+a5]; a5
0x40720D: fldz
0x40720F: fst     [esp+44h+a4]; a4
0x407213: fstp    [esp+44h+a3]; a3
0x407216: push    0; a2
0x407218: call    sub_702EC0; MoonSugarEffect decode: sets 4-vertex screen polygon positions. For image-space quad arguments resolve to (-1,1), (-1,-1), (1,-1), (1,1), z=0.
0x40721D: mov     edx, ds:0B333ECh
0x407223: mov     ecx, [edx+0B4h]; this
0x407229: call    sub_703050
0x40722E: fld1
0x407230: mov     eax, ds:0B333ECh
0x407235: mov     ecx, [eax+0B4h]; this
0x40723B: sub     esp, 10h
0x40723E: fst     [esp+44h+a6]; a7
0x407242: fstp    [esp+44h+a5]; a6
0x407246: fldz
0x407248: fst     [esp+44h+a4]; a5
0x40724C: fstp    [esp+44h+a3]; a4
0x40724F: push    0; a3
0x407251: push    0; a2
0x407253: call    sub_702FC0; MoonSugarEffect decode: sets 4-vertex screen polygon UVs for one texture set. Image-space quad uses UV rectangle 0,0 to 1,1.
0x407258: push    1Ch; Size
0x40725A: call    FormHeapAlloc
0x40725F: mov     esi, eax
0x407261: add     esp, 4
0x407264: mov     [esp+34h+var_1C], esi
0x407268: test    esi, esi
0x40726A: mov     [esp+34h+var_4], 10h
0x407272: jz      short loc_407289
0x407274: mov     ecx, esi; this
0x407276: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x40727B: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x407281: mov     word ptr [esi+18h], 8
0x407287: jmp     short loc_40728B
0x407289: xor     esi, esi
0x40728B: and     word ptr [esi+18h], 0FFC7h
0x407291: mov     ecx, ds:0B333ECh; this
0x407297: push    esi; a2
0x407298: mov     [esp+38h+var_4], edi
0x40729C: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x4072A1: push    5Ch ; '\'; Size
0x4072A3: call    FormHeapAlloc
0x4072A8: add     esp, 4
0x4072AB: mov     [esp+34h+var_1C], eax
0x4072AF: test    eax, eax
0x4072B1: mov     [esp+34h+var_4], 11h
0x4072B9: jz      short loc_4072C4
0x4072BB: mov     ecx, eax; this
0x4072BD: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x4072C2: jmp     short loc_4072C6
0x4072C4: xor     eax, eax
0x4072C6: mov     ecx, stru_B25AC4.x
0x4072CC: mov     [eax+40h], ecx
0x4072CF: mov     edx, stru_B25AC4.y
0x4072D5: mov     [eax+44h], edx
0x4072D8: mov     ecx, stru_B25AC4.z
0x4072DE: add     dword ptr [eax+54h], 1
0x4072E2: mov     [eax+48h], ecx
0x4072E5: mov     ecx, ds:0B333ECh; this
0x4072EB: push    eax; a2
0x4072EC: mov     [esp+38h+var_4], edi
0x4072F0: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x4072F5: push    1Ch; Size
0x4072F7: call    FormHeapAlloc
0x4072FC: mov     esi, eax
0x4072FE: add     esp, 4
0x407301: mov     [esp+34h+var_1C], esi
0x407305: test    esi, esi
0x407307: mov     [esp+34h+var_4], 12h
0x40730F: jz      short loc_407326
0x407311: mov     ecx, esi; this
0x407313: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x407318: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x40731E: mov     word ptr [esi+18h], 0Fh
0x407324: jmp     short loc_407328
0x407326: xor     esi, esi
0x407328: and     word ptr [esi+18h], 0FFFCh
0x40732E: mov     ecx, ds:0B333ECh; this
0x407334: push    esi; a2
0x407335: mov     [esp+38h+var_4], edi
0x407339: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x40733E: push    30h ; '0'; Size
0x407340: call    FormHeapAlloc
0x407345: add     esp, 4
0x407348: mov     [esp+34h+var_1C], eax
0x40734C: test    eax, eax
0x40734E: mov     [esp+34h+var_4], 13h
0x407356: jz      short loc_407363
0x407358: mov     ecx, eax
0x40735A: call    NiTexturingProperty__NiTexturingProperty
0x40735F: mov     esi, eax
0x407361: jmp     short loc_407365
0x407363: xor     esi, esi
0x407365: mov     ecx, dword ptr texture; this
0x40736B: mov     [esp+34h+var_4], edi
0x40736F: call    BSRenderedTexture__GetInnerTexture
0x407374: push    eax; texture
0x407375: mov     ecx, esi; this
0x407377: call    OB_NiTexturingProperty_SetBaseTexture_010201A0
0x40737C: push    0; a2
0x40737E: mov     ecx, esi; this
0x407380: call    NiTexturingProperty_SetBaseMapFilterMode
0x407385: push    0; value
0x407387: mov     ecx, esi; this
0x407389: call    OB_NiTexturingProperty_SetClampMode_010201A0; NiTexturingProperty map flag helper: ensures map slot 0 exists and writes arg-derived bits into map Unk04 bits 0xC000. 0x560AC0 calls it with 0 for billboard texture property state.
0x40738E: mov     ecx, ds:0B333ECh; this
0x407394: push    esi; a2
0x407395: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x40739A: mov     ecx, ds:0B333ECh; this
0x4073A0: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x4073A5: fldz
0x4073A7: push    1; a3
0x4073A9: push    ecx
0x4073AA: mov     ecx, ds:0B333ECh; this
0x4073B0: fstp    [esp+3Ch+a5]; a2
0x4073B3: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x4073B8: mov     ecx, dword ptr [esp+34h+var_C]
0x4073BC: mov     large fs:0, ecx
0x4073C3: pop     ecx
0x4073C4: pop     edi
0x4073C5: pop     esi
0x4073C6: pop     ebp
0x4073C7: pop     ebx
0x4073C8: add     esp, 20h
0x4073CB: retn
0x9A9F90: mov     eax, [ebp-20h]
0x9A9F93: push    eax
0x9A9F94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9F99: pop     ecx
0x9A9F9A: retn
0x9A9F9B: mov     eax, [ebp-20h]
0x9A9F9E: push    eax
0x9A9F9F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FA4: pop     ecx
0x9A9FA5: retn
0x9A9FA6: mov     eax, [ebp-20h]
0x9A9FA9: push    eax
0x9A9FAA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FAF: pop     ecx
0x9A9FB0: retn
0x9A9FB1: mov     eax, [ebp-1Ch]
0x9A9FB4: push    eax
0x9A9FB5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FBA: pop     ecx
0x9A9FBB: retn
0x9A9FBC: mov     eax, [ebp-1Ch]
0x9A9FBF: push    eax
0x9A9FC0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FC5: pop     ecx
0x9A9FC6: retn
0x9A9FC7: mov     eax, [ebp-1Ch]
0x9A9FCA: push    eax
0x9A9FCB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FD0: pop     ecx
0x9A9FD1: retn
0x9A9FD2: mov     eax, [ebp-1Ch]
0x9A9FD5: push    eax
0x9A9FD6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FDB: pop     ecx
0x9A9FDC: retn
0x9A9FDD: mov     eax, [ebp-1Ch]
0x9A9FE0: push    eax
0x9A9FE1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FE6: pop     ecx
0x9A9FE7: retn
0x9A9FE8: mov     eax, [ebp-1Ch]
0x9A9FEB: push    eax
0x9A9FEC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FF1: pop     ecx
0x9A9FF2: retn
0x9A9FF3: mov     eax, [ebp-1Ch]
0x9A9FF6: push    eax
0x9A9FF7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9FFC: pop     ecx
0x9A9FFD: retn
0x9A9FFE: mov     eax, [ebp-1Ch]
0x9AA001: push    eax
0x9AA002: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA007: pop     ecx
0x9AA008: retn
0x9AA009: mov     eax, [ebp-1Ch]
0x9AA00C: push    eax
0x9AA00D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA012: pop     ecx
0x9AA013: retn
0x9AA014: mov     eax, [ebp-1Ch]
0x9AA017: push    eax
0x9AA018: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA01D: pop     ecx
0x9AA01E: retn
0x9AA01F: mov     eax, [ebp-1Ch]
0x9AA022: push    eax
0x9AA023: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA028: pop     ecx
0x9AA029: retn
0x9AA02A: mov     eax, [ebp-1Ch]
0x9AA02D: push    eax
0x9AA02E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA033: pop     ecx
0x9AA034: retn
0x9AA035: mov     eax, [ebp-20h]
0x9AA038: push    eax
0x9AA039: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA03E: pop     ecx
0x9AA03F: retn
0x9AA040: mov     eax, [ebp-1Ch]
0x9AA043: push    eax
0x9AA044: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA049: pop     ecx
0x9AA04A: retn
0x9AA04B: mov     eax, [ebp-1Ch]
0x9AA04E: push    eax
0x9AA04F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA054: pop     ecx
0x9AA055: retn
0x9AA056: mov     eax, [ebp-1Ch]
0x9AA059: push    eax
0x9AA05A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA05F: pop     ecx
0x9AA060: retn
0x9AA061: mov     eax, [ebp-1Ch]
0x9AA064: push    eax
0x9AA065: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AA06A: pop     ecx
0x9AA06B: retn
0x9AA06C: mov     edx, [esp+arg_4]
0x9AA070: lea     eax, [edx-24h]
0x9AA073: mov     ecx, [edx-28h]
0x9AA076: xor     ecx, eax
0x9AA078: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA07D: mov     eax, offset stru_AD7004
0x9AA082: jmp     ___CxxFrameHandler3
