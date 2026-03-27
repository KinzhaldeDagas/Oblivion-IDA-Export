int *__thiscall sub_4A0E50(int **this, int *a2, int *a3)
{
  char v3; // bl
  int *v4; // eax
  int *v5; // ebp
  bool v6; // zf
  int *v7; // esi
  int *v8; // eax
  int *v9; // eax
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  int v13[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = 0;
  v4 = *(this + 1);
  v5 = a3;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *a3 == v4[2];
      v7 = v4;
      v4 = (int *)*v4;
      if ( v6 )
        break;
      if ( !v4 )
        goto LABEL_4;
    }
    v8 = v7;
  }
  else
  {
LABEL_4:
    v8 = 0;
  }
  a3 = v8;
  if ( v8 )
  {
    v9 = sub_4A0630(this, v13, &a3);
    v3 = 1;
  }
  else
  {
    v9 = v5;
  }
  v10 = *v9;
  *a2 = v10;
  if ( v10 )
    InterlockedIncrement((volatile LONG *)(v10 + 4));
  v13[3] = 0;
  if ( (v3 & 1) != 0 )
  {
    v11 = (void (__thiscall ***)(_DWORD, int))v13[0];
    if ( v13[0] )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13[0] + 4)) )
      {
        if ( v11 )
          (**v11)(v11, 1);
      }
    }
  }
  return a2;
}
