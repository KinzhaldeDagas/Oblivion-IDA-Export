0x4BAA80: push    0FFFFFFFFh; Verified Oblivion TREE override ignores the rotationAnglesXYZ and cellLODBuffer parameters, then forwards its scalePercent array into the local billboard descriptor. Fallout's AddDistantLOD uses a four-float instance record (position XYZ + fScaleColor) and its own DistantLODGroup shader path; do not transplant Oblivion .lod record layout or world offsets.
0x4BAA82: push    offset SEH_4BAA80
0x4BAA87: mov     eax, large fs:0
0x4BAA8D: push    eax
0x4BAA8E: sub     esp, 224h
0x4BAA94: mov     eax, ds:0B30AACh
0x4BAA99: xor     eax, esp
0x4BAA9B: mov     [esp+230h+var_10], eax
0x4BAAA2: push    ebx
0x4BAAA3: push    ebp
0x4BAAA4: push    esi
0x4BAAA5: push    edi
0x4BAAA6: mov     eax, ds:0B30AACh
0x4BAAAB: xor     eax, esp
0x4BAAAD: push    eax
0x4BAAAE: lea     eax, [esp+244h+var_C]
0x4BAAB5: mov     large fs:0, eax
0x4BAABB: mov     ebp, [esp+244h+modeOrDistance]
0x4BAAC2: test    ebp, ebp
0x4BAAC4: mov     eax, [esp+244h+colorValues]
0x4BAACB: mov     ebx, [esp+244h+Src]
0x4BAAD2: mov     esi, ecx
0x4BAAD4: mov     [esp+244h+scalesOrAngles], eax
0x4BAAD8: jz      loc_4BAC69
0x4BAADE: test    ebx, ebx
0x4BAAE0: jz      loc_4BAC69
0x4BAAE6: test    eax, eax
0x4BAAE8: jz      loc_4BAC69
0x4BAAEE: cmp     [esp+244h+instanceCount], 0
0x4BAAF6: jz      loc_4BAC69
0x4BAAFC: cmp     byte ptr ds:0B125E8h, 0
0x4BAB03: jz      loc_4BAC69
0x4BAB09: call    TESObjectTREE_IsLargeEnoughForDistantLOD; Probable member mapping: float +0x78 behaves like Fallout's TESObjectTREE::BillboardSize.x and +0x7C like BillboardSize.y. Oblivion directly applies the same >200/>350 cutoff pair; Fallout named IsLargeEnoughForDistantLOD uses those exact fields/thresholds. +0x7C also sizes the quad in TESObjectTREE_BuildBillboardQuadData. Roles are strongly supported; names remain inferred across versions.
0x4BAB0E: test    al, al
0x4BAB10: jz      loc_4BAC69
0x4BAB16: mov     eax, [esi+0Ch]
0x4BAB19: push    eax
0x4BAB1A: xor     edi, edi
0x4BAB1C: call    sub_7B2A00
0x4BAB21: add     esp, 4
0x4BAB24: test    al, al
0x4BAB26: jnz     loc_4BAC11
0x4BAB2C: lea     eax, [esp+244h+Str1]
0x4BAB33: push    eax; outPath
0x4BAB34: mov     ecx, esi; this
0x4BAB36: call    OB_TESObjectTREE_BuildBillboardTexturePath_010201A0; Verified from byte construction and referenced model getter: emits 'Textures\\Trees\\Billboards\\' + model path basename through first dot + '.dds'. If model path has no dot, suffix isn't appended; path truncation/long-path handling not established.
0x4BAB3B: lea     ecx, [esp+244h+var_218]
0x4BAB3F: push    ecx; int
0x4BAB40: lea     edx, [esp+248h+Str1]
0x4BAB47: push    edx; Str1
0x4BAB48: call    sub_47D8F0; SpeedTreeOBSE 2026-07-14: normalizes texture palette keys in a fixed 256-byte local buffer. Plugin loader inputs are therefore capped at 255 characters.
0x4BAB4D: mov     ecx, ds:0B35300h
0x4BAB53: mov     eax, [ecx]
0x4BAB55: mov     eax, [eax+4]
0x4BAB58: add     esp, 8
0x4BAB5B: push    edi
0x4BAB5C: lea     edx, [esp+248h+var_218]
0x4BAB60: push    edx
0x4BAB61: call    eax
0x4BAB63: push    eax
0x4BAB64: lea     ecx, [esp+248h+slot]
0x4BAB68: call    sub_405070
0x4BAB6D: cmp     [esp+244h+slot], edi
0x4BAB71: mov     [esp+244h+var_4], edi
0x4BAB78: jnz     short loc_4BABEE
0x4BAB7A: push    1Ch; Size
0x4BAB7C: call    FormHeapAlloc
0x4BAB81: add     esp, 4
0x4BAB84: mov     [esp+244h+var_21C], eax
0x4BAB88: test    eax, eax
0x4BAB8A: mov     byte ptr [esp+244h+var_4], 1
0x4BAB92: jz      short loc_4BABBD
0x4BAB94: mov     ecx, [esp+244h+scalesOrAngles]
0x4BAB98: mov     edx, [esp+244h+instanceCount]
0x4BAB9F: push    ecx; colorValues
0x4BABA0: mov     ecx, [esp+248h+placementArg2]
0x4BABA7: push    ebx; positions
0x4BABA8: push    edx; instanceCount
0x4BABA9: mov     edx, [esp+250h+placementArg1]
0x4BABB0: push    ebp; instancedNode
0x4BABB1: push    ecx; cellKey
0x4BABB2: push    edx; cellChunk
0x4BABB3: push    esi; tree
0x4BABB4: mov     ecx, eax; this
0x4BABB6: call    DistantTreeBillboardContext_ctor; Verified Oblivion context has a 0x1C-byte payload; Fallout's RTTI-named TREE_BILLBOARD_DATA is also 0x1C bytes and its constructor copies an instanceCount-sized NiPoint3 locations array and float color array. Probable field mapping follows matching argument order and downstream use; Oblivion field semantics are not promoted beyond what its own callsites establish.
0x4BABBB: jmp     short loc_4BABBF
0x4BABBD: xor     eax, eax
0x4BABBF: mov     ecx, ds:0B33A1Ch; this
0x4BABC5: push    eax
0x4BABC6: lea     eax, [esp+248h+var_218]
0x4BABCA: push    eax
0x4BABCB: mov     byte ptr [esp+24Ch+var_4], 0
0x4BABD3: call    ??0QueuedTreeBillboard@@QAE@XZ; Verified Oblivion RTTI-backed QueuedTreeBillboard construction; Fallout has the same class RTTI and ModelLoader::QueueTreeBillboard. Layout divergence is directly established: Oblivion task allocation 0x38 with context at +0x30 and queued-texture task kind 4; Fallout allocation 0x40 with TREE_BILLBOARD_DATA pointer at +0x38 and IO_TASK_PRIORITY_LOW.
0x4BABD8: lea     ecx, [esp+244h+slot]; slot
0x4BABDC: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4BABE7: call    NiPointerSlot_Release
0x4BABEC: jmp     short loc_4BAC69
0x4BABEE: push    1; distantPlane
0x4BABF0: mov     ecx, esi; this
0x4BABF2: call    sub_4BA780; Verified Oblivion rendering path is a flat billboard DDS attached to STBB NiTriShape and NiBillboardNode. Fallout's QueuedTreeBillboard::CreateBillboard builds the engine's BSTreeModel distant geometry and inserts it through DistantLODShaderProperty::AddDistantLOD; same queued asset workflow, different renderer integration.
0x4BABF7: lea     ecx, [esp+244h+slot]; slot
0x4BABFB: mov     edi, eax
0x4BABFD: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4BAC08: call    NiPointerSlot_Release
0x4BAC0D: test    edi, edi
0x4BAC0F: jz      short loc_4BAC69
0x4BAC11: lea     ecx, [esp+244h+var_228]
0x4BAC15: call    sub_7B20B0
0x4BAC1A: mov     edx, [esp+244h+instanceCount]
0x4BAC21: mov     ecx, [esi+0Ch]
0x4BAC24: mov     eax, [esp+244h+scalesOrAngles]
0x4BAC28: push    edx
0x4BAC29: mov     edx, [esp+248h+placementArg2]
0x4BAC30: push    eax
0x4BAC31: mov     eax, [esp+24Ch+placementArg1]
0x4BAC38: push    ebx
0x4BAC39: mov     [esp+250h+var_220], ecx
0x4BAC3D: lea     ecx, [esp+250h+var_228]
0x4BAC41: push    ecx
0x4BAC42: push    ebp
0x4BAC43: push    edx
0x4BAC44: push    eax
0x4BAC45: mov     [esp+260h+var_224], edi
0x4BAC49: mov     [esp+260h+var_228], 0
0x4BAC51: call    sub_7B4010
0x4BAC56: mov     ecx, [esp+260h+var_224]
0x4BAC5A: add     esp, 1Ch
0x4BAC5D: test    ecx, ecx
0x4BAC5F: jz      short loc_4BAC69
0x4BAC61: mov     edx, [ecx]
0x4BAC63: mov     eax, [edx]
0x4BAC65: push    1
0x4BAC67: call    eax
0x4BAC69: mov     ecx, [esp+244h+var_C]
0x4BAC70: mov     large fs:0, ecx
0x4BAC77: pop     ecx
0x4BAC78: pop     edi
0x4BAC79: pop     esi
0x4BAC7A: pop     ebp
0x4BAC7B: pop     ebx
0x4BAC7C: mov     ecx, [esp+230h+var_10]
0x4BAC83: xor     ecx, esp
0x4BAC85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BAC8A: add     esp, 230h
0x4BAC90: retn    20h ; ' '
0x9B3F40: lea     ecx, [ebp-230h]; slot
0x9B3F46: jmp     NiPointerSlot_Release
0x9B3F4B: mov     eax, [ebp-21Ch]
0x9B3F51: push    eax
0x9B3F52: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3F57: pop     ecx
0x9B3F58: retn
0x9B3F59: mov     edx, [esp+unusedArg2]
0x9B3F5D: lea     eax, [edx-234h]
0x9B3F63: mov     ecx, [edx-238h]
0x9B3F69: xor     ecx, eax
0x9B3F6B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3F70: add     eax, 10h
0x9B3F73: mov     ecx, [edx-4]
0x9B3F76: xor     ecx, eax
0x9B3F78: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3F7D: mov     eax, offset stru_ADF798
0x9B3F82: jmp     ___CxxFrameHandler3
