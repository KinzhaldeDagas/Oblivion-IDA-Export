void __thiscall sub_694FC0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // eax

  v2 = (_DWORD *)*(this + 0xD9);
  if ( v2 )
  {
    v3 = v2[2];
    if ( v3 )
    {
      v4 = v3 + 0x14;
      if ( v4 )
        *(_DWORD *)(v4 + 0x1C) = a2;
    }
    (*(void (__thiscall **)(_DWORD *))(*v2 + 0x80))(v2);
  }
}
