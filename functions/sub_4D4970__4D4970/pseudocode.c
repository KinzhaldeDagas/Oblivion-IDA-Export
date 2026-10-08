int __thiscall sub_4D4970(ExtraDataList *this, float a2)
{
  BSExtraDataVtbl *v3; // eax
  int v4; // edi
  int i; // esi
  int result; // eax
  int v7; // ecx

  unk_B35C04 = 0;                               // BloodOnDeath decode 2026-05-30: resets global decal-per-frame counter unk_B35C04 at the start of cell/child-cell geometry update. Trail bursts can avoid this cap by spreading projections across update ticks. /*0x4d4974*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 && *((_BYTE *)this + 0x26) == 6 ) /*0x4d4989*/
  {
    v3 = sub_424180(this + 2); /*0x4d498e*/
    if ( v3 ) /*0x4d4995*/
      (*((void (__thiscall **)(BSExtraDataVtbl *))v3->Destructor + 0x20))(v3); /*0x4d49a1*/
  }
  v4 = 0; /*0x4d49a3*/
  for ( i = 8; i < 0x18; i += 4 ) /*0x4d49a5*/
  {
    result = *((_DWORD *)this + 0x15); /*0x4d49b0*/
    if ( result /*0x4d49da*/
      && *(unsigned __int16 *)(result + 0xB6) > (unsigned int)(v4 + 2)
      && (result = *(_DWORD *)(i + *(_DWORD *)(result + 0xB0))) != 0
      && *(_WORD *)(result + 0xB6) > 3u )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(result + 0xB0) + 0xC); /*0x4d49e2*/
    }
    else
    {
      v7 = 0; /*0x4d49e7*/
    }
    if ( v7 ) /*0x4d49eb*/
    {
      if ( (*(_BYTE *)(v7 + 0x18) & 1) == 0 ) /*0x4d49f1*/
        result = sub_7073A0((_DWORD **)v7, a2); /*0x4d49fb*/
    }
    ++v4; /*0x4d4a03*/
  }
  return result; /*0x4d4a0b*/
}
