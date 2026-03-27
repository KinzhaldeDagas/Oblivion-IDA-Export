_DWORD *__thiscall sub_5E03E0(TESObjectREFR *this, _DWORD *a2, int a3)
{
  char *v3; // eax
  char *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax

  *a2 = *(_DWORD *)a3;
  a2[1] = *(_DWORD *)(a3 + 4);
  a2[2] = *(_DWORD *)(a3 + 8);
  v3 = (char *)sub_67DD70((float *)a3, this);
  if ( v3 )
  {
    v4 = sub_4BEF40(v3);
    v5 = *(_DWORD *)v4;
    v6 = *((_DWORD *)v4 + 1);
    v7 = *((_DWORD *)v4 + 2);
    *a2 = v5;
    a2[1] = v6;
    a2[2] = v7;
  }
  return a2;
}
