NiProperty *__cdecl sub_7E45F0(int a1, int a2)
{
  NiAVObject *v2; // edi
  void *v3; // eax
  NiAVObject *v4; // esi
  const char *m_pcName; // ecx
  int v6; // ebx
  int v7; // ebp
  double v8; // st7
  NiProperty *NiPropertyByID; // eax
  NiProperty *v10; // esi
  NiProperty *v11; // esi
  float v13; // [esp+34h] [ebp+4h]
  float v14; // [esp+34h] [ebp+4h]

  if ( !a1 )
    return 0;
  v2 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( !v2 )
    return 0;
  v3 = (void *)sub_7E4120();
  v4 = (NiAVObject *)sub_700900(v3);
  m_pcName = v4[1].members.super.m_pcName;
  v6 = *((_DWORD *)m_pcName + 4);
  v7 = *((_DWORD *)m_pcName + 5);
  v13 = *(float *)(a2 + 0x2C) + *(float *)(a2 + 0x2C);
  v8 = *((float *)m_pcName + 6);
  if ( v13 >= v8 )
    v8 = v13;
  *((_DWORD *)m_pcName + 3) = *((_DWORD *)m_pcName + 3);
  v14 = v8;
  *((_DWORD *)m_pcName + 4) = v6;
  *((_DWORD *)m_pcName + 5) = v7;
  *((float *)m_pcName + 6) = v14;
  ((void (__thiscall *)(NiAVObject *, NiAVObject *, int))v2->vtbl[1].super.super.Destructor)(v2, v4, 1);
  NiAVObject_UpdateNiAVObject(v2, 0.0, 0);
  sub_7B8940(v4, 0x16u, 0, 1);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v4, 4);
  v10 = NiPropertyByID;
  if ( NiPropertyByID )
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xE);
  v11 = NiPropertyByID != 0 ? v10 : 0;
  if ( v11 )
  {
    sub_7E4120();
    ++dword_B46010;
  }
  return v11;
}
