// MoonSugarEffect decode: Refraction program loader. Uses base.v.hlsl TEX2 and refraction_P20.p.hlsl, storing wrappers with ref-counted replace.
volatile LONG *__thiscall sub_800750(RefractionShader *this)
{
  NiD3DShaderProgram *VertexShader; // eax
  NiD3DVertexShader *v3; // edi
  NiD3DShaderProgram *v4; // ebx
  volatile LONG *result; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  int v8[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *v9; // [esp+5Ch] [ebp-258h]
  int v10[18]; // [esp+60h] [ebp-254h] BYREF
  char v11[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  v8[0] = (int)"TEX2"; /*0x80077c*/
  v8[1] = (int)EmptyString; /*0x800784*/
  memset(&v8[2], 0, 0x40); /*0x80078c*/
  v9 = "imagespace\\2x\\p\\refraction_P20.p.hlsl"; /*0x8007a1*/
  memset(v10, 0, sizeof(v10)); /*0x8007a9*/
  if ( "imagespace\\1x\\v\\base.v.hlsl" ) /*0x8007c6*/
  {
    sub_801030("imagespace\\1x\\v\\base.v.hlsl", (int)FileName); /*0x8007d5*/
    _sprintf(v11, "REFRACT2%03i.vso", 0); /*0x8007e8*/
    VertexShader = CreateVertexShader(FileName, v8, "vs_1_1", v11, 0, 0); /*0x80080e*/
    v3 = this->Vertex[0]; /*0x800813*/
    v4 = VertexShader; /*0x800819*/
    if ( v3 != VertexShader ) /*0x80081d*/
    {
      if ( v3 ) /*0x800821*/
      {
        if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x800827*/
          (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x80083d*/
      }
      this->Vertex[0] = v4; /*0x800841*/
      if ( v4 ) /*0x800847*/
        InterlockedIncrement((volatile LONG *)v4 + 1); /*0x80084d*/
    }
  }
  result = (volatile LONG *)v9; /*0x800853*/
  if ( v9 ) /*0x800859*/
  {
    sub_801030(v9, (int)FileName); /*0x800868*/
    _sprintf(v11, "REFRACT2%03i.pso", 0); /*0x80087b*/
    result = (volatile LONG *)CreatePixelShader(FileName, v10, "ps_2_0", v11, 0, 0); /*0x8008a1*/
    v6 = (volatile LONG *)this->Pixel[0]; /*0x8008a6*/
    v7 = result; /*0x8008ac*/
    if ( v6 != result ) /*0x8008b0*/
    {
      if ( v6 ) /*0x8008b4*/
      {
        result = (volatile LONG *)InterlockedDecrement(v6 + 1); /*0x8008ba*/
        if ( !result ) /*0x8008c2*/
          result = (volatile LONG *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x8008d0*/
      }
      this->Pixel[0] = (NiD3DPixelShader *)v7; /*0x8008d4*/
      if ( v7 ) /*0x8008da*/
        return (volatile LONG *)InterlockedIncrement(v7 + 1); /*0x8008e0*/
    }
  }
  return result; /*0x8008e6*/
}
