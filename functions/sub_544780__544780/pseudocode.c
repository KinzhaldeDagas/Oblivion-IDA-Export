void __thiscall sub_544780(NiNode **this, _BYTE *a2)
{
  char *m_data; // esi
  NiNode **v4; // esi
  NiNode *v5; // eax
  NiNode *v6; // ebp
  NiProperty *NiPropertyByID; // eax
  int v8; // edx
  NiInterpController *v9; // ecx
  NiNode *v10; // esi
  unsigned int i; // edi
  int v12; // ecx
  NiNode *v13; // eax
  NiObject *v14; // eax
  NiObject *v15; // eax
  volatile LONG *v16; // [esp+14h] [ebp-4B8h] BYREF
  BSStringT Src; // [esp+18h] [ebp-4B4h] BYREF
  float v18; // [esp+20h] [ebp-4ACh]
  float v19; // [esp+24h] [ebp-4A8h]
  float v20; // [esp+28h] [ebp-4A4h]
  char v21[520]; // [esp+2Ch] [ebp-4A0h] BYREF
  Ni2DBuffer **v22; // [esp+234h] [ebp-298h]
  int v23; // [esp+23Ch] [ebp-290h]
  int v24; // [esp+4B4h] [ebp-18h]
  int v25; // [esp+4B8h] [ebp-14h]
  int v26; // [esp+4C8h] [ebp-4h]

  if ( a2 && *a2 )
  {
    Src.m_data = 0;
    Src.m_dataLen = 0;
    Src.m_bufLen = 0;
    v26 = 0;
    BSStringT_Static_Format(&Src, "%s%s%s", "Meshes", SubStr, a2);
    NiStream::NiStream((NiStream *)v21);
    *(_DWORD *)v21 = &BSStream::`vftable';
    v25 = 0;
    v24 = 0;
    m_data = Src.m_data;
    LOBYTE(v26) = 1;
    if ( sub_6F9980(v21, Src.m_data, 0)
      && v23 == 1
      && NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FAB0, (NiObject *)*v22) )
    {
      (*(this + 1))->members.super.m_flags |= 0x20u;
      v4 = this + 2;
      (*(this + 1))->vtbl->RemoveObject(*(this + 1), (NiAVObject **)&v16, (NiAVObject *)*(this + 2));
      sub_7016A0((NiD3DVertexShader *)&v16);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 2, *v22);
      NiObjectNET_SetName((NiObjectNET *)*(this + 2), "Stars Meshes");
      (*(this + 2))->members.super.m_flags |= 2u;
      ((void (__thiscall *)(_DWORD, _DWORD, int))(*(this + 1))->vtbl->AddObject)(*(this + 1), *(this + 2), 1);
      if ( NiNode_GetNiPropertyByID(*(this + 2), 9) )
      {
        sub_708560(*v4, &v16, 9);
        sub_7016A0((NiD3DVertexShader *)&v16);
      }
      if ( NiNode_GetNiPropertyByID(*v4, 7) )
      {
        sub_708560(*v4, &v16, 7);
        sub_7016A0((NiD3DVertexShader *)&v16);
      }
      v5 = (NiNode *)sub_405790((int)*v4, 0);
      v6 = v5;
      if ( v5 )
      {
        sub_708560(v5, &v16, 0);
        sub_7016A0((NiD3DVertexShader *)&v16);
        NiPropertyByID = NiNode_GetNiPropertyByID(v6, 2);
        if ( NiPropertyByID )
        {
          NiPropertyByID[2].members.super.m_uiRefCount = dword_B3FA90;
          NiPropertyByID[2].members.m_pcName = (const char *)dword_B3FA94;
          v8 = dword_B3FA98;
          v9 = ++NiPropertyByID[3].members.m_controller;
          NiPropertyByID[2].members.m_controller = (NiInterpController *)v8;
          NiPropertyByID[2].members.m_extraDataList = (NiExtraData **)dword_B3FA90;
          *(_DWORD *)&NiPropertyByID[2].members.m_extraDataListLen = dword_B3FA94;
          NiPropertyByID[3].vtbl = (void **)dword_B3FA98;
          NiPropertyByID[3].members.m_controller = (NiInterpController *)((char *)&v9->vtbl + 1);
        }
      }
      sub_7B8940((NiAVObject *)*(this + 1), 0xA, 0, 1);
      v10 = *v4;
      if ( v10 )
      {
        for ( i = 0; i < v10->members.children.numObjs; ++i )
        {
          if ( v10->members.children.end > i )
          {
            v12 = *((_DWORD *)&v10->members.children.data->vtbl + i);
            if ( v12 )
            {
              v13 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xC))(v12);
              if ( v13 )
              {
                v14 = (NiObject *)NiNode_GetNiPropertyByID(v13, 4);
                v15 = NiRTTI_Cast((BSStringT *)dword_B4335C, v14);
                if ( v15 )
                  v15[0x11].__vftable = (NiObjectVtbl *)5;
              }
            }
          }
        }
        v18 = 1.0;
        v19 = 0.0;
        v20 = 0.0;
        sub_541630((int)v10, 1.0, 0.0, 0.0, 0);
      }
      LOBYTE(v26) = 0;
      BSStream::~BSStream((BSStream *)v21);
      FormHeapFree((unsigned int)Src.m_data);
    }
    else
    {
      PrintError("Cannot load the stars.");
      (*(this + 1))->members.super.m_flags &= ~0x20u;
      LOBYTE(v26) = 0;
      BSStream::~BSStream((BSStream *)v21);
      FormHeapFree((unsigned int)m_data);
    }
  }
  else
  {
    (*(this + 1))->members.super.m_flags &= ~0x20u;
  }
}
