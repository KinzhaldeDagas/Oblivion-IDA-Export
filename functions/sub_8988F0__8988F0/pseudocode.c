_BYTE *__thiscall sub_8988F0(int *this, _BYTE *a2, int a3)
{
  int v3; // ecx
  char v5[4]; // [esp+0h] [ebp-8h] BYREF
  int v6; // [esp+4h] [ebp-4h]

  if ( *(this + 0x22) )
  {
    v3 = *(this + 0x20);
    v5[0] = 9;
    v6 = a3;
    sub_8D8830(v3, (int)v5);
    *a2 = 0;
    return a2;
  }
  else
  {
    sub_8CB4E0((int)this, a3, 1);
    *a2 = 1;
    return a2;
  }
}
