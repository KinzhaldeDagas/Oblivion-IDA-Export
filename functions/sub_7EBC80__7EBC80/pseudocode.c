// MoonSugarEffect decode: Hit/double-vision program loader. Loads base/copy/blur/doublevis variants and stores vertex/pixel wrappers with ref-counted replace.
NiD3DShaderProgram *__thiscall sub_7EBC80(GethitShader *this)
{
  int v1; // ebp
  NiD3DPixelShader **Pixel; // ebx
  char *v3; // eax
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // esi
  volatile LONG *v6; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v8; // esi
  NiD3DShaderProgram *v9; // edi
  int v10; // [esp+10h] [ebp-3DCh]
  char *FullPath; // [esp+18h] [ebp-3D4h]
  int v12[56]; // [esp+1Ch] [ebp-3D0h] BYREF
  char *v13; // [esp+FCh] [ebp-2F0h]
  int v14[56]; // [esp+100h] [ebp-2ECh] BYREF
  char v15[260]; // [esp+1E0h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+2E4h] [ebp-108h] BYREF

  v1 = 0; /*0x7ebc98*/
  FullPath = "imagespace\\1x\\v\\base.v.hlsl"; /*0x7ebcad*/
  memset(v12, 0, 0x48); /*0x7ebcb1*/
  v12[0x12] = (int)"imagespace\\1x\\v\\base.v.hlsl"; /*0x7ebcc2*/
  memset(&v12[0x13], 0, 0x48); /*0x7ebcc6*/
  v12[0x25] = (int)"imagespace\\1x\\v\\base.v.hlsl"; /*0x7ebcdd*/
  v12[0x26] = (int)"TEX2"; /*0x7ebce4*/
  v12[0x27] = (int)EmptyString; /*0x7ebcef*/
  memset(&v12[0x28], 0, 0x40); /*0x7ebcfa*/
  v13 = "imagespace\\1x\\p\\copy.p.hlsl"; /*0x7ebd11*/
  memset(v14, 0, 0x48); /*0x7ebd1c*/
  v14[0x12] = (int)"imagespace\\2x\\p\\blur_20.p.hlsl"; /*0x7ebd33*/
  memset(&v14[0x13], 0, 0x48); /*0x7ebd3e*/
  v14[0x25] = (int)"imagespace\\2x\\p\\doublevis_P20.p.hlsl"; /*0x7ebd55*/
  memset(&v14[0x26], 0, 0x48); /*0x7ebd60*/
  v10 = 0; /*0x7ebd6f*/
  Pixel = this->Pixel; /*0x7ebd73*/
  do /*0x7ebec1*/
  {
    v3 = (char *)v12[v1 - 1]; /*0x7ebd84*/
    if ( v3 ) /*0x7ebd8a*/
    {
      sub_801030(v3, (int)FileName); /*0x7ebd99*/
      _sprintf(v15, "ISHIT2%03i.vso", v10); /*0x7ebdb0*/
      VertexShader = CreateVertexShader(FileName, &v12[v1], "vs_1_1", v15, 0, 0); /*0x7ebdd8*/
      v5 = (volatile LONG *)Pixel[0xFFFFFFFD]; /*0x7ebddd*/
      v6 = (volatile LONG *)VertexShader; /*0x7ebde0*/
      if ( v5 != (volatile LONG *)VertexShader ) /*0x7ebde4*/
      {
        if ( v5 ) /*0x7ebde8*/
        {
          if ( !InterlockedDecrement(v5 + 1) ) /*0x7ebdee*/
            (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7ebe04*/
        }
        *(Pixel - 3) = (NiD3DPixelShader *)v6; /*0x7ebe08*/
        if ( v6 ) /*0x7ebe0b*/
          InterlockedIncrement(v6 + 1); /*0x7ebe11*/
      }
    }
    result = (NiD3DShaderProgram *)v14[v1 - 1]; /*0x7ebe17*/
    if ( result ) /*0x7ebe20*/
    {
      sub_801030((char *)result, (int)FileName); /*0x7ebe2f*/
      _sprintf(v15, "ISHIT2%03i.pso", v10); /*0x7ebe46*/
      result = CreatePixelShader(FileName, &v14[v1], "ps_2_0", v15, 0, 0); /*0x7ebe73*/
      v8 = *Pixel; /*0x7ebe78*/
      v9 = result; /*0x7ebe7a*/
      if ( *Pixel != result ) /*0x7ebe7e*/
      {
        if ( v8 ) /*0x7ebe82*/
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v8 + 1); /*0x7ebe88*/
          if ( !result ) /*0x7ebe90*/
            result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v8)(v8, 1); /*0x7ebe9e*/
        }
        *Pixel = v9; /*0x7ebea2*/
        if ( v9 ) /*0x7ebea4*/
          result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v9 + 1); /*0x7ebeaa*/
      }
    }
    ++v10; /*0x7ebeb0*/
    v1 += 0x13; /*0x7ebeb5*/
    ++Pixel; /*0x7ebeb8*/
  }
  while ( v1 < 0x39 ); /*0x7ebec1*/
  return result; /*0x7ebec7*/
}
