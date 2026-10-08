0x4EC990: push    0FFFFFFFFh; Verified terrain ray query: uses NiPick against terrainLODNode with a vertical ray from worldPosition.z + 1,000,000 toward -Z. It returns the selected record's hit Z at +0x10 and copies a separate 3-float vector at +0x28..+0x30; the latter's meaning remains Unknown.
0x4EC992: push    offset SEH_4EC990
0x4EC997: mov     eax, large fs:0
0x4EC99D: push    eax
0x4EC99E: sub     esp, 54h
0x4EC9A1: push    ebx
0x4EC9A2: push    esi
0x4EC9A3: push    edi
0x4EC9A4: mov     eax, ds:0B30AACh
0x4EC9A9: xor     eax, esp
0x4EC9AB: push    eax
0x4EC9AC: lea     eax, [esp+70h+var_C]
0x4EC9B0: mov     large fs:0, eax
0x4EC9B6: mov     esi, ecx
0x4EC9B8: xor     ebx, ebx
0x4EC9BA: cmp     [esi+2Ch], ebx
0x4EC9BD: jz      loc_4ECAC6
0x4EC9C3: mov     eax, [esp+70h+worldPosition]
0x4EC9C7: mov     ecx, [eax]
0x4EC9C9: mov     edx, [eax+4]
0x4EC9CC: mov     eax, [eax+8]
0x4EC9CF: mov     [esp+70h+var_4C], eax
0x4EC9D3: fld     [esp+70h+var_4C]
0x4EC9D7: fadd    qword ptr ds:0A47CA8h; Verified terrain pick ray starts at the requested world position with kTerrainLODQuadRayStartZOffset (1,000,000) added to Z.
0x4EC9DD: mov     [esp+70h+var_54], ecx
0x4EC9E1: mov     [esp+70h+var_50], edx
0x4EC9E5: fstp    [esp+70h+var_4C]
0x4EC9E9: fldz
0x4EC9EB: fst     [esp+70h+var_60]
0x4EC9EF: mov     ecx, [esp+70h+var_60]
0x4EC9F3: fstp    [esp+70h+var_5C]
0x4EC9F7: fld     dword ptr ds:0A30634h
0x4EC9FD: mov     edx, [esp+70h+var_5C]
0x4ECA01: fstp    [esp+70h+var_58]
0x4ECA05: mov     [esp+70h+var_48], ecx
0x4ECA09: mov     eax, [esp+70h+var_58]
0x4ECA0D: lea     ecx, [esp+70h+var_3C]
0x4ECA11: mov     [esp+70h+var_44], edx
0x4ECA15: mov     [esp+70h+var_40], eax; Verified terrain pick ray direction is (0,0,-1), using kTerrainLODQuadRayDirectionZ.
0x4ECA19: call    NiPickContext_ctor; Verified NiPick context initializer: initializes the record array, pick flags/root pointers, and default query settings used by TESTerrainLODQuad_PickSurfacePoint.
0x4ECA1E: mov     esi, [esi+2Ch]
0x4ECA21: mov     eax, [esp+70h+var_28]
0x4ECA25: cmp     eax, esi
0x4ECA27: mov     [esp+70h+var_4], ebx
0x4ECA2B: jz      short loc_4ECA61
0x4ECA2D: cmp     eax, ebx
0x4ECA2F: jz      short loc_4ECA4F
0x4ECA31: mov     edi, eax
0x4ECA33: add     eax, 4
0x4ECA36: push    eax; lpAddend
0x4ECA37: call    dword ptr ds:0A2807Ch
0x4ECA3D: test    eax, eax
0x4ECA3F: jnz     short loc_4ECA4F
0x4ECA41: cmp     edi, ebx
0x4ECA43: jz      short loc_4ECA4F
0x4ECA45: mov     edx, [edi]
0x4ECA47: mov     eax, [edx]
0x4ECA49: push    1
0x4ECA4B: mov     ecx, edi
0x4ECA4D: call    eax
0x4ECA4F: cmp     esi, ebx
0x4ECA51: mov     [esp+70h+var_28], esi
0x4ECA55: jz      short loc_4ECA61
0x4ECA57: add     esi, 4
0x4ECA5A: push    esi; lpAddend
0x4ECA5B: call    dword ptr ds:0A28078h
0x4ECA61: push    ebx
0x4ECA62: lea     ecx, [esp+74h+var_48]
0x4ECA66: push    ecx
0x4ECA67: lea     edx, [esp+78h+var_54]
0x4ECA6B: push    edx
0x4ECA6C: lea     ecx, [esp+7Ch+var_3C]
0x4ECA70: mov     byte ptr [esp+7Ch+var_10+1], 1
0x4ECA75: mov     byte ptr [esp+7Ch+var_10+2], 1
0x4ECA7A: mov     [esp+7Ch+var_34], 1
0x4ECA82: call    NiPick_ExecuteAndSort; Verified terrain query calls NiPick_ExecuteAndSort; the selected nearest record supplies intersectionPoint.z and its +0x28 auxiliary vector. For geometry records that vector is the normalized surface normal; bounds-only fallback records do not explicitly populate it.
0x4ECA87: test    al, al
0x4ECA89: jz      short loc_4ECAB5
0x4ECA8B: mov     eax, [esp+70h+var_20]
0x4ECA8F: mov     eax, [eax]
0x4ECA91: cmp     eax, ebx
0x4ECA93: jz      short loc_4ECAB5
0x4ECA95: fld     dword ptr [eax+10h]
0x4ECA98: mov     ecx, [esp+70h+hitMetadataOut]
0x4ECA9C: fstp    dword ptr [ecx]; Verified output is the selected NiPick record's intersection Z (record +0x10).
0x4ECA9E: mov     edx, [eax+28h]
0x4ECAA1: mov     ecx, [esp+70h+terrainHitPositionOut]
0x4ECAA5: mov     [ecx], edx; Probable for terrain NIF geometry hits: copies NiPickRecord.surfaceNormal_028. The scene-object fallback does not explicitly set this field, so keep the call-site interpretation Probable rather than universal.
0x4ECAA7: mov     edx, [eax+2Ch]
0x4ECAAA: mov     [ecx+4], edx
0x4ECAAD: mov     eax, [eax+30h]
0x4ECAB0: mov     bl, 1
0x4ECAB2: mov     [ecx+8], eax
0x4ECAB5: lea     ecx, [esp+70h+var_3C]
0x4ECAB9: mov     [esp+70h+var_4], 0FFFFFFFFh
0x4ECAC1: call    NiPickContext_dtor; Verified NiPick context destructor: clears/releases hit records, frees the record-pointer array, and releases its retained root object.
0x4ECAC6: mov     al, bl
0x4ECAC8: mov     ecx, dword ptr [esp+70h+var_C]
0x4ECACC: mov     large fs:0, ecx
0x4ECAD3: pop     ecx
0x4ECAD4: pop     edi
0x4ECAD5: pop     esi
0x4ECAD6: pop     ebx
0x4ECAD7: add     esp, 60h
0x4ECADA: retn    0Ch
0x9B64A0: lea     ecx, [ebp-3Ch]
0x9B64A3: jmp     NiPickContext_dtor; Verified NiPick context destructor: clears/releases hit records, frees the record-pointer array, and releases its retained root object.
0x9B64A8: mov     edx, [esp+hitMetadataOut]
0x9B64AC: lea     eax, [edx-60h]
0x9B64AF: mov     ecx, [edx-64h]
0x9B64B2: xor     ecx, eax
0x9B64B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B64B9: mov     eax, offset stru_AE1394
0x9B64BE: jmp     ___CxxFrameHandler3
