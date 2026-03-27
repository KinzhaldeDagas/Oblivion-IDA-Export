int __thiscall sub_8C5720(_DWORD *this, int a2)
{
  int v2; // eax

  if ( this )
    v2 = *(this + 2);
  else
    v2 = 0;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 0x10) + 0x24))(*(_DWORD *)(v2 + 0x10), a2);
  return sub_6EC2C0(a2);
}
