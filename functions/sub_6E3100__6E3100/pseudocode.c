void __thiscall sub_6E3100(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  int v5; // eax
  char v6; // al

  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3CFBC )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_6;
      }
      v6 = 1;
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    v4 = v6 != 0 ? (float *)a2 : 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D2B70(v4, *(float *)(*(this + 0x11) + 0xC));
}
