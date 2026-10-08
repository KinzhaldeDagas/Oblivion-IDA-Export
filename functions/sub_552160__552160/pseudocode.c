_DWORD *__thiscall sub_552160(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const void *v7; // ebx

  *this = *a2; /*0x552191*/
  v3 = this + 2; /*0x552196*/
  *(this + 1) = a2[1]; /*0x55219b*/
  *(this + 3) = 0; /*0x55219e*/
  *(this + 4) = 0; /*0x5521a1*/
  *(this + 5) = 0; /*0x5521a4*/
  FaceGenFloatVector_ResizeFill( /*0x5521ba*/
    (OB_stVector4_010201A0 *)(this + 2),
    (int)this,
    *(this + 1) * *this,
    COERCE_UNSIGNED_INT(0.0));
  v4 = v3[1]; /*0x5521bf*/
  if ( v4 ) /*0x5521c4*/
  {
    if ( (v3[2] - v4) >> 2 ) /*0x5521cb*/
    {
      v5 = a2[3]; /*0x5521d0*/
      if ( v5 ) /*0x5521d5*/
      {
        if ( (a2[4] - v5) >> 2 ) /*0x5521dc*/
        {
          v6 = v3[1]; /*0x5521f4*/
          v7 = (const void *)a2[3]; /*0x5521f9*/
          if ( !v6 || !((v3[2] - v6) >> 2) ) /*0x552203*/
            _invalid_parameter_noinfo(); /*0x552208*/
          memcpy((void *)v3[1], v7, 4 * *(this + 1) * *this); /*0x55221d*/
        }
      }
    }
  }
  return this; /*0x552227*/
}
