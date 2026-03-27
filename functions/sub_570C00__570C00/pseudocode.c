void __thiscall sub_570C00(void *this, char *a2)
{
  int v3; // esi
  int v4; // eax
  char v5; // al
  int v6; // eax
  char *v7; // esi

  v3 = *(_DWORD *)(*((_DWORD *)this + 6) + 0xC);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    if ( v4 )
    {
      while ( (BSStringT *)v4 != &stru_B3CAC0 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v6 = v5 != 0 ? v3 : 0;
    if ( v6 )
    {
      if ( NiTMap_GetAt((_DWORD *)(v6 + 0x58), (int)a2, &a2) )
      {
        v7 = a2;
        if ( a2 )
        {
          sub_6C9BA0(a2, 0, 0, 1.0, 0.0, 0, 0);
          a2 = *((char **)v7 + 0xC);
          if ( *((float *)this + 2) < (double)*(float *)&a2 )
            *((float *)this + 2) = *(float *)&a2;
        }
      }
    }
  }
}
