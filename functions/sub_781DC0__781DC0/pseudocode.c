// MoonSugarEffect decode: pixel shader wrapper factory. Allocates 0x2C NiD3DPixelShader, fills base metadata, stores D3D pixel shader handle through vtable +0x3C.
NiD3DShaderProgram *__thiscall sub_781DC0(void *this, int a2, const char *ArgList, int a4, int a5)
{
  NiD3DShaderProgram *v6; // esi
  unsigned __int8 (__thiscall *v7)(void *, int, int *, int *, int *, int *); // edx
  int v9; // ebx
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch] BYREF
  int v12; // [esp+24h] [ebp-8h] BYREF
  int v13; // [esp+28h] [ebp-4h] BYREF

  v6 = (NiD3DShaderProgram *)FormHeapAlloc(0x2Cu); /*0x781dcf*/
  if ( !v6 ) /*0x781dd8*/
    return 0; /*0x781dd8*/
  NiD3DShaderProgram::NiD3DShaderProgram(v6, unk_B428C4); /*0x781de2*/
  *(_DWORD *)v6 = &NiD3DPixelShader::`vftable'; /*0x781df1*/
  *((_DWORD *)v6 + 0xA) = 0; /*0x781df7*/
  v7 = *(unsigned __int8 (__thiscall **)(void *, int, int *, int *, int *, int *))(*(_DWORD *)this + 0x24); /*0x781dfc*/
  v11 = 0; /*0x781e10*/
  v10 = 0; /*0x781e14*/
  v12 = 0; /*0x781e18*/
  v13 = 0; /*0x781e1c*/
  if ( !v7(this, a2, &v10, &v11, &v13, &v12) ) /*0x781e20*/
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1); /*0x781e2e*/
    return 0; /*0x781e38*/
  }
  v9 = NiDX9Renderer__CreatePixelShader(v10); /*0x781e48*/
  if ( v9 ) /*0x781e4c*/
  {
    (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 8))(v6, ArgList); /*0x781e85*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x10))(v6, a2); /*0x781e93*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v11, v10); /*0x781ea6*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, void *))(*(_DWORD *)v6 + 0x24))(v6, this); /*0x781eb0*/
    (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x3C))(v6, v9); /*0x781eba*/
    return v6; /*0x781ebe*/
  }
  else
  {
    sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList); /*0x781e5b*/
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1); /*0x781e6b*/
    return 0; /*0x781e70*/
  }
}
