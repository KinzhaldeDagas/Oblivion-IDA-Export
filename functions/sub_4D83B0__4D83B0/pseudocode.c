int **__thiscall sub_4D83B0(_DWORD *this, int **a2)
{
  int v3; // eax
  int v4; // ecx
  int ***v5; // ecx
  ExtraDataList *v7; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x188))(this) )
  {
    v3 = *this;
    if ( a2 )
      (*(void (__stdcall **)(int))(v3 + 0x48))(0x2000000);
    else
      (*(void (__stdcall **)(int))(v3 + 0x44))(0x2000000);
    v4 = *(this + 0x16);
    if ( v4 )
    {
      if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) <= 1 )
      {
        v5 = (int ***)*(this + 0x16);
        if ( v5 )
        {
          sub_64FFF0(v5, a2);
          return a2;
        }
      }
    }
  }
  v7 = (ExtraDataList *)(this + 0x11);
  if ( BaseExtraList_GetAnimExtraData_(v7) != (BSExtraDataVtbl *)a2 )
  {
    if ( a2 )
    {
      sub_41E9C0(v7, (BSExtraDataVtbl *)a2);
      return a2;
    }
    sub_41F590(v7);
  }
  return a2;
}
