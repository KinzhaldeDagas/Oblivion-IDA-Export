void __thiscall sub_6FEE40(_WORD *this)
{
  int v2; // ecx
  NiAVObject *v3; // eax
  NiAVObject *v4; // edi
  int m_pcName_high; // esi
  NiObjectNET *v6; // eax

  NiTObjectArray_ClearAndRelease(this + 0x2C); /*0x6fee46*/
  v2 = *((_DWORD *)this + 0x14); /*0x6fee4b*/
  if ( v2 ) /*0x6fee50*/
  {
    v3 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x6fee58*/
    v4 = v3; /*0x6fee5a*/
    if ( v3 ) /*0x6fee5e*/
    {
      NiAVObject_UpdateNiAVObject(v3, 0.0, 1); /*0x6fee6b*/
      m_pcName_high = HIWORD(v4[1].members.super.m_pcName); /*0x6fee70*/
      if ( HIWORD(v4[1].members.super.m_pcName) ) /*0x6fee70*/
      {
        do /*0x6feea5*/
        {
          if ( HIWORD(v4[1].members.super.m_pcName) > (unsigned int)--m_pcName_high ) /*0x6fee8c*/
            v6 = *(NiObjectNET **)(v4[1].members.super.super.m_uiRefCount + 4 * m_pcName_high); /*0x6fee98*/
          else
            v6 = 0; /*0x6fee8e*/
          sub_6FED30((char *)this, v6); /*0x6fee9e*/
        }
        while ( m_pcName_high ); /*0x6feea5*/
      }
    }
  }
}
