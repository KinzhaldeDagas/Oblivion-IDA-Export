0x5551C0: push    0FFFFFFFFh; Applies a complete FaceGenRenderState to a BSFaceGenNiNode: projects age, binds nine head-part resources, handles sex-specific parts, eyes and hair, then rebuilds property state and updates the node.
0x5551C2: push    offset BSFaceGen_ApplyHeadParametersToNode_SEH
0x5551C7: mov     eax, large fs:0
0x5551CD: push    eax
0x5551CE: sub     esp, 78h
0x5551D1: mov     eax, ds:0B30AACh
0x5551D6: xor     eax, esp
0x5551D8: mov     [esp+84h+var_10], eax
0x5551DC: push    ebx
0x5551DD: push    ebp
0x5551DE: push    esi
0x5551DF: push    edi
0x5551E0: mov     eax, ds:0B30AACh
0x5551E5: xor     eax, esp
0x5551E7: push    eax
0x5551E8: lea     eax, [esp+98h+var_C]
0x5551EF: mov     large fs:0, eax
0x5551F5: mov     eax, [esp+98h+faceNode]
0x5551FC: mov     ebp, [esp+98h+parameters]
0x555203: xor     ebx, ebx
0x555205: mov     [esp+98h+var_6C], ebx
0x555209: mov     [esp+98h+var_3C], eax
0x55520D: mov     [esp+98h+shaderId], ebp
0x555211: mov     [esp+98h+var_28], ebx
0x555215: mov     [esp+98h+var_24], bx
0x55521A: mov     [esp+98h+var_22], bx
0x55521F: mov     [esp+98h+var_4], ebx
0x555226: mov     [esp+98h+var_18], ebx
0x55522D: mov     word ptr [esp+98h+var_14], bx
0x555235: mov     word ptr [esp+98h+var_14+2], bx
0x55523D: mov     [esp+98h+var_20], ebx
0x555241: mov     [esp+98h+var_1C], bx
0x555246: mov     [esp+98h+var_1A], bx
0x55524B: mov     [esp+98h+outPath.m_data], ebx
0x55524F: mov     [esp+98h+outPath.m_dataLen], bx
0x555254: mov     [esp+98h+outPath.m_bufLen], bx
0x555259: mov     [esp+98h+path], ebx
0x55525D: mov     [esp+98h+var_70], bx
0x555262: mov     [esp+98h+var_6E], bx
0x555267: mov     [esp+98h+var_64], ebx
0x55526B: mov     [esp+98h+outTexture], ebx
0x55526F: mov     [esp+98h+var_68], ebx
0x555273: cmp     eax, ebx
0x555275: mov     byte ptr [esp+98h+var_4], 7
0x55527D: mov     [esp+98h+var_7C], ebx
0x555281: jz      loc_5559A7
0x555287: cmp     ebp, ebx
0x555289: jz      loc_5559A7; This appearance pass requires a built node and render state, then updates age/EGT textures and property state. It does not re-run EGM vertex deformation or invalidate the preceding Face-to-Ears normal stitch.
0x55528F: cmp     ds:0B39B80h, ebx
0x555295: jnz     short loc_55529C
0x555297: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x55529C: mov     ecx, ds:0B39B80h
0x5552A2: push    ebp; parameters
0x5552A3: push    ebx; matrixChannel
0x5552A4: push    ebx; controlIndex
0x5552A5: push    ebx; fanIndex
0x5552A6: add     ecx, 0C8h ; 'È'; this
0x5552AC: call    FaceGenFanControls_GetControlValue; Control value = projectionOffset + first element of basis * parameters.matrix[2*matrixChannel]. Record is this+0x25C + fanIndex*0x80 + controlIndex*0x40 + matrixChannel*0x20; layout FaceGenFanProjectionRecord (0x20 bytes). Returns zero when initialized byte is false. Signed upper-bound checks only; negative indices are not rejected. Assertion helper logs and returns, so oversized indices are not stopped either. Caller misuse impact unproven.
0x5552B1: fstp    [esp+98h+root]; Project the age control from FaceGen coefficients. The result is floored to an integer for age-specific face texture selection.
0x5552B5: fld     [esp+98h+root]
0x5552B9: sub     esp, 8
0x5552BC: fstp    qword ptr [esp+0A0h+a2]; double
0x5552BF: call    _floor; Floor the continuous FaceGen age before filename resolution. Randomize Face produces geometry age in [15,65], so the resolver receives integer ages 15 through 64 (65 only at the RNG endpoint).
0x5552C4: add     esp, 8
0x5552C7: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5552CC: xor     esi, esi
0x5552CE: mov     [esp+98h+age], al
0x5552D2: mov     [esp+98h+var_60], esi
0x5552D6: mov     edi, 1
0x5552DB: jmp     short loc_5552E0
0x5552E0: push    ebx; a3
0x5552E1: push    offset EmptyString; a2
0x5552E6: lea     ecx, [esp+0A0h+outPath]; this
0x5552EA: call    BSStringT_Set; The sole caller clears outPath to an empty string immediately before invoking the age resolver for each head part.
0x5552EF: cmp     esi, 2
0x5552F2: jnz     short loc_5552FF; Head-part slot 2 is female-only.
0x5552F4: cmp     [ebp+70h], ebx
0x5552F7: jz      loc_5556DE
0x5552FD: jmp     short loc_555327
0x5552FF: cmp     esi, edi
0x555301: jnz     short loc_55530D
0x555303: cmp     [ebp+70h], edi
0x555306: jnz     short loc_555327; Head-part slot 1 is male-only.
0x555308: jmp     loc_5556E6
0x55530D: cmp     esi, 7
0x555310: jz      loc_5556DE
0x555316: cmp     esi, 8
0x555319: jz      loc_5556DE; Skip slots 7 and 8 in the general loop; eyes and hair are handled explicitly after the other head parts.
0x55531F: cmp     esi, ebx
0x555321: mov     [esp+98h+var_7C], edi
0x555325: jnz     short loc_55532F
0x555327: mov     [esp+98h+var_7C], 0Eh
0x55532F: mov     eax, [ebp+78h]
0x555332: lea     edi, ds:0[esi*4]
0x555339: cmp     [edi+eax], ebx
0x55533C: jz      loc_5556DE
0x555342: mov     ecx, [ebp+88h]
0x555348: cmp     [edi+ecx], ebx
0x55534B: jz      loc_5556DE
0x555351: mov     eax, [ebp+98h]
0x555357: mov     ecx, [esp+98h+var_3C]
0x55535B: mov     edx, [ecx]
0x55535D: mov     edx, [edx+58h]
0x555360: add     eax, edi
0x555362: mov     eax, [eax]
0x555364: push    eax
0x555365: call    edx; Find the scene node using the nodeNames entry parallel to this head-part slot.
0x555367: cmp     eax, ebx
0x555369: mov     [esp+98h+var_58], eax
0x55536D: jz      loc_5556DE
0x555373: mov     edx, [eax]
0x555375: mov     ecx, eax
0x555377: mov     eax, [edx+10h]
0x55537A: call    eax
0x55537C: cmp     eax, ebx
0x55537E: jz      loc_5556DE
0x555384: push    eax
0x555385: call    sub_5507E0
0x55538A: mov     ebp, eax
0x55538C: add     esp, 4
0x55538F: cmp     ebp, ebx
0x555391: jz      loc_5556DE
0x555397: mov     ecx, [esp+98h+var_7C]
0x55539B: mov     esi, [esp+98h+var_58]
0x55539F: push    1; arg3
0x5553A1: push    1; normalMapBypass
0x5553A3: push    ecx; shaderId
0x5553A4: push    esi; root
0x5553A5: call    BSShaderManager_AssignShadersRecursive; Assign FaceGen shaders to the resolved head-part node before binding texture/property state.
0x5553AA: add     esp, 10h
0x5553AD: push    4
0x5553AF: mov     ecx, esi
0x5553B1: call    NiNode_GetNiPropertyByID;
0x5553B6: mov     esi, eax
0x5553B8: cmp     esi, ebx
0x5553BA: jz      short loc_5553DF
0x5553BC: mov     edx, [esi]
0x5553BE: mov     eax, [edx+54h]
0x5553C1: mov     ecx, esi
0x5553C3: call    eax
0x5553C5: cmp     eax, 5
0x5553C8: jl      short loc_5553DF
0x5553CA: mov     edx, [esi]
0x5553CC: mov     eax, [edx+54h]
0x5553CF: mov     ecx, esi
0x5553D1: call    eax
0x5553D3: cmp     eax, 0Ah
0x5553D6: jg      short loc_5553DF
0x5553D8: mov     eax, 1
0x5553DD: jmp     short loc_5553E1
0x5553DF: xor     eax, eax
0x5553E1: neg     eax
0x5553E3: sbb     eax, eax
0x5553E5: and     eax, esi
0x5553E7: mov     esi, eax
0x5553E9: jz      loc_5556DE
0x5553EF: mov     eax, [esp+98h+shaderId]
0x5553F3: cmp     [eax+0AEh], bx
0x5553FA: jz      short loc_55541C
0x5553FC: cmp     [eax+0B4h], bl
0x555402: jz      short loc_55541C
0x555404: mov     ecx, eax
0x555406: mov     edx, [ecx+0A8h]
0x55540C: add     edx, edi
0x55540E: push    edx; incoming
0x55540F: lea     ecx, [esp+9Ch+outTexture]; this
0x555413: call    OB_NiSmartPointer_Assign_010201A0; Use the optional NiTexture override when the render state marks textureOverrides active.
0x555418: mov     eax, [esp+98h+shaderId]
0x55541C: cmp     [esp+98h+var_60], ebx
0x555420: jnz     loc_5554F0
0x555426: cmp     [esp+98h+age], bl
0x55542A: jl      loc_5554F0
0x555430: mov     eax, [eax+88h]
0x555436: mov     eax, [eax]
0x555438: mov     eax, [eax+4]
0x55543B: cmp     eax, ebx
0x55543D: jnz     short loc_555444
0x55543F: mov     eax, offset EmptyString
0x555444: mov     ecx, [esp+98h+shaderId]
0x555448: mov     edx, [ecx+70h]
0x55544B: push    eax; baseTexturePath
0x55544C: mov     eax, dword ptr [esp+9Ch+age]
0x555450: push    eax; age
0x555451: push    edx; sex
0x555452: lea     eax, [esp+0A4h+outPath]
0x555456: push    eax; outPath
0x555457: call    FaceGen_BuildAgeTexturePath; Native CALL FaceGen_BuildAgeTexturePath followed at +5 by add esp,0x10. Blockhead c4e73ac1 installs JMP to its stdcall wrapper and resumes +8. Prettier Faces 1.19.10 compatibility: accepts E9 only when destination maps to committed MEM_IMAGE allocation owned by loaded Blockhead.dll, preserves site and skips PF age hook; validates other core sites normally before any writes. Native E8/target installs PF age hook. Unknown replacement fails closed. PF nearest-age lookup/path guard do not run when Blockhead owns this site. Combined in-game verification pending.
0x55545C: add     esp, 10h
0x55545F: test    eax, eax
0x555461: jz      loc_5554EC
0x555467: mov     edi, [esp+98h+shaderId]
0x55546B: cmp     [edi+0AEh], bx
0x555472: jz      short loc_55547E
0x555474: mov     ecx, [edi+0A8h]
0x55547A: cmp     [ecx], ebx
0x55547C: jnz     short loc_5554A0
0x55547E: mov     ecx, offset unk_B39C00; lpCriticalSection
0x555483: call    sub_43F2E0
0x555488: push    ebx; maxBasisShapes
0x555489: lea     edx, [esp+9Ch+outTexture]
0x55548D: push    edx; outTexture
0x55548E: push    edi; parameters
0x55548F: mov     ecx, ebp; this
0x555491: call    BSFaceGenModel_GenerateMorphTexture; Generate the primary face EGT morph texture with maxBasisShapes=0, invoking the stock 30-basis cap despite the shipped 50-basis head asset.
0x555496: mov     ecx, offset unk_B39C00; lpCriticalSection
0x55549B: call    sub_43F300
0x5554A0: mov     ebp, [esp+98h+outPath.m_data]
0x5554A4: mov     ecx, ds:0B333A0h
0x5554AA: push    ebx; searchArchives
0x5554AB: push    ebx; allowMissing
0x5554AC: push    ebp; path
0x5554AD: lea     eax, [esp+0A4h+slot]
0x5554B1: push    eax; outTexture
0x5554B2: call    OB_TES_LoadOrFindSourceTexture_010201A0; TES texture cache/load helper: checks the global texture map, optionally verifies file existence via FileFinder, loads NiSourceTexture by filename, caches it, and returns a refcounted texture pointer.
0x5554B7: mov     eax, [eax]
0x5554B9: push    eax; a2
0x5554BA: lea     ecx, [esp+9Ch+var_68]; this
0x5554BE: mov     byte ptr [esp+9Ch+var_4], 8
0x5554C6: call    NiSmartPointer_Set??
0x5554CB: lea     ecx, [esp+98h+slot]; slot
0x5554CF: mov     byte ptr [esp+98h+var_4], 7
0x5554D7: call    NiPointerSlot_Release
0x5554DC: lea     ecx, [esp+98h+path]
0x5554E0: push    ebp
0x5554E1: push    ecx
0x5554E2: call    sub_46FF20
0x5554E7: add     esp, 8
0x5554EA: jmp     short loc_555547
0x5554EC: mov     eax, [esp+98h+shaderId]
0x5554F0: cmp     [eax+0AEh], bx
0x5554F7: jz      short loc_555504
0x5554F9: mov     edx, [eax+0A8h]
0x5554FF: cmp     [edi+edx], ebx
0x555502: jnz     short loc_55552A
0x555504: mov     ecx, offset unk_B39C00; lpCriticalSection
0x555509: call    sub_43F2E0
0x55550E: mov     ecx, [esp+98h+shaderId]
0x555512: push    ebx; maxBasisShapes
0x555513: lea     eax, [esp+9Ch+outTexture]
0x555517: push    eax; outTexture
0x555518: push    ecx; parameters
0x555519: mov     ecx, ebp; this
0x55551B: call    BSFaceGenModel_GenerateMorphTexture; Generate this head part's EGT morph texture with maxBasisShapes=0, invoking the stock 30-basis cap.
0x555520: mov     ecx, offset unk_B39C00; lpCriticalSection
0x555525: call    sub_43F300
0x55552A: mov     edx, [esp+98h+shaderId]
0x55552E: mov     eax, [edx+88h]
0x555534: mov     ecx, [edi+eax]
0x555537: mov     edx, [ecx]
0x555539: mov     edx, [edx+10h]
0x55553C: lea     eax, [esp+98h+path]
0x555540: push    eax
0x555541: call    edx
0x555543: mov     edi, [esp+98h+shaderId]
0x555547: mov     eax, [esp+98h+path]
0x55554B: cmp     eax, ebx
0x55554D: jz      short loc_555586
0x55554F: mov     ecx, ds:0B333A0h
0x555555: push    ebx; Ordinary fallthrough inside BSFaceGen_ApplyHeadParametersToNode; this address is not a function boundary.
0x555556: push    1; allowMissing
0x555558: push    eax; path
0x555559: lea     eax, [esp+0A4h+var_30]
0x55555D: push    eax; outTexture
0x55555E: call    OB_TES_LoadOrFindSourceTexture_010201A0; TES texture cache/load helper: checks the global texture map, optionally verifies file existence via FileFinder, loads NiSourceTexture by filename, caches it, and returns a refcounted texture pointer.
0x555563: push    eax; incoming
0x555564: lea     ecx, [esp+9Ch+var_64]; this
0x555568: mov     byte ptr [esp+9Ch+var_4], 9
0x555570: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x555575: lea     ecx, [esp+98h+var_30]; slot
0x555579: mov     byte ptr [esp+98h+var_4], 7
0x555581: call    NiPointerSlot_Release
0x555586: mov     ebp, [esp+98h+var_64]
0x55558A: cmp     ebp, ebx
0x55558C: mov     edx, [esi]
0x55558E: mov     ecx, esi
0x555590: jz      short loc_5555CE
0x555592: mov     eax, [edx+84h]
0x555598: push    ebp
0x555599: push    ebx
0x55559A: call    eax
0x55559C: mov     ecx, ebp
0x55559E: call    sub_54F7D0
0x5555A3: mov     eax, [eax+4]
0x5555A6: cmp     eax, 5
0x5555A9: jz      short loc_5555B9
0x5555AB: cmp     eax, 6
0x5555AE: jz      short loc_5555B9
0x5555B0: cmp     eax, 1
0x5555B3: mov     byte ptr [esp+98h+root], bl
0x5555B7: jnz     short loc_5555BE
0x5555B9: mov     byte ptr [esp+98h+root], 1
0x5555BE: mov     ecx, [esp+98h+root]
0x5555C2: push    ecx
0x5555C3: push    1
0x5555C5: mov     ecx, esi
0x5555C7: call    sub_434980
0x5555CC: jmp     short loc_5555EE
0x5555CE: mov     eax, [edx+8Ch]
0x5555D4: push    ebx
0x5555D5: call    eax
0x5555D7: test    eax, eax
0x5555D9: jnz     short loc_5555EE
0x5555DB: mov     eax, ds:0B430DCh
0x5555E0: mov     edx, [esi]
0x5555E2: mov     edx, [edx+84h]
0x5555E8: push    eax
0x5555E9: push    ebx
0x5555EA: mov     ecx, esi
0x5555EC: call    edx
0x5555EE: cmp     [edi+0B4h], bl
0x5555F4: jz      loc_5556AE
0x5555FA: cmp     [esp+98h+var_7C], 0Eh
0x5555FF: jnz     loc_5556AE
0x555605: mov     ecx, [esp+98h+outTexture]
0x555609: mov     eax, [esi]
0x55560B: mov     edx, [eax+80h]
0x555611: push    ecx
0x555612: mov     edi, 1
0x555617: push    edi
0x555618: mov     ecx, esi
0x55561A: call    edx
0x55561C: cmp     [esp+98h+var_68], ebx
0x555620: jz      short loc_555628
0x555622: lea     eax, [esp+98h+var_68]
0x555626: jmp     short loc_555643
0x555628: call    sub_4783A0
0x55562D: push    eax
0x55562E: lea     ecx, [esp+9Ch+var_2C]
0x555632: call    sub_405070
0x555637: or      [esp+98h+var_6C], edi
0x55563B: mov     byte ptr [esp+98h+var_4], 0Ah
0x555643: mov     eax, [eax]
0x555645: mov     edx, [esi]
0x555647: push    eax
0x555648: mov     eax, [edx+84h]
0x55564E: push    edi
0x55564F: mov     ecx, esi
0x555651: call    eax
0x555653: test    byte ptr [esp+98h+var_6C], 1
0x555658: mov     [esp+98h+var_4], 7
0x555663: jz      short loc_555673
0x555665: and     [esp+98h+var_6C], 0FFFFFFFEh
0x55566A: lea     ecx, [esp+98h+var_2C]; slot
0x55566E: call    NiPointerSlot_Release
0x555673: mov     ecx, [esp+98h+var_58]
0x555677: or      dword ptr [esi+1Ch], 400h
0x55567E: push    2
0x555680: mov     [esi+24h], ebx
0x555683: call    NiNode_GetNiPropertyByID;
0x555688: mov     ecx, eax
0x55568A: cmp     ecx, ebx
0x55568C: jz      short loc_5556AE
0x55568E: fld     dword ptr [ecx+4Ch]
0x555691: fstp    [esp+98h+var_84]
0x555695: fld1
0x555697: fcomp   [esp+98h+var_84]
0x55569B: fnstsw  ax
0x55569D: test    ah, 41h
0x5556A0: jnz     short loc_5556AE
0x5556A2: fld     dword ptr ds:0A46B10h
0x5556A8: add     [ecx+54h], edi
0x5556AB: fstp    dword ptr [ecx+4Ch]
0x5556AE: push    ebx; a2
0x5556AF: lea     ecx, [esp+9Ch+var_68]; this
0x5556B3: call    NiSmartPointer_Set??
0x5556B8: push    eax; incoming
0x5556B9: lea     ecx, [esp+9Ch+outTexture]; this
0x5556BD: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x5556C2: push    ebx; a2
0x5556C3: lea     ecx, [esp+9Ch+var_64]; this
0x5556C7: call    NiSmartPointer_Set??
0x5556CC: mov     ecx, [esp+98h+var_7C]
0x5556D0: mov     edx, [esp+98h+var_58]
0x5556D4: push    ecx
0x5556D5: push    edx
0x5556D6: call    sub_551140; Generic precache helper: takes caller-supplied shader definition id and precaches one geometry. Dynamic shader id path, not a SpeedTree tree-builder-specific frond consumer.
0x5556DB: add     esp, 8
0x5556DE: mov     ebp, [esp+98h+shaderId]
0x5556E2: mov     esi, [esp+98h+var_60]
0x5556E6: mov     edi, 1
0x5556EB: add     esi, edi
0x5556ED: cmp     esi, 9
0x5556F0: mov     [esp+98h+var_60], esi; End of the nine-slot general head-part binding loop.
0x5556F4: jb      loc_5552E0
0x5556FA: mov     edi, [esp+98h+var_3C]
0x5556FE: mov     eax, [edi]
0x555700: mov     edx, [eax+58h]
0x555703: push    offset aFacegeneyeleft; "FaceGenEyeLeft"
0x555708: mov     ecx, edi
0x55570A: call    edx; Find and configure FaceGenEyeLeft.
0x55570C: mov     esi, eax
0x55570E: cmp     esi, ebx
0x555710: jz      short loc_555752
0x555712: push    6
0x555714: mov     ecx, esi
0x555716: call    NiNode_GetNiPropertyByID;
0x55571B: cmp     eax, ebx
0x55571D: jz      short loc_555738
0x55571F: cmp     ds:0B120E4h, bl
0x555725: jz      short loc_555738
0x555727: mov     cx, [eax+18h]
0x55572B: and     cx, 0FFF7h
0x555730: or      cx, 6
0x555734: mov     [eax+18h], cx
0x555738: push    1; arg3
0x55573A: push    1; normalMapBypass
0x55573C: push    1; shaderId
0x55573E: push    esi; root
0x55573F: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x555744: mov     edx, [esp+0A8h+var_7C]
0x555748: push    edx
0x555749: push    esi
0x55574A: call    sub_551140; Generic precache helper: takes caller-supplied shader definition id and precaches one geometry. Dynamic shader id path, not a SpeedTree tree-builder-specific frond consumer.
0x55574F: add     esp, 18h
0x555752: mov     eax, [edi]
0x555754: mov     edx, [eax+58h]
0x555757: push    offset aFacegeneyerigh; "FaceGenEyeRight"
0x55575C: mov     ecx, edi
0x55575E: call    edx; Find and configure FaceGenEyeRight.
0x555760: mov     esi, eax
0x555762: cmp     esi, ebx
0x555764: jz      short loc_5557A6
0x555766: push    6
0x555768: mov     ecx, esi
0x55576A: call    NiNode_GetNiPropertyByID;
0x55576F: cmp     eax, ebx
0x555771: jz      short loc_55578C
0x555773: cmp     ds:0B120E4h, bl
0x555779: jz      short loc_55578C
0x55577B: mov     cx, [eax+18h]
0x55577F: and     cx, 0FFF7h
0x555784: or      cx, 6
0x555788: mov     [eax+18h], cx
0x55578C: push    1; arg3
0x55578E: push    1; normalMapBypass
0x555790: push    1; shaderId
0x555792: push    esi; root
0x555793: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x555798: mov     edx, [esp+0A8h+var_7C]
0x55579C: push    edx
0x55579D: push    esi
0x55579E: call    sub_551140; Generic precache helper: takes caller-supplied shader definition id and precaches one geometry. Dynamic shader id path, not a SpeedTree tree-builder-specific frond consumer.
0x5557A3: add     esp, 18h
0x5557A6: mov     eax, [edi]
0x5557A8: mov     edx, [eax+58h]
0x5557AB: push    offset aFacegenhair; "FaceGenHair"
0x5557B0: mov     ecx, edi
0x5557B2: call    edx; Find FaceGenHair, assign shaders, and apply the packed render-state hair color.
0x5557B4: mov     esi, eax
0x5557B6: cmp     esi, ebx
0x5557B8: jz      loc_555905
0x5557BE: push    1; arg3
0x5557C0: push    1; normalMapBypass
0x5557C2: push    1; shaderId
0x5557C4: push    esi; root
0x5557C5: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x5557CA: add     esp, 10h
0x5557CD: push    4
0x5557CF: mov     ecx, esi
0x5557D1: call    NiNode_GetNiPropertyByID;
0x5557D6: mov     esi, eax
0x5557D8: cmp     esi, ebx
0x5557DA: jnz     short loc_5557E0
0x5557DC: xor     eax, eax
0x5557DE: jmp     short loc_5557F3
0x5557E0: mov     eax, [esi]
0x5557E2: mov     edx, [eax+54h]
0x5557E5: mov     ecx, esi
0x5557E7: call    edx
0x5557E9: xor     ecx, ecx
0x5557EB: cmp     eax, 5
0x5557EE: setz    cl
0x5557F1: mov     eax, ecx
0x5557F3: neg     eax
0x5557F5: sbb     eax, eax
0x5557F7: and     eax, esi
0x5557F9: jz      short loc_555871
0x5557FB: mov     edx, [esp+98h+shaderId]
0x5557FF: mov     ecx, [edx+64h]; For this hair shader layout, normalize packed RGB bytes by 255.0 and write the color constants.
0x555802: movzx   edx, cl
0x555805: mov     [esp+98h+var_84], edx
0x555809: movzx   edx, ch
0x55580C: fild    [esp+98h+var_84]
0x555810: fld     qword ptr ds:0A3DDD8h
0x555816: mov     [esp+98h+var_84], edx
0x55581A: shr     ecx, 10h
0x55581D: fdiv    st(1), st
0x55581F: movzx   ecx, cl
0x555822: fxch    st(1)
0x555824: fstp    [esp+98h+var_54]
0x555828: fild    [esp+98h+var_84]
0x55582C: mov     edx, [esp+98h+var_54]
0x555830: mov     [esp+98h+var_84], ecx
0x555834: mov     [eax+0A8h], edx
0x55583A: fdiv    st, st(1)
0x55583C: fstp    [esp+98h+var_50]
0x555840: mov     ecx, [esp+98h+var_50]
0x555844: mov     [eax+0ACh], ecx
0x55584A: fidivr  [esp+98h+var_84]
0x55584E: fstp    [esp+98h+var_4C]
0x555852: fld1
0x555854: mov     edx, [esp+98h+var_4C]
0x555858: fstp    dword ptr [esp+98h+ArgList]
0x55585C: mov     [eax+0B0h], edx
0x555862: mov     ecx, dword ptr [esp+98h+ArgList]
0x555866: mov     [eax+0B4h], ecx
0x55586C: jmp     loc_555905
0x555871: cmp     esi, ebx
0x555873: jnz     short loc_555879
0x555875: xor     eax, eax
0x555877: jmp     short loc_55588C
0x555879: mov     edx, [esi]
0x55587B: mov     eax, [edx+54h]
0x55587E: mov     ecx, esi
0x555880: call    eax
0x555882: xor     ecx, ecx
0x555884: cmp     eax, 0Ah
0x555887: setz    cl
0x55588A: mov     eax, ecx
0x55588C: neg     eax
0x55588E: sbb     eax, eax
0x555890: and     eax, esi
0x555892: jz      short loc_555905
0x555894: mov     edx, [esp+98h+shaderId]
0x555898: mov     ecx, [edx+64h]; Alternate hair shader layout: normalize packed RGB bytes by 255.0 and write the color constants.
0x55589B: movzx   edx, cl
0x55589E: mov     [esp+98h+var_84], edx
0x5558A2: movzx   edx, ch
0x5558A5: fild    [esp+98h+var_84]
0x5558A9: fld     qword ptr ds:0A3DDD8h
0x5558AF: mov     [esp+98h+var_84], edx
0x5558B3: shr     ecx, 10h
0x5558B6: fdiv    st(1), st
0x5558B8: movzx   ecx, cl
0x5558BB: fxch    st(1)
0x5558BD: fstp    [esp+98h+var_54]
0x5558C1: fild    [esp+98h+var_84]
0x5558C5: mov     edx, [esp+98h+var_54]
0x5558C9: mov     [esp+98h+var_84], ecx
0x5558CD: mov     [eax+0F0h], edx
0x5558D3: fdiv    st, st(1)
0x5558D5: fstp    [esp+98h+var_50]
0x5558D9: mov     ecx, [esp+98h+var_50]
0x5558DD: mov     [eax+0F4h], ecx
0x5558E3: fidivr  [esp+98h+var_84]
0x5558E7: fstp    [esp+98h+var_4C]
0x5558EB: fld1
0x5558ED: mov     edx, [esp+98h+var_4C]
0x5558F1: fstp    dword ptr [esp+98h+ArgList]
0x5558F5: mov     [eax+0F8h], edx
0x5558FB: mov     ecx, dword ptr [esp+98h+ArgList]
0x5558FF: mov     [eax+0FCh], ecx
0x555905: mov     ecx, edi; this
0x555907: call    NiAVObject_InitializePropertyState; Rebuild property state after all FaceGen geometry, texture, and shader changes.
0x55590C: fldz
0x55590E: push    ebx; a3
0x55590F: push    ecx
0x555910: mov     ecx, edi; this
0x555912: fstp    [esp+0A0h+a2]; a2
0x555915: call    NiAVObject_UpdateNiAVObject; Propagate the completed FaceGen changes through the NiAVObject update path.
0x55591A: mov     eax, [esp+98h+var_68]
0x55591E: cmp     eax, ebx
0x555920: mov     edi, ds:0A2807Ch
0x555926: mov     byte ptr [esp+98h+var_4], 6
0x55592E: jz      short loc_55594A
0x555930: mov     esi, eax
0x555932: add     eax, 4
0x555935: push    eax; lpAddend
0x555936: call    edi ; InterlockedDecrement
0x555938: test    eax, eax
0x55593A: jnz     short loc_55594A
0x55593C: cmp     esi, ebx
0x55593E: jz      short loc_55594A
0x555940: mov     edx, [esi]
0x555942: mov     eax, [edx]
0x555944: push    1
0x555946: mov     ecx, esi
0x555948: call    eax
0x55594A: mov     esi, [esp+98h+outTexture]
0x55594E: cmp     esi, ebx
0x555950: mov     byte ptr [esp+98h+var_4], 5
0x555958: jz      short loc_555972
0x55595A: lea     ecx, [esi+4]
0x55595D: push    ecx; lpAddend
0x55595E: call    edi ; InterlockedDecrement
0x555960: test    eax, eax
0x555962: jnz     short loc_555972
0x555964: cmp     esi, ebx
0x555966: jz      short loc_555972
0x555968: mov     edx, [esi]
0x55596A: mov     eax, [edx]
0x55596C: push    1
0x55596E: mov     ecx, esi
0x555970: call    eax
0x555972: mov     esi, [esp+98h+var_64]
0x555976: cmp     esi, ebx
0x555978: mov     byte ptr [esp+98h+var_4], 4
0x555980: jz      short loc_555996
0x555982: lea     ecx, [esi+4]
0x555985: push    ecx; lpAddend
0x555986: call    edi ; InterlockedDecrement
0x555988: test    eax, eax
0x55598A: jnz     short loc_555996
0x55598C: mov     edx, [esi]
0x55598E: mov     eax, [edx]
0x555990: push    1
0x555992: mov     ecx, esi
0x555994: call    eax
0x555996: mov     ecx, [esp+98h+path]
0x55599A: push    ecx
0x55599B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559A0: mov     edx, [esp+9Ch+outPath.m_data]
0x5559A4: push    edx
0x5559A5: jmp     short loc_5559AE
0x5559A7: push    ebx
0x5559A8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559AD: push    ebx
0x5559AE: mov     [esp+0A0h+path], ebx
0x5559B2: mov     [esp+0A0h+var_6E], bx
0x5559B7: mov     [esp+0A0h+var_70], bx
0x5559BC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559C1: push    ebx
0x5559C2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559C7: push    ebx
0x5559C8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559CD: push    ebx
0x5559CE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5559D3: add     esp, 14h
0x5559D6: mov     ecx, [esp+98h+var_C]
0x5559DD: mov     large fs:0, ecx
0x5559E4: pop     ecx
0x5559E5: pop     edi
0x5559E6: pop     esi
0x5559E7: pop     ebp
0x5559E8: pop     ebx
0x5559E9: mov     ecx, [esp+84h+var_10]
0x5559ED: xor     ecx, esp
0x5559EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5559F4: add     esp, 84h
0x5559FA: retn
0x9BC230: lea     ecx, [ebp-28h]; void *
0x9BC233: jmp     BSStringT_Clear
0x9BC238: lea     ecx, [ebp-18h]; void *
0x9BC23B: jmp     BSStringT_Clear
0x9BC240: lea     ecx, [ebp-20h]; void *
0x9BC243: jmp     BSStringT_Clear
0x9BC248: lea     ecx, [ebp-44h]; void *
0x9BC24B: jmp     BSStringT_Clear
0x9BC250: lea     ecx, [ebp-74h]; void *
0x9BC253: jmp     BSStringT_Clear
0x9BC258: lea     ecx, [ebp-64h]; slot
0x9BC25B: jmp     NiPointerSlot_Release
0x9BC260: lea     ecx, [ebp-78h]; slot
0x9BC263: jmp     NiPointerSlot_Release
0x9BC268: lea     ecx, [ebp-68h]; slot
0x9BC26B: jmp     NiPointerSlot_Release
0x9BC270: lea     ecx, [ebp-34h]; slot
0x9BC273: jmp     NiPointerSlot_Release
0x9BC278: lea     ecx, [ebp-30h]; slot
0x9BC27B: jmp     NiPointerSlot_Release
0x9BC280: mov     eax, [ebp-6Ch]
0x9BC283: and     eax, 1
0x9BC286: jz      locret_9BC298
0x9BC28C: and     dword ptr [ebp-6Ch], 0FFFFFFFEh
0x9BC290: lea     ecx, [ebp-2Ch]; slot
0x9BC293: jmp     NiPointerSlot_Release
0x9BC298: retn
0x9BC299: mov     edx, [esp+parameters]
0x9BC29D: lea     eax, [edx-88h]
0x9BC2A3: mov     ecx, [edx-8Ch]
0x9BC2A9: xor     ecx, eax
0x9BC2AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC2B0: add     eax, 10h
0x9BC2B3: mov     ecx, [edx-4]
0x9BC2B6: xor     ecx, eax
0x9BC2B8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC2BD: mov     eax, offset stru_AE5E48
0x9BC2C2: jmp     ___CxxFrameHandler3
