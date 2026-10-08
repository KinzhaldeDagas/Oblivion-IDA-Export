LONG __thiscall sub_53F1F0(int this, char *Str1)
{
  LONG result; // eax
  int *v4; // ebx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // esi
  LONG v8; // ebp
  unsigned int v9; // esi
  NiNode *v10; // eax
  NiNode *v11; // eax
  NiObject *v12; // eax
  NiObject *v13; // eax
  NiObject *Destructor; // eax
  NiObject *v15; // eax
  NiNode *v16; // eax
  _DWORD v17[2]; // [esp+34h] [ebp-14h] BYREF
  unsigned int v18; // [esp+44h] [ebp-4h]
  char Str1a; // [esp+4Ch] [ebp+4h]

  result = *(_DWORD *)(this + 4); /*0x53f219*/
  v4 = (int *)(this + 4); /*0x53f21e*/
  if ( result ) /*0x53f221*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, LONG))(**(_DWORD **)(this + 0xC) + 0x88))( /*0x53f238*/
      *(_DWORD *)(this + 0xC),
      v17,
      result);
    v5 = InterlockedDecrement; /*0x53f240*/
    if ( v17[0] ) /*0x53f246*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v17[0]; /*0x53f248*/
      if ( !v5((volatile LONG *)(v17[0] + 4)) ) /*0x53f24e*/
        (**v6)(v6, 1); /*0x53f260*/
    }
    OB_NiSmartPointer_Assign_010201A0((int *)(this + 8), v4); /*0x53f268*/
    NiObjectNET_SetName(*(NiObjectNET **)(this + 8), "Last Precip Root"); /*0x53f274*/
    result = (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0xC) + 0x84))( /*0x53f289*/
               *(_DWORD *)(this + 0xC),
               *(_DWORD *)(this + 8),
               1);
    v7 = *v4; /*0x53f28b*/
    if ( *v4 ) /*0x53f28b*/
    {
      result = v5((volatile LONG *)(v7 + 4)); /*0x53f295*/
      if ( !result ) /*0x53f299*/
      {
        if ( v7 ) /*0x53f29d*/
          result = (**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x53f2a7*/
      }
      *v4 = 0; /*0x53f2a9*/
    }
  }
  if ( Str1 ) /*0x53f2b5*/
  {
    if ( *Str1 ) /*0x53f2bb*/
    {
      result = ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], Str1, 0, 0, 1); /*0x53f2d1*/
      v8 = result; /*0x53f2d6*/
      if ( result ) /*0x53f2da*/
      {
        v9 = 0; /*0x53f2fb*/
        Str1a = CRT_StricmpLocaleDispatch(Str1, "Sky\\Snow.NIF") == 0; /*0x53f2fe*/
        (*(void (__thiscall **)(LONG, _DWORD, _DWORD))(*(_DWORD *)v8 + 0x60))(v8, 0.0, 0); /*0x53f308*/
        v10 = (NiNode *)FormHeapAlloc(0xDCu); /*0x53f30f*/
        v17[1] = v10; /*0x53f317*/
        v18 = 0; /*0x53f31d*/
        if ( v10 ) /*0x53f321*/
          v11 = NiNode::NiNode(v10, 0); /*0x53f326*/
        else
          v11 = 0; /*0x53f32d*/
        v18 = 0xFFFFFFFF; /*0x53f332*/
        NiSmartPointer_Set__((Ni2DBuffer **)v4, (Ni2DBuffer *)v11); /*0x53f33a*/
        *(float *)(this + 0x10) = 0.0; /*0x53f341*/
        if ( *(_WORD *)(v8 + 0xB8) ) /*0x53f344*/
        {
          do /*0x53f3d7*/
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > v9 ) /*0x53f35b*/
              v12 = *(NiObject **)(*(_DWORD *)(v8 + 0xB0) + 4 * v9); /*0x53f367*/
            else
              v12 = 0; /*0x53f35d*/
            v13 = NiRTTI_Cast((BSStringT *)&parent, v12); /*0x53f370*/
            if ( v13 ) /*0x53f37a*/
            {
              if ( HIWORD(v13[0x16].members.m_uiRefCount) ) /*0x53f37c*/
                Destructor = (NiObject *)v13[0x16].__vftable->super.Destructor; /*0x53f390*/
              else
                Destructor = 0; /*0x53f386*/
              v15 = NiRTTI_Cast((BSStringT *)&stru_B40864, Destructor); /*0x53f398*/
              if ( v15 ) /*0x53f3a2*/
              {
                v16 = sub_53DA20(v15, *(_DWORD *)(this + 0xC) + 0x64, Str1a); /*0x53f3b3*/
                if ( v16 ) /*0x53f3ba*/
                  (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)*v4 + 0x84))(*v4, v16, 1); /*0x53f3c9*/
              }
            }
            ++v9; /*0x53f3d2*/
          }
          while ( v9 < *(unsigned __int16 *)(v8 + 0xB8) ); /*0x53f3d7*/
        }
        NiObjectNET_SetName((NiObjectNET *)*v4, "Current Precip Root"); /*0x53f3e4*/
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0xC) + 0x84))(*(_DWORD *)(this + 0xC), *v4, 1); /*0x53f3f9*/
        NiAVObject_InitializePropertyState((NiAVObject *)*v4); /*0x53f3fd*/
        return NiNode_UpdateDynamicEffectState((NiNode *)*v4); /*0x53f404*/
      }
    }
  }
  return result; /*0x53f409*/
}
