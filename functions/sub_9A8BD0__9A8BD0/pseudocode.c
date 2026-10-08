// MoonSugarEffect decode: constant-map renderer binding. Stores renderer, AddRefs IDirect3DDevice9 at renderer+0x280, and caches renderer state at +0x8AC.
int __thiscall sub_9A8BD0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(this + 0xB) = a2; /*0x9a8bd9*/
  if ( a2 ) /*0x9a8bdc*/
  {
    v3 = *(_DWORD *)(a2 + 0x280); /*0x9a8bdf*/
    v4 = *(this + 0xA); /*0x9a8be5*/
    if ( v4 ) /*0x9a8bea*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 0xA)); /*0x9a8bf2*/
    *(this + 0xA) = v3; /*0x9a8bf6*/
    if ( v3 ) /*0x9a8bf9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x9a8c01*/
    result = *(_DWORD *)(*(this + 0xB) + 0x8AC); /*0x9a8c06*/
    *(this + 0xC) = result; /*0x9a8c0d*/
  }
  else
  {
    result = *(this + 0xA); /*0x9a8c14*/
    if ( result ) /*0x9a8c19*/
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 0xA)); /*0x9a8c21*/
    *(this + 0xA) = 0; /*0x9a8c23*/
    *(this + 0xC) = 0; /*0x9a8c2a*/
  }
  return result; /*0x9a8c10*/
}
