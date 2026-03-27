void __thiscall Menu_UPdateCamera___(Menu *this, int _88, float a3)
{
  NiPoint3 *v3; // esi
  SceneGraph *v4; // ebx
  float *v5; // eax
  NiTransform *v6; // eax
  NiTransform *v7; // eax
  PlayerCharacter *v8; // ecx
  NiAVObjectVtbl *vtbl; // eax
  NiAVObjectVtbl *v10; // eax
  NiAVObject *v11; // ecx
  float v12; // [esp+1Ch] [ebp-68h]
  float v13; // [esp+1Ch] [ebp-68h]
  float v14; // [esp+20h] [ebp-64h]
  float v15; // [esp+20h] [ebp-64h]
  float v16; // [esp+24h] [ebp-60h]
  float v17; // [esp+28h] [ebp-5Ch]
  float v18; // [esp+28h] [ebp-5Ch]
  float a1; // [esp+2Ch] [ebp-58h]
  NiPoint3 PlayerPosition; // [esp+30h] [ebp-54h] BYREF
  float a2; // [esp+3Ch] [ebp-48h] BYREF
  float v22; // [esp+40h] [ebp-44h]
  float v23; // [esp+44h] [ebp-40h]
  NiTransform v24; // [esp+48h] [ebp-3Ch] BYREF
  unsigned int v25; // [esp+80h] [ebp-4h]
  float v26; // [esp+8Ch] [ebp+8h]
  float v27; // [esp+8Ch] [ebp+8h]
  float v28; // [esp+8Ch] [ebp+8h]

  if ( !byte_B3B5D8 )
  {
    v3 = (NiPoint3 *)((char *)this + 0x8A4);
    PlayerPosition.x = flt_A6BC94;
    PlayerPosition.y = 0.0;
    PlayerPosition.z = 0.0;
    v17 = flt_A37CC8;
    *((float *)this + 0x229) = 0.0;
    *((float *)this + 0x22A) = v17;
    *((float *)this + 0x22B) = 0.0;
    v4 = g_worldScenegraph;
    v5 = (float *)((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
                    TESDataHandler_g_PlayerRef,
                    0);
    if ( v5 )
    {
      v16 = v5[8];
      v18 = v5[9];
      a1 = v5[0xA];
      v26 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.GetZRotation)(TESDataHandler_g_PlayerRef)
          + (a3 + dbl_A2FC68) * dbl_A31C78;
      NiMatrix33_InitRotationTransform(v24.rot.data[1], v26);
      v6 = sub_7101F0((NiTransform *)v24.rot.data[1], (NiTransform *)&a2, v3);
      v27 = v16 + v6->rot.data[0][0];
      v12 = v6->rot.data[0][1] + v18;
      v14 = v6->rot.data[0][2] + a1;
      a2 = v27;
      v3->x = v27;
      v22 = v12;
      v3->y = v12;
      v23 = v14;
      v3->z = v14;
      v7 = sub_7101F0((NiTransform *)v24.rot.data[1], &v24, &PlayerPosition);
      v28 = v7->rot.data[0][0] + v16;
      v15 = v7->rot.data[0][1] + v18;
      v13 = v7->rot.data[0][2] + a1;
      a2 = v28;
      PlayerPosition.x = v28;
      v8 = TESDataHandler_g_PlayerRef;
      v22 = v15;
      v23 = v13;
      PlayerPosition.y = v15;
      PlayerPosition.z = v13;
      sub_66A5E0(v8);
      UpdateCameraCollision(TESDataHandler_g_PlayerRef, v3, &PlayerPosition, 1u);
      if ( (dword_B3B704 & 1) == 0 )
      {
        dword_B3B704 |= 1u;
        v25 = 0;
        sub_70D590((NiCamera *)&stru_B3B5E0);
        atexit(sub_A24E60);
        v25 = 0xFFFFFFFF;
      }
      stru_B3B5E0.members.super.m_localTransform.pos.x = v3->x;
      stru_B3B5E0.members.super.m_localTransform.pos.y = v3->y;
      stru_B3B5E0.members.super.m_localTransform.pos.z = v3->z;
      NiAVObject_UpdateNiAVObject((NiAVObject *)&stru_B3B5E0, 0.0, 1);
      sub_70C340((float *)&stru_B3B5E0, &PlayerPosition.x, (float *)&dword_B258E8);
      v24.rot.data[1][0] = stru_B3B5E0.members.super.m_localTransform.rot.data[0][2];
      v24.rot.data[1][1] = stru_B3B5E0.members.super.m_localTransform.rot.data[0][0];
      v24.rot.data[1][2] = stru_B3B5E0.members.super.m_localTransform.rot.data[0][1];
      v24.rot.data[2][0] = stru_B3B5E0.members.super.m_localTransform.rot.data[1][2];
      v24.rot.data[2][1] = stru_B3B5E0.members.super.m_localTransform.rot.data[1][0];
      v24.rot.data[2][2] = stru_B3B5E0.members.super.m_localTransform.rot.data[1][1];
      v24.pos.x = stru_B3B5E0.members.super.m_localTransform.rot.data[2][2];
      v24.pos.y = stru_B3B5E0.members.super.m_localTransform.rot.data[2][0];
      v24.pos.z = stru_B3B5E0.members.super.m_localTransform.rot.data[2][1];
      if ( v4->super.children.end )
        vtbl = v4->super.children.data->vtbl;
      else
        vtbl = 0;
      vtbl->ApplyTransform = (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(v3->x);
      vtbl->GetObjectByName = (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(v3->y);
      vtbl->Unk_17 = (void *(__thiscall *)(NiAVObject *))LODWORD(v3->z);
      if ( v4->super.children.end )
        v10 = v4->super.children.data->vtbl;
      else
        v10 = 0;
      qmemcpy(&v10->super.DumpAttributes, v24.rot.data[1], 0x24u);
      if ( v4->super.children.end )
        v11 = (NiAVObject *)v4->super.children.data->vtbl;
      else
        v11 = 0;
      NiAVObject_UpdateNiAVObject(v11, 0.0, 0);
    }
  }
}
