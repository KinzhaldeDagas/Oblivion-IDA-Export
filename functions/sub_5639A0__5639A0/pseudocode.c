int __thiscall sub_5639A0(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax

  if ( this )
  {
    v3 = *(this + 2);
    if ( v3 )
    {
      sub_89F570(this);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x38))(v3, a2);
      return sub_89F570(this);
    }
  }
  return result;
}
