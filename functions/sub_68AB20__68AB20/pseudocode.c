char __thiscall sub_68AB20(int *this, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6)
{
  char v7; // bl
  int v9[2]; // [esp+Ch] [ebp-8h] BYREF

  v7 = 0;
  sub_689A00(this);
  if ( a2 )
  {
    if ( a4 )
    {
      v9[0] = 0;
      v9[1] = 0;
      v7 = sub_680110(a2, a3, a4, a5, v9, a6);
      if ( v7 )
        sub_689A60(this, v9);
      BSSimpleList_Clear(v9);
    }
  }
  sub_689C60(this);
  if ( v7 )
    sub_68A280(this, a5);
  return v7;
}
