NiAVObject *__thiscall sub_47B7D0(TESObjectREFR **this, char *a2, NiObjectNET *a3)
{
  NiObjectNET *v5; // esi
  NiObjectNET *v6; // ebx
  _DWORD *v7; // ecx
  const char *v8; // eax
  NiExtraData *ExtraData; // eax
  int *v10; // ecx
  NiAVObject *result; // eax
  int v12; // [esp-4h] [ebp-78h]
  char *m_data; // [esp-4h] [ebp-78h]
  int v14; // [esp+14h] [ebp-60h]
  BSStringT Src; // [esp+18h] [ebp-5Ch] BYREF
  float v16[9]; // [esp+20h] [ebp-54h] BYREF
  float v17[9]; // [esp+44h] [ebp-30h] BYREF
  unsigned int v18; // [esp+70h] [ebp-4h]
  char v19; // [esp+78h] [ebp+4h]

  if ( a2 )
  {
    v5 = a3;
    if ( a3 )
    {
      v14 = dword_B065CC;
      v19 = 0;
      if ( *(this + 0x54) == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        v19 = sub_65D770(TESDataHandler_g_PlayerRef, (int)this);
      v6 = (NiObjectNET *)sub_47B5B0((int **)this, (int)a3, 1, v19, a2);
      if ( !v6 )
      {
        v6 = a3;
        sub_479140(*this, a3, 0, (int)this, 1);
      }
      Src.m_data = 0;
      Src.m_dataLen = 0;
      Src.m_bufLen = 0;
      v7 = *(this + 0x17);
      v18 = 0;
      v8 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0xD4))(v7, v7[3]);
      BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B0658C, v8, v12);
      NiObjectNET_SetName(v6, Src.m_data);
      if ( *((_BYTE *)this + 0x68) )
      {
        qmemcpy(v16, &v6[2], sizeof(v16));
        qmemcpy(&v6[2], sub_4D7C50(*(this + 0x54), v17, v16, 1), 0x24u);
        v5 = a3;
      }
      ExtraData = NiObjectNET_GetExtraData(v5, dword_A7D0EC);
      if ( ExtraData )
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 )
          sub_4E26F0((int)v5);
      }
      if ( *((_BYTE *)this + 0x68) || !(*((int (__thiscall **)(NiObjectNET *))v6->vtbl + 2))(v6) )
        goto LABEL_19;
      if ( *(this + 2 * v14 + 2) )
      {
        v10 = (int *)*(this + 2 * v14 + 2);
      }
      else
      {
        if ( !v6[1].members.super.m_uiRefCount )
        {
LABEL_19:
          m_data = Src.m_data;
          *(this + 0x19) = (TESObjectREFR *)v6;
          v18 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
          goto LABEL_20;
        }
        v10 = (int *)*this;
      }
      (*(void (__thiscall **)(int *, NiObjectNET *, int))(*v10 + 0x84))(v10, v6, 1);
      goto LABEL_19;
    }
  }
LABEL_20:
  result = (NiAVObject *)*(this + 0x54);
  if ( result )
  {
    result = (NiAVObject *)LODWORD(result->members.m_localTransform.rot.data[1][0]);
    if ( result )
    {
      NiAVObject_InitializePropertyState(result);
      return (NiAVObject *)NiNode_UpdateDynamicEffectState((NiNode *)(*(this + 0x54))->member.niNode);
    }
  }
  return result;
}
