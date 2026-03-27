char __thiscall sub_8D9A30(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 2);
  if ( v2 )
    LOBYTE(v2) = sub_8CB4E0(*(_DWORD *)(a2 + 8), (int)this, 1);
  return v2;
}
