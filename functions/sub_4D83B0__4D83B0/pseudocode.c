int **__thiscall sub_4D83B0(_DWORD *this, int **a2)
{
  int v3; // eax
  int v4; // ecx
  int ***v5; // ecx
  ExtraDataList *v7; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x188))(this) ) /*0x4d83bc*/
  {
    v3 = *this; /*0x4d83c8*/
    if ( a2 ) /*0x4d83d1*/
      (*(void (__stdcall **)(int))(v3 + 0x48))(0x2000000); /*0x4d83d6*/
    else
      (*(void (__stdcall **)(int))(v3 + 0x44))(0x2000000); /*0x4d83db*/
    v4 = *(this + 0x16); /*0x4d83dd*/
    if ( v4 ) /*0x4d83e2*/
    {
      if ( (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) <= 1 ) /*0x4d83ee*/
      {
        v5 = (int ***)*(this + 0x16); /*0x4d83f0*/
        if ( v5 ) /*0x4d83f5*/
        {
          sub_64FFF0(v5, a2); /*0x4d83f8*/
          return a2; /*0x4d8401*/
        }
      }
    }
  }
  v7 = (ExtraDataList *)(this + 0x11); /*0x4d8404*/
  if ( BaseExtraList_GetAnimExtraData_(v7) != (BSExtraDataVtbl *)a2 ) /*0x4d8410*/
  {
    if ( a2 ) /*0x4d8416*/
    {
      ExtraDataList_SetAnimation(v7, (BSExtraDataVtbl *)a2); /*0x4d8419*/
      return a2; /*0x4d8422*/
    }
    sub_41F590(v7); /*0x4d8425*/
  }
  return a2; /*0x4d83ff*/
}
