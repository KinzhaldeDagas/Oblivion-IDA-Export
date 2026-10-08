//
// Comparative verification 2026-10-01: Fallout NiLightDimmerController::Update 82BACF78 follows the same interpolator -> NiLight target cast -> dimmer store/update-counter family. Fallout stores F0 and increments CC; Oblivion verified instructions6E0819/6E081F use DC/B8. Fallout uses NiUpdateData input, whereas this Oblivion update consumes its own float-time ABI. No foreign offsets or prototypes are imported.
char __thiscall sub_6E07A0(int this, float applicationTime)
{
  NiObject *v3; // eax
  int v4; // ecx
  int v5; // ecx
  NiObject *v6; // esi

  LOBYTE(v3) = *(_BYTE *)(this + 8) >> 5; /*0x6e07a6*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e07ab*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e07b3*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e07de*/
    if ( v5 ) /*0x6e07e3*/
    {
      LOBYTE(v3) = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))( /*0x6e07fa*/
                     *(float *)(this + 0x28),
                     *(_DWORD *)(this + 0x30),
                     &applicationTime);
      if ( (_BYTE)v3 ) /*0x6e07fe*/
      {
        v6 = *(NiObject **)(this + 0x30); /*0x6e0800*/
        if ( v6 ) /*0x6e0805*/
        {
          v3 = NiRTTI_Cast((BSStringT *)&stru_B3FD14, v6); /*0x6e080d*/
          *(float *)&v3[0x1B].members.m_uiRefCount = applicationTime; /*0x6e0819*/
          ++v3[0x17].__vftable; /*0x6e081f*/
        }
      }
    }
    return (char)v3; /*0x6e081f*/
  }
  LOBYTE(v3) = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e07c0*/
  if ( !(_BYTE)v3 ) /*0x6e07c7*/
    goto LABEL_6; /*0x6e07c7*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e07c9*/
  if ( v4 ) /*0x6e07ce*/
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e07d8*/
    if ( (_BYTE)v3 ) /*0x6e07dc*/
      goto LABEL_6; /*0x6e07dc*/
  }
  return (char)v3; /*0x6e0826*/
}
