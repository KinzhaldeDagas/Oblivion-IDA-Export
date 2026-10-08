// Controller radius helper. Returns shape radius from proxy+0x374 object when available, else proxy+0x3A0/E8 default. MobileObject::Move converts this from Havok to world with 0xA372E0.
double __thiscall bhkCharacterController_GetRadius(float *this)
{
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  int v5; // eax
  int v6; // eax

  v2 = *((_DWORD *)this + 0xDD); /*0x8913c5*/
  if ( !v2 ) /*0x8913cd*/
    return *(this + 0xE8); /*0x8913cd*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*((_DWORD *)this + 0xDD)); /*0x8913d6*/
  if ( v3 ) /*0x8913da*/
  {
    while ( v3 != &stru_BA7FD8 ) /*0x8913e5*/
    {
      v3 = v3->parent; /*0x8913e7*/
      if ( !v3 ) /*0x8913ec*/
        goto LABEL_5; /*0x8913ec*/
    }
    v4 = 1; /*0x891413*/
  }
  else
  {
LABEL_5:
    v4 = 0; /*0x8913ee*/
  }
  v5 = v4 != 0 ? v2 : 0;
  if ( !v5 ) /*0x8913f6*/
    return *(this + 0xE8); /*0x89143a*/
  v6 = *(_DWORD *)(v5 + 8); /*0x8913f8*/
  if ( v6 ) /*0x8913fd*/
    return *(float *)(v6 + 0xC); /*0x891403*/
  else
    return flt_B2EFC4; /*0x89141e*/
}
