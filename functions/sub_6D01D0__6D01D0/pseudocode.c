void __thiscall sub_6D01D0(_DWORD *this, _DWORD **a2)
{
  _DWORD **v2; // ebx
  unsigned __int16 v4; // bp
  int v5; // ecx
  int *v6; // eax
  char v7; // al
  int i; // [esp+Ch] [ebp-4h]

  v2 = a2;
  sub_715E40(this, (int)a2);
  NiTMap_GetAt(*v2, (int)this, &a2);
  v4 = 0;
  for ( i = (int)a2; v4 < *((_WORD *)this + 0x22); ++v4 )
  {
    v5 = 0x30 * v4 + *(this + 0xF);
    (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v5 + 0x38))(v5, v2);
    v6 = (int *)(*(this + 0x10) + 4 * v4);
    if ( *v6 )
    {
      v7 = NiTMap_GetAt(*v2, *v6, &a2);
      *(_DWORD *)(*(_DWORD *)(i + 0x40) + 4 * v4) = v7 != 0 ? a2 : 0;
    }
  }
}
