int __thiscall sub_890BA0(int *this)
{
  int v1; // eax
  int *v2; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v1 = *(this + 0xDB);
  if ( v1 >= 2 )
  {
    v4 = 0;
    v2 = &v4;
  }
  else
  {
    v2 = this + v1 + 0xDD;
  }
  return *v2;
}
