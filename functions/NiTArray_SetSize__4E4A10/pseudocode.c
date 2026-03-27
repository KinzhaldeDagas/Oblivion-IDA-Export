void __thiscall NiTArray_SetSize(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx
  _DWORD *v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( a2 == *(this + 4) )
  {
    NiTArray_SetSize_::Done(a2);
    return;
  }
  v3 = *(this + 5);
  if ( a2 < v3 )
  {
    v4 = a2;
    if ( (unsigned __int16)a2 < v3 )
    {
      do
      {
        v5 = (_DWORD *)(*((_DWORD *)this + 1) + 4 * v4);
        if ( *v5 )
        {
          *v5 = 0;
          --*(this + 6);
        }
        ++v4;
      }
      while ( v4 < *(this + 5) );
    }
    *(this + 5) = a2;
  }
  v6 = *((_DWORD *)this + 1);
  *(this + 4) = a2;
  if ( !a2 )
  {
    *((_DWORD *)this + 1) = 0;
LABEL_15:
    FormHeapFree(v6);
    NiTArray_SetSize_::Done(a2);
    return;
  }
  v7 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2);
  v8 = 0;
  v9 = *(this + 5) == 0;
  *((_DWORD *)this + 1) = v7;
  if ( !v9 )
  {
    do
    {
      v10 = 4 * (unsigned __int16)v8++;
      *(_DWORD *)(v10 + *((_DWORD *)this + 1)) = *(_DWORD *)(v10 + v6);
    }
    while ( (unsigned __int16)v8 < *(this + 5) );
  }
  v11 = *(this + 5);
  if ( (unsigned __int16)v11 >= *(this + 4) )
    goto LABEL_15;
  do
  {
    v12 = (unsigned __int16)v11++;
    *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v12) = 0;
  }
  while ( (unsigned __int16)v11 < *(this + 4) );
  FormHeapFree(v6);
}
