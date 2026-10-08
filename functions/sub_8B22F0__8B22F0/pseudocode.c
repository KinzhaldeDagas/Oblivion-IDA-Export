void __thiscall sub_8B22F0(int *this)
{
  int v1; // eax
  int *v2; // [esp+0h] [ebp-4h]

  v2 = this; /*0x8b22f0*/
  v1 = *(this + 5); /*0x8b22f1*/
  LOBYTE(v2) = 0; /*0x8b22f7*/
  if ( v1 > 1 ) /*0x8b22fb*/
    sub_8B21F0(*(this + 4), 0, v1 - 1, (int)v2); /*0x8b2309*/
}
