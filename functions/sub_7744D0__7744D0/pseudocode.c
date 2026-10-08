void __thiscall sub_7744D0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  signed int v7; // eax
  void *v8; // ecx

  v4 = *(this + 0x14); /*0x7744d5*/
  v5 = 0; /*0x7744d8*/
  if ( *(this + 0x17) ) /*0x7744da*/
  {
    v6 = a3; /*0x7744e0*/
    while ( 1 ) /*0x7744f2*/
    {
      v7 = (*(int (__stdcall **)(int, int, int, int *))(*(_DWORD *)v4 + 0x48))(v4, v6, v5, &a3); /*0x7744f2*/
      if ( v7 < 0 ) /*0x7744f6*/
        break; /*0x7744f6*/
      OB_NiDX9SourceTextureData_CopyMipToSurface_010201A0(v6, a2, v5, a3, v6); /*0x774504*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 8))(a3); /*0x774516*/
      if ( (unsigned int)++v5 >= *(this + 0x17) ) /*0x77451e*/
        return; /*0x77451e*/
    }
    D3D9_HResultToString(v7); /*0x774528*/
    Shared_NoOpVirtual_60D0A0(v8); /*0x774534*/
  }
}
