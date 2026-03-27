int __cdecl sub_40FA20(int *a1, float a2, float a3, float a4, float a5)
{
  _DWORD *v6; // ebx
  unsigned int v7; // ebp
  bool v8; // cf
  unsigned int v9; // ebp
  int v11; // [esp+7Ch] [ebp-Ch]
  float v12; // [esp+80h] [ebp-8h]
  float v13; // [esp+84h] [ebp-4h]
  float v14; // [esp+8Ch] [ebp+4h]
  float i; // [esp+8Ch] [ebp+4h]
  float j; // [esp+8Ch] [ebp+4h]

  sub_40F970(*a1);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)*a1 + 0xE4))(*a1, 7, 0);
  (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xE, 0);
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xA8, 0xF);
  v6 = (_DWORD *)a1[0x10];
  v14 = (float)(unsigned int)a1[0xF];
  v11 = 0;
  v12 = v14 * a4;
  v13 = v14 * a5;
  if ( a1[0xA] )
  {
    do
    {
      v7 = 0;
      for ( i = a2; v7 < a1[9]; i = i + v12 )
      {
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++);
        sub_40F760((int *)*a1, i, a3, a4, a5, a1[0xF], a1[0xF]);
        ++v7;
      }
      if ( a1[0xB] )
      {
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++);
        sub_40F760((int *)*a1, i, a3, a4, a5, a1[0xB], a1[0xF]);
      }
      v8 = ++v11 < (unsigned int)a1[0xA];
      a3 = a3 + v13;
    }
    while ( v8 );
  }
  if ( a1[0xC] )
  {
    v9 = 0;
    for ( j = a2; v9 < a1[9]; j = j + v12 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6++);
      sub_40F760((int *)*a1, j, a3, a4, a5, a1[0xF], a1[0xC]);
      ++v9;
    }
    if ( a1[0xB] )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, *v6);
      sub_40F760((int *)*a1, j, a3, a4, a5, a1[0xB], a1[0xC]);
    }
  }
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 7, 1);
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0xE, 1);
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*a1 + 0xE4))(*a1, 0x1B, 1);
  return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*a1 + 0x104))(*a1, 0, 0);
}
