volatile LONG *__thiscall sub_7AF0A0(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  volatile LONG *v4; // ebx
  volatile LONG *result; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  int v8[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *v9; // [esp+5Ch] [ebp-258h]
  int v10[18]; // [esp+60h] [ebp-254h] BYREF
  char v11[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  memset(v8, 0, sizeof(v8)); /*0x7af0cc*/
  v9 = "imagespace\\2x\\p\\map_P20.p.hlsl"; /*0x7af0e5*/
  memset(v10, 0, sizeof(v10)); /*0x7af0ed*/
  if ( "imagespace\\1x\\v\\base.v.hlsl" ) /*0x7af0ff*/
  {
    sub_801030("imagespace\\1x\\v\\base.v.hlsl", (int)FileName); /*0x7af10e*/
    _sprintf(v11, "MAP%03i.vso", 0); /*0x7af121*/
    VertexShader = CreateVertexShader(FileName, v8, "vs_1_1", v11, 0, 0); /*0x7af147*/
    v3 = *(this + 0x26); /*0x7af14c*/
    v4 = (volatile LONG *)VertexShader; /*0x7af152*/
    if ( v3 != (volatile LONG *)VertexShader ) /*0x7af156*/
    {
      if ( v3 ) /*0x7af15a*/
      {
        if ( !InterlockedDecrement(v3 + 1) ) /*0x7af160*/
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x7af176*/
      }
      *(this + 0x26) = v4; /*0x7af17a*/
      if ( v4 ) /*0x7af180*/
        InterlockedIncrement(v4 + 1); /*0x7af186*/
    }
  }
  result = (volatile LONG *)v9; /*0x7af18c*/
  if ( v9 ) /*0x7af192*/
  {
    sub_801030(v9, (int)FileName); /*0x7af1a1*/
    _sprintf(v11, "MAP%03i.pso", 0); /*0x7af1b4*/
    result = (volatile LONG *)CreatePixelShader(FileName, v10, "ps_2_0", v11, 0, 0); /*0x7af1da*/
    v6 = *(this + 0x27); /*0x7af1df*/
    v7 = result; /*0x7af1e5*/
    if ( v6 != result ) /*0x7af1e9*/
    {
      if ( v6 ) /*0x7af1ed*/
      {
        result = (volatile LONG *)InterlockedDecrement(v6 + 1); /*0x7af1f3*/
        if ( !result ) /*0x7af1fb*/
          result = (volatile LONG *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7af209*/
      }
      *(this + 0x27) = v7; /*0x7af20d*/
      if ( v7 ) /*0x7af213*/
        return (volatile LONG *)InterlockedIncrement(v7 + 1); /*0x7af219*/
    }
  }
  return result; /*0x7af21f*/
}
