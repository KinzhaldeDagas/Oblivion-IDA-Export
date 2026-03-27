int __thiscall sub_7837B0(int *this)
{
  int v2; // eax

  v2 = *(this + 0x10);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *(this + 0x10) = 0;
  }
  return sub_783070((int)this, (int)this);
}
