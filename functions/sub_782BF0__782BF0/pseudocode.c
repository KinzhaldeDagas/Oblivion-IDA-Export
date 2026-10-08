// MoonSugarEffect decode: NiD3DShaderProgram renderer attachment. Stores renderer at +0x20, AddRefs renderer device/resource at +0x1C, and caches renderer state pointer at +0x24.
int __thiscall sub_782BF0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(this + 8) = a2; /*0x782bf9*/
  if ( a2 ) /*0x782bfc*/
  {
    v3 = *(_DWORD *)(a2 + 0x280); /*0x782bff*/
    v4 = *(this + 7); /*0x782c05*/
    if ( v4 ) /*0x782c0a*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 7)); /*0x782c12*/
    *(this + 7) = v3; /*0x782c16*/
    if ( v3 ) /*0x782c19*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x782c21*/
    result = *(_DWORD *)(*(this + 8) + 0x8AC); /*0x782c26*/
    *(this + 9) = result; /*0x782c2d*/
  }
  else
  {
    result = *(this + 7); /*0x782c34*/
    *(this + 9) = 0; /*0x782c39*/
    if ( result ) /*0x782c40*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x782c48*/
    *(this + 7) = 0; /*0x782c4a*/
  }
  return result; /*0x782c30*/
}
