char __thiscall sub_6E07A0(int this, float a2)
{
  NiObject *v3; // eax
  int v4; // ecx
  int v5; // ecx
  NiObject *v6; // esi

  LOBYTE(v3) = *(_BYTE *)(this + 8) >> 5;
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C);
    if ( v5 )
    {
      LOBYTE(v3) = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))(
                     *(float *)(this + 0x28),
                     *(_DWORD *)(this + 0x30),
                     &a2);
      if ( (_BYTE)v3 )
      {
        v6 = *(NiObject **)(this + 0x30);
        if ( v6 )
        {
          v3 = NiRTTI_Cast((BSStringT *)dword_B3FD14, v6);
          *(float *)&v3[0x1B].members.m_uiRefCount = a2;
          ++v3[0x17].__vftable;
        }
      }
    }
    return (char)v3;
  }
  LOBYTE(v3) = sub_6C36B0((float *)this, a2);
  if ( !(_BYTE)v3 )
    goto LABEL_6;
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4);
    if ( (_BYTE)v3 )
      goto LABEL_6;
  }
  return (char)v3;
}
