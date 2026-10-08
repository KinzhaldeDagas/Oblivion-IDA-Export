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

  *(_BYTE *)(a2 + 8) = *this; /*0x93b66a*/
  *(_BYTE *)(a2 + 9) = *(this + 4); /*0x93b670*/
  v2 = *((_WORD *)this + 0x16); /*0x93b678*/
  if ( *(int *)this >= 2 ) /*0x93b67c*/
  {
    v3 = *((_WORD *)this + 0x1E); /*0x93b680*/
    v4 = 0; /*0x93b684*/
    if ( v3 > v2 ) /*0x93b689*/
    {
      v3 = *((_WORD *)this + 0x16); /*0x93b68d*/
      v2 = *((_WORD *)this + 0x1E); /*0x93b68f*/
      v4 = 1; /*0x93b691*/
    }
    if ( *(int *)this > 2 ) /*0x93b699*/
    {
      v5 = *((_WORD *)this + 0x26); /*0x93b69d*/
      if ( v5 > v2 ) /*0x93b6a4*/
      {
        v5 = v2; /*0x93b6a8*/
        v2 = *((_WORD *)this + 0x26); /*0x93b6aa*/
        ++v4; /*0x93b6ac*/
      }
      if ( v4 == 1 ) /*0x93b6b0*/
      {
        v6 = v5; /*0x93b6b2*/
        v5 = v3; /*0x93b6b4*/
        v3 = v6; /*0x93b6b6*/
      }
      *(_WORD *)(a2 + 4) = v5; /*0x93b6b8*/
    }
    *(_WORD *)(a2 + 2) = v3; /*0x93b6bc*/
  }
  *(_WORD *)a2 = v2; /*0x93b6c0*/
  v7 = *((_DWORD *)this + 1); /*0x93b6c3*/
  result = *((_WORD *)this + 0x76); /*0x93b6c9*/
  if ( v7 < 2 ) /*0x93b6d0*/
  {
    *(_WORD *)(a2 + 2 * *(_DWORD *)this) = result; /*0x93b72f*/
  }
  else
  {
    v9 = *((_WORD *)this + 0x7E); /*0x93b6d4*/
    v10 = 0; /*0x93b6db*/
    if ( v9 > result ) /*0x93b6e0*/
    {
      v9 = *((_WORD *)this + 0x76); /*0x93b6e4*/
      result = *((_WORD *)this + 0x7E); /*0x93b6e6*/
      v10 = 1; /*0x93b6e8*/
    }
    if ( v7 > 2 ) /*0x93b6f0*/
    {
      v11 = *((_WORD *)this + 0x86); /*0x93b6f4*/
      if ( v11 > result ) /*0x93b6fe*/
      {
        v11 = result; /*0x93b702*/
        result = *((_WORD *)this + 0x86); /*0x93b704*/
        ++v10; /*0x93b706*/
      }
      if ( v10 == 1 ) /*0x93b70a*/
      {
        v12 = v11; /*0x93b70c*/
        v11 = v9; /*0x93b70e*/
        v9 = v12; /*0x93b710*/
      }
      *(_WORD *)(a2 + 2 * *(_DWORD *)this + 4) = v11; /*0x93b714*/
    }
    *(_WORD *)(a2 + 2 * *(_DWORD *)this + 2) = v9; /*0x93b71b*/
    *(_WORD *)(a2 + 2 * *(_DWORD *)this) = result; /*0x93b722*/
  }
  return result; /*0x93b726*/
}
