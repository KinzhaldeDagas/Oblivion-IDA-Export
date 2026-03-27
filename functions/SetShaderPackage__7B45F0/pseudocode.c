int __cdecl SetShaderPackage(__int16 a1, __int16 a2, char a3, int a4, char *Str1, int a6)
{
  int v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // edx
  UInt32 v10; // [esp-4h] [ebp-8h]
  size_t v11; // [esp-4h] [ebp-8h]

  if ( HIBYTE(a1) < 2u || HIBYTE(a2) < 2u )
  {
    if ( HIBYTE(a1) && HIBYTE(a2) )
    {
      ShaderPackage = 1;
      UseHDR = 0;
      dword_B42F40 = 0xF;
    }
    else
    {
      ShaderPackage = 0;
      UseHDR = 0;
    }
LABEL_13:
    dword_B42F40 &= ~0x10u;
    goto LABEL_14;
  }
  ShaderPackage = 2;
  dword_B42F40 = 0x2F;
  if ( a4 && Str1 )
  {
    v10 = 3;
    if ( !_strnicmp(Str1, byte_A3E274, *(size_t *)&v10) )
    {
      v6 = a6;
      v7 = ShaderPackage;
      if ( a6 > 96 )
      {
        if ( v7 == 2 )
        {
          v7 = 6;
          ShaderPackage = 6;
        }
        ShaderPackageMax = 6;
LABEL_10:
        if ( v6 > 255 )
          UsePS3Shaders = 1;
        goto LABEL_12;
      }
      if ( v7 == 2 )
      {
        v7 = 4;
        ShaderPackage = 4;
      }
      ShaderPackageMax = 6;
      goto LABEL_12;
    }
    LODWORD(v11) = 2;
    if ( !_strnicmp(Str1, "nv", v11) )
    {
      v6 = a6;
      v7 = ShaderPackage;
      if ( a6 > 96 )
      {
        if ( v7 == 2 )
        {
          v7 = 5;
          ShaderPackage = 5;
        }
        ShaderPackageMax = 5;
        goto LABEL_10;
      }
      if ( v7 == 2 )
      {
        v7 = 3;
        ShaderPackage = 3;
      }
      ShaderPackageMax = 5;
LABEL_12:
      if ( v7 >= 2 )
        goto LABEL_14;
      goto LABEL_13;
    }
    ShaderPackage = 2;
    ShaderPackageMax = 2;
  }
LABEL_14:
  result = sub_7B4590();
  if ( a3 )
  {
    if ( v9 )
      ShaderPackage = 1;
  }
  return result;
}
