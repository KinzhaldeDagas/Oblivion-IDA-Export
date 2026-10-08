int __thiscall sub_7837B0(int *this)
{
  int v2; // eax

  v2 = *(this + 0x10); /*0x7837b3*/
  if ( v2 ) /*0x7837b8*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x7837c0*/
    *(this + 0x10) = 0; /*0x7837c2*/
  }
  return sub_783070((int)this, (int)this); /*0x7837cb*/
}
