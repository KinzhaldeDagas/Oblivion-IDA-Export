void __thiscall sub_6FEE40(_WORD *this)
{
  int v2; // ecx
  NiAVObject *v3; // eax
  NiAVObject *v4; // edi
  int m_pcName_high; // esi
  NiObjectNET *v6; // eax

  sub_477EF0(this + 0x2C);
  v2 = *((_DWORD *)this + 0x14);
  if ( v2 )
  {
    v3 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v4 = v3;
    if ( v3 )
    {
      NiAVObject_UpdateNiAVObject(v3, 0.0, 1);
      m_pcName_high = HIWORD(v4[1].members.super.m_pcName);
      if ( HIWORD(v4[1].members.super.m_pcName) )
      {
        do
        {
          if ( HIWORD(v4[1].members.super.m_pcName) > (unsigned int)--m_pcName_high )
            v6 = *(NiObjectNET **)(v4[1].members.super.super.m_uiRefCount + 4 * m_pcName_high);
          else
            v6 = 0;
          sub_6FED30(this, v6);
        }
        while ( m_pcName_high );
      }
    }
  }
}
