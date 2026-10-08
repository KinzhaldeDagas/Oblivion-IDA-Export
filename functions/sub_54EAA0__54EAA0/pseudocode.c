float *__thiscall sub_54EAA0(float *this, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  float v9; // [esp+24h] [ebp+4h]
  float v10; // [esp+24h] [ebp+4h]

  *(this + 1) = NAN; /*0x54eacc*/
  *(this + 2) = 0.0; /*0x54ead3*/
  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable'; /*0x54eada*/
  v4 = 0; /*0x54eae5*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54eaed*/
  if ( v5 != *((_DWORD *)this + 1) ) /*0x54eaf2*/
    *((_DWORD *)this + 1) = v5; /*0x54eaf4*/
  v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2); /*0x54eb00*/
  if ( *(this + 2) != v9 ) /*0x54eb14*/
    *(this + 2) = v9; /*0x54eb16*/
  *(this + 3) = 0.0; /*0x54eb1d*/
  *(this + 4) = 0.0; /*0x54eb20*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2); /*0x54eb2c*/
  sub_54E860((unsigned int *)this, v6, 1); /*0x54eb31*/
  if ( *((_DWORD *)this + 4) ) /*0x54eb36*/
  {
    do /*0x54eb79*/
    {
      v10 = ((double (__thiscall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)a2 + 0x48))(a2, v4); /*0x54eb4a*/
      if ( v4 < *((_DWORD *)this + 4) ) /*0x54eb51*/
      {
        v7 = *((_DWORD *)this + 3); /*0x54eb53*/
        if ( v10 != *(float *)(v7 + 4 * v4) ) /*0x54eb6b*/
          *(float *)(v7 + 4 * v4) = v10; /*0x54eb6d*/
      }
      ++v4; /*0x54eb73*/
    }
    while ( v4 < *((_DWORD *)this + 4) ); /*0x54eb79*/
  }
  return this; /*0x54eb7d*/
}
