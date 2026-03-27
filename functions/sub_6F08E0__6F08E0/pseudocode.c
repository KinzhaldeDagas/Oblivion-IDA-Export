void __thiscall sub_6F08E0(int *this, unsigned int a2, int a3, int a4, unsigned int a5, int a6, int a7)
{
  unsigned int v8; // ecx
  int v9; // edi
  unsigned int v10; // eax
  float *v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  bool v15; // cc
  _DWORD v16[5]; // [esp+14h] [ebp-14h] BYREF

  v8 = *(this + 1);
  v9 = 0;
  v16[4] = 0;
  if ( v8 )
    v10 = (int)(*(this + 2) - v8) / 0x14;
  else
    v10 = 0;
  if ( v10 < a2 )
  {
    if ( v8 )
      v9 = (int)(*(this + 2) - v8) / 0x14;
    v11 = (float *)*(this + 2);
    if ( v8 > (unsigned int)v11 )
      _invalid_parameter_noinfo();
    sub_6F05C0(this, (int)this, v11, a2 - v9, (float *)&a3);
  }
  if ( v8 )
  {
    v12 = *(this + 2);
    if ( a2 < (int)(v12 - v8) / 0x14 )
    {
      if ( v8 > v12 )
        _invalid_parameter_noinfo();
      v13 = *(this + 1);
      if ( v13 > *(this + 2) )
        _invalid_parameter_noinfo();
      v14 = v13 + 0x14 * a2;
      v15 = v14 <= *(this + 2);
      v16[1] = v13;
      if ( !v15 || v14 < *(this + 1) )
        _invalid_parameter_noinfo();
      sub_559240(this, v16, (int)this, v14, (int)this, v12);
    }
  }
  if ( a5 )
    FormHeapFree(a5);
}
