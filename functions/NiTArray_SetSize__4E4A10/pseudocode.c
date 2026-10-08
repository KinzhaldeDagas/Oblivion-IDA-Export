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

  if ( a2 == *(this + 4) ) /*0x4e4a1d*/
  {
    NiTArray_SetSize_::Done(a2); /*0x4e4a1d*/
    return; /*0x4e4a1d*/
  }
  v3 = *(this + 5); /*0x4e4a23*/
  if ( a2 < v3 ) /*0x4e4a2e*/
  {
    v4 = a2; /*0x4e4a33*/
    if ( (unsigned __int16)a2 < v3 ) /*0x4e4a36*/
    {
      do /*0x4e4a60*/
      {
        v5 = (_DWORD *)(*((_DWORD *)this + 1) + 4 * v4); /*0x4e4a4a*/
        if ( *v5 ) /*0x4e4a46*/
        {
          *v5 = 0; /*0x4e4a4f*/
          --*(this + 6); /*0x4e4a55*/
        }
        ++v4; /*0x4e4a59*/
      }
      while ( v4 < *(this + 5) ); /*0x4e4a60*/
    }
    *(this + 5) = a2; /*0x4e4a62*/
  }
  v6 = *((_DWORD *)this + 1); /*0x4e4a68*/
  *(this + 4) = a2; /*0x4e4a6b*/
  if ( !a2 ) /*0x4e4a6f*/
  {
    *((_DWORD *)this + 1) = 0; /*0x4e4ae5*/
LABEL_15:
    FormHeapFree(v6); /*0x4e4aec*/
    NiTArray_SetSize_::Done(a2); /*0x4e4af6*/
    return; /*0x4e4af6*/
  }
  v7 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2);
  v8 = 0; /*0x4e4a8a*/
  v9 = *(this + 5) == 0; /*0x4e4a8f*/
  *((_DWORD *)this + 1) = v7; /*0x4e4a93*/
  if ( !v9 ) /*0x4e4a96*/
  {
    do /*0x4e4aaf*/
    {
      v10 = 4 * (unsigned __int16)v8++; /*0x4e4aa0*/
      *(_DWORD *)(v10 + *((_DWORD *)this + 1)) = *(_DWORD *)(v10 + v6); /*0x4e4aa8*/
    }
    while ( (unsigned __int16)v8 < *(this + 5) ); /*0x4e4aaf*/
  }
  v11 = *(this + 5); /*0x4e4ab1*/
  if ( (unsigned __int16)v11 >= *(this + 4) ) /*0x4e4ab9*/
    goto LABEL_15; /*0x4e4ab9*/
  do /*0x4e4ad4*/
  {
    v12 = (unsigned __int16)v11++; /*0x4e4ac3*/
    *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v12) = 0; /*0x4e4ac9*/
  }
  while ( (unsigned __int16)v11 < *(this + 4) ); /*0x4e4ad4*/
  FormHeapFree(v6); /*0x4e4ad7*/
}
