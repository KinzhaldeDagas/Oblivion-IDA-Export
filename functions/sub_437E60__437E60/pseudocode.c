unsigned int *__thiscall sub_437E60(_DWORD **this)
{
  float *v2; // eax
  unsigned int *result; // eax
  unsigned int *v4; // edi
  NiAVObject *v5; // esi
  const char *m_pcName; // eax
  NiProperty *NiPropertyByID; // eax

  v2 = (float *)(*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8));
  result = (unsigned int *)sub_4BA780(v2, 0);
  v4 = result;
  if ( result )
  {
    if ( *((_WORD *)result + 0x5B) )
      v5 = *(NiAVObject **)result[0x2C];
    else
      v5 = 0;
    m_pcName = v5[1].members.super.m_pcName;
    *((_WORD *)m_pcName + 0x17) = *((_WORD *)m_pcName + 0x17) & 0xFFF | 0x4000;
    *((_BYTE *)m_pcName + 0x30) = 0x11;
    *((_BYTE *)m_pcName + 0x31) = 0x1F;
    sub_7B8940(v5, 1, 1, 1);
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v5, 4);
    if ( NiPropertyByID )
    {
      NiPropertyByID[1].members.super.m_uiRefCount |= (unsigned int)&loc_402000;
      NiPropertyByID[1].members.m_controller = 0;
    }
    return ((unsigned int *(__thiscall *)(_DWORD **, unsigned int *))(*this)[0xD])(this, v4);
  }
  return result;
}
