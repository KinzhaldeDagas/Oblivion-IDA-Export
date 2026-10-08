// Associate receiver geometry only after BSShaderProperty RTTI, NiPropertyState+0x18 property-kind-4 lookup, and shader subtype 1..10. Existing links reorder; new links are inserted into both light-local and property-side ownership.
void __thiscall ShadowSceneLight_AssociateReceiverGeometry(ShadowSceneLight_DecodedLayout *self, NiGeometry *geometry)
{
  char v3; // bl
  NiGeometry *v4; // esi
  bool v5; // zf
  NiPropertyState *v6; // edi
  DWORD CurrentThreadId; // eax
  _DWORD *v8; // edi
  NiGeometry *v9; // ebx
  MEF_RefListNode32 *receiverCursor_144; // eax
  MEF_RefListNode32 *v11; // edx
  float y; // edx
  float z; // eax
  float Radius; // ecx
  NiPropertyState *output; // [esp+14h] [ebp-20h] BYREF
  float v16[4]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  v3 = 0; /*0x7d57b9*/
  output = 0; /*0x7d57bb*/
  v4 = geometry; /*0x7d57bf*/
  if ( !NiGeometry_GetBSShaderProperty((int)geometry) /*0x7d57e9*/
    || (v5 = *NiGeometry_GetPropertyState(v4, &output) == 0, v3 = 1, LOBYTE(geometry) = 0, v5) )
  {
    LOBYTE(geometry) = 1; /*0x7d57eb*/
  }
  if ( (v3 & 1) != 0 ) /*0x7d57f3*/
  {
    v6 = output; /*0x7d57f5*/
    if ( output ) /*0x7d57fb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)output + 1) ) /*0x7d5801*/
      {
        if ( v6 ) /*0x7d580d*/
          (**(void (__thiscall ***)(NiPropertyState *, int))v6)(v6, 1); /*0x7d5817*/
      }
    }
  }
  if ( !(_BYTE)geometry ) /*0x7d581e*/
  {
    EnterCriticalSection(&unk_B3FA00); /*0x7d5829*/
    CurrentThreadId = GetCurrentThreadId(); /*0x7d582f*/
    ++unk_B3FA7C; /*0x7d5835*/
    unk_B3FA78 = CurrentThreadId; /*0x7d5843*/
    v8 = *((_DWORD **)*NiGeometry_GetPropertyState(v4, (NiPropertyState **)&geometry) + 6); /*0x7d584f*/
    if ( geometry ) /*0x7d5858*/
    {
      v9 = geometry; /*0x7d585a*/
      if ( !InterlockedDecrement((volatile LONG *)&geometry->member) ) /*0x7d5860*/
        v9->__vftable->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x7d5876*/
    }
    v5 = unk_B3FA7C-- == 1; /*0x7d5878*/
    if ( v5 ) /*0x7d587f*/
      unk_B3FA78 = 0; /*0x7d5881*/
    LeaveCriticalSection(&unk_B3FA00); /*0x7d5890*/
    if ( v8 ) /*0x7d5898*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) >= 1 /*0x7d58bc*/
        && (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) <= 0xA )
      {
        receiverCursor_144 = self->receiverCursor_144; /*0x7d58c8*/
        if ( receiverCursor_144 ) /*0x7d58cc*/
        {
          while ( 1 ) /*0x7d58d0*/
          {
            v5 = receiverCursor_144->payload == v4; /*0x7d58d0*/
            v11 = receiverCursor_144; /*0x7d58d6*/
            receiverCursor_144 = receiverCursor_144->next; /*0x7d58d8*/
            if ( v5 ) /*0x7d58da*/
              break; /*0x7d58da*/
            if ( !receiverCursor_144 ) /*0x7d58e2*/
              goto LABEL_21; /*0x7d58e2*/
          }
          NiTPointerList_MoveNodeBefore((MEF_RefList32 *)&self->objectListVtable_E4, v11, self->receiverCursor_144); /*0x7d597c*/
          if ( self->trackBackingPosition_104 ) /*0x7d5981*/
          {
            if ( !self->perSourceProjectorMode_F4 ) /*0x7d598a*/
            {
              y = v4->member.super.m_kWorldBound.Center.y; /*0x7d5996*/
              z = v4->member.super.m_kWorldBound.Center.z; /*0x7d5999*/
              v16[0] = v4->member.super.m_kWorldBound.Center.x; /*0x7d599c*/
              Radius = v4->member.super.m_kWorldBound.Radius; /*0x7d59a0*/
              v16[1] = y; /*0x7d59a3*/
              v16[3] = Radius; /*0x7d59ab*/
              v16[2] = z; /*0x7d59b2*/
              BSShaderProperty_ReorderShadowLightsForReceiverBound(v8, v16); /*0x7d59b6*/
            }
          }
        }
        else
        {                                       // passInfo bit 0x1000 vetoes a new receiver association for non-TallGrass shader properties; subtype 4 is the TallGrass exception.
LABEL_21:
          if ( (v8[7] & 0x1000) == 0 || (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) == 4 ) /*0x7d5902*/
          {
            BSShaderProperty_AddShadowLight(v8, self, (int)&v4->member.super.m_kWorldBound); /*0x7d590b*/
            geometry = v4; /*0x7d5912*/
            if ( v4 ) /*0x7d5916*/
              InterlockedIncrement((volatile LONG *)&v4->member); /*0x7d591c*/
            v17 = 0; /*0x7d592d*/
            NiTRefPointerList__AddHead((MEF_RefList32 *)&self->objectListVtable_E4, (void **)&geometry);// Insert the accepted exact NiGeometry leaf into this ShadowSceneLight's refcounted object/receiver list. /*0x7d5935*/
            v17 = 0xFFFFFFFF; /*0x7d593c*/
            if ( v4 ) /*0x7d5944*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v4->member) ) /*0x7d594a*/
                v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x7d595c*/
            }
          }
        }
      }
    }
  }
}
