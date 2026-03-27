void __thiscall sub_6EC110(void *this, float a2, int a3)
{
  float *v3; // esi
  int v5; // eax
  char v6; // al

  v3 = (float *)LODWORD(a2);
  if ( a2 != 0.0 )
  {
    v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a2) + 4))(LODWORD(a2));
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
    v3 = v6 != 0 ? v3 : 0;
  }
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0xA8))(this, &a2);
  sub_6D2B70(v3, a2);
}
