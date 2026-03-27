NiSequence *__cdecl sub_6D8730(_DWORD *a1, unsigned int a2, char *a3)
{
  NiObject *v4; // eax
  NiObject *v5; // ebx
  char *vftable; // esi
  NiSequence *v7; // eax
  NiSequence *v8; // edi
  int v9; // esi
  NiObject *v10; // eax
  UInt32 m_uiRefCount; // ebp
  char **v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // eax
  int v16; // eax
  char v17; // al
  UInt32 v18; // esi
  int v19; // edi
  unsigned int i; // [esp+14h] [ebp-18h]
  NiSequence *v21; // [esp+30h] [ebp+4h]

  if ( a1[0x36] >= 0x4010003u )
    return 0;
  if ( a2 >= a1[0x84] )
    return 0;
  v4 = NiRTTI_Cast(&stru_B3DAA8, *(NiObject **)(a1[0x82] + 4 * a2));
  v5 = v4;
  if ( !v4 )
    return 0;
  vftable = a3;
  if ( !a3 )
    vftable = (char *)v4[1].__vftable;
  v7 = (NiSequence *)FormHeapAlloc(0x34u);
  if ( v7 )
  {
    v8 = NiSequence::NiSequence(v7, vftable, 0xCu, 0xC);
    v21 = v8;
  }
  else
  {
    v21 = 0;
    v8 = 0;
  }
  *((_DWORD *)v8 + 0xC) = 0;
  v9 = 0;
  if ( LOWORD(v5[2].members.m_uiRefCount) )
  {
    while ( 1 )
    {
      v10 = NiRTTI_Cast(
              (BSStringT *)dword_B3DA08,
              *((NiObject **)&v5[2].__vftable->super.Destructor + (unsigned __int16)v9));
      if ( v10 )
        break;
      if ( ++v9 >= (unsigned int)LOWORD(v5[2].members.m_uiRefCount) )
        goto LABEL_15;
    }
    sub_6D5AD0(v8, (int)v10);
    sub_6FFBE0(v5, v9);
  }
LABEL_15:
  m_uiRefCount = v5[1].members.m_uiRefCount;
  if ( m_uiRefCount )
    InterlockedIncrement((volatile LONG *)(m_uiRefCount + 4));
  for ( i = 0; i < LOWORD(v5[2].members.m_uiRefCount); ++i )
  {
    v12 = *((char ***)&v5[2].__vftable->super.Destructor + (unsigned __int16)i);
    if ( v12 )
    {
      v13 = (*((int (__thiscall **)(char **))*v12 + 1))(v12);
      if ( v13 )
      {
        while ( (char *)v13 != dword_B3FCC0 )
        {
          v13 = *(_DWORD *)(v13 + 4);
          if ( !v13 )
            goto LABEL_22;
        }
        v14 = 1;
      }
      else
      {
LABEL_22:
        v14 = 0;
      }
      v12 = v14 != 0 ? v12 : 0;
    }
    if ( m_uiRefCount )
    {
      v16 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 4))(m_uiRefCount);
      if ( v16 )
      {
        while ( (char *)v16 != dword_B3CA58 )
        {
          v16 = *(_DWORD *)(v16 + 4);
          if ( !v16 )
            goto LABEL_30;
        }
        v17 = 1;
      }
      else
      {
LABEL_30:
        v17 = 0;
      }
      v15 = v17 != 0 ? m_uiRefCount : 0;
    }
    else
    {
      v15 = 0;
    }
    sub_6D83A0((unsigned __int16 *)v8, v12[3], v15);
    v18 = *(_DWORD *)(m_uiRefCount + 0x34);
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
    v19 = *(_DWORD *)(m_uiRefCount + 0x34);
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
      *(_DWORD *)(m_uiRefCount + 0x34) = 0;
    }
    if ( m_uiRefCount != v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      m_uiRefCount = v18;
      if ( v18 )
        InterlockedIncrement((volatile LONG *)(v18 + 4));
    }
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1);
    }
    v8 = v21;
  }
  sub_6FFC60(v5);
  if ( m_uiRefCount )
  {
    if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
      (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
  }
  return v8;
}
