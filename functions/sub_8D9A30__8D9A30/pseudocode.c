char __thiscall sub_8D9A30(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 2); /*0x8d9a30*/
  if ( v2 ) /*0x8d9a35*/
    LOBYTE(v2) = sub_8CB4E0(*(_DWORD *)(a2 + 8), (int)this, 1); /*0x8d9a42*/
  return v2; /*0x8d9a4a*/
}
