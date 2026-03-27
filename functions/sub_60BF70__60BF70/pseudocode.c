void __userpurge sub_60BF70(
        ArrowProjectile *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st1>,
        double a4@<st0>,
        AVEntry **a5,
        int a6)
{
  ArrowProjectile_CollisionData *v7; // eax
  NiNode *v8; // ecx
  const char *m_pcName; // ecx
  float y; // ecx
  ArrowProjectile_CollisionData *v11; // eax
  ArrowProjectile_CollisionData *unk05C; // eax
  float v13; // ecx
  __int16 v14; // bx
  __int16 v15; // bp
  NiNode *ninode; // eax
  int v17; // eax
  Atmosphere *v18; // eax
  ArrowProjectile_CollisionData *v19; // eax
  NiNode *v20; // ecx
  float v21; // ebx
  ArrowProjectile_CollisionData *v22; // eax
  char v23; // [esp+10h] [ebp+4h]

  a1->super.super.super.flags &= ~0x200000u;
  if ( a1->super.super.niNode )
  {
    sub_60A230(a1, (TESObjectREFRVtbl *)a1->shooter, 1.0);
    MobilObject_PostLinkModifiedForm((int)a1, a2, 1.0, a3, a4, (int)a5, a6);
    unk05C = a1->unk05C;
    if ( unk05C )
    {
      v13 = unk05C->unk00[0];
      if ( LODWORD(unk05C->unk00[0]) == 1 || v13 == 0.0 )
      {
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x20u )
        {
          v14 = HIWORD(unk05C->unk2C[0]);
          v15 = LOWORD(unk05C->unk2C[0]);
          unk05C->unk2C[0] = 0.0;
          ninode = a1->unk05C->ninode;
          v23 = LODWORD(v13) == 0;
          if ( ninode )
          {
            if ( v14 == (unsigned __int16)sub_480C50(
                                            (_WORD *)LODWORD(ninode->members.super.m_localTransform.rot.data[1][0]),
                                            v23,
                                            v23,
                                            1) )
            {
              if ( v15 != (__int16)0xFFFF )
              {
                v18 = (Atmosphere *)sub_480E90(
                                      (_WORD *)LODWORD(a1->unk05C->ninode->members.super.m_localTransform.rot.data[1][0]),
                                      v15,
                                      v23,
                                      v23,
                                      1);
                if ( v18 )
                  LODWORD(a1->unk05C->unk2C[0]) = sub_452A60(v18);
              }
            }
            else
            {
              v17 = ((int (__thiscall *)(NiNode *, NiInterpController *))a1->unk05C->ninode->vtbl[1].super.super.Unk_0E)(
                      a1->unk05C->ninode,
                      a1->unk05C->ninode->members.super.super.m_controller);
              PrintError("Collision object count has changed on object %s %08", v17);
            }
          }
        }
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u )
        {
          v19 = a1->unk05C;
          v20 = v19->ninode;
          v21 = v19->unk2C[0];
          if ( v20 )
            LODWORD(a1->unk05C->unk2C[0]) = NiObjectNET_LookupObjectByName(
                                              (_DWORD *)LODWORD(v20->members.super.m_localTransform.rot.data[1][0]),
                                              (char *)LODWORD(v19->unk2C[0]));
          else
            v19->unk2C[0] = 0.0;
          MemoryHeap_Free_checked((void *)LODWORD(v21));
        }
        v22 = a1->unk05C;
        if ( !LODWORD(v22->unk2C[0]) )
          LODWORD(v22->unk00[0]) = 3;
      }
    }
    sub_4593D0(SaveLoad_CurrentSavegame, (int)a1);
  }
  else
  {
    v7 = a1->unk05C;
    if ( !v7 )
      goto LABEL_14;
    v8 = v7->ninode;
    if ( v8 )
    {
      m_pcName = v8->members.super.super.m_pcName;
      if ( ((unsigned __int16)m_pcName & 0x800) != 0 && ((unsigned __int8)m_pcName & 0x20) != 0 )
      {
        ((void (__thiscall *)(ArrowProjectile *, int))a1->super.vtbl->super.super.Unk_23)(a1, 1);
        a1->unk05C->unk2C[0] = 0.0;
        return;
      }
    }
    if ( v7->ninode
      && ((unsigned __int8 (__thiscall *)(NiNode *))v7->ninode->vtbl[2].super.GetObjectByName)(v7->ninode)
      && (y = a1->unk05C->ninode->members.super.m_localTransform.pos.y, y != 0.0)
      && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(y) + 8))(COERCE_FLOAT(LODWORD(y))) > 1 )
    {
      ((void (__thiscall *)(ArrowProjectile *, int))a1->super.vtbl->super.super.Unk_23)(a1, 1);
      v11 = a1->unk05C;
      if ( v11 )
        v11->ninode = 0;
      a1->unk05C->unk2C[0] = 0.0;
    }
    else
    {
LABEL_14:
      LOBYTE(a1->unk094) = 1;
      a1->unk098 = (UInt32)a5;
    }
  }
}
