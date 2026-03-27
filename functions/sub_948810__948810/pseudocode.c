int __thiscall sub_948810(void *this, __int128 *a2)
{
  __int128 v4; // [esp+Ch] [ebp-50h] BYREF
  float v5[4]; // [esp+1Ch] [ebp-40h] BYREF
  _OWORD v6[3]; // [esp+2Ch] [ebp-30h] BYREF

  v4 = a2[3];
  v6[0] = *a2;
  v6[1] = a2[1];
  v6[2] = a2[2];
  sub_8B1B40(v5, (float *)v6);
  sub_918480(this, (char *)&v4, 3);
  return sub_918480(this, (char *)v5, 4);
}
