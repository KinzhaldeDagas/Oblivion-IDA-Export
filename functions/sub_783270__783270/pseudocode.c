int __thiscall sub_783270(int *this)
{
  int v2; // eax

  v2 = *(this + 0xD); /*0x783273*/
  if ( v2 ) /*0x783278*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x783280*/
    *(this + 0xD) = 0; /*0x783282*/
  }
  return sub_782DC0((int)this, (int)this); /*0x78328b*/
}
