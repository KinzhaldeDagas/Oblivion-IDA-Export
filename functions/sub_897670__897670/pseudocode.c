Ni2DBuffer *__thiscall sub_897670(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  Ni2DBuffer **v4; // esi
  _DWORD *width; // eax
  _DWORD *v6; // ecx
  int v7; // [esp+Ch] [ebp-8h] BYREF

  result = *(this + 4);
  v4 = this + 4;
  if ( result != a2 )
  {
    if ( result )
    {
      width = (_DWORD *)result->members.width;
      if ( width )
        sub_8BC7B0(width, &v7, (int)dword_BA7B80);
    }
    NiSmartPointer_Set__(v4, a2);
    result = *v4;
    if ( *v4 )
    {
      v6 = (_DWORD *)result->members.width;
      if ( v6 )
        return (Ni2DBuffer *)sub_8BC750(v6, (int)dword_BA7B80, (int)this, 0);
    }
  }
  return result;
}
