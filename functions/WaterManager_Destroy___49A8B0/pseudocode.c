char __thiscall WaterManager::Destroy_(WaterManager *this, int *a5)
{
  bool v5; // zf
  BSRenderedTexture *ReflectionMap; // esi
  LONG (__stdcall *v8)(volatile LONG *); // edi
  BSRenderedTexture *BaseHeightMap; // esi
  BSRenderedTexture *HeightMap; // esi
  BSRenderedTexture *BaseDisplacementMap; // esi
  WaterShader *v12; // eax
  UInt32 v13; // esi
  UInt32 *Unk104; // edi
  UInt32 v15; // esi
  UInt32 *v16; // edi
  UInt32 v17; // esi
  UInt32 *v18; // edi
  int *v19; // eax
  unsigned int v20; // esi
  int *v21; // ebx
  int v22; // edi
  int v23; // edi
  void (__thiscall ***v24)(_DWORD, int); // edi
  int *unk40; // ecx
  UInt32 v26; // esi
  NiCamera *Camera; // esi
  int v28; // esi
  WaterShader *v29; // eax
  UInt32 v30; // esi
  UInt32 *v31; // edi
  int v33; // [esp+2Ch] [ebp-4h] BYREF

  v5 = (_BYTE)a5 == 0;
  byte_B0703C = 0;
  if ( !v5 )
  {
    nullsub_returnTrue_0arg();
    if ( this->ReflectionMap )
      sub_7C1EE0(g_textureManager, this->ReflectionMap);
    if ( this->BaseHeightMap )
      sub_7C1EE0(g_textureManager, this->BaseHeightMap);
    if ( this->HeightMap )
      sub_7C1EE0(g_textureManager, this->HeightMap);
    if ( this->BaseDisplacementMap )
      sub_7C1EE0(g_textureManager, this->BaseDisplacementMap);
    ReflectionMap = this->ReflectionMap;
    v8 = InterlockedDecrement;
    if ( ReflectionMap )
    {
      if ( !v8((volatile LONG *)&ReflectionMap->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))ReflectionMap->vtbl)(ReflectionMap, 1);
      this->ReflectionMap = 0;
    }
    BaseHeightMap = this->BaseHeightMap;
    if ( BaseHeightMap )
    {
      if ( !v8((volatile LONG *)&BaseHeightMap->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))BaseHeightMap->vtbl)(BaseHeightMap, 1);
      this->BaseHeightMap = 0;
    }
    HeightMap = this->HeightMap;
    if ( HeightMap )
    {
      if ( !v8((volatile LONG *)&HeightMap->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))HeightMap->vtbl)(HeightMap, 1);
      this->HeightMap = 0;
    }
    BaseDisplacementMap = this->BaseDisplacementMap;
    if ( BaseDisplacementMap )
    {
      if ( !v8((volatile LONG *)&BaseDisplacementMap->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))BaseDisplacementMap->vtbl)(BaseDisplacementMap, 1);
      this->BaseDisplacementMap = 0;
    }
    v12 = waterShader;
    if ( waterShader )
    {
      v13 = v12->Unk104[0];
      Unk104 = v12->Unk104;
      if ( v13 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v13)(v13, 1);
        *Unk104 = 0;
        v12 = waterShader;
      }
      v15 = v12->Unk104[1];
      v16 = &v12->Unk104[1];
      if ( v15 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
        *v16 = 0;
        v12 = waterShader;
      }
      v17 = v12->Unk104[4];
      v18 = &v12->Unk104[4];
      if ( v17 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1);
        *v18 = 0;
      }
    }
    if ( dword_B45FE0 )
      sub_7E0CB0(dword_B45FE0);
    if ( dword_B45F54 )
      sub_7DE0B0((_DWORD *)dword_B45F54);
    a5 = (int *)this->unk34;
    v19 = a5;
    if ( a5 )
    {
      do
      {
        if ( v19 )
        {
          v20 = v19[2];
          v21 = (int *)*v19;
          if ( *(_DWORD *)(v20 + 8) )
            sub_7C1EE0(g_textureManager, *(BSRenderedTexture **)(v20 + 8));
          if ( *(_DWORD *)(v20 + 0xC) )
            sub_7C1EE0(g_textureManager, *(BSRenderedTexture **)(v20 + 0xC));
          v22 = *(_DWORD *)(v20 + 8);
          if ( v22 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
              (**(void (__thiscall ***)(int, int))v22)(v22, 1);
            *(_DWORD *)(v20 + 8) = 0;
          }
          v23 = *(_DWORD *)(v20 + 0xC);
          if ( v23 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              (**(void (__thiscall ***)(int, int))v23)(v23, 1);
            *(_DWORD *)(v20 + 0xC) = 0;
          }
          sub_7AA860((BSTextureManager *)&this->unk30, (NiTPointerList_Node_void **)&a5);
          (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)value + 0x88))(value, &v33, *(_DWORD *)(v20 + 4));
          if ( v33 )
          {
            v24 = (void (__thiscall ***)(_DWORD, int))v33;
            if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
              (**v24)(v24, 1);
          }
          sub_4993B0((_BYTE *)v20);
          FormHeapFree(v20);
        }
        else
        {
          v21 = 0;
        }
        v19 = v21;
        a5 = v21;
      }
      while ( v21 );
    }
    unk40 = (int *)this->unk40;
    if ( unk40 )
    {
      sub_6B73C0(unk40);
      v26 = this->unk40;
      if ( v26 )
      {
        sub_6B73E0((_DWORD *)this->unk40);
        FormHeapFree(v26);
      }
      this->unk40 = 0;
    }
    Camera = this->Camera;
    if ( this->Camera )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Camera->members) )
      {
        if ( Camera )
          Camera->vtbl->super.super.Destructor((NiRefObject *)Camera, 1);
      }
      this->Camera = 0;
    }
    if ( *((_DWORD *)this + 0x12) )
    {
      sub_7C1EE0(g_textureManager, *((BSRenderedTexture **)this + 0x12));
      v28 = *((_DWORD *)this + 0x12);
      if ( v28 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) )
          (**(void (__thiscall ***)(int, int))v28)(v28, 1);
        *((_DWORD *)this + 0x12) = 0;
      }
      v29 = waterShader;
      if ( waterShader )
      {
        v30 = v29->Unk104[2];
        v31 = &v29->Unk104[2];
        if ( v30 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) )
            (**(void (__thiscall ***)(UInt32, int))v30)(v30, 1);
          *v31 = 0;
        }
      }
    }
    nullsub_returnTrue_0arg();
  }
  return 1;
}
