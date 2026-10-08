0x437600: sub     esp, 0Ch; Verified Oblivion queued distant callback consumes the copied per-cell context, calls sub_4BA780 to build STBB/NiBillboardNode from the flat billboard DDS, then forwards cell key/node/positions/color values to sub_7B4010. Fallout's corresponding QueuedTreeBillboard::CreateBillboard instead calls TESObjectTREE::BuildDistant3D and DistantLODShaderProperty::AddDistantLOD.
0x437603: push    esi
0x437604: mov     esi, ecx
0x437606: mov     eax, [esi+30h]
0x437609: mov     ecx, [eax]; this
0x43760B: push    edi
0x43760C: push    1; distantPlane
0x43760E: call    sub_4BA780; Verified Oblivion rendering path is a flat billboard DDS attached to STBB NiTriShape and NiBillboardNode. Fallout's QueuedTreeBillboard::CreateBillboard builds the engine's BSTreeModel distant geometry and inserts it through DistantLODShaderProperty::AddDistantLOD; same queued asset workflow, different renderer integration.
0x437613: mov     edi, eax
0x437615: test    edi, edi
0x437617: jz      short loc_43768C
0x437619: lea     ecx, [esp+14h+var_C]
0x43761D: call    sub_7B20B0
0x437622: mov     eax, [esi+30h]
0x437625: mov     ecx, [eax]
0x437627: mov     edx, [ecx+0Ch]
0x43762A: mov     [esp+14h+var_4], edx
0x43762E: mov     [esp+14h+var_8], edi
0x437632: mov     [esp+14h+var_C], 0
0x43763A: movzx   ecx, word ptr [eax+10h]
0x43763E: mov     edx, [eax+18h]
0x437641: push    ecx
0x437642: mov     ecx, [eax+14h]
0x437645: push    edx
0x437646: push    ecx
0x437647: mov     ecx, [eax+0Ch]
0x43764A: lea     edx, [esp+20h+var_C]
0x43764E: push    edx
0x43764F: mov     edx, [eax+8]
0x437652: mov     eax, [eax+4]
0x437655: push    ecx
0x437656: push    edx
0x437657: push    eax
0x437658: call    sub_7B4010
0x43765D: mov     ecx, [esp+30h+var_8]
0x437661: add     esp, 1Ch
0x437664: test    ecx, ecx
0x437666: jz      short loc_437670
0x437668: mov     edx, [ecx]
0x43766A: mov     eax, [edx]
0x43766C: push    1
0x43766E: call    eax
0x437670: mov     esi, ds:0B34424h
0x437676: fldz
0x437678: push    1; a3
0x43767A: push    ecx
0x43767B: mov     ecx, esi; this
0x43767D: fstp    [esp+1Ch+a2]; a2
0x437680: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x437685: mov     ecx, esi; this
0x437687: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x43768C: pop     edi
0x43768D: pop     esi
0x43768E: add     esp, 0Ch
0x437691: retn
