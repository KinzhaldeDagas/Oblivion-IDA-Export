float *__cdecl sub_579640(float *a1)
{
  InterfaceManager *v5; // eax
  InterfaceManager *Singleton; // eax
  UInt32 v7; // edx
  UInt32 v8; // eax
  int v10; // edx
  float v11; // ecx

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (v5 = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(v5->menuRoot, 0xFAE) == fConstant_2) )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    *a1 = *(float *)&Singleton->unk0C0[4];
    v7 = Singleton->unk0C0[5];
    v8 = Singleton->unk0C0[6];
    *((_DWORD *)a1 + 1) = v7;
    *((_DWORD *)a1 + 2) = v8;
    return a1;
  }
  else
  {
    v10 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *a1 = Vector3_InitValue_;
    v11 = dword_B3F9B0;
    *((_DWORD *)a1 + 1) = v10;
    a1[2] = v11;
    return a1;
  }
}
