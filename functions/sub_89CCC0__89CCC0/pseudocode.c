void __thiscall sub_89CCC0(int *this, int a2)
{
  int v2; // ecx
  char v3[4]; // [esp+0h] [ebp-8h] BYREF
  int v4; // [esp+4h] [ebp-4h]

  if ( *(this + 0x22) )
  {
    v2 = *(this + 0x20);
    v3[0] = 0xB;
    v4 = a2;
    sub_8D8830(v2, (int)v3);
  }
  else
  {
    sub_89BCC0(a2, (int)this, a2);
  }
}
