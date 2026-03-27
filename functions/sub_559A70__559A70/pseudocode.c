void __thiscall sub_559A70(_DWORD *this)
{
  float *v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  int v5; // esi
  float *v6; // ebx
  _DWORD *v7; // esi
  unsigned int v8; // ebp
  int v9; // ebx

  v2 = (float *)*(this + 3);
  v3 = this + 1;
  if ( *(this + 2) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    _invalid_parameter_noinfo();
  if ( (float *)v4 != v2 )
  {
    v5 = sub_558610(v2, (float *)v3[2], v4);
    sub_557740(v5, v3[2]);
    v3[2] = v5;
  }
  v6 = (float *)*(this + 7);
  v7 = this + 5;
  if ( *(this + 6) > (unsigned int)v6 )
    _invalid_parameter_noinfo();
  v8 = *(this + 6);
  if ( v8 > v7[2] )
    _invalid_parameter_noinfo();
  if ( (float *)v8 != v6 )
  {
    v9 = sub_558610(v6, (float *)v7[2], v8);
    sub_557740(v9, v7[2]);
    v7[2] = v9;
  }
  _LN21(v3, 0x10u, 2, (void (__thiscall *)(void *))sub_557B30);
}
