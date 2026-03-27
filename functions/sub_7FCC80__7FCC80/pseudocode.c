void __thiscall sub_7FCC80(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // edi
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // ebp
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // eax
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // eax
  int *v14; // edi
  NiD3DShaderConstantMap *v15; // eax
  NiD3DShaderConstantMap *v16; // eax
  Ni2DBuffer *v17; // ebp
  Ni2DBuffer *v18; // esi
  int v19; // esi
  int v20; // edi
  int *v21; // esi
  NiD3DShaderConstantMap *v22; // eax
  NiD3DShaderConstantMap *v23; // eax
  int *v24; // esi
  NiD3DShaderConstantMap *v25; // eax
  NiD3DShaderConstantMap *v26; // eax

  v2 = (Ni2DBuffer **)(this + 0xC);
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    v5 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "WorldViewProjTranspose");
    v6 = dword_B46B98[0];
    if ( dword_B46B98[0] != v5 )
    {
      if ( v6 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))dword_B46B98[0];
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        {
          if ( v7 )
            (**v7)(v7, 1);
        }
      }
      dword_B46B98[0] = v5;
      if ( v5 )
        InterlockedIncrement((volatile LONG *)(v5 + 4));
    }
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);
    v8 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                         *v2,
                         "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46B9C, v8);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "WorldViewTranspose",
      0x20000009,
      5,
      EmptyString);
    v9 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                         *v2,
                         "WorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46BA4, v9);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "SkinWorldViewTranspose",
      0x20000009,
      6,
      EmptyString);
    v10 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "SkinWorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46BA8, v10);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "BoneMatrix3",
      0x20000009,
      0x120000,
      0x1F,
      0x36,
      0,
      0,
      0,
      0,
      0);
    v11 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoneMatrix3");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46BA0, v11);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "ConstantGroup",
      0x10000009,
      0,
      0xA,
      0x15,
      EmptyString,
      0x150,
      4,
      &flt_B46D68,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "decal fade",
      0x10000009,
      0,
      0x20,
      8,
      EmptyString,
      0x80,
      4,
      &flt_B46218,
      0);
    v12 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "decal fade");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46C14, v12);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "decal proj",
      0x10000009,
      0,
      0x28,
      0x20,
      EmptyString,
      0x200,
      4,
      &unk_B46298,
      0);
    v13 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "decal proj");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B46C18, v13);
  }
  v14 = this + 0xB;
  if ( !*(this + 0xB) )
  {
    v15 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v15 )
      v16 = NiD3DShaderCostantMapPixel::Construct(v15, *(this + 5));
    else
      v16 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v16);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v14 + 0x18))(
      *v14,
      "ConstantGroup",
      0x10000009,
      0,
      0,
      0x31,
      EmptyString,
      0x310,
      4,
      &dword_B46F78,
      0);
    *(this + 0x27) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v14 + 0x38))(*v14, "ConstantGroup");
  }
  v17 = (Ni2DBuffer *)*(this + 0x22);
  if ( v17 != *v2 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v17->__vftable)(v17, 1);
    }
    v18 = *v2;
    *(this + 0x22) = (int)v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)&v18->members);
  }
  v19 = *(this + 0x21);
  if ( v19 != *v14 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    }
    v20 = *v14;
    *(this + 0x21) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  v21 = this + 0x20;
  if ( !*(this + 0x20) )
  {
    v22 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v22 )
      v23 = NiD3DShaderCostantMapVertex::Construct(v22, *(this + 5));
    else
      v23 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x20, (Ni2DBuffer *)v23);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, CHAR *))(*(_DWORD *)*v21 + 0x1C))(
      *v21,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*(void (__thiscall **)(int, const char *, int, int, CHAR *))(*(_DWORD *)*v21 + 0x1C))(
      *v21,
      "SkinWorldViewProjTranspose",
      0x20000009,
      4,
      EmptyString);
    (*(void (__thiscall **)(int, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "BoneMatrix3",
      0x20000009,
      0x120000,
      0xE,
      0x36,
      0,
      0,
      0,
      0,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "EyePosition",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46DA8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "U Offset",
      0x10000004,
      0,
      9,
      1,
      EmptyString,
      4,
      4,
      &flt_B46B3C,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "V Offset",
      0x10000004,
      0,
      0xA,
      1,
      EmptyString,
      4,
      4,
      &flt_B46B40,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "InvBoundDiameter",
      0x10000004,
      0,
      0xB,
      1,
      EmptyString,
      4,
      4,
      &unk_B46B44,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "FogParam",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46B88,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v21 + 0x18))(
      *v21,
      "FogColor",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46B78,
      0);
  }
  v24 = this + 0x1F;
  if ( !*(this + 0x1F) )
  {
    v25 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v25 )
      v26 = NiD3DShaderCostantMapPixel::Construct(v25, *(this + 5));
    else
      v26 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x1F, (Ni2DBuffer *)v26);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v24 + 0x18))(
      *v24,
      "Fill Color",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46B48,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v24 + 0x18))(
      *v24,
      "Rim Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46B58,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v24 + 0x18))(
      *v24,
      "Vars",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B46B68,
      0);
  }
}
