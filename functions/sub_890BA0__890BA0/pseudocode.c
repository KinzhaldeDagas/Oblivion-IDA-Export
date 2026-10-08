int __thiscall sub_890BA0(int *this)
{
  int v1; // eax
  int *v2; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0; /*0x890ba3*/
  v1 = *(this + 0xDB); /*0x890ba6*/
  if ( v1 >= 2 ) /*0x890bb1*/
  {
    v4 = 0; /*0x890bc2*/
    v2 = &v4; /*0x890bc6*/
  }
  else
  {
    v2 = this + v1 + 0xDD; /*0x890bb7*/
  }
  return *v2; /*0x890bf4*/
}
