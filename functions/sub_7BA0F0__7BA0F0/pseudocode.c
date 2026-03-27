void __cdecl sub_7BA0F0()
{
  _DWORD *v0; // eax
  BSTextureManager *v1; // eax
  int *v2; // esi
  int v3; // eax
  int *v4; // eax
  unsigned int v5; // esi
  BSShaderAccumulator *inited; // eax
  BSShaderAccumulator *v7; // esi
  volatile LONG *v8; // edi
  bool v9; // zf
  int v10; // edx
  signed int i; // esi
  unsigned int v12; // esi
  NiTPointerList__BSImageSpaceShader *v13; // eax
  NiTPointerList__BSImageSpaceShader *v14; // eax

  if ( !byte_B42F31 )
  {
    v0 = (_DWORD *)FormHeapAlloc(0x48u);
    if ( v0 )
      v1 = (BSTextureManager *)BSTextureManager_Create(v0);
    else
      v1 = 0;
    g_textureManager = v1;
    v2 = (int *)FormHeapAlloc(0x1Cu);
    if ( v2 )
    {
      v3 = sub_7DAB80();
      v4 = sub_7DB050(v2, v3);
    }
    else
    {
      v4 = 0;
    }
    dword_B430B8 = (int)v4;
    sub_7DACA0(v4, *v4);
    if ( !*(_DWORD *)(dword_B430B8 + 4) )
    {
      v5 = dword_B430B8;
      sub_7DB010((_DWORD *)dword_B430B8);
      FormHeapFree(v5);
      dword_B430B8 = 0;
    }
    inited = InitBSShaderAccumulator();
    v7 = dword_B430FC;
    v8 = (volatile LONG *)inited;
    if ( dword_B430FC != inited )
    {
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)v7 + 1) )
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v7)(v7, 1);
      }
      dword_B430FC = (BSShaderAccumulator *)v8;
      if ( v8 )
        InterlockedIncrement(v8 + 1);
    }
    sub_7AB1D0(1);
    sub_7B8990();
    v9 = dword_B43104 == 0;
    *(float *)&v10 = flt_A3D65C;
    *(float *)&dword_B4616C = flt_A3D65C;
    dword_B46170 = v10;
    dword_B46174 = v10;
    *(float *)&dword_B46178 = 1.0;
    if ( !v9 )
    {
      for ( i = 1; i < 0x1C; ++i )
        GetShaderDefinition(i);
      if ( dword_B430B8 )
      {
        v12 = dword_B430B8;
        sub_7DB010((_DWORD *)dword_B430B8);
        FormHeapFree(v12);
        dword_B430B8 = 0;
      }
      if ( dword_B43104 )
      {
        if ( ImageSpaceEffectEnabled )
        {
          v13 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu);
          if ( v13 )
            v14 = ImageSpaceshaderList::Create(v13);
          else
            v14 = 0;
          imageSpaceShaderList = v14;
        }
      }
    }
    byte_B42F31 = 1;
  }
}
