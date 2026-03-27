int __thiscall sub_783270(int *this)
{
  int v2; // eax

  v2 = *(this + 0xD);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *(this + 0xD) = 0;
  }
  return sub_782DC0((int)this, (int)this);
}
