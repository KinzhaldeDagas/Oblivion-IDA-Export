void __thiscall sub_6E2D20(unsigned int *this, float *a2, int a3)
{
  float *v3; // esi
  int v5; // eax
  char v6; // al
  float v7; // [esp+0h] [ebp-Ch]

  v3 = a2;
  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3CFBC )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_5;
      }
      v6 = 1;
    }
    else
    {
LABEL_5:
      v6 = 0;
    }
    v3 = v6 != 0 ? a2 : 0;
  }
  v7 = sub_7300B0((_DWORD *)*(this + 0x11), *(this + 0x12));
  sub_6D2B70(v3, v7);
}
