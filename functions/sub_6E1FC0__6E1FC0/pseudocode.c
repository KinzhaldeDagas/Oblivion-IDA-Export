int *__thiscall sub_6E1FC0(void *this, int *a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v11; // [esp+28h] [ebp-1Ch] BYREF
  int v12; // [esp+2Ch] [ebp-18h] BYREF
  int v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+34h] [ebp-10h] BYREF
  int v15; // [esp+40h] [ebp-4h]

  v15 = 0;
  v13 = 0;
  v5 = *sub_700790(this, &v14);
  *a2 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  v6 = (void (__thiscall ***)(_DWORD, int))v14;
  v15 = 0;
  v13 = 1;
  if ( v14 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
    {
      if ( v6 )
        (**v6)(v6, 1);
    }
  }
  v7 = *((_WORD *)this + 4);
  v12 = 0;
  v11 = 0;
  if ( v7 )
  {
    sub_6D3210(2, *((_DWORD *)this + 4), *((float **)this + 8), v7, a3, a4, (int **)&v12, &v11);
    sub_6E1E90(*a2, v12, v11, *((_DWORD *)this + 4));
  }
  v8 = *((_WORD *)this + 5);
  if ( v8 )
  {
    sub_6D3210(1, *((_DWORD *)this + 5), *((float **)this + 9), v8, a3, a4, (int **)&v12, &v11);
    sub_6E1F00((_DWORD *)*a2, v12, v11, *((_DWORD *)this + 5));
  }
  v9 = *((_WORD *)this + 6);
  if ( v9 )
  {
    sub_6D3210(0, *((_DWORD *)this + 6), *((float **)this + 0xA), v9, a3, a4, (int **)&v12, &v11);
    sub_6E1F60((_DWORD *)*a2, v12, v11, *((_DWORD *)this + 6));
  }
  return a2;
}
