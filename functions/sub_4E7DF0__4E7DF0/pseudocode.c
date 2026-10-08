// Verified TESPathGridPoint constructor initializes the graph-search prefix, adjacency list and position, sets +0x28 to null, and lazily creates two shared NiAVObject templates. The template references are refcounted and selected by integerized point-Z parity in TESPathGridPoint_RebuildRenderGeometry. Material field correction: the formerly `unknown28` member at +0x28 is a per-point NiNode* renderNode; the render builder writes it and the clear helper removes/releases it.
TESPathGridPoint *__thiscall TESPathGridPoint_ctor(TESPathGridPoint *this)
{
  bool v2; // zf
  NiAVObject *v3; // eax
  NiAVObject *v4; // ecx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ebx
  NiAVObject *v8; // eax
  NiAVObject *v9; // ecx
  int v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ebx
  int v13; // [esp+28h] [ebp-1Ch] BYREF
  float v14; // [esp+2Ch] [ebp-18h]
  float v15; // [esp+30h] [ebp-14h]
  float v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+40h] [ebp-4h]

  PathGraphNode_InitSearchPrefix(this); /*0x4e7e1d*/
  this->connections.firstNode.data = 0; /*0x4e7e24*/
  this->connections.firstNode.next = 0; /*0x4e7e27*/
  this->position.x = g_zeroNiPoint3.x; /*0x4e7e2f*/
  this->position.y = g_zeroNiPoint3.y; /*0x4e7e38*/
  this->position.z = g_zeroNiPoint3.z; /*0x4e7e41*/
  this->renderNode = 0.0;                       // Verified this zero-initialized member is TESPathGridPoint+0x28 renderNode (NiNode*). The constructor clears it; TESPathGridPoint_RebuildRenderGeometry allocates/assigns a NiNode and TESPathGridPoint_ClearRenderNode releases and nulls it. UDT member is renamed and represented as a 4-byte DWORD; NiNode* semantics are recorded in the member comment. /*0x4e7e44*/
  v2 = g_PathGridPointLiveCount == 0; /*0x4e7e47*/
  v17 = 0; /*0x4e7e4d*/
  if ( v2 ) /*0x4e7e51*/
  {
    *(float *)&v13 = 1.0; /*0x4e7e5d*/
    v14 = 0.0; /*0x4e7e65*/
    v15 = 0.0; /*0x4e7e69*/
    v16 = 0.0; /*0x4e7e6d*/
    v3 = NiTriShape_CreateOctahedronGeometry(flt_A37CC8, (NiD3DPassVtbl **)&v13);// Verified lazy creation of the even-integer-Z shared PathGrid octahedron template. Calls NiTriShape_CreateOctahedronGeometry(scale=30.0, color={1,0,0,0}) and stores the refcounted NiAVObject in g_PathGridPointMarkerTemplateEvenZ. Display/alpha behavior remains Unknown. /*0x4e7e7a*/
    v4 = (NiAVObject *)g_PathGridPointMarkerTemplateEvenZ; /*0x4e7e7f*/
    v5 = InterlockedDecrement; /*0x4e7e85*/
    v6 = (int)v3; /*0x4e7e8b*/
    if ( (NiAVObject *)g_PathGridPointMarkerTemplateEvenZ != v3 ) /*0x4e7e92*/
    {
      if ( v4 ) /*0x4e7e96*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))g_PathGridPointMarkerTemplateEvenZ; /*0x4e7e98*/
        if ( !v5((volatile LONG *)&v4->members) ) /*0x4e7e9e*/
        {
          if ( v7 ) /*0x4e7ea6*/
            (**v7)(v7, 1); /*0x4e7eb0*/
        }
      }
      v4 = (NiAVObject *)v6; /*0x4e7eb6*/
      g_PathGridPointMarkerTemplateEvenZ = v6; /*0x4e7eb8*/
      if ( v6 ) /*0x4e7ebe*/
      {
        InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x4e7ec4*/
        v4 = (NiAVObject *)g_PathGridPointMarkerTemplateEvenZ; /*0x4e7eca*/
      }
    }
    NiAVObject_UpdateNiAVObject(v4, 0.0, 1); /*0x4e7ed8*/
    *(float *)&v13 = 0.0; /*0x4e7edf*/
    v14 = 0.0; /*0x4e7ee7*/
    v15 = 1.0; /*0x4e7eef*/
    v16 = 0.0; /*0x4e7ef3*/
    v8 = NiTriShape_CreateOctahedronGeometry(flt_A37CC8, (NiD3DPassVtbl **)&v13);// Verified lazy creation of the odd-integer-Z shared PathGrid octahedron template. Calls NiTriShape_CreateOctahedronGeometry(scale=30.0, color={0,0,1,0}) and stores the refcounted NiAVObject in g_PathGridPointMarkerTemplateOddZ. Display/alpha behavior remains Unknown. /*0x4e7f00*/
    v9 = (NiAVObject *)g_PathGridPointMarkerTemplateOddZ; /*0x4e7f05*/
    v10 = (int)v8; /*0x4e7f0b*/
    if ( (NiAVObject *)g_PathGridPointMarkerTemplateOddZ != v8 ) /*0x4e7f12*/
    {
      if ( v9 ) /*0x4e7f16*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))g_PathGridPointMarkerTemplateOddZ; /*0x4e7f18*/
        if ( !v5((volatile LONG *)&v9->members) ) /*0x4e7f1e*/
        {
          if ( v11 ) /*0x4e7f26*/
            (**v11)(v11, 1); /*0x4e7f30*/
        }
      }
      v9 = (NiAVObject *)v10; /*0x4e7f34*/
      g_PathGridPointMarkerTemplateOddZ = v10; /*0x4e7f36*/
      if ( v10 ) /*0x4e7f3c*/
      {
        InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x4e7f42*/
        v9 = (NiAVObject *)g_PathGridPointMarkerTemplateOddZ; /*0x4e7f48*/
      }
    }
    NiAVObject_UpdateNiAVObject(v9, 0.0, 1); /*0x4e7f56*/
  }
  ++g_PathGridPointLiveCount; /*0x4e7f5d*/
  return this; /*0x4e7f64*/
}
