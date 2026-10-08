0x562E20: push    0FFFFFFFFh; 2026-05-25 render dispatch recheck: simple STBB builder creates TES4 billboard screen geometry without calling CSpeedTreeRT::GetGeometry(0x08). It is not a functional 360 billboard exporter.
0x562E22: push    offset SEH_562E20
0x562E27: mov     eax, large fs:0
0x562E2D: push    eax
0x562E2E: sub     esp, 164h
0x562E34: push    ebp
0x562E35: push    esi
0x562E36: push    edi
0x562E37: mov     eax, ds:0B30AACh
0x562E3C: xor     eax, esp
0x562E3E: push    eax
0x562E3F: lea     eax, [esp+180h+var_C]
0x562E46: mov     large fs:0, eax
0x562E4C: mov     esi, [esp+180h+treeObject]
0x562E53: mov     edi, ecx
0x562E55: lea     ecx, [esp+180h+var_138]; this
0x562E59: call    OB_SpeedTreeGeometryOutput_init_010201A0; STBB builder creates a temporary SGeometry-style output object but does not request GetGeometry(0x08); it forces a flat camera, builds a generic TES billboard quad, then restores camera.
0x562E5E: fldz
0x562E60: cmp     dword ptr [edi+0Ch], 0; 2026-05-22 360 gate probe implementation: stock simple STBB builder checks BSTreeModel+0x0C CSpeedTreeRT presence before creating a single flat billboard. This path is still not a 360 exporter.
0x562E64: fst     [esp+180h+position3]
0x562E68: fst     [esp+180h+var_164]
0x562E6C: mov     [esp+180h+var_4], 0
0x562E77: fst     [esp+180h+var_160]
0x562E7B: fst     [esp+180h+direction3]
0x562E7F: fld     dword ptr ds:0A30634h
0x562E85: fstp    [esp+180h+var_158]
0x562E89: fstp    [esp+180h+var_154]
0x562E8D: jz      loc_563065
0x562E93: cmp     dword ptr [edi+8], 2
0x562E97: jz      loc_563065
0x562E9D: test    esi, esi
0x562E9F: jz      loc_563065
0x562EA5: lea     eax, [esp+180h+directionOut3]
0x562EA9: push    eax; directionOut3
0x562EAA: lea     ecx, [esp+184h+positionOut3]
0x562EAE: push    ecx; positionOut3
0x562EAF: call    CSpeedTreeRT__GetCamera; Static CSpeedTreeRT::GetCamera. Copies the process-global camera position and direction vectors to non-NULL output arrays; otherwise records the SDK error.
0x562EB4: lea     edx, [esp+188h+direction3]
0x562EB8: push    edx; direction3
0x562EB9: lea     eax, [esp+18Ch+position3]
0x562EBD: push    eax; position3
0x562EBE: call    CSpeedTreeRT__SetCamera; Static CSpeedTreeRT::SetCamera. On a changed non-NULL camera, updates global vectors, invalidates registered tree camera caches, recomputes unit billboard data, and updates clamped horizontal-billboard fade.
0x562EC3: fldz
0x562EC5: mov     ecx, [edi+0Ch]; this
0x562EC8: fstp    [esp+190h+lodLevel]; lodLevel
0x562ECC: add     esp, 0Ch
0x562ECF: call    CSpeedTreeRT__SetLodLevel
0x562ED4: push    0; distantPlane
0x562ED6: lea     ecx, [esp+184h+a2]
0x562EDA: push    ecx; outData
0x562EDB: mov     ecx, esi; this
0x562EDD: call    TESObjectTREE_BuildBillboardQuadData; 2026-05-22 360 gate probe implementation: stock simple STBB builder calls generic TES billboard quad builder with orientation 0; it does not consume CSpeedTreeRT::GetGeometry(0x08) or directional 360 texcoords.
0x562EE2: mov     eax, [esp+180h+a2]
0x562EE6: mov     dx, [eax+2Eh]
0x562EEA: and     dx, 0FFFh
0x562EEF: or      dx, 4000h
0x562EF4: mov     [eax+2Eh], dx
0x562EF8: mov     eax, [esp+180h+a2]
0x562EFC: mov     byte ptr [eax+30h], 11h
0x562F00: mov     ecx, [esp+180h+a2]
0x562F04: push    0C0h ; 'À'; Size
0x562F09: mov     byte ptr [esp+184h+var_4], 1
0x562F11: mov     byte ptr [ecx+31h], 1Fh
0x562F15: call    FormHeapAlloc
0x562F1A: add     esp, 4
0x562F1D: mov     [esp+180h+var_16C], eax
0x562F21: test    eax, eax
0x562F23: mov     byte ptr [esp+180h+var_4], 2
0x562F2B: jz      short loc_562F3B
0x562F2D: mov     edx, [esp+180h+a2]
0x562F31: push    edx; data
0x562F32: mov     ecx, eax; this
0x562F34: call    OB_NiTriShape_ctorWithData_010201A0; Verified: OB_NiTriShape_ctorWithData constructs the NiTriShape stored as model.billboardShape_STBB (+0x1C); it is named STBB and later attached through BSTreeNode_SetBillboard.
0x562F39: jmp     short loc_562F3D
0x562F3B: xor     eax, eax
0x562F3D: lea     esi, [edi+1Ch]; Verified STBB model field producer: BSTreeModel_CreateBillboardGeometry creates a NiTriShape from TESObjectTREE_BuildBillboardQuadData, stores it in BSTreeModel.billboardShape_STBB (+0x1C), and names it STBB.
0x562F40: push    eax; a2
0x562F41: mov     ecx, esi; this
0x562F43: mov     byte ptr [esp+184h+var_4], 1
0x562F4B: call    NiSmartPointer_Set??; Verified: assigns the newly constructed NiTriShape to billboardShape_STBB via an owning smart pointer.
0x562F50: mov     ecx, [esi]
0x562F52: push    offset aStbb; "STBB"
0x562F57: call    NiObjectNET_SetName
0x562F5C: call    BSTreeModel_CreateAlphaProperty; Leaf geometry installs alpha-test property flags 0x12EC, function GREATER, ref=84. Therefore sampled alpha <=84 is discarded/invisible, not rendered RGB-black.
0x562F61: mov     ebp, eax
0x562F63: test    ebp, ebp
0x562F65: mov     [esp+180h+var_16C], ebp
0x562F69: jz      short loc_562F75
0x562F6B: lea     eax, [ebp+4]
0x562F6E: push    eax; lpAddend
0x562F6F: call    dword ptr ds:0A28078h
0x562F75: test    ebp, ebp
0x562F77: mov     byte ptr [esp+180h+var_4], 3
0x562F7F: jz      short loc_562F89
0x562F81: mov     ecx, [esi]; this
0x562F83: push    ebp; a2
0x562F84: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x562F89: mov     edi, [edi+3Ch]
0x562F8C: test    edi, edi
0x562F8E: jz      short loc_562F98
0x562F90: mov     ecx, [esi]; this
0x562F92: push    edi; a2
0x562F93: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x562F98: mov     eax, [esi]
0x562F9A: push    1; arg3
0x562F9C: push    1; normalMapBypass
0x562F9E: push    1; shaderId
0x562FA0: push    eax; root
0x562FA1: call    BSShaderManager_AssignShadersRecursive; Generic shader assignment in simple STBB builder: applies default/material shader id 1 to the billboard group, not frond id 5.
0x562FA6: mov     ecx, [esi]
0x562FA8: add     esp, 10h
0x562FAB: push    4
0x562FAD: call    NiNode_GetNiPropertyByID;
0x562FB2: test    eax, eax
0x562FB4: jz      short loc_562FC4
0x562FB6: or      dword ptr [eax+1Ch], offset loc_402000
0x562FBD: mov     dword ptr [eax+24h], 0
0x562FC4: mov     eax, [esi]
0x562FC6: mov     eax, [eax+0BCh]
0x562FCC: push    eax
0x562FCD: push    offset stru_B44F90
0x562FD2: call    NiRTTI_Cast
0x562FD7: add     esp, 8
0x562FDA: test    eax, eax
0x562FDC: jz      short loc_563004
0x562FDE: mov     eax, [eax+7Ch]
0x562FE1: mov     ecx, ds:0B3F928h
0x562FE7: mov     esi, [esi]
0x562FE9: mov     edx, [ecx]
0x562FEB: push    eax
0x562FEC: mov     eax, [edx+0B0h]
0x562FF2: push    0
0x562FF4: push    0
0x562FF6: push    esi
0x562FF7: call    eax
0x562FF9: mov     ecx, ds:0B3F928h; this
0x562FFF: call    sub_769030; MoonSugarEffect decode: BeginScene prepack flush. Iterates renderer PrePackObjects, locks/stages shared VB ranges, uses declaration/default/skinned packers, rebuilds IBs, unlocks, clears the map, and heap-frees temporary entries. Plugin mask passes should not borrow this renderer-owned queue/lifetime.
0x563004: lea     ecx, [esp+180h+directionOut3]
0x563008: push    ecx; direction3
0x563009: lea     edx, [esp+184h+positionOut3]
0x56300D: push    edx; position3
0x56300E: call    CSpeedTreeRT__SetCamera; Static CSpeedTreeRT::SetCamera. On a changed non-NULL camera, updates global vectors, invalidates registered tree camera caches, recomputes unit billboard data, and updates clamped horizontal-billboard fade.
0x563013: mov     edi, ds:0A2807Ch
0x563019: add     esp, 8
0x56301C: test    ebp, ebp
0x56301E: mov     byte ptr [esp+180h+var_4], 1
0x563026: jz      short loc_56303D
0x563028: lea     eax, [ebp+4]
0x56302B: push    eax; lpAddend
0x56302C: call    edi ; InterlockedDecrement
0x56302E: test    eax, eax
0x563030: jnz     short loc_56303D
0x563032: mov     edx, [ebp+0]
0x563035: mov     eax, [edx]
0x563037: push    1
0x563039: mov     ecx, ebp
0x56303B: call    eax
0x56303D: mov     esi, [esp+180h+a2]
0x563041: test    esi, esi
0x563043: mov     byte ptr [esp+180h+var_4], 0
0x56304B: jz      short loc_563065
0x56304D: lea     ecx, [esi+4]
0x563050: push    ecx; lpAddend
0x563051: call    edi ; InterlockedDecrement
0x563053: test    eax, eax
0x563055: jnz     short loc_563065
0x563057: test    esi, esi
0x563059: jz      short loc_563065
0x56305B: mov     edx, [esi]
0x56305D: mov     eax, [edx]
0x56305F: push    1
0x563061: mov     ecx, esi
0x563063: call    eax
0x563065: lea     ecx, [esp+180h+var_138]; this
0x563069: mov     [esp+180h+var_4], 0FFFFFFFFh
0x563074: call    OB_SpeedTreeGeometryOutput_Dtor_010201A0; Oblivion aggregate SpeedTree geometry-output destructor/reset: clears all externally owned branch, frond, leaf, and billboard view pointers without freeing them. Called on stack SGeometry output after Bethesda geometry builders finish.
0x563079: mov     ecx, dword ptr [esp+180h+var_C]
0x563080: mov     large fs:0, ecx
0x563087: pop     ecx
0x563088: pop     edi
0x563089: pop     esi
0x56308A: pop     ebp
0x56308B: add     esp, 170h
0x563091: retn    4
0x9BD2B0: lea     ecx, [ebp-138h]; this
0x9BD2B6: jmp     OB_SpeedTreeGeometryOutput_Dtor_010201A0; Oblivion aggregate SpeedTree geometry-output destructor/reset: clears all externally owned branch, frond, leaf, and billboard view pointers without freeing them. Called on stack SGeometry output after Bethesda geometry builders finish.
0x9BD2BB: lea     ecx, [ebp-170h]; slot
0x9BD2C1: jmp     NiPointerSlot_Release
0x9BD2C6: mov     eax, [ebp-16Ch]
0x9BD2CC: push    eax
0x9BD2CD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD2D2: pop     ecx
0x9BD2D3: retn
0x9BD2D4: lea     ecx, [ebp-16Ch]; slot
0x9BD2DA: jmp     NiPointerSlot_Release
0x9BD2DF: mov     edx, [esp+arg_4]
0x9BD2E3: lea     eax, [edx-170h]
0x9BD2E9: mov     ecx, [edx-174h]
0x9BD2EF: xor     ecx, eax
0x9BD2F1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD2F6: mov     eax, offset stru_AE6CE0
0x9BD2FB: jmp     ___CxxFrameHandler3
