_WORD *__thiscall sub_8C3640(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  _WORD *result; // eax
  _WORD *v5; // esi
  _WORD *v6; // ecx
  _WORD *v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x8c3643*/
  sub_8A1DB0(this, a2); /*0x8c364a*/
  result = (_WORD *)((int (__thiscall *)(NiRenderer *, unsigned int **))this->__vftable->ValidateRenderTargetGroup)( /*0x8c365b*/
                      this,
                      &a2);
  v5 = result; /*0x8c365d*/
  if ( result ) /*0x8c3661*/
  {
    v7 = 0; /*0x8c3669*/
    result = (_WORD *)sub_8E84B0((int)v2, (int)&v7); /*0x8c3671*/
    if ( v2[1] >= 2 ) /*0x8c367d*/
    {
      *((_DWORD *)v5 + 2) = v7; /*0x8c36b3*/
    }
    else
    {
      result = v7; /*0x8c367f*/
      *((_DWORD *)v5 + 2) = 0; /*0x8c3683*/
      v6 = result; /*0x8c368f*/
      if ( result[2] ) /*0x8c368a*/
      {
        --result[3]; /*0x8c3693*/
        result += 3; /*0x8c3698*/
        if ( !*result ) /*0x8c369b*/
          return (**(_WORD *(__thiscall ***)(_WORD *, int))v6)(v6, 1); /*0x8c36a7*/
      }
    }
  }
  return result; /*0x8c36a9*/
}
