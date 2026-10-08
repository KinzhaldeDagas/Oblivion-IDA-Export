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

  v1 = *(this + 5); /*0x72cec0*/
  v2 = *(this + 4); /*0x72cec5*/
  if ( v1 >= v2 ) /*0x72cecc*/
  {
    result = v2; /*0x72cefa*/
    if ( v1 == v2 ) /*0x72cefd*/
    {
      v6 = ++*((_DWORD *)this + 1); /*0x72cf03*/
      v7 = *((_DWORD **)this + 4); /*0x72cf06*/
      if ( v6 >= v7[2] ) /*0x72cf0c*/
        v8 = 0xFFFF; /*0x72cf16*/
      else
        v8 = *(_WORD *)(*v7 + 2 * v6); /*0x72cf10*/
      *(this + 5) = v8; /*0x72cf1b*/
    }
    ++*(_DWORD *)this; /*0x72cf1f*/
    v9 = *((_DWORD **)this + 3); /*0x72cf24*/
    if ( *(_DWORD *)this >= v9[2] ) /*0x72cf2a*/
      *(this + 4) = 0xFFFF; /*0x72cf3d*/
    else
      *(this + 4) = *(_WORD *)(*v9 + 2 * *(_DWORD *)this); /*0x72cf32*/
  }
  else
  {
    ++*((_DWORD *)this + 1); /*0x72cece*/
    v3 = *((_DWORD **)this + 4); /*0x72ced2*/
    result = v1; /*0x72ced5*/
    v5 = *((_DWORD *)this + 1); /*0x72ced8*/
    if ( v5 >= v3[2] ) /*0x72cede*/
      *(this + 5) = 0xFFFF; /*0x72cef1*/
    else
      *(this + 5) = *(_WORD *)(*v3 + 2 * v5); /*0x72cee6*/
  }
  return result; /*0x72ceea*/
}
