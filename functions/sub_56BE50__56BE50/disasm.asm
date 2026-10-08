0x56BE50: push    0FFFFFFFFh; [Verified] BSTempEffectDecal_Ctor registers its DECAL_DATA payload with the BSShaderLightingProperty held at payload+0x48 by calling BSShaderLightingProperty_AddDecalData. The same property/payload pair is later unregistered by the destructor.
0x56BE52: push    offset SEH_56BE50
0x56BE57: mov     eax, large fs:0
0x56BE5D: push    eax
0x56BE5E: sub     esp, 0E8h
0x56BE64: push    ebx
0x56BE65: push    ebp
0x56BE66: push    esi
0x56BE67: push    edi
0x56BE68: mov     eax, ds:0B30AACh
0x56BE6D: xor     eax, esp
0x56BE6F: push    eax
0x56BE70: lea     eax, [esp+108h+var_C]
0x56BE77: mov     large fs:0, eax
0x56BE7D: mov     ebx, ecx
0x56BE7F: mov     [esp+108h+var_C4], ebx
0x56BE83: fld     [esp+108h+arg_4]
0x56BE8A: mov     eax, [esp+108h+parentCell]
0x56BE91: push    ecx
0x56BE92: fstp    [esp+10Ch+durationSeconds]; durationSeconds
0x56BE95: push    eax; parentCell
0x56BE96: call    BSTempEffect_Constructor; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x56BE9B: mov     eax, [esp+108h+decalData]
0x56BEA2: lea     ecx, [eax+8]
0x56BEA5: mov     [esp+108h+var_4], 0
0x56BEB0: mov     dword ptr [ebx], offset ??_7BSTempEffectDecal@@6B@; const BSTempEffectDecal::`vftable'
0x56BEB6: mov     [ebx+18h], eax
0x56BEB9: call    sub_718A50
0x56BEBE: mov     ebp, [esp+108h+sourceData]
0x56BEC5: lea     esi, [ebp+64h]
0x56BEC8: mov     ecx, 9
0x56BECD: lea     edi, [esp+108h+var_54]
0x56BED4: rep movsd
0x56BED6: lea     ecx, [esp+108h+var_C0]
0x56BEDA: push    ecx
0x56BEDB: lea     ecx, [esp+10Ch+var_54]
0x56BEE2: call    sub_7103C0
0x56BEE7: lea     edx, [esp+108h+var_DC]
0x56BEEB: push    edx
0x56BEEC: lea     eax, [esp+10Ch+arg_1C]
0x56BEF3: push    eax
0x56BEF4: lea     ecx, [esp+110h+var_C0]
0x56BEF8: push    1
0x56BEFA: push    ecx
0x56BEFB: call    sub_7107A0
0x56BF00: fld     [esp+118h+a6]
0x56BF07: lea     edx, [esp+118h+var_E8]
0x56BF0B: fsub    dword ptr [ebp+88h]
0x56BF11: push    edx
0x56BF12: lea     eax, [esp+11Ch+var_D0]
0x56BF16: push    eax
0x56BF17: fstp    [esp+120h+var_D0]
0x56BF1B: push    1
0x56BF1D: fld     [esp+124h+a7]
0x56BF24: lea     ecx, [esp+124h+var_C0]
0x56BF28: fsub    dword ptr [ebp+8Ch]
0x56BF2E: push    offset g_zeroNiPoint3
0x56BF33: push    ecx
0x56BF34: fstp    [esp+12Ch+var_CC]
0x56BF38: fld     [esp+12Ch+a8]
0x56BF3F: fsub    dword ptr [ebp+90h]
0x56BF45: fstp    [esp+12Ch+var_C8]
0x56BF49: call    sub_710580
0x56BF4E: mov     edx, [esp+12Ch+var_DC]
0x56BF52: mov     ecx, [esp+12Ch+var_D8]
0x56BF56: add     esp, 18h
0x56BF59: mov     eax, esp
0x56BF5B: mov     [eax], edx
0x56BF5D: mov     edx, [esp+114h+var_D4]
0x56BF61: mov     [eax+4], ecx
0x56BF64: mov     [eax+8], edx
0x56BF67: lea     eax, [esp+114h+out]
0x56BF6E: push    eax
0x56BF6F: call    sub_6F9290
0x56BF74: fld     [esp+118h+a13]
0x56BF7B: mov     esi, eax
0x56BF7D: fstp    [esp+118h+durationSeconds]; angleZ
0x56BF81: mov     ecx, 9
0x56BF86: lea     edi, [esp+118h+right]
0x56BF8A: rep movsd
0x56BF8C: add     esp, 0Ch
0x56BF8F: lea     ecx, [esp+10Ch+var_78]; this
0x56BF96: call    NiMatrix33_InitRotationZ; BloodOnDeath decode 2026-05-30: fallback decal applies a random rotation matrix from the final ctor arg; this is not a size/count control.
0x56BF9B: lea     ecx, [esp+108h+right]
0x56BF9F: push    ecx; right
0x56BFA0: lea     edx, [esp+10Ch+out]
0x56BFA7: push    edx; out
0x56BFA8: lea     ecx, [esp+110h+var_78]; this
0x56BFAF: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x56BFB4: mov     edi, [ebx+18h]
0x56BFB7: add     edi, 8
0x56BFBA: mov     ecx, 9
0x56BFBF: mov     esi, eax
0x56BFC1: rep movsd
0x56BFC3: fld     [esp+108h+var_E8]
0x56BFC7: fchs
0x56BFC9: mov     eax, [ebx+18h]
0x56BFCC: fstp    [esp+108h+var_F4]
0x56BFD0: fld     [esp+108h+var_E4]
0x56BFD4: mov     ecx, [esp+108h+var_F4]
0x56BFD8: fchs
0x56BFDA: add     eax, 2Ch ; ','
0x56BFDD: fstp    [esp+108h+var_F0]
0x56BFE1: mov     edx, [esp+108h+var_F0]
0x56BFE5: fld     [esp+108h+var_E0]
0x56BFE9: mov     [eax], ecx
0x56BFEB: fchs
0x56BFED: mov     [eax+4], edx
0x56BFF0: fstp    [esp+108h+var_EC]
0x56BFF4: mov     ecx, [esp+108h+var_EC]
0x56BFF8: mov     [eax+8], ecx
0x56BFFB: mov     eax, [ebx+18h]
0x56BFFE: mov     ecx, [eax+48h]; this
0x56C001: push    eax; data
0x56C002: call    BSShaderLightingProperty_AddDecalData; [Verified] Appends DECAL_DATA* to this BSShaderLightingProperty's list at +0x80: allocates a node through the list allocator vfunc, stores data at node+8, links at tail, and increments numItems at +0x8C. Resets the base BSShaderProperty cached render-pass state at +0x24. Called by BSTempEffectDecal_Ctor, BSTempEffectDecal_LoadGame, and BSTempEffectGeometryDecal_BuildGeneratedGeometry.
0x56C007: mov     eax, ebx
0x56C009: mov     ecx, [esp+108h+var_C]
0x56C010: mov     large fs:0, ecx
0x56C017: pop     ecx
0x56C018: pop     edi
0x56C019: pop     esi
0x56C01A: pop     ebp
0x56C01B: pop     ebx
0x56C01C: add     esp, 0F4h
0x56C022: retn    30h ; '0'
0x9BD990: mov     ecx, [ebp-0C4h]; self
0x9BD996: jmp     BSTempEffect_Destructor; Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
0x9BD99B: mov     edx, [esp+arg_4]
0x9BD99F: lea     eax, [edx-0F8h]
0x9BD9A5: mov     ecx, [edx-0FCh]
0x9BD9AB: xor     ecx, eax
0x9BD9AD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD9B2: mov     eax, offset stru_AE72B0
0x9BD9B7: jmp     ___CxxFrameHandler3
