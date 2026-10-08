// Oblivion-authoritative ShadowLightShader initialization/reset: initializes the base shader, releases cached vertex/pixel programs and 419 pooled passes, releases auxiliary maps, then clears four 0x68C-byte pass/constant work tables.
bool __thiscall ShadowLightShader__InitializeAndClearShaderCaches(void *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int *v2; // edi
  int v3; // esi
  int *v4; // edi
  int v5; // esi
  NiD3DPass **v6; // esi
  NiD3DPass *v7; // ecx
  int *v9; // edi
  int v10; // esi
  int *v11; // edi
  int v12; // esi

  sub_8025F0((BSShader *)this); /*0x7c8f53*/
  v1 = InterlockedDecrement; /*0x7c8f58*/
  v2 = unk_B45290; /*0x7c8f5e*/
  do /*0x7c8f90*/
  {
    v3 = *v2; /*0x7c8f63*/
    if ( *v2 ) /*0x7c8f63*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x7c8f6d*/
      {
        if ( v3 ) /*0x7c8f75*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7c8f7f*/
      }
      *v2 = 0; /*0x7c8f81*/
    }
    ++v2; /*0x7c8f87*/
  }
  while ( (int)v2 < (int)&unk_B45494 ); /*0x7c8f90*/
  v4 = unk_B45088; /*0x7c8f92*/
  do /*0x7c8fc4*/
  {
    v5 = *v4; /*0x7c8f97*/
    if ( *v4 ) /*0x7c8f97*/
    {
      if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x7c8fa1*/
      {
        if ( v5 ) /*0x7c8fa9*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c8fb3*/
      }
      *v4 = 0; /*0x7c8fb5*/
    }
    ++v4; /*0x7c8fbb*/
  }
  while ( (int)v4 < (int)&unk_B4528C ); /*0x7c8fc4*/
  v6 = (NiD3DPass **)g_ShadowLightPassBySelector; /*0x7c8fc6*/
  do /*0x7c8fef*/
  {
    v7 = *v6; /*0x7c8fd0*/
    if ( *v6 ) /*0x7c8fd0*/
    {
      if ( v7->RefCount-- == 1 ) /*0x7c8fd6*/
        NiD3DPass_ReleaseToPool(v7); /*0x7c8fdb*/
      *v6 = 0; /*0x7c8fe0*/
    }
    ++v6; /*0x7c8fe6*/
  }
  while ( (int)v6 < (int)&unk_B45C2C ); /*0x7c8fef*/
  v9 = &unk_B45018; /*0x7c8ff1*/
  do /*0x7c9023*/
  {
    v10 = *v9; /*0x7c8ff6*/
    if ( *v9 ) /*0x7c8ff6*/
    {
      if ( !v1((volatile LONG *)(v10 + 4)) ) /*0x7c9000*/
      {
        if ( v10 ) /*0x7c9008*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c9012*/
      }
      *v9 = 0; /*0x7c9014*/
    }
    ++v9; /*0x7c901a*/
  }
  while ( (int)v9 < (int)&dword_B45084 ); /*0x7c9023*/
  v11 = unk_B45518; /*0x7c9025*/
  do /*0x7c905d*/
  {
    v12 = *v11; /*0x7c9030*/
    if ( *v11 ) /*0x7c9030*/
    {
      if ( !v1((volatile LONG *)(v12 + 4)) ) /*0x7c903a*/
      {
        if ( v12 ) /*0x7c9042*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7c904c*/
      }
      *v11 = 0; /*0x7c904e*/
    }
    ++v11; /*0x7c9054*/
  }
  while ( (int)v11 < (int)&unk_B4555C ); /*0x7c905d*/
  _memset((int)unk_B43B20, 0, 0x68Cu); /*0x7c906b*/
  _memset((int)unk_B441B0, 0, 0x68Cu); /*0x7c907c*/
  _memset((int)unk_B43490, 0, 0x68Cu); /*0x7c908d*/
  _memset((int)unk_B44840, 0, 0x68Cu); /*0x7c909e*/
  return 1; /*0x7c90a6*/
}
