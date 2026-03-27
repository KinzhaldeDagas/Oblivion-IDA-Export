int __thiscall sub_9064C0(_DWORD *this)
{
  int v2; // esi
  int i; // ebx
  int v4; // eax

  v2 = *(this + 3);
  for ( i = v2 + 0xC * *(this + 4); v2 != i; v2 += 0xC )
  {
    v4 = *(_DWORD *)(v2 + 8);
    if ( v4 )
      (*(void (**)(void))(*(_DWORD *)v4 + 0x18))();
  }
  return (*(int (__thiscall **)(_DWORD *, int))*this)(this, 1);
}
