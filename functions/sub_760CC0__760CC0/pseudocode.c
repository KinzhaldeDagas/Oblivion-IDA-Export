void __thiscall sub_760CC0(NiDX9SourceTextureData *this, _DWORD *a2)
{
  IDirect3DBaseTexture9 *dTexture; // eax
  IDirect3DBaseTexture9 *v4; // ebx
  UInt32 v5; // eax
  int v6; // edi
  signed int v7; // eax
  void *v8; // ecx
  int v9; // [esp+14h] [ebp-4h] BYREF

  dTexture = this->dTexture;
  if ( dTexture )
  {
    if ( dTexture->lpVtbl->GetType(dTexture) != D3DRTYPE_CUBETEXTURE
      && this->dTexture->lpVtbl->GetType(this->dTexture) != D3DRTYPE_VOLUMETEXTURE )
    {
      v4 = this->dTexture;
      v5 = a2[0x18];
      this->Levels = v5;
      v6 = 0;
      if ( v5 != this->LevelsSkipped )
      {
        while ( 1 )
        {
          v7 = ((int (__stdcall *)(IDirect3DBaseTexture9 *, int, int *))v4->lpVtbl[1].AddRef)(v4, v6, &v9);
          if ( v7 < 0 )
            break;
          sub_760860(v6, a2, v6 + this->LevelsSkipped, v9, 0);
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          if ( ++v6 >= this->Levels - this->LevelsSkipped )
            return;
        }
        sub_7736F0(v7);
        TESTexture::ClearComponentReferences(v8);
      }
    }
  }
}
