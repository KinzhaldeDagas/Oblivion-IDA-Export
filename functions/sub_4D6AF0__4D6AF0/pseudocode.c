int __thiscall sub_4D6AF0(int *this, int a2)
{
  int v3; // edi
  int result; // eax

  if ( this )
  {
    v3 = *(this + 2);
    if ( v3 )
    {
      sub_89F570(this);
      sub_8A6410(v3);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 0x50) + 0x54))(*(_DWORD *)(v3 + 0x50), a2);
      return sub_89F570(this);
    }
  }
  return result;
}
