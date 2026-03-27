int __thiscall sub_72CEC0(_WORD *this)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v2; // si
  _DWORD *v3; // esi
  int result; // eax
  unsigned int v5; // edx
  unsigned int v6; // edx
  _DWORD *v7; // esi
  __int16 v8; // dx
  _DWORD *v9; // esi

  v1 = *(this + 5);
  v2 = *(this + 4);
  if ( v1 >= v2 )
  {
    result = v2;
    if ( v1 == v2 )
    {
      v6 = ++*((_DWORD *)this + 1);
      v7 = *((_DWORD **)this + 4);
      if ( v6 >= v7[2] )
        v8 = 0xFFFF;
      else
        v8 = *(_WORD *)(*v7 + 2 * v6);
      *(this + 5) = v8;
    }
    ++*(_DWORD *)this;
    v9 = *((_DWORD **)this + 3);
    if ( *(_DWORD *)this >= v9[2] )
      *(this + 4) = 0xFFFF;
    else
      *(this + 4) = *(_WORD *)(*v9 + 2 * *(_DWORD *)this);
  }
  else
  {
    ++*((_DWORD *)this + 1);
    v3 = *((_DWORD **)this + 4);
    result = v1;
    v5 = *((_DWORD *)this + 1);
    if ( v5 >= v3[2] )
      *(this + 5) = 0xFFFF;
    else
      *(this + 5) = *(_WORD *)(*v3 + 2 * v5);
  }
  return result;
}
