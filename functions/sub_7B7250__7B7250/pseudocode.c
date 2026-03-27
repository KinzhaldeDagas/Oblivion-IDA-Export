void *__thiscall sub_7B7250(void *this)
{
  int v2; // eax
  bool v3; // zf
  LONG (__stdcall *v4)(volatile LONG *); // edi
  void (__thiscall ***v5)(_DWORD, int); // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  BSShaderAccumulator *v18; // esi
  int v19; // esi
  int v20; // esi
  float v22; // [esp+38h] [ebp-14h]

  dword_B42EC0[0] = 0;
  dword_B42EC4 = 0;
  dword_B42EC8 = 0;
  dword_B42ECC = 0;
  dword_B42ED0 = 0;
  dword_B42ED4 = 0;
  dword_B42ED8 = 0;
  dword_B42EDC = 0;
  dword_B42EE0 = 0;
  dword_B42EE4 = 0;
  dword_B42EE8 = 0;
  dword_B42EEC = 0;
  dword_B42EF0 = 0;
  dword_B42EF4 = 0;
  dword_B42EF8 = 0;
  dword_B42EFC = 0;
  dword_B42F00 = 0;
  dword_B42F04 = 0;
  dword_B42F08 = 0;
  dword_B42F0C = 0;
  dword_B42F10 = 0;
  dword_B42F14 = 0;
  dword_B42F18 = 0;
  dword_B42F1C = 0;
  dword_B42F20 = 0;
  dword_B42F24 = 0;
  dword_B42F28 = 0;
  dword_B42F2C = 0;
  v2 = dword_B430EC;
  v3 = dword_B430EC == 0;
  v4 = InterlockedDecrement;
  FullPath[0] = 0;
  CacheOrNullString = 0;
  byte_B42F3F = 1;
  dword_B42E90 = 0xFFFFFFFF;
  dword_B42EB8 = 0;
  byte_B42EA7 = 1;
  byte_B42E85 = 0;
  dword_B42F40 = 0x2F;
  dword_B42D70 = (int)j_j_NiFile_GetNiFile;
  dword_B42D78 = 0;
  dword_B42EB4 = 0;
  byte_B42E95 = 1;
  byte_B42F31 = 0;
  byte_B42E94 = 0;
  byte_B42E86 = 0;
  dword_B42EBC = 0;
  ShaderPackage = 0;
  ShaderPackageMax = 0;
  byte_B42E87 = 1;
  byte_B42F33 = 0;
  if ( !v3 )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))v2;
    if ( !v4((volatile LONG *)(v2 + 4)) )
    {
      if ( v5 )
        (**v5)(v5, 1);
    }
    dword_B430EC = 0;
  }
  v6 = dword_B430DC;
  if ( dword_B430DC )
  {
    if ( !v4((volatile LONG *)(v6 + 4)) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    dword_B430DC = 0;
  }
  v7 = dword_B430F0;
  if ( dword_B430F0 )
  {
    if ( !v4((volatile LONG *)(v7 + 4)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    dword_B430F0 = 0;
  }
  v8 = dword_B430E0;
  if ( dword_B430E0 )
  {
    if ( !v4((volatile LONG *)(v8 + 4)) )
    {
      if ( v8 )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    dword_B430E0 = 0;
  }
  v9 = dword_B43100;
  if ( dword_B43100 )
  {
    if ( !v4((volatile LONG *)(v9 + 4)) )
    {
      if ( v9 )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    dword_B43100 = 0;
  }
  v10 = dword_B430E4;
  if ( dword_B430E4 )
  {
    if ( !v4((volatile LONG *)(v10 + 4)) )
    {
      if ( v10 )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    dword_B430E4 = 0;
  }
  v11 = dword_B4311C;
  if ( dword_B4311C )
  {
    if ( !v4((volatile LONG *)(v11 + 4)) )
    {
      if ( v11 )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    dword_B4311C = 0;
  }
  v12 = dword_B43120;
  if ( dword_B43120 )
  {
    if ( !v4((volatile LONG *)(v12 + 4)) )
    {
      if ( v12 )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    dword_B43120 = 0;
  }
  v13 = dword_B430F8;
  if ( dword_B430F8 )
  {
    if ( !v4((volatile LONG *)(v13 + 4)) )
    {
      if ( v13 )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    dword_B430F8 = 0;
  }
  v14 = dword_B43110;
  if ( dword_B43110 )
  {
    if ( !v4((volatile LONG *)(v14 + 4)) )
    {
      if ( v14 )
        (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    }
    dword_B43110 = 0;
  }
  v15 = dword_B430D4;
  if ( dword_B430D4 )
  {
    if ( !v4((volatile LONG *)(v15 + 4)) )
    {
      if ( v15 )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    dword_B430D4 = 0;
  }
  v16 = dword_B43114;
  if ( dword_B43114 )
  {
    if ( !v4((volatile LONG *)(v16 + 4)) )
    {
      if ( v16 )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    }
    dword_B43114 = 0;
  }
  v17 = dword_B430F4;
  if ( dword_B430F4 )
  {
    if ( !v4((volatile LONG *)(v17 + 4)) )
    {
      if ( v17 )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    dword_B430F4 = 0;
  }
  v18 = dword_B430FC;
  v3 = dword_B430FC == 0;
  dword_B42F38 = 0;
  dword_B42F34 = 0;
  byte_B42F30 = 0;
  byte_B42F3C = 0;
  ImageSpaceEffectEnabled = 0;
  dword_B42F60 = 0;
  if ( !v3 )
  {
    if ( !v4((volatile LONG *)v18 + 1) )
    {
      if ( v18 )
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))v18)(v18, 1);
    }
    dword_B430FC = 0;
  }
  v22 = g_DialogueFov_;
  OcclusionCullngBool = 0;
  UpdateParticleShaderFOVData(v22);
  v19 = dword_B43128;
  v3 = dword_B43128 == 0;
  byte_B42F32 = 0;
  byte_B42EA6 = 0;
  if ( !v3 )
  {
    if ( !v4((volatile LONG *)(v19 + 4)) )
    {
      if ( v19 )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    }
    dword_B43128 = 0;
  }
  v20 = dword_B43124;
  v3 = dword_B43124 == 0;
  enableRefraction = 0;
  if ( !v3 )
  {
    if ( !v4((volatile LONG *)(v20 + 4)) )
    {
      if ( v20 )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    }
    dword_B43124 = 0;
  }
  UsePS3Shaders = 0;
  return this;
}
