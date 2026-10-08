void __thiscall sub_544780(NiNode **this, _BYTE *a2)
{
  char *m_data; // esi
  int ****v4; // esi
  int ***ChildAtIndex; // eax
  NiNode *v6; // ebp
  NiProperty *NiPropertyByID; // eax
  float z; // edx
  NiInterpController *v9; // ecx
  int ***v10; // esi
  unsigned int i; // edi
  int *v12; // ecx
  NiNode *v13; // eax
  NiObject *v14; // eax
  NiObject *v15; // eax
  void *slot; // [esp+14h] [ebp-4B8h] BYREF
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

  if ( a2 && *a2 ) /*0x5447ce*/
  {
    Src.m_data = 0; /*0x5447d6*/
    Src.m_dataLen = 0; /*0x5447da*/
    Src.m_bufLen = 0; /*0x5447df*/
    v26 = 0; /*0x5447f9*/
    BSStringT_Static_Format(&Src, "%s%s%s", "Meshes", SubStr, a2); /*0x544800*/
    NiStream::NiStream((NiStream *)v21); /*0x54480c*/
    *(_DWORD *)v21 = &BSStream::`vftable'; /*0x544811*/
    v25 = 0; /*0x544819*/
    v24 = 0; /*0x544820*/
    m_data = Src.m_data; /*0x544827*/
    LOBYTE(v26) = 1; /*0x544831*/
    if ( sub_6F9980(v21, Src.m_data, 0) && v23 == 1 && NiRTTI::IsObjectOfRTTIType(&parent, (NiObject *)*v22) ) /*0x544863*/
    {
      (*(this + 1))->members.super.m_flags |= 0x20u; /*0x544876*/
      v4 = (int ****)(this + 2); /*0x544889*/
      (*(this + 1))->vtbl->RemoveObject(*(this + 1), (NiAVObject **)&slot, (NiAVObject *)*(this + 2)); /*0x544892*/
      NiPointerSlot_Release(&slot); /*0x544898*/
      NiSmartPointer_Set__((Ni2DBuffer **)this + 2, *v22); /*0x5448a9*/
      NiObjectNET_SetName((NiObjectNET *)*(this + 2), "Stars Meshes"); /*0x5448b5*/
      (*(this + 2))->members.super.m_flags |= 2u; /*0x5448bc*/
      ((void (__thiscall *)(_DWORD, _DWORD, int))(*(this + 1))->vtbl->AddObject)(*(this + 1), *(this + 2), 1); /*0x5448d1*/
      if ( NiNode_GetNiPropertyByID(*(this + 2), 9) ) /*0x5448d7*/
      {
        sub_708560(*v4, (volatile LONG **)&slot, 9); /*0x5448e9*/
        NiPointerSlot_Release(&slot); /*0x5448f2*/
      }
      if ( NiNode_GetNiPropertyByID((NiNode *)*v4, 7) ) /*0x5448fb*/
      {
        sub_708560(*v4, (volatile LONG **)&slot, 7); /*0x54490d*/
        NiPointerSlot_Release(&slot); /*0x544916*/
      }
      ChildAtIndex = (int ***)NiNode_GetChildAtIndex((NiNode *)*v4, 0); /*0x54491e*/
      v6 = (NiNode *)ChildAtIndex; /*0x544923*/
      if ( ChildAtIndex ) /*0x544927*/
      {
        sub_708560(ChildAtIndex, (volatile LONG **)&slot, 0); /*0x544931*/
        NiPointerSlot_Release(&slot); /*0x54493a*/
        NiPropertyByID = NiNode_GetNiPropertyByID(v6, 2); /*0x544943*/
        if ( NiPropertyByID ) /*0x54494a*/
        {
          NiPropertyByID[2].members.super.m_uiRefCount = LODWORD(stru_B3FA90.x); /*0x544952*/
          NiPropertyByID[2].members.m_pcName = (const char *)LODWORD(stru_B3FA90.y); /*0x54495b*/
          z = stru_B3FA90.z; /*0x54495e*/
          v9 = ++NiPropertyByID[3].members.m_controller; /*0x544968*/
          *(float *)&NiPropertyByID[2].members.m_controller = z; /*0x54496b*/
          NiPropertyByID[2].members.m_extraDataList = (NiExtraData **)LODWORD(stru_B3FA90.x); /*0x544974*/
          *(float *)&NiPropertyByID[2].members.m_extraDataListLen = stru_B3FA90.y; /*0x54497d*/
          NiPropertyByID[3].vtbl = (void **)LODWORD(stru_B3FA90.z); /*0x544989*/
          NiPropertyByID[3].members.m_controller = (NiInterpController *)((char *)&v9->vtbl + 1); /*0x54498c*/
        }
      }
      BSShaderManager_AssignShadersRecursive((NiAVObject *)*(this + 1), 0xAu, 0, 1); /*0x544998*/
      v10 = *v4; /*0x54499d*/
      if ( v10 ) /*0x5449a4*/
      {
        for ( i = 0; i < *((unsigned __int16 *)v10 + 0x5C); ++i ) /*0x5449ac*/
        {
          if ( *((unsigned __int16 *)v10 + 0x5B) > i ) /*0x5449c9*/
          {
            v12 = v10[0x2C][i]; /*0x5449d1*/
            if ( v12 ) /*0x5449d6*/
            {
              v13 = (NiNode *)(*(int (__thiscall **)(int *))(*v12 + 0xC))(v12); /*0x5449dd*/
              if ( v13 ) /*0x5449e1*/
              {
                v14 = (NiObject *)NiNode_GetNiPropertyByID(v13, 4); /*0x5449e7*/
                v15 = NiRTTI_Cast((BSStringT *)&stru_B4335C, v14); /*0x5449f2*/
                if ( v15 ) /*0x5449fc*/
                  v15[0x11].__vftable = (NiObjectVtbl *)5; /*0x5449fe*/
              }
            }
          }
        }
        v18 = 1.0; /*0x544a15*/
        v19 = 0.0; /*0x544a24*/
        v20 = 0.0; /*0x544a2a*/
        sub_541630((int)v10, 1.0, 0.0, 0.0, 0); /*0x544a3d*/
      }
      LOBYTE(v26) = 0; /*0x544a49*/
      BSStream::~BSStream((BSStream *)v21); /*0x544a50*/
      FormHeapFree((unsigned int)Src.m_data); /*0x544a5a*/
    }
    else
    {
      PrintError("Cannot load the stars."); /*0x544a69*/
      (*(this + 1))->members.super.m_flags &= ~0x20u; /*0x544a71*/
      LOBYTE(v26) = 0; /*0x544a7e*/
      BSStream::~BSStream((BSStream *)v21); /*0x544a85*/
      FormHeapFree((unsigned int)m_data); /*0x544a8b*/
    }
  }
  else
  {
    (*(this + 1))->members.super.m_flags &= ~0x20u; /*0x544a98*/
  }
}
