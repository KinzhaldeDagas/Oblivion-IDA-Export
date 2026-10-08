0x555A80: push    0FFFFFFFFh; Build the generated head-part geometries from FaceGenRenderState. Iterates nine part slots, morphs each part through the EGM path, assigns textures/materials, attaches it to the biped or skinned node, optionally stitches normals, then adds hair and race tint data.
0x555A82: push    offset SEH_555A80
0x555A87: mov     eax, large fs:0
0x555A8D: push    eax
0x555A8E: sub     esp, 7Ch
0x555A91: push    ebx
0x555A92: push    ebp
0x555A93: push    esi
0x555A94: push    edi
0x555A95: mov     eax, ds:0B30AACh
0x555A9A: xor     eax, esp
0x555A9C: push    eax
0x555A9D: lea     eax, [esp+9Ch+var_C]
0x555AA4: mov     large fs:0, eax
0x555AAA: xor     ebx, ebx
0x555AAC: mov     [esp+9Ch+var_80], ebx
0x555AB0: mov     [esp+9Ch+var_7C], ebx
0x555AB4: mov     [esp+9Ch+var_4], ebx
0x555ABB: mov     [esp+9Ch+var_88], ebx
0x555ABF: xor     esi, esi
0x555AC1: mov     [esp+9Ch+sourceGeometry], ebx
0x555AC5: mov     [esp+9Ch+targetGeometry], ebx
0x555AC9: mov     [esp+9Ch+path], esi
0x555ACD: mov     [esp+9Ch+var_5C], bx
0x555AD2: mov     [esp+9Ch+var_5A], bx
0x555AD7: mov     [esp+9Ch+var_50], ebx
0x555ADB: mov     [esp+9Ch+var_4C], bx
0x555AE0: mov     [esp+9Ch+var_4A], bx
0x555AE5: mov     [esp+9Ch+var_58], ebx
0x555AE9: mov     [esp+9Ch+var_54], bx
0x555AEE: mov     [esp+9Ch+var_52], bx
0x555AF3: mov     [esp+9Ch+var_40], ebx
0x555AF7: mov     [esp+9Ch+var_3C], bx
0x555AFC: mov     [esp+9Ch+var_3A], bx
0x555B01: mov     [esp+9Ch+var_38], ebx
0x555B05: mov     [esp+9Ch+var_34], bx
0x555B0A: mov     [esp+9Ch+var_32], bx
0x555B0F: mov     [esp+9Ch+var_48], ebx
0x555B13: mov     [esp+9Ch+var_44], bx
0x555B18: mov     [esp+9Ch+var_42], bx
0x555B1D: fld     dword ptr ds:0A3721Ch
0x555B23: push    ecx
0x555B24: lea     ecx, [esp+0A0h+var_30]; this
0x555B28: fstp    [esp+0A0h+angleY]; angleY
0x555B2B: mov     byte ptr [esp+0A0h+var_4], 7
0x555B33: call    NiMatrix33_InitRotationY; Verified matrix coefficients make this a Y-axis rotation: Y stays fixed; only the X/Z submatrix contains sin/cos.
0x555B38: xor     ebp, ebp
0x555B3A: mov     [esp+9Ch+var_84], ebp
0x555B3E: mov     edi, edi
0x555B40: cmp     ebp, 2
0x555B43: jnz     short loc_555B51; Slot 2 is the female FaceGenEars model; skip it for male render states.
0x555B45: mov     eax, [esp+9Ch+state]
0x555B4C: cmp     [eax+70h], ebx
0x555B4F: jmp     short loc_555B60
0x555B51: cmp     ebp, 1
0x555B54: jnz     short loc_555B66
0x555B56: mov     ecx, [esp+9Ch+state]
0x555B5D: cmp     [ecx+70h], ebp; Slot 1 is the male FaceGenEars model; skip it for female render states.
0x555B60: jz      loc_556199
0x555B66: mov     edx, [esp+9Ch+state]
0x555B6D: cmp     [edx+7Eh], bx
0x555B71: jz      loc_556199
0x555B77: mov     eax, edx
0x555B79: mov     ecx, [eax+78h]
0x555B7C: cmp     [ecx+ebp*4], ebx
0x555B7F: lea     eax, [ecx+ebp*4]
0x555B82: jz      loc_556199
0x555B88: mov     ecx, [eax]
0x555B8A: movzx   eax, word ptr [ecx+8]
0x555B8E: cmp     ax, 0FFFFh
0x555B92: jnz     short loc_555BAD
0x555B94: mov     eax, [ecx+4]
0x555B97: lea     edi, [eax+1]
0x555B9A: lea     ebx, [ebx+0]
0x555BA0: mov     dl, [eax]
0x555BA2: add     eax, 1
0x555BA5: cmp     dl, bl
0x555BA7: jnz     short loc_555BA0
0x555BA9: sub     eax, edi
0x555BAB: jmp     short loc_555BB0
0x555BAD: movzx   eax, ax
0x555BB0: cmp     eax, ebx
0x555BB2: jz      loc_556199
0x555BB8: mov     edx, [esp+9Ch+state]
0x555BBF: cmp     [edx+8Eh], bx
0x555BC6: jz      loc_556199
0x555BCC: mov     eax, edx
0x555BCE: mov     edx, [eax+88h]
0x555BD4: cmp     [edx+ebp*4], ebx
0x555BD7: lea     eax, [edx+ebp*4]
0x555BDA: jz      loc_556199
0x555BE0: mov     eax, [eax]
0x555BE2: movzx   edx, word ptr [eax+8]
0x555BE6: cmp     dx, 0FFFFh
0x555BEB: jnz     short loc_555C00
0x555BED: mov     eax, [eax+4]
0x555BF0: lea     edi, [eax+1]
0x555BF3: mov     dl, [eax]
0x555BF5: add     eax, 1
0x555BF8: cmp     dl, bl
0x555BFA: jnz     short loc_555BF3
0x555BFC: sub     eax, edi
0x555BFE: jmp     short loc_555C03
0x555C00: movzx   eax, dx
0x555C03: cmp     eax, ebx
0x555C05: jz      loc_556199
0x555C0B: mov     eax, [ecx]
0x555C0D: mov     edx, [eax+14h]
0x555C10: call    edx
0x555C12: push    eax; ArgList
0x555C13: lea     eax, [esp+0A0h+path]
0x555C17: push    offset aMeshesS; "Meshes\\%s"
0x555C1C: push    eax; int
0x555C1D: call    BSStringT_Static_Format
0x555C22: mov     edi, [esp+0A8h+state]
0x555C29: add     esp, 0Ch
0x555C2C: cmp     [edi+0C0h], ebx
0x555C32: jnz     short loc_555C6C
0x555C34: cmp     ebp, ebx
0x555C36: jnz     short loc_555C6C
0x555C38: mov     esi, [esp+9Ch+path]
0x555C3C: lea     ecx, [esp+9Ch+var_48]
0x555C40: push    esi
0x555C41: push    ecx
0x555C42: call    sub_551B40
0x555C47: mov     edx, [esp+0A4h+var_48]
0x555C4B: push    0FFFFFFFFh
0x555C4D: push    ebx
0x555C4E: push    ebx
0x555C4F: push    edx
0x555C50: call    sub_42BDE0
0x555C55: add     esp, 18h
0x555C58: test    eax, eax
0x555C5A: jz      short loc_555C79
0x555C5C: lea     eax, [esp+9Ch+path]
0x555C60: push    esi
0x555C61: push    eax
0x555C62: call    sub_551B40
0x555C67: add     esp, 8
0x555C6A: jmp     short loc_555C75
0x555C6C: cmp     ebp, 6; switch 7 cases
0x555C6F: ja      def_555C79; jumptable 00555C79 default case
0x555C75: mov     esi, [esp+9Ch+path]
0x555C79: jmp     ds:jpt_555C79[ebp*4]; Dispatch the current one of nine Oblivion head-part slots. This address is ordinary control flow inside the function, not a function boundary.
0x555C80: push    ebx; jumptable 00555C79 cases 0-2
0x555C81: push    1
0x555C83: lea     ecx, [esp+0A4h+var_40]
0x555C87: push    esi
0x555C88: push    ecx
0x555C89: call    sub_5500C0
0x555C8E: add     esp, 8
0x555C91: push    eax
0x555C92: lea     edx, [esp+0A8h+var_58]
0x555C96: push    esi
0x555C97: push    edx
0x555C98: call    sub_550010
0x555C9D: add     esp, 8
0x555CA0: push    eax
0x555CA1: push    esi
0x555CA2: lea     eax, [esp+0B0h+var_50]
0x555CA6: push    esi
0x555CA7: push    eax
0x555CA8: call    sub_54FEB0
0x555CAD: add     esp, 8
0x555CB0: push    eax
0x555CB1: call    sub_553620
0x555CB6: add     esp, 18h
0x555CB9: mov     [esp+9Ch+var_80], eax; Primary head-part slots 0-2 use the direct model-loading path.
0x555CBD: jmp     loc_555EDB
0x555CC2: lea     ecx, [esp+9Ch+var_58]; jumptable 00555C79 cases 3-6
0x555CC6: push    esi
0x555CC7: push    ecx
0x555CC8: call    sub_550010
0x555CCD: lea     edx, [esp+0A4h+var_50]
0x555CD1: push    esi
0x555CD2: push    edx
0x555CD3: mov     ebp, eax
0x555CD5: call    sub_54FEB0
0x555CDA: add     esp, 10h
0x555CDD: mov     edi, eax
0x555CDF: mov     [esp+9Ch+var_80], ebx
0x555CE3: cmp     edi, ebx
0x555CE5: mov     byte ptr [esp+9Ch+var_4], 8
0x555CED: jnz     short loc_555D04
0x555CEF: mov     ebp, [esp+9Ch+var_84]
0x555CF3: mov     byte ptr [esp+9Ch+var_4], 7
0x555CFB: mov     [esp+9Ch+var_80], ebx
0x555CFF: jmp     loc_556199
0x555D04: cmp     ds:0B39B80h, ebx
0x555D0A: jnz     short loc_555D11
0x555D0C: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555D11: mov     eax, ds:0B39B80h
0x555D16: cmp     [eax+0DACh], ebx
0x555D1C: jnz     loc_555DAC
0x555D22: push    20h ; ' '; Size
0x555D24: call    FormHeapAlloc
0x555D29: add     esp, 4
0x555D2C: mov     [esp+9Ch+var_64], eax
0x555D30: cmp     eax, ebx
0x555D32: mov     byte ptr [esp+9Ch+var_4], 9
0x555D3A: jz      short loc_555D47
0x555D3C: mov     ecx, eax; this
0x555D3E: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x555D43: mov     esi, eax
0x555D45: jmp     short loc_555D49
0x555D47: xor     esi, esi
0x555D49: cmp     ds:0B39B80h, ebx
0x555D4F: mov     byte ptr [esp+9Ch+var_4], 8
0x555D57: jnz     short loc_555D5E
0x555D59: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555D5E: mov     ecx, ds:0B39B80h
0x555D64: mov     [ecx+0DACh], esi
0x555D6A: mov     edx, ds:0B39B80h
0x555D70: mov     ecx, [edx+0DACh]
0x555D76: mov     eax, ds:0B120ECh
0x555D7B: push    ebx
0x555D7C: mov     [ecx+18h], eax
0x555D7F: call    sub_5506B0
0x555D84: cmp     ds:0B39B80h, ebx
0x555D8A: mov     esi, ds:0B120F4h
0x555D90: jnz     short loc_555D97
0x555D92: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555D97: mov     ecx, ds:0B39B80h
0x555D9D: mov     ecx, [ecx+0DACh]
0x555DA3: push    ebx
0x555DA4: mov     [ecx+1Ch], esi
0x555DA7: call    sub_5506B0
0x555DAC: cmp     ds:0B39B80h, ebx
0x555DB2: jnz     short loc_555DB9
0x555DB4: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555DB9: mov     eax, ds:0B39B80h
0x555DBE: mov     ecx, [eax+0DACh]
0x555DC4: lea     edx, [esp+9Ch+var_80]
0x555DC8: push    edx
0x555DC9: push    edi
0x555DCA: call    sub_5515B0; Secondary parts use the shared BSFaceGenModel cache.
0x555DCF: test    al, al
0x555DD1: jz      short loc_555E15
0x555DD3: mov     esi, [esp+9Ch+var_80]
0x555DD7: cmp     [esi+8], ebx
0x555DDA: jnz     short loc_555DEC
0x555DDC: mov     ecx, [esp+9Ch+path]
0x555DE0: push    ebx; char
0x555DE1: push    ebx; int
0x555DE2: push    ebp; int
0x555DE3: push    ecx; ArgList
0x555DE4: push    edi; int
0x555DE5: mov     ecx, esi
0x555DE7: call    sub_559B50
0x555DEC: lea     edx, [esi+4]
0x555DEF: push    edx; lpAddend
0x555DF0: mov     byte ptr [esp+0A0h+var_4], 7
0x555DF8: call    dword ptr ds:0A2807Ch
0x555DFE: test    eax, eax
0x555E00: jnz     loc_555EC8
0x555E06: mov     eax, [esi]
0x555E08: mov     edx, [eax]
0x555E0A: push    1
0x555E0C: mov     ecx, esi
0x555E0E: call    edx
0x555E10: jmp     loc_555EC8
0x555E15: push    1Ch; Size
0x555E17: call    FormHeapAlloc
0x555E1C: add     esp, 4
0x555E1F: mov     [esp+9Ch+var_64], eax
0x555E23: cmp     eax, ebx
0x555E25: mov     byte ptr [esp+9Ch+var_4], 0Ah
0x555E2D: jz      short loc_555E38
0x555E2F: mov     ecx, eax; this
0x555E31: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x555E36: jmp     short loc_555E3A
0x555E38: xor     eax, eax
0x555E3A: push    eax; a2
0x555E3B: lea     ecx, [esp+0A0h+var_80]; this
0x555E3F: mov     byte ptr [esp+0A0h+var_4], 8
0x555E47: call    NiSmartPointer_Set??
0x555E4C: mov     eax, [esp+9Ch+path]
0x555E50: mov     esi, [esp+9Ch+var_80]
0x555E54: push    ebx; char
0x555E55: push    ebx; int
0x555E56: push    ebp; int
0x555E57: push    eax; ArgList
0x555E58: push    edi; int
0x555E59: mov     ecx, esi
0x555E5B: call    sub_559B50; Load/initialize the cached BSFaceGenModel used for this head part.
0x555E60: test    al, al
0x555E62: jz      short loc_555E86
0x555E64: cmp     ds:0B39B80h, ebx
0x555E6A: jnz     short loc_555E71
0x555E6C: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555E71: mov     ecx, ds:0B39B80h
0x555E77: mov     ecx, [ecx+0DACh]
0x555E7D: push    esi
0x555E7E: push    edi
0x555E7F: call    sub_551450
0x555E84: jmp     short loc_555EA4
0x555E86: cmp     esi, ebx
0x555E88: jz      short loc_555EA4
0x555E8A: lea     edx, [esi+4]
0x555E8D: push    edx; lpAddend
0x555E8E: call    dword ptr ds:0A2807Ch
0x555E94: test    eax, eax
0x555E96: jnz     short loc_555EA2
0x555E98: mov     eax, [esi]
0x555E9A: mov     edx, [eax]
0x555E9C: push    1
0x555E9E: mov     ecx, esi
0x555EA0: call    edx
0x555EA2: xor     esi, esi
0x555EA4: cmp     esi, ebx
0x555EA6: mov     byte ptr [esp+9Ch+var_4], 7
0x555EAE: jz      short loc_555EC8
0x555EB0: lea     eax, [esi+4]
0x555EB3: push    eax; lpAddend
0x555EB4: call    dword ptr ds:0A2807Ch
0x555EBA: test    eax, eax
0x555EBC: jnz     short loc_555EC8
0x555EBE: mov     edx, [esi]
0x555EC0: mov     eax, [edx]
0x555EC2: push    1
0x555EC4: mov     ecx, esi
0x555EC6: call    eax
0x555EC8: mov     edi, [esp+9Ch+state]
0x555ECF: mov     ebp, [esp+9Ch+var_84]
0x555ED3: mov     [esp+9Ch+var_80], esi
0x555ED7: mov     esi, [esp+9Ch+path]; jumptable 00555C79 default case
0x555EDB: mov     ecx, [esp+9Ch+var_80]; this
0x555EDF: cmp     ecx, ebx
0x555EE1: jz      loc_556199
0x555EE7: lea     edx, [esp+9Ch+var_88]
0x555EEB: push    edx; outGeometry
0x555EEC: push    edi; parameters
0x555EED: call    BSFaceGenModel_CreateMorphedGeometry; Clone model geometry and apply both EGM position banks at scale 1.0. The wrapper returns the deformed geometry without regenerating normals.
0x555EF2: test    al, al
0x555EF4: jz      loc_556199
0x555EFA: mov     ecx, [esp+9Ch+var_88]
0x555EFE: cmp     ecx, ebx
0x555F00: jz      loc_556199; Common clone/EGM deformation path for every active head-part slot: Face, Ears, Mouth, TeethLower, TeethUpper, Tongue, EyeLeft, and EyeRight. No per-part normal regeneration follows.
0x555F06: mov     eax, [edi+98h]
0x555F0C: mov     edx, [eax+ebp*4]
0x555F0F: push    edx; Src
0x555F10: call    NiObjectNET_SetName
0x555F15: cmp     ebp, ebx
0x555F17: jnz     short loc_555F23
0x555F19: mov     eax, [esp+9Ch+var_88]
0x555F1D: mov     [esp+9Ch+sourceGeometry], eax; Capture the generated slot-0 FaceGenFace geometry as the normal-stitch source.
0x555F21: jmp     short loc_555F35
0x555F23: cmp     ebp, 1
0x555F26: jz      short loc_555F2D
0x555F28: cmp     ebp, 2
0x555F2B: jnz     short loc_555F35
0x555F2D: mov     ecx, [esp+9Ch+var_88]
0x555F31: mov     [esp+9Ch+targetGeometry], ecx; Capture the one active sex-specific FaceGenEars geometry as the normal-stitch target.
0x555F35: mov     edx, [edi+88h]
0x555F3B: mov     eax, [edx+ebp*4]
0x555F3E: mov     eax, [eax+4]
0x555F41: cmp     eax, ebx
0x555F43: jnz     short loc_555F4A
0x555F45: mov     eax, offset EmptyString
0x555F4A: push    eax; ArgList
0x555F4B: lea     eax, [esp+0A0h+path]
0x555F4F: push    offset aTexturesS; "Textures\\%s"
0x555F54: push    eax; int
0x555F55: call    BSStringT_Static_Format
0x555F5A: mov     esi, [esp+0A8h+path]
0x555F5E: add     esp, 0Ch
0x555F61: push    ebx; searchArchives
0x555F62: push    ebx; allowMissing
0x555F63: push    esi; path
0x555F64: lea     ecx, [esp+0A8h+slot]
0x555F68: push    ecx; outTexture
0x555F69: mov     ecx, ds:0B333A0h
0x555F6F: call    OB_TES_LoadOrFindSourceTexture_010201A0; TES texture cache/load helper: checks the global texture map, optionally verifies file existence via FileFinder, loads NiSourceTexture by filename, caches it, and returns a refcounted texture pointer.
0x555F74: push    eax; incoming
0x555F75: lea     ecx, [esp+0A0h+var_7C]; this
0x555F79: mov     byte ptr [esp+0A0h+var_4], 0Bh
0x555F81: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x555F86: lea     ecx, [esp+9Ch+slot]; slot
0x555F8A: mov     byte ptr [esp+9Ch+var_4], 7
0x555F92: call    NiPointerSlot_Release
0x555F97: mov     edi, [esp+9Ch+var_7C]
0x555F9B: cmp     edi, ebx
0x555F9D: jz      short loc_556010
0x555F9F: push    30h ; '0'; Size
0x555FA1: call    FormHeapAlloc
0x555FA6: add     esp, 4
0x555FA9: mov     [esp+9Ch+var_64], eax
0x555FAD: cmp     eax, ebx
0x555FAF: mov     byte ptr [esp+9Ch+var_4], 0Ch
0x555FB7: jz      short loc_555FC4
0x555FB9: mov     ecx, eax
0x555FBB: call    NiTexturingProperty__NiTexturingProperty
0x555FC0: mov     esi, eax
0x555FC2: jmp     short loc_555FC6
0x555FC4: xor     esi, esi
0x555FC6: push    edi; texture
0x555FC7: mov     ecx, esi; this
0x555FC9: mov     byte ptr [esp+0A0h+var_4], 7
0x555FD1: call    OB_NiTexturingProperty_SetBaseTexture_010201A0
0x555FD6: mov     ecx, [esp+9Ch+var_88]
0x555FDA: push    6
0x555FDC: call    NiNode_GetNiPropertyByID;
0x555FE1: test    eax, eax
0x555FE3: jz      short loc_555FFE
0x555FE5: mov     ecx, [esp+9Ch+var_88]
0x555FE9: push    6
0x555FEB: lea     edx, [esp+0A0h+var_6C]
0x555FEF: push    edx
0x555FF0: call    sub_708560
0x555FF5: lea     ecx, [esp+9Ch+var_6C]; slot
0x555FF9: call    NiPointerSlot_Release
0x555FFE: mov     ecx, [esp+9Ch+var_88]; this
0x556002: push    esi; a2
0x556003: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x556008: mov     esi, [esp+9Ch+path]
0x55600C: mov     ebp, [esp+9Ch+var_84]
0x556010: cmp     ebp, 5
0x556013: jz      short loc_55601A
0x556015: cmp     ebp, 4
0x556018: jnz     short loc_556059
0x55601A: mov     ecx, [esp+9Ch+var_88]
0x55601E: push    ebx
0x55601F: call    NiNode_GetNiPropertyByID;
0x556024: test    eax, eax
0x556026: jz      short loc_556040
0x556028: mov     ecx, [esp+9Ch+var_88]
0x55602C: push    ebx
0x55602D: lea     eax, [esp+0A0h+var_68]
0x556031: push    eax
0x556032: call    sub_708560
0x556037: lea     ecx, [esp+9Ch+var_68]; slot
0x55603B: call    NiPointerSlot_Release
0x556040: mov     esi, [esp+9Ch+var_88]
0x556044: call    sub_550550
0x556049: push    eax; a2
0x55604A: mov     ecx, esi; this
0x55604C: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x556051: mov     esi, [esp+9Ch+path]
0x556055: mov     ebp, [esp+9Ch+var_84]
0x556059: cmp     ebp, ebx
0x55605B: jz      short loc_556067
0x55605D: cmp     ebp, 1
0x556060: jz      short loc_556067
0x556062: cmp     ebp, 2
0x556065: jnz     short loc_5560D1
0x556067: mov     ecx, [esp+9Ch+var_88]
0x55606B: push    2
0x55606D: call    NiNode_GetNiPropertyByID;
0x556072: cmp     eax, ebx
0x556074: jz      short loc_556084
0x556076: push    offset aSkin; "skin"
0x55607B: mov     ecx, eax
0x55607D: call    NiObjectNET_SetName
0x556082: jmp     short loc_5560D1
0x556084: push    5Ch ; '\'; Size
0x556086: call    FormHeapAlloc
0x55608B: add     esp, 4
0x55608E: mov     [esp+9Ch+var_64], eax
0x556092: cmp     eax, ebx
0x556094: mov     byte ptr [esp+9Ch+var_4], 0Dh
0x55609C: jz      short loc_5560A9
0x55609E: mov     ecx, eax; this
0x5560A0: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x5560A5: mov     esi, eax
0x5560A7: jmp     short loc_5560AB
0x5560A9: xor     esi, esi
0x5560AB: push    offset aSkin; "skin"
0x5560B0: mov     ecx, esi
0x5560B2: mov     byte ptr [esp+0A0h+var_4], 7
0x5560BA: call    NiObjectNET_SetName
0x5560BF: mov     ecx, [esp+9Ch+var_88]; this
0x5560C3: push    esi; a2
0x5560C4: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x5560C9: mov     esi, [esp+9Ch+path]
0x5560CD: mov     ebp, [esp+9Ch+var_84]
0x5560D1: mov     eax, [esp+9Ch+var_88]
0x5560D5: cmp     [eax+0B8h], ebx
0x5560DB: push    ebx
0x5560DC: jz      short loc_556153
0x5560DE: cmp     [esp+0A0h+preferBipedGeometry], bl
0x5560E5: jz      short loc_55613D
0x5560E7: mov     ecx, eax
0x5560E9: call    sub_478350
0x5560EE: mov     eax, [esp+9Ch+var_88]
0x5560F2: mov     ecx, ds:0B3F9A8h
0x5560F8: mov     [eax+54h], ecx
0x5560FB: mov     edx, ds:0B3F9ACh
0x556101: add     eax, 54h ; 'T'
0x556104: mov     [eax+4], edx
0x556107: mov     ecx, ds:0B3F9B0h
0x55610D: mov     edx, [esp+9Ch+bipedNode]
0x556114: mov     [eax+8], ecx
0x556117: mov     edi, [esp+9Ch+var_88]
0x55611B: add     edi, 30h ; '0'
0x55611E: mov     ecx, 9
0x556123: lea     esi, [esp+9Ch+var_30]
0x556127: rep movsd
0x556129: mov     ecx, [edx]
0x55612B: mov     eax, [ecx]
0x55612D: mov     edx, [esp+9Ch+var_88]
0x556131: mov     eax, [eax+84h]
0x556137: push    ebx
0x556138: push    edx
0x556139: call    eax
0x55613B: jmp     short loc_556179
0x55613D: mov     ecx, [esp+0A0h+skinnedNode]
0x556144: mov     ecx, [ecx]
0x556146: mov     edx, [ecx]
0x556148: push    eax
0x556149: mov     eax, [edx+84h]
0x55614F: call    eax
0x556151: jmp     short loc_556181
0x556153: lea     edi, [eax+30h]
0x556156: mov     ecx, 9
0x55615B: lea     esi, [esp+0A0h+var_30]
0x55615F: rep movsd
0x556161: mov     ecx, [esp+0A0h+bipedNode]
0x556168: mov     ecx, [ecx]
0x55616A: mov     edx, [ecx]
0x55616C: mov     eax, [esp+0A0h+var_88]
0x556170: mov     edx, [edx+84h]
0x556176: push    eax
0x556177: call    edx
0x556179: mov     esi, [esp+9Ch+path]
0x55617D: mov     ebp, [esp+9Ch+var_84]
0x556181: push    ebx; a2
0x556182: lea     ecx, [esp+0A0h+var_7C]; this
0x556186: mov     [esp+0A0h+var_80], ebx
0x55618A: call    NiSmartPointer_Set??
0x55618F: push    ebx; a2
0x556190: lea     ecx, [esp+0A0h+var_88]; this
0x556194: call    NiSmartPointer_Set??
0x556199: add     ebp, 1
0x55619C: cmp     ebp, 9
0x55619F: mov     [esp+9Ch+var_84], ebp
0x5561A3: jb      loc_555B40
0x5561A9: cmp     ds:0B120BCh, bl; Optional seam correction is gated by the INI setting bFixFaceNormals:General (default false in the executable).
0x5561AF: jz      short loc_5561D7
0x5561B1: mov     ecx, [esp+9Ch+sourceGeometry]
0x5561B5: cmp     ecx, ebx
0x5561B7: jz      short loc_5561D7
0x5561B9: mov     eax, [esp+9Ch+targetGeometry]
0x5561BD: cmp     eax, ebx
0x5561BF: jz      short loc_5561D7
0x5561C1: fld     dword ptr ds:0A2FAACh
0x5561C7: push    ebx; offsetVerticesAlongNormals
0x5561C8: push    ebx; unused
0x5561C9: push    ecx
0x5561CA: fstp    [esp+0A8h+maxDistance]; maxDistance
0x5561CD: push    eax; targetGeometry
0x5561CE: push    ecx; sourceGeometry
0x5561CF: call    NiGeometry_CopyNearestVertexNormals; Native face seam repair: copy normalized nearest normals FaceGenFace -> active FaceGenEars at a fixed 0.10-unit radius. This is the sole head-builder call site.
0x5561D4: add     esp, 14h
0x5561D7: mov     edi, [esp+9Ch+state]
0x5561DE: cmp     [edi+60h], ebx
0x5561E1: jz      short loc_556204
0x5561E3: mov     eax, dword ptr [esp+9Ch+preferBipedGeometry]
0x5561EA: mov     ecx, [esp+9Ch+skinnedNode]
0x5561F1: mov     edx, [esp+9Ch+bipedNode]
0x5561F8: push    eax; preferBipedGeometry
0x5561F9: push    edi; state
0x5561FA: push    ecx; skinnedNode
0x5561FB: push    edx; bipedNode
0x5561FC: call    BSFaceGen_BuildHairGeometryNodes; Attach the selected hair after all generated facial geometries have been built.
0x556201: add     esp, 10h
0x556204: cmp     [edi+0B8h], ebx
0x55620A: jz      short loc_556235
0x55620C: cmp     [edi+0BCh], ebx
0x556212: jz      short loc_556235
0x556214: mov     eax, dword ptr [esp+9Ch+preferBipedGeometry]
0x55621B: mov     ecx, [esp+9Ch+skinnedNode]
0x556222: mov     edx, [esp+9Ch+bipedNode]
0x556229: push    eax
0x55622A: push    edi
0x55622B: push    ecx
0x55622C: push    edx
0x55622D: call    sub_5547F0; Apply race texture/tint inputs from the completed FaceGenRenderState.
0x556232: add     esp, 10h
0x556235: mov     eax, [esp+9Ch+var_48]
0x556239: push    eax
0x55623A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55623F: push    ebx
0x556240: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x556245: mov     ecx, [esp+0A4h+var_40]
0x556249: push    ecx
0x55624A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x55624F: mov     edx, [esp+0A8h+var_58]
0x556253: push    edx
0x556254: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x556259: mov     eax, [esp+0ACh+var_50]
0x55625D: push    eax
0x55625E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x556263: push    esi
0x556264: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x556269: mov     eax, [esp+0B4h+var_88]
0x55626D: add     esp, 18h
0x556270: cmp     eax, ebx
0x556272: mov     byte ptr [esp+9Ch+var_4], bl
0x556279: jz      short loc_556299
0x55627B: mov     esi, eax
0x55627D: add     eax, 4
0x556280: push    eax; lpAddend
0x556281: call    dword ptr ds:0A2807Ch
0x556287: test    eax, eax
0x556289: jnz     short loc_556299
0x55628B: cmp     esi, ebx
0x55628D: jz      short loc_556299
0x55628F: mov     edx, [esi]
0x556291: mov     eax, [edx]
0x556293: push    1
0x556295: mov     ecx, esi
0x556297: call    eax
0x556299: mov     esi, [esp+9Ch+var_7C]
0x55629D: cmp     esi, ebx
0x55629F: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x5562AA: jz      short loc_5562C4
0x5562AC: lea     ecx, [esi+4]
0x5562AF: push    ecx; lpAddend
0x5562B0: call    dword ptr ds:0A2807Ch
0x5562B6: test    eax, eax
0x5562B8: jnz     short loc_5562C4
0x5562BA: mov     edx, [esi]
0x5562BC: mov     eax, [edx]
0x5562BE: push    1
0x5562C0: mov     ecx, esi
0x5562C2: call    eax
0x5562C4: mov     al, 1
0x5562C6: mov     ecx, [esp+9Ch+var_C]
0x5562CD: mov     large fs:0, ecx
0x5562D4: pop     ecx
0x5562D5: pop     edi
0x5562D6: pop     esi
0x5562D7: pop     ebp
0x5562D8: pop     ebx
0x5562D9: add     esp, 88h
0x5562DF: retn
0x9BC2D0: lea     ecx, [ebp-7Ch]; slot
0x9BC2D3: jmp     NiPointerSlot_Release
0x9BC2D8: lea     ecx, [ebp-88h]; slot
0x9BC2DE: jmp     NiPointerSlot_Release
0x9BC2E3: lea     ecx, [ebp-60h]; void *
0x9BC2E6: jmp     BSStringT_Clear
0x9BC2EB: lea     ecx, [ebp-50h]; void *
0x9BC2EE: jmp     BSStringT_Clear
0x9BC2F3: lea     ecx, [ebp-58h]; void *
0x9BC2F6: jmp     BSStringT_Clear
0x9BC2FB: lea     ecx, [ebp-40h]; void *
0x9BC2FE: jmp     BSStringT_Clear
0x9BC303: lea     ecx, [ebp-38h]; void *
0x9BC306: jmp     BSStringT_Clear
0x9BC30B: lea     ecx, [ebp-48h]; void *
0x9BC30E: jmp     BSStringT_Clear
0x9BC313: lea     ecx, [ebp-80h]; slot
0x9BC316: jmp     NiPointerSlot_Release
0x9BC31B: mov     eax, [ebp-64h]
0x9BC31E: push    eax
0x9BC31F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BC324: pop     ecx
0x9BC325: retn
0x9BC326: mov     eax, [ebp-64h]
0x9BC329: push    eax
0x9BC32A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BC32F: pop     ecx
0x9BC330: retn
0x9BC331: lea     ecx, [ebp-70h]; slot
0x9BC334: jmp     NiPointerSlot_Release
0x9BC339: mov     eax, [ebp-64h]
0x9BC33C: push    eax
0x9BC33D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BC342: pop     ecx
0x9BC343: retn
0x9BC344: mov     eax, [ebp-64h]
0x9BC347: push    eax
0x9BC348: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BC34D: pop     ecx
0x9BC34E: retn
0x9BC34F: mov     edx, [esp+skinnedNode]
0x9BC353: lea     eax, [edx-8Ch]
0x9BC359: mov     ecx, [edx-90h]
0x9BC35F: xor     ecx, eax
0x9BC361: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC366: mov     eax, offset stru_AE5EC4
0x9BC36B: jmp     ___CxxFrameHandler3
