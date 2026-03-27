void __thiscall sub_7744D0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  signed int v7; // eax
  void *v8; // ecx

  v4 = *(this + 0x14);
  v5 = 0;
  if ( *(this + 0x17) )
  {
    v6 = a3;
    while ( 1 )
    {
      v7 = (*(int (__stdcall **)(int, int, int, int *))(*(_DWORD *)v4 + 0x48))(v4, v6, v5, &a3);
      if ( v7 < 0 )
        break;
      sub_760860(v6, a2, v5, a3, v6);
      (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 8))(a3);
      if ( (unsigned int)++v5 >= *(this + 0x17) )
        return;
    }
    sub_7736F0(v7);
    TESTexture::ClearComponentReferences(v8);
  }
}
