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
  NiRTTI *v13; // eax
  char v14; // al
  int v15; // eax
  int v16; // eax
  char v17; // al
  UInt32 v18; // esi
  int v19; // edi
  unsigned int i; // [esp+14h] [ebp-18h]
  NiSequence *v21; // [esp+30h] [ebp+4h]

  if ( a1[0x36] >= 0x4010003u ) /*0x6d8765*/
    return 0; /*0x6d8765*/
  if ( a2 >= a1[0x84] ) /*0x6d8789*/
    return 0; /*0x6d8789*/
  v4 = NiRTTI_Cast((BSStringT *)&stru_B3DAA8, *(NiObject **)(a1[0x82] + 4 * a2)); /*0x6d879a*/
  v5 = v4; /*0x6d879f*/
  if ( !v4 ) /*0x6d87a8*/
    return 0; /*0x6d8767*/
  vftable = a3; /*0x6d87aa*/
  if ( !a3 ) /*0x6d87b0*/
    vftable = (char *)v4[1].__vftable; /*0x6d87b2*/
  v7 = (NiSequence *)FormHeapAlloc(0x34u); /*0x6d87b7*/
  if ( v7 ) /*0x6d87c9*/
  {
    v8 = NiSequence::NiSequence(v7, vftable, 0xCu, 0xC); /*0x6d87d7*/
    v21 = v8; /*0x6d87d9*/
  }
  else
  {
    v21 = 0; /*0x6d87df*/
    v8 = 0; /*0x6d87e3*/
  }
  *((_DWORD *)v8 + 0xC) = 0; /*0x6d87e5*/
  v9 = 0; /*0x6d87ec*/
  if ( LOWORD(v5[2].members.m_uiRefCount) ) /*0x6d87e8*/
  {
    while ( 1 ) /*0x6d880f*/
    {
      v10 = NiRTTI_Cast( /*0x6d880f*/
              (BSStringT *)&stru_B3DA08,
              *((NiObject **)&v5[2].__vftable->super.Destructor + (unsigned __int16)v9));
      if ( v10 ) /*0x6d8819*/
        break; /*0x6d8819*/
      if ( ++v9 >= (unsigned int)LOWORD(v5[2].members.m_uiRefCount) ) /*0x6d8827*/
        goto LABEL_15; /*0x6d8827*/
    }
    sub_6D5AD0(v8, (int)v10); /*0x6d882e*/
    sub_6FFBE0(v5, v9); /*0x6d8836*/
  }
LABEL_15:
  m_uiRefCount = v5[1].members.m_uiRefCount; /*0x6d883b*/
  if ( m_uiRefCount ) /*0x6d8844*/
    InterlockedIncrement((volatile LONG *)(m_uiRefCount + 4)); /*0x6d884a*/
  for ( i = 0; i < LOWORD(v5[2].members.m_uiRefCount); ++i )
  {
    v12 = *((char ***)&v5[2].__vftable->super.Destructor + (unsigned __int16)i); /*0x6d8878*/
    if ( v12 )
    {
      v13 = (NiRTTI *)(*((int (__thiscall **)(char **))*v12 + 1))(v12); /*0x6d8886*/
      if ( v13 ) /*0x6d888a*/
      {
        while ( v13 != &stru_B3FCC0 ) /*0x6d8895*/
        {
          v13 = v13->parent; /*0x6d8897*/
          if ( !v13 ) /*0x6d889c*/
            goto LABEL_22; /*0x6d889c*/
        }
        v14 = 1; /*0x6d88b0*/
      }
      else
      {
LABEL_22:
        v14 = 0; /*0x6d889e*/
      }
      v12 = v14 != 0 ? v12 : 0;
    }
    if ( m_uiRefCount )
    {
      v16 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 4))(m_uiRefCount); /*0x6d88bc*/
      if ( v16 ) /*0x6d88c0*/
      {
        while ( (char *)v16 != unk_B3CA58 ) /*0x6d88c7*/
        {
          v16 = *(_DWORD *)(v16 + 4); /*0x6d88cd*/
          if ( !v16 ) /*0x6d88d2*/
            goto LABEL_30; /*0x6d88d2*/
        }
        v17 = 1; /*0x6d89de*/
      }
      else
      {
LABEL_30:
        v17 = 0; /*0x6d88d4*/
      }
      v15 = v17 != 0 ? m_uiRefCount : 0;
    }
    else
    {
      v15 = 0; /*0x6d88ac*/
    }
    sub_6D83A0((unsigned __int16 *)v8, v12[3], v15); /*0x6d88e3*/
    v18 = *(_DWORD *)(m_uiRefCount + 0x34); /*0x6d88e8*/
    if ( v18 ) /*0x6d88f1*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x6d88f7*/
    v19 = *(_DWORD *)(m_uiRefCount + 0x34); /*0x6d88fd*/
    if ( v19 ) /*0x6d8907*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x6d890d*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x6d8923*/
      *(_DWORD *)(m_uiRefCount + 0x34) = 0; /*0x6d8925*/
    }
    if ( m_uiRefCount != v18 ) /*0x6d892e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x6d8934*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x6d8947*/
      m_uiRefCount = v18; /*0x6d894b*/
      if ( v18 ) /*0x6d8951*/
        InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x6d8957*/
    }
    if ( v18 ) /*0x6d8964*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x6d896a*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x6d897c*/
    }
    v8 = v21; /*0x6d8986*/
  }
  sub_6FFC60(v5); /*0x6d899e*/
  if ( m_uiRefCount ) /*0x6d89ad*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x6d89b3*/
      (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x6d89c6*/
  }
  return v8; /*0x6d8769*/
}
