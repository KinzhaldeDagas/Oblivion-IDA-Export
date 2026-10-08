// QueuedModel post-load callback wrapper: forwards optional child block (+0x2C + 0x10) to vtable slot +0x30.
int __thiscall sub_435000(_DWORD *this)
{
  int v1; // eax
  int v2; // edx

  v1 = *(this + 0xB); /*0x435000*/
  v2 = 0; /*0x435003*/
  if ( v1 ) /*0x435007*/
    v2 = v1 + 0x10; /*0x435009*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x30))(this, v2); /*0x435014*/
}
