int __thiscall sub_75A3F0(float *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  unsigned __int8 v6; // dl

  v3 = *((_DWORD *)this + 6); /*0x75a3f9*/
  if ( v3 != a2 ) /*0x75a3fe*/
  {
    if ( v3 ) /*0x75a402*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x75a408*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x75a41e*/
    }
    *((_DWORD *)this + 6) = a2; /*0x75a422*/
    if ( a2 ) /*0x75a425*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x75a42b*/
  }
  result = *((_DWORD *)this + 6); /*0x75a433*/
  *(this + 7) = 0.0; /*0x75a438*/
  *(this + 8) = 0.0; /*0x75a43b*/
  if ( result ) /*0x75a43e*/
  {
    v5 = *(_DWORD *)(result + 8); /*0x75a440*/
    v6 = *(_BYTE *)(result + 0x14); /*0x75a445*/
    result = *(_DWORD *)(result + 0xC); /*0x75a448*/
    if ( v5 ) /*0x75a44b*/
    {
      *(this + 7) = *(float *)result; /*0x75a455*/
      *(this + 8) = *(float *)(v6 * (v5 - 1) + result); /*0x75a45e*/
    }
  }
  return result; /*0x75a461*/
}
