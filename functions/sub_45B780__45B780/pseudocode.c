char __thiscall sub_45B780(TESForm *this, int a2, char a3)
{
  char result; // al

  result = a2;
  if ( (*(_DWORD *)(a2 + 8) & 0x4000) == 0 )
    return sub_452DF0(&this->vtbl->super.InitializeComponent, *(_DWORD *)(a2 + 0xC), a3);
  return result;
}
