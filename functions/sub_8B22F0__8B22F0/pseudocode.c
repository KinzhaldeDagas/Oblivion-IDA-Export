void __thiscall sub_8B22F0(int *this)
{
  int v1; // eax
  int *v2; // [esp+0h] [ebp-4h]

  v2 = this;
  v1 = *(this + 5);
  LOBYTE(v2) = 0;
  if ( v1 > 1 )
    sub_8B21F0(*(this + 4), 0, v1 - 1, (int)v2);
}
