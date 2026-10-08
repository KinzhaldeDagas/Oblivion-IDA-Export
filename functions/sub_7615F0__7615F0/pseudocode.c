void __thiscall sub_7615F0(int this)
{
  int v2; // edi
  Ni2DBuffer *v3; // eax
  bool v4; // dl
  NiDX92DBufferData *data; // ecx
  bool v6; // zf
  NiDevImageConverter *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebx

  if ( !*(_BYTE *)(this + 0x64) ) /*0x7615f3*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 0x3C); /*0x761601*/
    if ( v2 ) /*0x761606*/
    {
      v3 = *(Ni2DBuffer **)(v2 + 0x4C); /*0x76160c*/
      v4 = 0; /*0x76160f*/
      if ( v3 ) /*0x761613*/
      {
        data = v3->members.data; /*0x761615*/
        v4 = *(_DWORD *)(this + 0x78) != (_DWORD)data; /*0x76161d*/
        v6 = *(_DWORD *)(this + 0x6C) == (_DWORD)v3; /*0x76161f*/
        *(_DWORD *)(this + 0x78) = data; /*0x761622*/
        if ( !v6 ) /*0x761628*/
        {
          NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x6C), v3); /*0x76162b*/
          v4 = 1; /*0x761630*/
        }
      }
      if ( *(_DWORD *)(v2 + 0x68) != *(_DWORD *)(this + 0x74) || v4 ) /*0x76163c*/
      {
        v7 = sub_71B280(); /*0x76163f*/
        v8 = (_DWORD *)(*(int (__thiscall **)(NiDevImageConverter *, int, int, int, _DWORD))(*(_DWORD *)v7 + 0x10))( /*0x761656*/
                         v7,
                         v2,
                         this + 0xC,
                         v2,
                         *(unsigned __int8 *)(this + 0x65));
        v6 = *(_DWORD *)(this + 4) == 0; /*0x761658*/
        v9 = v8; /*0x76165c*/
        *(_DWORD *)(this + 0x74) = *(_DWORD *)(v2 + 0x68); /*0x761661*/
        if ( !v6 ) /*0x761664*/
          OB_NiDX9SourceTextureData_UploadMipLevels_010201A0((NiDX9SourceTextureData *)this, v8); /*0x761669*/
        if ( v9 ) /*0x761670*/
        {
          InterlockedIncrement(v9 + 1); /*0x761676*/
          if ( !InterlockedDecrement(v9 + 1) ) /*0x76167d*/
            (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x76168f*/
        }
      }
    }
  }
}
