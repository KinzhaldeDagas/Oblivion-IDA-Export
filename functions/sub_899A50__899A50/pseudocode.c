int *__thiscall sub_899A50(_DWORD *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // eax
  int v7; // eax
  char v9[4]; // [esp+4h] [ebp-8h] BYREF
  int *v10; // [esp+8h] [ebp-4h]

  v3 = *(this + 0x22);
  if ( v3 + *(this + 0x23) )
  {
    v4 = *(this + 0x20);
    v9[0] = 0xD;
    v10 = a2;
    sub_8D8830(v4, (int)v9);
    return 0;
  }
  else
  {
    *(this + 0x22) = v3 + 1;
    if ( !a2[7] )
      a2[7] = (*(int (__thiscall **)(int *))(*a2 + 0xC))(a2);
    a2[2] = (int)this;
    sub_8BC720(a2);
    if ( *(this + 0x2F) == (*(this + 0x30) & 0x3FFFFFFF) )
      sub_8A6EE0((int)(this + 0x2E), 4);
    *(_DWORD *)(*(this + 0x2E) + 4 * (*(this + 0x2F))++) = a2;
    v6 = sub_8CC950((int)this, a2);
    v7 = sub_8DC530(v6, (int)this, (int)a2);
    sub_8DE590(v7, (int)a2);
    if ( (*(this + 0x22))-- == 1 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
    return a2;
  }
}
