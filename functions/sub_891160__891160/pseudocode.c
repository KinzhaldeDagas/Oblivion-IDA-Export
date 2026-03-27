int __thiscall sub_891160(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // ebx
  int m_uiRefCount_high; // esi
  int v10; // edi
  char *v11; // eax

  result = 0;
  if ( (*(this + 0x7D) & 0x8000) != 0 )
  {
    v3 = (_DWORD *)*(this + 0xD9);
    if ( v3
      && (v4 = sub_89F6B0(v3, 0)) != 0
      && (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4)) != 0
      && (*(_WORD *)(v5 + 0xB6) ? (v6 = **(NiObject ***)(v5 + 0xB0)) : (v6 = 0),
          (v7 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v6), (v8 = v7) != 0)
       && (m_uiRefCount_high = HIWORD(v7[0x16].members.m_uiRefCount), HIWORD(v7[0x16].members.m_uiRefCount))) )
    {
      while ( 1 )
      {
        if ( HIWORD(v8[0x16].members.m_uiRefCount) > (unsigned int)--m_uiRefCount_high )
        {
          v10 = *((_DWORD *)&v8[0x16].__vftable->super.Destructor + m_uiRefCount_high);
          if ( v10 )
          {
            v11 = *(char **)(v10 + 8);
            if ( v11 )
            {
              if ( !_strcmp(v11, "bhkColDisp") )
                return v10;
            }
          }
        }
        if ( !m_uiRefCount_high )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      *(this + 0x7D) &= ~0x8000u;
      return 0;
    }
  }
  return result;
}
