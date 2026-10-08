Ni2DBuffer *__thiscall sub_897670(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  Ni2DBuffer **v4; // esi
  int *width; // eax
  _DWORD *v6; // ecx
  int v7; // [esp+Ch] [ebp-8h] BYREF

  result = *(this + 4); /*0x89767c*/
  v4 = this + 4; /*0x897681*/
  if ( result != a2 ) /*0x897684*/
  {
    if ( result ) /*0x897688*/
    {
      width = (int *)result->members.width; /*0x89768a*/
      if ( width ) /*0x89768f*/
        sub_8BC7B0(width, &v7, (int)&stru_BA7B80); /*0x89769d*/
    }
    NiSmartPointer_Set__(v4, a2); /*0x8976a5*/
    result = *v4; /*0x8976aa*/
    if ( *v4 ) /*0x8976aa*/
    {
      v6 = (_DWORD *)result->members.width; /*0x8976b0*/
      if ( v6 ) /*0x8976b7*/
        return (Ni2DBuffer *)sub_8BC750(v6, (int)&stru_BA7B80, (int)this, 0); /*0x8976c0*/
    }
  }
  return result; /*0x8976c5*/
}
