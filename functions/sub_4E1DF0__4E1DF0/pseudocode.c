void *__userpurge sub_4E1DF0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        UInt32 a5)
{
  void *result; // eax
  int v7; // eax
  PlayerCharacter *v8; // ecx
  char *v9; // ebx
  const char *v10; // eax
  NiObjectNET *v11; // ebx
  char *m_data; // ebp
  const char *v13; // [esp-18h] [ebp-4Ch]
  int v14; // [esp-14h] [ebp-48h]
  int v15; // [esp+14h] [ebp-20h]
  int v16; // [esp+18h] [ebp-1Ch]
  BSStringT Src; // [esp+20h] [ebp-14h] BYREF
  unsigned int v18; // [esp+30h] [ebp-4h]

  result = a1->member.niNode;
  if ( result )
  {
    v7 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_5A)(a1);
    v8 = TESDataHandler_g_PlayerRef;
    v9 = (char *)v7;
    v16 = v7;
    v15 = 1;
    if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      goto LABEL_8;
    v15 = 2;
    while ( 1 )
    {
      if ( a1 == (TESObjectREFR *)v8 && v15 == 1 )
      {
        v16 = sub_6600D0(v8, v8->isThirdPerson);
        v9 = (char *)v16;
      }
LABEL_8:
      if ( v9 )
      {
        sub_479C40(v9, st5_0, a4, a2, a5);
      }
      else if ( a5 )
      {
        if ( a5 != 0xFFFFFFD0 )
        {
          v10 = (const char *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)(a5 + 0x30) + 0x14))(a5 + 0x30);
          v11 = (NiObjectNET *)sub_479450(v10, 0xC, a1, 0);
          Src.m_data = 0;
          Src.m_dataLen = 0;
          Src.m_bufLen = 0;
          v14 = *(_DWORD *)(a5 + 0xC);
          v13 = *(const char **)off_B065B8;
          v18 = 0;
          BSStringT_Static_Format(&Src, "%s (%08X)", v13, v14);
          m_data = Src.m_data;
          NiObjectNET_SetName(v11, Src.m_data);
          v18 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
          v9 = (char *)v16;
          Src.m_data = 0;
          Src.m_bufLen = 0;
          Src.m_dataLen = 0;
        }
      }
      if ( a1->vtbl->IsActor(a1) )
        sub_5F8300(a1, (int)v9, 0);
      if ( !--v15 )
        break;
      v8 = TESDataHandler_g_PlayerRef;
    }
    result = (void *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1);
    if ( (_BYTE)result )
    {
      sub_5EA1A0((int)a1, 1, (_DWORD *)a1->member.niNode);
      return (void *)sub_5EE1B0((Actor *)a1, a2);
    }
  }
  return result;
}
