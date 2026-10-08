// MoonSugarEffect decode: NightEye program loader. Stores CreateVertexShader/CreatePixelShader wrappers into object slots with ref-counted replace before pass binding.
NiD3DShaderProgram *__thiscall sub_7F5350(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  volatile LONG *v4; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  int v8[18]; // [esp+10h] [ebp-2A0h] BYREF
  char *FullPath; // [esp+58h] [ebp-258h]
  int v10[18]; // [esp+5Ch] [ebp-254h] BYREF
  char v11[260]; // [esp+A4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1A8h] [ebp-108h] BYREF

  FullPath = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7f5372*/
  memset(v10, 0, sizeof(v10)); /*0x7f537a*/
  memset(v8, 0, sizeof(v8)); /*0x7f5398*/
  if ( "imagespace\\1x\\v\\base.v.hlsl" ) /*0x7f53ae*/
  {
    sub_801030(FullPath, (int)FileName); /*0x7f53bd*/
    _sprintf(v11, "NIGHTEYE%03i.vso", 0); /*0x7f53d1*/
    VertexShader = CreateVertexShader(FileName, v10, "vs_1_1", v11, 0, 0); /*0x7f53f9*/
    v3 = *(this + 0x24); /*0x7f53fe*/
    v4 = (volatile LONG *)VertexShader; /*0x7f5404*/
    if ( v3 != (volatile LONG *)VertexShader ) /*0x7f5408*/
    {
      if ( v3 ) /*0x7f540c*/
      {
        if ( !InterlockedDecrement(v3 + 1) ) /*0x7f5412*/
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x7f5428*/
      }
      *(this + 0x24) = v4; /*0x7f542c*/
      if ( v4 ) /*0x7f5432*/
        InterlockedIncrement(v4 + 1); /*0x7f5438*/
    }
  }
  result = (NiD3DShaderProgram *)"imagespace\\1x\\p\\nighteye.p.hlsl"; /*0x7f543e*/
  if ( "imagespace\\1x\\p\\nighteye.p.hlsl" ) /*0x7f5444*/
  {
    sub_801030("imagespace\\1x\\p\\nighteye.p.hlsl", (int)FileName); /*0x7f5453*/
    _sprintf(v11, "NIGHTEYE%03i.pso", 0); /*0x7f5467*/
    result = CreatePixelShader(FileName, v8, "ps_1_3", v11, 0, 0); /*0x7f548f*/
    v6 = *(this + 0x25); /*0x7f5494*/
    v7 = (volatile LONG *)result; /*0x7f549a*/
    if ( v6 != (volatile LONG *)result ) /*0x7f549e*/
    {
      if ( v6 ) /*0x7f54a2*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1); /*0x7f54a8*/
        if ( !result ) /*0x7f54b0*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7f54be*/
      }
      *(this + 0x25) = v7; /*0x7f54c2*/
      if ( v7 ) /*0x7f54c8*/
        return (NiD3DShaderProgram *)InterlockedIncrement(v7 + 1); /*0x7f54ce*/
    }
  }
  return result; /*0x7f54d4*/
}
