_DWORD *__thiscall Tile_GetPropertyByCode_(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  __int16 v4; // si
  char v5; // bl
  int v6; // edi
  _DWORD *result; // eax
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // esi

  v3 = (_DWORD *)*(this + 6);
  v4 = (__int16)a2;
  v5 = 0;
  v6 = (int)v3;
  if ( v3 )
  {
    while ( 1 )
    {
      result = (_DWORD *)v3[2];
      v6 = (int)v3;
      v3 = (_DWORD *)*v3;
      if ( result )
      {
        v8 = *((unsigned __int16 *)result + 0xC);
        if ( (_DWORD *)v8 == a2 )
          return result;
        if ( v8 > (int)a2 )
          break;
      }
      if ( !v3 )
        goto LABEL_8;
    }
    v5 = 1;
  }
LABEL_8:
  v9 = (_DWORD *)FormHeapAlloc(0x1Cu);
  a2 = v9;
  if ( v9 )
    v10 = sub_589DF0(v9, v4);
  else
    v10 = 0;
  a2 = v10;
  if ( v10 )
  {
    *v10 = this;
    if ( v5 && v6 )
      sub_589640(this + 5, v6, &a2);
    else
      sub_5B1E20((BSTextureManager *)(this + 5), (void **)&a2);
  }
  return v10;
}
