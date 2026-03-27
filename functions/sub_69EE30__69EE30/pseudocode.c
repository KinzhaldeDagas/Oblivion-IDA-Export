__int16 __thiscall sub_69EE30(NiObject **this, int a2, int Src)
{
  _DWORD *v4; // edi
  NiObject *m_uiRefCount; // esi
  NiObject *v7; // ebx
  __int16 result; // ax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  size_t v12; // [esp+0h] [ebp-14h]
  float v13; // [esp+18h] [ebp+4h]

  v4 = (_DWORD *)Src;
  sub_69DBB0((int)this, a2, Src);
  m_uiRefCount = *(this + 0xC);
  v7 = 0;
  if ( m_uiRefCount )
  {
    m_uiRefCount = (NiObject *)m_uiRefCount[1].members.m_uiRefCount;
    v7 = NiRTTI_Cast(&stru_B3CAC0, m_uiRefCount);
  }
  Src = 0;
  if ( v7 )
    Src = (unsigned __int16)sub_4DA760((int)v7);
  LODWORD(v12) = 2;
  result = (unsigned __int16)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v12);
  if ( (_WORD)Src )
  {
    v13 = flt_A30634;
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 0x190))(v4) )
      {
        if ( a2 )
        {
          v4 = (_DWORD *)v4[0x16];
          v10 = OblivionDynamicCast(
                  v4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                  &MiddleHighProcess `RTTI Type Descriptor',
                  0);
          if ( v10 )
          {
            v11 = v10[0x5F];
            if ( v11 )
              v13 = *(float *)(v11 + 0x94);
          }
        }
      }
    }
    return sub_4DA7F0(v9, (int)v4, (int)m_uiRefCount, (int)v7, v13);
  }
  return result;
}
