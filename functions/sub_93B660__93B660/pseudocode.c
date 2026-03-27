unsigned __int16 __thiscall sub_93B660(_BYTE *this, int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // dx
  int v4; // ebx
  unsigned __int16 v5; // si
  unsigned __int16 v6; // bx
  int v7; // ebp
  unsigned __int16 result; // ax
  unsigned __int16 v9; // dx
  int v10; // ebx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // bx

  *(_BYTE *)(a2 + 8) = *this;
  *(_BYTE *)(a2 + 9) = *(this + 4);
  v2 = *((_WORD *)this + 0x16);
  if ( *(int *)this >= 2 )
  {
    v3 = *((_WORD *)this + 0x1E);
    v4 = 0;
    if ( v3 > v2 )
    {
      v3 = *((_WORD *)this + 0x16);
      v2 = *((_WORD *)this + 0x1E);
      v4 = 1;
    }
    if ( *(int *)this > 2 )
    {
      v5 = *((_WORD *)this + 0x26);
      if ( v5 > v2 )
      {
        v5 = v2;
        v2 = *((_WORD *)this + 0x26);
        ++v4;
      }
      if ( v4 == 1 )
      {
        v6 = v5;
        v5 = v3;
        v3 = v6;
      }
      *(_WORD *)(a2 + 4) = v5;
    }
    *(_WORD *)(a2 + 2) = v3;
  }
  *(_WORD *)a2 = v2;
  v7 = *((_DWORD *)this + 1);
  result = *((_WORD *)this + 0x76);
  if ( v7 < 2 )
  {
    *(_WORD *)(a2 + 2 * *(_DWORD *)this) = result;
  }
  else
  {
    v9 = *((_WORD *)this + 0x7E);
    v10 = 0;
    if ( v9 > result )
    {
      v9 = *((_WORD *)this + 0x76);
      result = *((_WORD *)this + 0x7E);
      v10 = 1;
    }
    if ( v7 > 2 )
    {
      v11 = *((_WORD *)this + 0x86);
      if ( v11 > result )
      {
        v11 = result;
        result = *((_WORD *)this + 0x86);
        ++v10;
      }
      if ( v10 == 1 )
      {
        v12 = v11;
        v11 = v9;
        v9 = v12;
      }
      *(_WORD *)(a2 + 2 * *(_DWORD *)this + 4) = v11;
    }
    *(_WORD *)(a2 + 2 * *(_DWORD *)this + 2) = v9;
    *(_WORD *)(a2 + 2 * *(_DWORD *)this) = result;
  }
  return result;
}
