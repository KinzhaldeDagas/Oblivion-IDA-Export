char __thiscall sub_6F1BF0(_DWORD *this, int a2)
{
  _DWORD *v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( (unsigned int)a2 > 0x3FFFFFFF )
    sub_6F1780(a2, v5, v6);
  v4 = sub_78FB60((char *)a2);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = &v4[a2];
  return 1;
}
