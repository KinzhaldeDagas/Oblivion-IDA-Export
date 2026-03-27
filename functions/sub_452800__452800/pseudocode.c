unsigned int __thiscall sub_452800(unsigned int *this, unsigned int *a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // ecx

  result = *a2;
  *a3 = *(_BYTE *)(*a2 + 4);
  *a4 = *(_DWORD *)(result + 8);
  if ( *(_DWORD *)result )
  {
    *a2 = *(_DWORD *)result;
  }
  else
  {
    v6 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 4))(this, *(unsigned __int8 *)(result + 4));
    v7 = *(this + 1);
    result = v6 + 1;
    if ( result >= v7 )
    {
LABEL_7:
      *a2 = 0;
    }
    else
    {
      v8 = (unsigned int *)(*(this + 2) + 4 * result);
      while ( !*v8 )
      {
        ++result;
        ++v8;
        if ( result >= v7 )
          goto LABEL_7;
      }
      *a2 = *v8;
    }
  }
  return result;
}
