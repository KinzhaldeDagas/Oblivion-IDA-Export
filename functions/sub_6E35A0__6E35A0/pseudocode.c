int *__thiscall sub_6E35A0(int *this, int *a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  unsigned int v7; // eax
  int v8; // ecx
  int v10; // [esp+28h] [ebp-1Ch] BYREF
  int v11; // [esp+2Ch] [ebp-18h] BYREF
  int v12; // [esp+30h] [ebp-14h]
  int v13; // [esp+34h] [ebp-10h] BYREF
  int v14; // [esp+40h] [ebp-4h]

  v14 = 0;
  v12 = 0;
  v5 = *sub_700790(this, &v13);
  *a2 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  v6 = (void (__thiscall ***)(_DWORD, int))v13;
  v14 = 0;
  v12 = 1;
  if ( v13 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
    {
      if ( v6 )
        (**v6)(v6, 1);
    }
  }
  v7 = *(this + 2);
  if ( v7 )
  {
    v8 = *(this + 4);
    v11 = 0;
    v10 = 0;
    sub_6D3210(0, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10);
    sub_6E3540((_DWORD *)*a2, v11, v10, *(this + 4));
  }
  return a2;
}
