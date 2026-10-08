0x7D46C0: push    ebp; Oblivion per-source shadow-map producer. Binds and clears the pooled R32F texture plus shared compatible depth/stencil, installs the full-map projector viewport, draws mode-5 caster buckets, captures matrices, and ends the target. The texture buffer uses its own level-0 D3D surface and requires no end-of-target copy or resolve.
0x7D46C1: mov     ebp, esp
0x7D46C3: and     esp, 0FFFFFFF0h
0x7D46C6: push    0FFFFFFFFh
0x7D46C8: push    offset ShadowSceneLight_Render???_SEH
0x7D46CD: mov     eax, large fs:0
0x7D46D3: push    eax
0x7D46D4: sub     esp, 1F8h
0x7D46DA: push    ebx
0x7D46DB: push    esi
0x7D46DC: push    edi
0x7D46DD: mov     eax, ds:0B30AACh
0x7D46E2: xor     eax, esp
0x7D46E4: push    eax
0x7D46E5: lea     eax, [esp+214h+var_C]
0x7D46EC: mov     large fs:0, eax
0x7D46F2: mov     ebx, ecx
0x7D46F4: mov     [esp+214h+var_1A0], ebx
0x7D46F8: mov     al, [ebx+0F4h]; Normal per-source rendering checks +0xF4 together with renderer/shader class >=3 and shadow feature bit 0x10.
0x7D46FE: test    al, al
0x7D4700: jz      short loc_7D471E
0x7D4702: cmp     dword ptr ds:0B42F48h, 3
0x7D4709: jl      short loc_7D471E
0x7D470B: test    byte ptr ds:0B42F40h, 10h
0x7D4712: mov     eax, 0
0x7D4717: setnle  al
0x7D471A: test    al, al
0x7D471C: jnz     short loc_7D472B
0x7D471E: cmp     byte ptr [ebx+120h], 0; Shadow map generation is eligible when the ordinary +0xF4/class/feature gate succeeds or +0x120 overrides that gate; status +0x118 and fade +0xD8 still gate rendering.
0x7D4725: jz      loc_7D52BC
0x7D472B: cmp     word ptr [ebx+118h], 0FFh
0x7D4734: jz      loc_7D52BC
0x7D473A: fld     dword ptr [ebx+0D8h]
0x7D4740: fcomp   qword ptr ds:0A30068h
0x7D4746: fnstsw  ax
0x7D4748: test    ah, 41h
0x7D474B: jnp     loc_7D52BC
0x7D4751: cmp     dword ptr [ebx+114h], 0
0x7D4758: jnz     short loc_7D47A3
0x7D475A: mov     ecx, ds:0B42F50h; this
0x7D4760: call    BSTextureManager__BorrowFrustumShadowTexture; Borrow one BSRenderedTexture from the unused frustum-shadow pool when +0x114 is null.
0x7D4765: test    eax, eax
0x7D4767: mov     ecx, ebx; self
0x7D4769: jnz     short loc_7D479D
0x7D476B: lea     eax, [esp+214h+var_1F8]
0x7D476F: push    eax
0x7D4770: call    ShadowSceneLight_GetLightRef
0x7D4775: mov     eax, [eax]
0x7D4777: or      word ptr [eax+18h], 1
0x7D477C: lea     ecx, [esp+214h+var_1F8]; slot
0x7D4780: call    NiPointerSlot_Release
0x7D4785: mov     ecx, [esp+214h+var_C]
0x7D478C: mov     large fs:0, ecx
0x7D4793: pop     ecx
0x7D4794: pop     edi
0x7D4795: pop     esi
0x7D4796: pop     ebx
0x7D4797: mov     esp, ebp
0x7D4799: pop     ebp
0x7D479A: retn    4
0x7D479D: push    eax; shadowMap
0x7D479E: call    ShadowSceneLight_SetShadowMap; Publish/strong-own the borrowed shadow texture at ShadowSceneLight+0x114.
0x7D47A3: mov     eax, [ebx+100h]
0x7D47A9: lea     esi, [eax+64h]
0x7D47AC: mov     eax, [ebx+130h]
0x7D47B2: mov     ecx, 0Dh
0x7D47B7: lea     edi, [esp+214h+var_D4]
0x7D47BE: rep movsd
0x7D47C0: fld     dword ptr [eax+20h]
0x7D47C3: fsub    [esp+214h+var_B0]
0x7D47CA: fstp    [esp+214h+var_1F8]; Build shadow-camera view ray from exact source world-bound center toward backing projector branch world position.
0x7D47CE: fld     dword ptr [eax+24h]
0x7D47D1: fsub    [esp+214h+var_AC]
0x7D47D8: fstp    [esp+214h+var_1E8]
0x7D47DC: fld     dword ptr [eax+28h]
0x7D47DF: fsub    [esp+214h+var_A8]
0x7D47E6: lea     ecx, [esp+214h+var_1B0]
0x7D47EA: fstp    [esp+214h+var_1EC]
0x7D47EE: fld     [esp+214h+var_1F8]
0x7D47F2: fstp    [esp+214h+var_1B0.x]
0x7D47F6: fld     [esp+214h+var_1E8]
0x7D47FA: fstp    [esp+214h+var_1B0.y]
0x7D47FE: fld     [esp+214h+var_1EC]
0x7D4802: fstp    [esp+214h+var_1B0.z]
0x7D4806: call    Vector3_NormalizeInPlace; Vector3_NormalizeInPlace. Returns original length in ST0; if length <= epsilon at 0xA372CC, zeroes xyz and returns 0. PlaceAtMe uses it to normalize the ray hit vector before scaling by hit distance.
0x7D480B: fstp    st
0x7D480D: lea     ecx, [esp+214h+rhs]
0x7D4811: fld     dword ptr ds:0B258E8h
0x7D4817: push    ecx; rhs
0x7D4818: fchs
0x7D481A: lea     edx, [esp+218h+out]
0x7D481E: fstp    [esp+218h+var_1F8]
0x7D4822: push    edx; out
0x7D4823: fld     dword ptr ds:0B258ECh
0x7D4829: lea     ecx, [esp+21Ch+var_1B0]; this
0x7D482D: fchs
0x7D482F: fstp    [esp+21Ch+var_1E8]
0x7D4833: fld     dword ptr ds:0B258F0h
0x7D4839: fchs
0x7D483B: fstp    [esp+21Ch+var_1EC]
0x7D483F: fld     [esp+21Ch+var_1F8]
0x7D4843: fstp    [esp+21Ch+rhs.x]
0x7D4847: fld     [esp+21Ch+var_1E8]
0x7D484B: fstp    [esp+21Ch+rhs.y]
0x7D484F: fld     [esp+21Ch+var_1EC]
0x7D4853: fstp    [esp+21Ch+rhs.z]
0x7D4857: call    NiPoint3__NormalizedCrossProduct; Computes and normalizes the cross product of two NiPoint3 vectors, returning zero for near-degenerate input. ShadowSceneLight uses it to construct an orthonormal shadow-camera basis.
0x7D485C: fld     [esp+214h+out.x]
0x7D4860: fld     qword ptr ds:0A3D8E8h
0x7D4866: fcom    st(1)
0x7D4868: fnstsw  ax
0x7D486A: fld     [esp+214h+out.z]
0x7D486E: test    ah, 41h
0x7D4871: fld     [esp+214h+out.y]
0x7D4875: jnz     short loc_7D48D1
0x7D4877: fld     qword ptr ds:0A91288h
0x7D487D: fcom    st(4)
0x7D487F: fnstsw  ax
0x7D4881: fstp    st(4)
0x7D4883: test    ah, 5
0x7D4886: jp      short loc_7D48D1
0x7D4888: fcom    st(2)
0x7D488A: fnstsw  ax
0x7D488C: test    ah, 5
0x7D488F: jp      short loc_7D48D1
0x7D4891: fcomp   st(3)
0x7D4893: fnstsw  ax
0x7D4895: test    ah, 41h
0x7D4898: jnz     loc_7D4B03
0x7D489E: fcom    st(1)
0x7D48A0: fnstsw  ax
0x7D48A2: fstp    st(1)
0x7D48A4: test    ah, 5
0x7D48A7: jp      short loc_7D48D5
0x7D48A9: fcompp
0x7D48AB: fnstsw  ax
0x7D48AD: test    ah, 41h
0x7D48B0: jnz     short loc_7D48D9
0x7D48B2: mov     eax, ds:0B258D0h
0x7D48B7: mov     ecx, ds:0B258D4h
0x7D48BD: mov     edx, ds:0B258D8h
0x7D48C3: mov     [esp+214h+rhs.x], eax
0x7D48C7: mov     [esp+214h+rhs.y], ecx
0x7D48CB: mov     [esp+214h+rhs.z], edx
0x7D48CF: jmp     short loc_7D48D9
0x7D48D1: fstp    st(3)
0x7D48D3: fstp    st(1)
0x7D48D5: fstp    st(1)
0x7D48D7: fstp    st
0x7D48D9: lea     eax, [esp+214h+out]
0x7D48DD: push    eax; rhs
0x7D48DE: lea     ecx, [esp+218h+var_1C0]
0x7D48E2: push    ecx; out
0x7D48E3: lea     ecx, [esp+21Ch+var_1B0]; this
0x7D48E7: call    NiPoint3__NormalizedCrossProduct; Computes and normalizes the cross product of two NiPoint3 vectors, returning zero for near-degenerate input. ShadowSceneLight uses it to construct an orthonormal shadow-camera basis.
0x7D48EC: fld     [esp+214h+out.x]
0x7D48F0: mov     edx, [eax]
0x7D48F2: fchs
0x7D48F4: fstp    [esp+214h+var_1F8]
0x7D48F8: mov     [esp+214h+rhs.x], edx
0x7D48FC: fld     [esp+214h+out.y]
0x7D4900: mov     ecx, [eax+4]
0x7D4903: fchs
0x7D4905: mov     [esp+214h+rhs.y], ecx
0x7D4909: mov     edx, [eax+8]
0x7D490C: fstp    [esp+214h+var_1E8]
0x7D4910: fld     [esp+214h+out.z]
0x7D4914: mov     [esp+214h+rhs.z], edx
0x7D4918: fchs
0x7D491A: push    0
0x7D491C: fstp    [esp+218h+var_1EC]
0x7D4920: fld     [esp+218h+var_1F8]
0x7D4924: fstp    dword ptr [esp+218h+var_1D8]
0x7D4928: mov     eax, dword ptr [esp+218h+var_1D8]
0x7D492C: fld     [esp+218h+var_1E8]
0x7D4930: mov     [esp+218h+out.x], eax
0x7D4934: fstp    dword ptr [esp+218h+var_1D8+4]
0x7D4938: mov     ecx, dword ptr [esp+218h+var_1D8+4]
0x7D493C: fld     [esp+218h+var_1EC]
0x7D4940: mov     [esp+218h+out.y], ecx
0x7D4944: fstp    [esp+218h+var_1D0]
0x7D4948: mov     edx, [esp+218h+var_1D0]
0x7D494C: lea     ecx, [esp+218h+a2]
0x7D4950: mov     [esp+218h+out.z], edx
0x7D4954: call    NiFrustum__SetOrtho
0x7D4959: mov     eax, [ebx+130h]; Load exact caster/source root +0x130 for map-camera construction.
0x7D495F: mov     esi, [ebx+100h]; Load backing projector branch +0x100 for map-camera construction.
0x7D4965: mov     [esp+214h+var_184], 0
0x7D496D: fld     dword ptr [eax+2Ch]; Read uncapped exact-source world-bound radius for native shadow-camera coverage.
0x7D4970: fstp    [esp+214h+var_1F0]; Read uncapped exact-source world-bound radius for the retail lateral-frustum calculation.
0x7D4974: fld     dword ptr [esi+88h]
0x7D497A: fsub    dword ptr [eax+20h]
0x7D497D: fstp    [esp+214h+var_1E8]; Compute source-center to backing-branch distance.
0x7D4981: fld     dword ptr [esi+8Ch]
0x7D4987: fsub    dword ptr [eax+24h]
0x7D498A: fstp    [esp+214h+var_1F8]
0x7D498E: fld     dword ptr [esi+90h]
0x7D4994: fsub    dword ptr [eax+28h]
0x7D4997: fstp    [esp+214h+var_1EC]
0x7D499B: fld     [esp+214h+var_1F8]
0x7D499F: fld     [esp+214h+var_1E8]
0x7D49A3: fld     [esp+214h+var_1EC]
0x7D49A7: fld     st(1)
0x7D49A9: fmulp   st(2), st
0x7D49AB: fld     st(2)
0x7D49AD: fmulp   st(3), st
0x7D49AF: fxch    st(1)
0x7D49B1: faddp   st(2), st
0x7D49B3: fmul    st, st
0x7D49B5: faddp   st(1), st
0x7D49B7: fstp    [esp+214h+var_1F8]
0x7D49BB: fld     [esp+214h+var_1F8]
0x7D49BF: call    __CIsqrt
0x7D49C4: fstp    [esp+214h+var_1F8]
0x7D49C8: fld     [esp+214h+var_1F8]
0x7D49CC: fstp    [esp+214h+var_1F8]
0x7D49D0: fld     [esp+214h+var_1F0]; Compute the native projector field of view in degrees as (exact caster radius / source-to-projector distance) * 110.0.
0x7D49D4: fdiv    [esp+214h+var_1F8]
0x7D49D8: fmul    qword ptr ds:0A91280h
0x7D49DE: fstp    [esp+214h+var_1F0]; Native projector FOV in degrees = caster radius / source-to-projector distance * 110.0.
0x7D49E2: fld     [esp+214h+var_1F0]
0x7D49E6: fst     dword ptr [ebx+124h]; Store the native projector FOV in degrees at ShadowSceneLight+0x124.
0x7D49EC: fmul    qword ptr ds:0A2FAA0h; Convert the stored field of view to its half-angle in radians: FOV * 0.5 * 0.01745327934622765.
0x7D49F2: fmul    qword ptr ds:0A91278h
0x7D49F8: fstp    [esp+214h+var_1F0]; Continue retail lateral-frustum scale calculation.
0x7D49FC: fld     [esp+214h+var_1F0]
0x7D4A00: call    __CItan; Apply tan(FOV/2) to obtain the symmetric lateral-frustum extent used by the Oblivion shadow camera.
0x7D4A05: fstp    [esp+214h+var_1F0]; Continue retail lateral-frustum scale calculation.
0x7D4A09: fld     [esp+214h+var_1F0]
0x7D4A0D: fstp    [esp+214h+var_1F8]
0x7D4A11: cmp     byte ptr [ebx+0F4h], 0
0x7D4A18: fld     [esp+214h+var_1F8]
0x7D4A1C: fld     st
0x7D4A1E: fchs
0x7D4A20: fstp    [esp+214h+var_1F0]
0x7D4A24: fld     [esp+214h+var_1F0]
0x7D4A28: fst     [esp+214h+a2]; Perspective frustum left and bottom are -tan(FOV/2).
0x7D4A2C: fstp    [esp+214h+var_190]
0x7D4A33: fst     [esp+214h+var_198]; Perspective frustum right and top are +tan(FOV/2).
0x7D4A37: fst     [esp+214h+var_194]; Complete symmetric shadow-camera lateral-frustum commit.
0x7D4A3E: fld1
0x7D4A40: fst     [esp+214h+var_18C]; Per-source shadow camera near plane is 1.0.
0x7D4A47: fld     dword ptr [esi+0F8h]; Read backing point-light range +0xF8 for the shadow-camera far plane.
0x7D4A4D: mov     esi, ds:0B43104h
0x7D4A53: fstp    [esp+214h+var_188]; Per-source shadow camera far plane comes from the observed source/caster state.
0x7D4A5A: fldz
0x7D4A5C: mov     [esp+214h+var_1E8], esi
0x7D4A60: fst     [esp+214h+var_180]
0x7D4A67: fst     [esp+214h+var_174]
0x7D4A6E: fxch    st(1)
0x7D4A70: fst     [esp+214h+var_17C]
0x7D4A77: fst     [esp+214h+var_178]
0x7D4A7E: jz      loc_7D4FB3
0x7D4A84: fstp    st(1)
0x7D4A86: fstp    st(1)
0x7D4A88: fstp    st
0x7D4A8A: call    BSShaderManager_IsShadowMappingReady; [Verified] Returns true only when BSShaderPackageVersion (RendererGlobalState+0xAF) >= 3 and BSShaderFeatureMask (RendererGlobalState+0xA7) contains native shadow-map bit 0x10. The version comparison independently corroborates the selector field read by GetShaderProgramPackageIndex.
0x7D4A8F: test    al, al
0x7D4A91: jz      loc_7D4FA7
0x7D4A97: call    BSShaderAccumulator_GetOrCreateGlobal
0x7D4A9C: push    eax
0x7D4A9D: lea     ecx, [esp+218h+var_1EC]
0x7D4AA1: call    sub_405070
0x7D4AA6: mov     eax, [esi+8]
0x7D4AA9: push    eax
0x7D4AAA: lea     ecx, [esp+218h+var_1F8]
0x7D4AAE: mov     [esp+218h+var_4], 0
0x7D4AB9: call    sub_405070
0x7D4ABE: mov     eax, [esp+214h+var_1EC]
0x7D4AC2: push    eax; a2
0x7D4AC3: mov     ecx, esi; this
0x7D4AC5: mov     byte ptr [esp+218h+var_4], 1
0x7D4ACD: call    NiDX9Renderer__SetShaderAccumulator;
0x7D4AD2: add     ebx, 14Ch; ShadowSceneLight+0x14C owns the lazily allocated per-source shadow camera.
0x7D4AD8: cmp     dword ptr [ebx], 0
0x7D4ADB: jnz     short loc_7D4B1E
0x7D4ADD: push    124h; Size
0x7D4AE2: call    FormHeapAlloc
0x7D4AE7: add     esp, 4
0x7D4AEA: mov     [esp+214h+var_1F4], eax
0x7D4AEE: test    eax, eax
0x7D4AF0: mov     byte ptr [esp+214h+var_4], 2
0x7D4AF8: jz      short loc_7D4B0C
0x7D4AFA: mov     ecx, eax
0x7D4AFC: call    sub_70D590
0x7D4B01: jmp     short loc_7D4B0E
0x7D4B03: fstp    st(2)
0x7D4B05: fstp    st
0x7D4B07: jmp     loc_7D48D7
0x7D4B0C: xor     eax, eax
0x7D4B0E: push    eax; a2
0x7D4B0F: mov     ecx, ebx; this
0x7D4B11: mov     byte ptr [esp+218h+var_4], 1
0x7D4B19: call    NiSmartPointer_Set??
0x7D4B1E: mov     ecx, [esp+214h+var_B0]
0x7D4B25: fldz
0x7D4B27: mov     eax, [ebx]
0x7D4B29: mov     [eax+54h], ecx
0x7D4B2C: mov     edx, [esp+214h+var_AC]
0x7D4B33: mov     [eax+58h], edx
0x7D4B36: mov     ecx, [esp+214h+var_A8]
0x7D4B3D: mov     [eax+5Ch], ecx
0x7D4B40: mov     ecx, [ebx]; this
0x7D4B42: push    1; a3
0x7D4B44: push    ecx
0x7D4B45: fstp    [esp+21Ch+var_21C]; a2
0x7D4B48: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x7D4B4D: mov     esi, [esp+214h+var_1A0]
0x7D4B51: mov     ecx, [esi+130h]
0x7D4B57: mov     edx, [ecx+20h]
0x7D4B5A: mov     dword ptr [esp+214h+var_1D8], edx
0x7D4B5E: mov     eax, [ecx+24h]
0x7D4B61: mov     dword ptr [esp+214h+var_1D8+4], eax
0x7D4B65: mov     edx, [ecx+28h]
0x7D4B68: push    offset off_A7D2CC
0x7D4B6D: mov     [esp+218h+var_1D0], edx
0x7D4B71: call    NiObjectNET_GetExtraData; Native map-render setup performs a second BBX extra-data lookup on exact caster root +0x130.
0x7D4B76: mov     ecx, [eax+18h]
0x7D4B79: mov     edx, [eax+1Ch]
0x7D4B7C: mov     eax, [eax+20h]
0x7D4B7F: mov     [esp+214h+var_1C0.z], eax
0x7D4B83: fld     [esp+214h+var_1C0.z]
0x7D4B87: mov     [esp+214h+var_1C0.y], edx
0x7D4B8B: fld     [esp+214h+var_1C0.y]
0x7D4B8F: mov     [esp+214h+var_1C0.x], ecx
0x7D4B93: fadd    [esp+214h+var_1C0.x]
0x7D4B97: fcompp
0x7D4B99: fnstsw  ax
0x7D4B9B: test    ah, 5
0x7D4B9E: jp      short loc_7D4BEE
0x7D4BA0: fld     dword ptr ds:0B258E8h
0x7D4BA6: fld     qword ptr ds:0A3F3E8h
0x7D4BAC: fmul    st(1), st
0x7D4BAE: fxch    st(1)
0x7D4BB0: fstp    [esp+214h+var_1F0]
0x7D4BB4: fld     dword ptr ds:0B258ECh
0x7D4BBA: fmul    st, st(1)
0x7D4BBC: fstp    [esp+214h+var_1A4]
0x7D4BC0: fmul    dword ptr ds:0B258F0h
0x7D4BC6: fstp    [esp+214h+var_1F4]
0x7D4BCA: fld     [esp+214h+var_1F0]
0x7D4BCE: fadd    dword ptr [esp+214h+var_1D8]
0x7D4BD2: fstp    dword ptr [esp+214h+var_1D8]
0x7D4BD6: fld     dword ptr [esp+214h+var_1D8+4]
0x7D4BDA: fadd    [esp+214h+var_1A4]
0x7D4BDE: fstp    dword ptr [esp+214h+var_1D8+4]
0x7D4BE2: fld     [esp+214h+var_1D0]
0x7D4BE6: fadd    [esp+214h+var_1F4]
0x7D4BEA: fstp    [esp+214h+var_1D0]
0x7D4BEE: mov     ecx, [ebx]
0x7D4BF0: lea     edx, [esp+214h+rhs]
0x7D4BF4: push    edx
0x7D4BF5: lea     eax, [esp+218h+var_1D8]
0x7D4BF9: push    eax
0x7D4BFA: call    sub_70C340
0x7D4BFF: mov     ecx, [ebx]; this
0x7D4C01: lea     edx, [esp+214h+a2]
0x7D4C05: push    edx; a2
0x7D4C06: call    Camera_SetFrustum
0x7D4C0B: mov     ecx, [ebx]
0x7D4C0D: lea     eax, [esp+214h+var_180]
0x7D4C14: push    eax
0x7D4C15: call    sub_404D30
0x7D4C1A: fldz
0x7D4C1C: mov     ecx, [ebx]; this
0x7D4C1E: push    1; a3
0x7D4C20: push    ecx
0x7D4C21: fstp    [esp+21Ch+var_21C]; a2
0x7D4C24: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x7D4C29: mov     ecx, [ebx]
0x7D4C2B: fld     dword ptr [ecx+6Ch]
0x7D4C2E: fstp    [esp+214h+var_1C0.x]
0x7D4C32: mov     edx, [esp+214h+var_1C0.x]
0x7D4C36: fld     dword ptr [ecx+78h]
0x7D4C39: fstp    [esp+214h+var_1C0.y]
0x7D4C3D: mov     eax, [esp+214h+var_1C0.y]
0x7D4C41: fld     dword ptr [ecx+84h]
0x7D4C47: mov     [esp+214h+out.x], edx
0x7D4C4B: fstp    [esp+214h+var_1C0.z]
0x7D4C4F: mov     edx, [esp+214h+var_1C0.z]
0x7D4C53: mov     [esp+214h+out.y], eax
0x7D4C57: mov     [esp+214h+out.z], edx
0x7D4C5B: fld     dword ptr [ecx+68h]
0x7D4C5E: fstp    [esp+214h+var_1C0.x]
0x7D4C62: mov     eax, [esp+214h+var_1C0.x]
0x7D4C66: fld     dword ptr [ecx+74h]
0x7D4C69: fstp    [esp+214h+var_1C0.y]
0x7D4C6D: mov     edx, [esp+214h+var_1C0.y]
0x7D4C71: fld     dword ptr [ecx+80h]
0x7D4C77: mov     [esp+214h+rhs.x], eax
0x7D4C7B: fstp    [esp+214h+var_1C0.z]
0x7D4C7F: mov     eax, [esp+214h+var_1C0.z]
0x7D4C83: mov     [esp+214h+rhs.z], eax
0x7D4C87: mov     [esp+214h+rhs.y], edx
0x7D4C8B: fld     dword ptr [ecx+64h]
0x7D4C8E: fstp    [esp+214h+var_1C0.x]
0x7D4C92: mov     edx, [esp+214h+var_1C0.x]
0x7D4C96: fld     dword ptr [ecx+70h]
0x7D4C99: fstp    [esp+214h+var_1C0.y]
0x7D4C9D: mov     eax, [esp+214h+var_1C0.y]
0x7D4CA1: fld     dword ptr [ecx+7Ch]
0x7D4CA4: mov     [esp+214h+var_1B0.y], eax
0x7D4CA8: mov     eax, [esi+130h]
0x7D4CAE: fstp    [esp+214h+var_1C0.z]
0x7D4CB2: fld     [esp+214h+var_18C]
0x7D4CB9: mov     [esp+214h+var_1B0.x], edx
0x7D4CBD: mov     edx, [esp+214h+var_1C0.z]
0x7D4CC1: fstp    [esp+214h+var_1F4]
0x7D4CC5: fld     [esp+214h+var_188]
0x7D4CCC: add     eax, 20h ; ' '
0x7D4CCF: push    eax
0x7D4CD0: fstp    [esp+218h+var_1A4]
0x7D4CD4: mov     [esp+218h+var_1B0.z], edx
0x7D4CD8: call    sub_70C230; Call sphere-fitting helper 0x0070C230 to adjust near/far depth; lateral frustum was already constructed.
0x7D4CDD: mov     eax, [ebx]
0x7D4CDF: lea     esi, [eax+0ECh]
0x7D4CE5: mov     ecx, 7
0x7D4CEA: lea     edi, [esp+214h+a2]
0x7D4CEE: rep movsd
0x7D4CF0: fld     [esp+214h+var_188]
0x7D4CF7: fadd    qword ptr ds:0A6BEA0h
0x7D4CFD: fstp    [esp+214h+var_188]
0x7D4D04: mov     edi, [esp+214h+var_1A0]
0x7D4D08: add     eax, 64h ; 'd'
0x7D4D0B: push    eax; a3
0x7D4D0C: lea     eax, [esp+218h+a2]
0x7D4D10: push    eax; a2
0x7D4D11: lea     ecx, [edi+150h]; this
0x7D4D17: call    NiFrustumPlanes_SetFromFrustumAndTransform; Build six world-space frustum planes at ShadowSceneLight+0x150 using a temporarily expanded far plane.
0x7D4D1C: fld     [esp+214h+var_1F4]
0x7D4D20: mov     ecx, [ebx]; this
0x7D4D22: fstp    [esp+214h+var_18C]
0x7D4D29: fld     [esp+214h+var_1A4]
0x7D4D2D: lea     edx, [esp+214h+a2]
0x7D4D31: push    edx; a2
0x7D4D32: fstp    [esp+218h+var_188]
0x7D4D39: call    Camera_SetFrustum
0x7D4D3E: mov     eax, ds:0B25AD0h
0x7D4D43: mov     ecx, ds:0B25AD4h
0x7D4D49: mov     edx, ds:0B25AD8h
0x7D4D4F: mov     [esp+214h+var_170], eax
0x7D4D56: mov     eax, ds:0B25ADCh
0x7D4D5B: mov     [esp+214h+var_16C], ecx
0x7D4D62: mov     ecx, ds:0B3F928h
0x7D4D68: mov     [esp+214h+var_168], edx
0x7D4D6F: mov     [esp+214h+var_164], eax
0x7D4D76: mov     edx, [ecx]
0x7D4D78: mov     edx, [edx+68h]
0x7D4D7B: lea     eax, [esp+214h+var_170]
0x7D4D82: push    eax
0x7D4D83: call    edx; Save renderer clear color before map rendering.
0x7D4D85: fld1
0x7D4D87: mov     ecx, ds:0B3F928h
0x7D4D8D: fst     [esp+214h+var_1C0.x]; Begin setting white clear color for the native shadow map.
0x7D4D91: fst     [esp+214h+var_1C0.y]
0x7D4D95: lea     edx, [esp+214h+var_1C0]
0x7D4D99: fst     [esp+214h+var_1C0.z]
0x7D4D9D: push    edx
0x7D4D9E: fstp    [esp+218h+var_1B4]
0x7D4DA2: mov     eax, [ecx]
0x7D4DA4: mov     eax, [eax+60h]
0x7D4DA7: call    eax; Temporarily set renderer clear color to white (1,1,1,1) for the shadow target clear.
0x7D4DA9: mov     ecx, [edi+114h]
0x7D4DAF: call    BSRenderedTexture__UseTextureToRender; Resolve the NiRenderTargetGroup owned by ShadowSceneLight+0x114.
0x7D4DB4: push    eax; a2
0x7D4DB5: push    7; a1
0x7D4DB7: call    NiRenderer_BeginScene; Push/begin the per-source R32F target with engine kClear_ALL (7).
0x7D4DBC: mov     ecx, ds:0B3F928h
0x7D4DC2: mov     edx, [ecx]
0x7D4DC4: mov     edx, [edx+60h]
0x7D4DC7: add     esp, 8
0x7D4DCA: lea     eax, [esp+214h+var_170]; Restore the renderer clear color immediately after the target was cleared; clear depth/stencil defaults remain 1.0/0.
0x7D4DD1: push    eax
0x7D4DD2: call    edx
0x7D4DD4: mov     ecx, [esp+214h+var_1E8]
0x7D4DD8: mov     eax, 1
0x7D4DDD: cmp     [ecx+200h], eax
0x7D4DE3: jz      short loc_7D4DED
0x7D4DE5: cmp     [ecx+204h], eax
0x7D4DEB: jnz     short loc_7D4E23
0x7D4DED: cmp     [ecx+20Ch], al
0x7D4DF3: jnz     short loc_7D4E23
0x7D4DF5: mov     eax, [ecx]
0x7D4DF7: mov     eax, [eax+140h]
0x7D4DFD: lea     edx, [esp+214h+var_180]
0x7D4E04: push    edx
0x7D4E05: lea     edx, [esp+218h+a2]
0x7D4E09: push    edx
0x7D4E0A: lea     edx, [esp+21Ch+out]
0x7D4E0E: push    edx
0x7D4E0F: lea     edx, [esp+220h+rhs]
0x7D4E13: push    edx
0x7D4E14: lea     edx, [esp+224h+var_1B0]
0x7D4E18: push    edx
0x7D4E19: lea     edx, [esp+228h+var_B0]
0x7D4E20: push    edx
0x7D4E21: call    eax; Install the shadow projector camera and normalized full-target viewport. This call authors viewport state only, not scissor state.
0x7D4E23: mov     eax, [ebx]
0x7D4E25: mov     esi, [esp+214h+var_1EC]
0x7D4E29: mov     edx, [esi]
0x7D4E2B: push    eax
0x7D4E2C: mov     eax, [edx+4Ch]
0x7D4E2F: mov     ecx, esi
0x7D4E31: call    eax; Begin the dedicated accumulator transaction with the per-source shadow camera.
0x7D4E33: push    0; visibleArray
0x7D4E35: lea     ecx, [esp+218h+cullingProcess]; self
0x7D4E3C: mov     byte ptr [esi+21E0h], 1; Set accumulator shadow-production byte +0x21E0 before culling/submission.
0x7D4E43: call    NiCullingProcess_NiCullingProcess; Oblivion NiCullingProcess constructor: initializes append mode, visible-geometry storage, camera state, and culling-plane state.
0x7D4E48: mov     ecx, [ebx]
0x7D4E4A: lea     edx, [esp+214h+a2]
0x7D4E4E: mov     [esp+214h+cullingProcess.Camera], ecx
0x7D4E55: push    edx; a2
0x7D4E56: lea     ecx, [esp+218h+cullingProcess]; this
0x7D4E5D: mov     byte ptr [esp+218h+var_4], 3
0x7D4E65: call    NiCullingProcess__SetFrustum; Oblivion NiCullingProcess::SetFrustum copies the camera frustum, rebuilds six culling planes, and sets the active-plane mask to 0x3F.
0x7D4E6A: mov     edi, [edi+130h]
0x7D4E70: mov     ebx, [ebx]
0x7D4E72: push    0; visibleArray
0x7D4E74: lea     eax, [esp+218h+cullingProcess]
0x7D4E7B: push    eax; cullingProcess
0x7D4E7C: push    edi; sceneRoot
0x7D4E7D: push    ebx; camera
0x7D4E7E: mov     [esp+224h+cullingProcess.Planes.ActivePlanes], 0; CULLING audit 2026-09-27: pre-call mask zero is temporary. Following CullAndRenderScene -> Process -> SetFrustum overwrites it with 0x3F; not proof of a lasting bypass.
0x7D4E89: call    NiRenderer_CullAndRenderScene; Cull ShadowSceneLight+0x130 through the shadow camera and submit the visible geometry to the installed accumulator.
0x7D4E8E: mov     byte ptr [esi+21E1h], 1; Set accumulator ready byte +0x21E1 only after visible geometry has been queued.
0x7D4E95: mov     edx, [esi]
0x7D4E97: mov     eax, [edx+50h]
0x7D4E9A: add     esp, 10h
0x7D4E9D: mov     ecx, esi
0x7D4E9F: call    eax; Final accumulator flush: in global mode 5 this draws buckets 6-9 and 0x154-0x155, then clears accumulated passes.
0x7D4EA1: mov     esi, [esp+214h+var_1E8]
0x7D4EA5: mov     eax, 1
0x7D4EAA: cmp     [esi+200h], eax
0x7D4EB0: jz      short loc_7D4EBA
0x7D4EB2: cmp     [esi+204h], eax
0x7D4EB8: jnz     short loc_7D4EEF
0x7D4EBA: cmp     [esi+20Ch], al
0x7D4EC0: jnz     short loc_7D4EEF
0x7D4EC2: mov     edx, [esi]
0x7D4EC4: mov     edx, [edx+140h]
0x7D4ECA: lea     eax, [esp+214h+var_180]
0x7D4ED1: push    eax
0x7D4ED2: lea     ecx, [esp+218h+a2]
0x7D4ED6: push    ecx
0x7D4ED7: lea     eax, [esp+21Ch+out]
0x7D4EDB: push    eax
0x7D4EDC: lea     ecx, [esp+220h+rhs]
0x7D4EE0: push    ecx
0x7D4EE1: lea     eax, [esp+224h+var_1B0]
0x7D4EE5: push    eax
0x7D4EE6: push    offset g_zeroNiPoint3
0x7D4EEB: mov     ecx, esi
0x7D4EED: call    edx
0x7D4EEF: mov     ebx, [esp+214h+var_1E8]
0x7D4EF3: add     esi, 980h
0x7D4EF9: mov     ecx, 10h
0x7D4EFE: lea     edi, [esp+214h+var_120]
0x7D4F05: rep movsd
0x7D4F07: lea     esi, [ebx+9C0h]
0x7D4F0D: mov     ecx, 10h
0x7D4F12: lea     edi, [esp+214h+var_160]
0x7D4F19: rep movsd
0x7D4F1B: call    NiRenderer_EndScene; End the per-source target after view/projection matrices were captured. This drains the target stack and does not restore viewport or scissor state.
0x7D4F20: mov     eax, [esp+214h+var_1F8]
0x7D4F24: push    eax; a2
0x7D4F25: mov     ecx, ebx; this
0x7D4F27: call    NiDX9Renderer__SetShaderAccumulator; Restore the renderer's previous shader accumulator.
0x7D4F2C: mov     eax, [esp+214h+var_1EC]
0x7D4F30: add     eax, 4
0x7D4F33: cmp     dword ptr [eax], 2
0x7D4F36: jnb     short loc_7D4F3F
0x7D4F38: push    eax; lpAddend
0x7D4F39: call    dword ptr ds:0A28078h
0x7D4F3F: mov     esi, [esp+214h+var_1A0]
0x7D4F43: cmp     byte ptr [esi+12Ch], 0; If +0x12C is set, bind the generated shadow map's inner rendered texture through shader definition 9. Constructor clears this byte and no direct native shadow-range setter is proven.
0x7D4F4A: jz      short loc_7D4F60
0x7D4F4C: mov     ecx, [esi+114h]; this
0x7D4F52: call    BSRenderedTexture__GetInnerTexture; Optional +0x12C path obtains the inner texture for immediate shader binding.
0x7D4F57: push    eax; renderedTexture
0x7D4F58: call    ShaderDefinition9_BindRenderedTexture; Resolve shader definition 9 and bind the supplied NiRenderedTexture through its image-space shader.
0x7D4F5D: add     esp, 4
0x7D4F60: lea     ecx, [esp+214h+cullingProcess]; this
0x7D4F67: mov     byte ptr [esi+214h], 0; Invalidate ShadowSceneLight transformed-clip-plane cache (+0x214=0) after producing a new map.
0x7D4F6E: mov     byte ptr [esp+214h+var_4], 1
0x7D4F76: call    ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x7D4F7B: lea     ecx, [esp+214h+var_1F8]; slot
0x7D4F7F: mov     byte ptr [esp+214h+var_4], 0
0x7D4F87: call    NiPointerSlot_Release
0x7D4F8C: lea     ecx, [esp+214h+var_1EC]; slot
0x7D4F90: mov     [esp+214h+var_4], 0FFFFFFFFh
0x7D4F9B: call    NiPointerSlot_Release
0x7D4FA0: mov     ebx, esi
0x7D4FA2: jmp     loc_7D51D6
0x7D4FA7: fldz
0x7D4FA9: fld1
0x7D4FAB: fld     [esp+214h+var_1F8]
0x7D4FAF: fxch    st(2)
0x7D4FB1: fxch    st(1)
0x7D4FB3: fld     [esp+214h+out.x]
0x7D4FB7: mov     edx, ds:0B3F9ACh
0x7D4FBD: fst     [esp+214h+var_120]
0x7D4FC4: mov     ecx, ds:0B3F9A8h
0x7D4FCA: fld     [esp+214h+rhs.x]
0x7D4FCE: mov     eax, ds:0B3F9B0h
0x7D4FD3: fstp    [esp+214h+var_11C]
0x7D4FDA: mov     dword ptr [esp+214h+var_1D8+4], edx
0x7D4FDE: fld     [esp+214h+var_1B0.x]
0x7D4FE2: mov     dword ptr [esp+214h+var_1D8], ecx
0x7D4FE6: fstp    [esp+214h+var_118]
0x7D4FED: mov     [esp+214h+var_1D0], eax
0x7D4FF1: fxch    st(2)
0x7D4FF3: fst     [esp+214h+var_114]
0x7D4FFA: fld     [esp+214h+out.y]
0x7D4FFE: fst     [esp+214h+var_110]
0x7D5005: fld     [esp+214h+rhs.y]
0x7D5009: fstp    [esp+214h+var_10C]
0x7D5010: fld     [esp+214h+var_1B0.y]
0x7D5014: fstp    [esp+214h+var_108]
0x7D501B: fxch    st(1)
0x7D501D: fst     [esp+214h+var_104]
0x7D5024: fld     [esp+214h+out.z]
0x7D5028: fstp    [esp+214h+var_100]
0x7D502F: fld     [esp+214h+rhs.z]
0x7D5033: fstp    [esp+214h+var_FC]
0x7D503A: fld     [esp+214h+var_1B0.z]
0x7D503E: fstp    [esp+214h+var_F8]
0x7D5045: fst     [esp+214h+var_F4]
0x7D504C: fld     dword ptr [esp+214h+var_1D8+4]
0x7D5050: fld     st
0x7D5052: fmulp   st(3), st
0x7D5054: fld     dword ptr [esp+214h+var_1D8]
0x7D5058: fld     st
0x7D505A: fmulp   st(6), st
0x7D505C: fxch    st(3)
0x7D505E: faddp   st(5), st
0x7D5060: fld     [esp+214h+var_1D0]
0x7D5064: fmul    [esp+214h+out.z]
0x7D5068: faddp   st(5), st
0x7D506A: fxch    st(4)
0x7D506C: fstp    [esp+214h+var_1F4]
0x7D5070: fld     [esp+214h+var_1F4]
0x7D5074: fchs
0x7D5076: fstp    [esp+214h+var_F0]
0x7D507D: fld     st(3)
0x7D507F: fmul    [esp+214h+rhs.y]
0x7D5083: fld     st(2)
0x7D5085: fmul    [esp+214h+rhs.x]
0x7D5089: faddp   st(1), st
0x7D508B: fld     [esp+214h+var_1D0]
0x7D508F: fmul    [esp+214h+rhs.z]
0x7D5093: faddp   st(1), st
0x7D5095: fstp    [esp+214h+var_1F4]
0x7D5099: fld     [esp+214h+var_1F4]
0x7D509D: fchs
0x7D509F: fstp    [esp+214h+var_EC]
0x7D50A6: fld     [esp+214h+var_1B0.y]
0x7D50AA: fmulp   st(4), st
0x7D50AC: fld     [esp+214h+var_1B0.x]
0x7D50B0: fmulp   st(2), st
0x7D50B2: fxch    st(3)
0x7D50B4: faddp   st(1), st
0x7D50B6: fld     [esp+214h+var_1D0]
0x7D50BA: fmul    [esp+214h+var_1B0.z]
0x7D50BE: faddp   st(1), st
0x7D50C0: fstp    [esp+214h+var_1F4]
0x7D50C4: fld     [esp+214h+var_1F4]
0x7D50C8: fchs
0x7D50CA: fstp    [esp+214h+var_E8]
0x7D50D1: fst     [esp+214h+var_E4]
0x7D50D8: fld     st(2)
0x7D50DA: fld     [esp+214h+a2]
0x7D50DE: fld     st
0x7D50E0: fsubp   st(2), st
0x7D50E2: fxch    st(1)
0x7D50E4: fstp    [esp+214h+var_1F8]
0x7D50E8: fld     st(3)
0x7D50EA: fld     [esp+214h+var_190]
0x7D50F1: fld     st
0x7D50F3: fsubp   st(2), st
0x7D50F5: fxch    st(1)
0x7D50F7: fstp    [esp+214h+var_1A4]
0x7D50FB: fld     [esp+214h+var_188]
0x7D5102: fld     st
0x7D5104: fld1
0x7D5106: fsub    st(1), st
0x7D5108: fxch    st(1)
0x7D510A: fstp    [esp+214h+var_1F4]
0x7D510E: fdiv    [esp+214h+var_1F4]
0x7D5112: fstp    [esp+214h+var_1F0]
0x7D5116: fld     [esp+214h+var_1F8]
0x7D511A: fdivr   qword ptr ds:0A3D0C0h
0x7D5120: fstp    [esp+214h+var_160]
0x7D5127: fxch    st(4)
0x7D5129: fst     [esp+214h+var_150]
0x7D5130: fld     st(5)
0x7D5132: faddp   st(3), st
0x7D5134: fxch    st(2)
0x7D5136: fstp    [esp+214h+var_1F4]
0x7D513A: fld     [esp+214h+var_1F4]
0x7D513E: fchs
0x7D5140: fdiv    [esp+214h+var_1F8]
0x7D5144: fstp    [esp+214h+var_140]
0x7D514B: fxch    st(1)
0x7D514D: fst     [esp+214h+var_130]
0x7D5154: fst     [esp+214h+var_15C]
0x7D515B: fld     [esp+214h+var_1A4]
0x7D515F: fld     st
0x7D5161: fdivr   qword ptr ds:0A3D0C0h
0x7D5167: fstp    [esp+214h+var_14C]
0x7D516E: fxch    st(2)
0x7D5170: faddp   st(5), st
0x7D5172: fxch    st(4)
0x7D5174: fstp    [esp+214h+var_1F4]
0x7D5178: fld     [esp+214h+var_1F4]
0x7D517C: fchs
0x7D517E: fdivrp  st(1), st
0x7D5180: fstp    [esp+214h+var_13C]
0x7D5187: fxch    st(2)
0x7D5189: fst     [esp+214h+var_12C]
0x7D5190: fst     [esp+214h+var_158]
0x7D5197: fst     [esp+214h+var_148]
0x7D519E: fld     [esp+214h+var_1F0]
0x7D51A2: fld     st
0x7D51A4: fmul    st, st(3)
0x7D51A6: fstp    [esp+214h+var_138]
0x7D51AD: fmulp   st(2), st
0x7D51AF: fxch    st(1)
0x7D51B1: fchs
0x7D51B3: fstp    [esp+214h+var_128]
0x7D51BA: fst     [esp+214h+var_154]
0x7D51C1: fst     [esp+214h+var_144]
0x7D51C8: fstp    [esp+214h+var_124]
0x7D51CF: fstp    [esp+214h+var_134]
0x7D51D6: fld     [esp+214h+var_AC]
0x7D51DD: lea     eax, [ebx+50h]
0x7D51E0: fld     st
0x7D51E2: mov     edi, eax
0x7D51E4: fmul    [esp+214h+out.y]
0x7D51E8: mov     ecx, 10h
0x7D51ED: fld     [esp+214h+var_B0]
0x7D51F4: lea     esi, [esp+214h+var_120]
0x7D51FB: fld     st
0x7D51FD: rep movsd; Publish the shadow view matrix at ShadowSceneLight+0x50.
0x7D51FF: fmul    [esp+214h+out.x]
0x7D5203: faddp   st(2), st
0x7D5205: fld     [esp+214h+var_A8]
0x7D520C: fld     st
0x7D520E: fmul    [esp+214h+out.z]
0x7D5212: faddp   st(3), st
0x7D5214: fxch    st(2)
0x7D5216: lea     edx, [ebx+90h]
0x7D521C: mov     edi, edx
0x7D521E: fstp    [esp+214h+var_1F4]
0x7D5222: push    edx
0x7D5223: fld     [esp+218h+var_1F4]
0x7D5227: mov     ecx, 10h
0x7D522C: fchs
0x7D522E: lea     esi, [esp+218h+var_160]
0x7D5235: fstp    dword ptr [ebx+80h]
0x7D523B: rep movsd; Publish the shadow projection matrix at ShadowSceneLight+0x90.
0x7D523D: fld     [esp+218h+rhs.y]
0x7D5241: fmul    st, st(3)
0x7D5243: fld     [esp+218h+rhs.x]
0x7D5247: fmul    st, st(2)
0x7D5249: faddp   st(1), st
0x7D524B: fld     [esp+218h+rhs.z]
0x7D524F: fmul    st, st(3)
0x7D5251: faddp   st(1), st
0x7D5253: push    eax
0x7D5254: lea     ecx, [esp+21Ch+var_160]
0x7D525B: fstp    [esp+21Ch+var_1F4]
0x7D525F: push    ecx
0x7D5260: fld     [esp+220h+var_1F4]
0x7D5264: fchs
0x7D5266: fstp    dword ptr [ebx+84h]
0x7D526C: fld     [esp+220h+var_1B0.y]
0x7D5270: fmulp   st(3), st
0x7D5272: fmul    [esp+220h+var_1B0.x]
0x7D5276: faddp   st(2), st
0x7D5278: fmul    [esp+220h+var_1B0.z]
0x7D527C: faddp   st(1), st
0x7D527E: fstp    [esp+220h+var_1F4]
0x7D5282: fld     [esp+220h+var_1F4]
0x7D5286: fchs
0x7D5288: fstp    dword ptr [ebx+88h]
0x7D528E: call    D3DXMatrixMultiply_0; Multiply the published shadow view and projection matrices.
0x7D5293: lea     edi, [ebx+10h]
0x7D5296: mov     ecx, 10h
0x7D529B: lea     esi, [esp+214h+var_160]
0x7D52A2: rep movsd; Publish the combined shadow view-projection matrix at ShadowSceneLight+0x10; Lighting30 consumers use this transform.
0x7D52A4: mov     ecx, [esp+214h+var_C]
0x7D52AB: mov     large fs:0, ecx
0x7D52B2: pop     ecx
0x7D52B3: pop     edi
0x7D52B4: pop     esi
0x7D52B5: pop     ebx
0x7D52B6: mov     esp, ebp
0x7D52B8: pop     ebp
0x7D52B9: retn    4
0x7D52BC: mov     eax, [ebx+114h]
0x7D52C2: test    eax, eax
0x7D52C4: jz      short loc_7D5302
0x7D52C6: mov     ecx, ds:0B42F50h; this
0x7D52CC: push    eax; texture
0x7D52CD: call    BSTextureManager__ReturnFrustumShadowTexture; When the light is no longer eligible, return +0x114 to the frustum-shadow pool and clear ownership.
0x7D52D2: mov     esi, [ebx+114h]
0x7D52D8: test    esi, esi
0x7D52DA: jz      short loc_7D5302
0x7D52DC: lea     edx, [esi+4]
0x7D52DF: push    edx; lpAddend
0x7D52E0: call    dword ptr ds:0A2807Ch
0x7D52E6: test    eax, eax
0x7D52E8: jnz     short loc_7D52F8
0x7D52EA: test    esi, esi
0x7D52EC: jz      short loc_7D52F8
0x7D52EE: mov     eax, [esi]
0x7D52F0: mov     edx, [eax]
0x7D52F2: push    1
0x7D52F4: mov     ecx, esi
0x7D52F6: call    edx
0x7D52F8: mov     dword ptr [ebx+114h], 0
0x7D5302: mov     ecx, [esp+214h+var_C]
0x7D5309: mov     large fs:0, ecx
0x7D5310: pop     ecx
0x7D5311: pop     edi
0x7D5312: pop     esi
0x7D5313: pop     ebx
0x7D5314: mov     esp, ebp
0x7D5316: pop     ebp
0x7D5317: retn    4
0x9CEB00: lea     ecx, [ebp+var_1EC]; slot
0x9CEB06: jmp     NiPointerSlot_Release
0x9CEB0B: lea     ecx, [ebp+var_1F8]; slot
0x9CEB11: jmp     NiPointerSlot_Release
0x9CEB16: mov     eax, [ebp+var_1F4]
0x9CEB1C: push    eax
0x9CEB1D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CEB22: pop     ecx
0x9CEB23: retn
0x9CEB24: lea     ecx, [ebp+cullingProcess]; this
0x9CEB2A: jmp     ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x9CEB2F: mov     edx, [esp-4+arg_4]
0x9CEB33: lea     eax, [edx-204h]
0x9CEB39: mov     ecx, [edx-208h]
0x9CEB3F: xor     ecx, eax
0x9CEB41: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CEB46: mov     eax, offset stru_AF79C8
0x9CEB4B: jmp     ___CxxFrameHandler3
