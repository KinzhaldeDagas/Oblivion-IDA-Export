void __thiscall Menu_UPdateCamera___(Menu *this, int _88, float a3)
{
  NiPoint3 *v3; // esi
  void *v4; // ebx
  float *v5; // eax
  NiTransform *v6; // eax
  NiTransform *v7; // eax
  PlayerCharacter *v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
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

  if ( !unk_B3B5D8 ) /*0x5c2c16*/
  {
    v3 = (NiPoint3 *)((char *)this + 0x8A4); /*0x5c2c29*/
    PlayerPosition.x = flt_A6BC94; /*0x5c2c2f*/
    PlayerPosition.y = 0.0; /*0x5c2c37*/
    PlayerPosition.z = 0.0; /*0x5c2c3b*/
    v17 = flt_A37CC8; /*0x5c2c4d*/
    *((float *)this + 0x229) = 0.0; /*0x5c2c51*/
    *((float *)this + 0x22A) = v17; /*0x5c2c57*/
    *((float *)this + 0x22B) = 0.0; /*0x5c2c62*/
    v4 = g_WorldSceneReceiverRoot; /*0x5c2c73*/
    v5 = (float *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)( /*0x5c2c79*/
                    reference,
                    0);
    if ( v5 ) /*0x5c2c7d*/
    {
      v16 = v5[8]; /*0x5c2c8c*/
      v18 = v5[9]; /*0x5c2c96*/
      a1 = v5[0xA]; /*0x5c2c9c*/
      v26 = ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.GetZRotation)(reference) /*0x5c2cc2*/
          + (a3 + dbl_A2FC68) * dbl_A31C78;
      NiMatrix33_InitRotationZ(v24.rot.data[1], v26); /*0x5c2cd3*/
      v6 = sub_7101F0((NiTransform *)v24.rot.data[1], (NiTransform *)&a2, v3); /*0x5c2ce2*/
      v27 = v16 + v6->rot.data[0][0]; /*0x5c2ced*/
      v12 = v6->rot.data[0][1] + v18; /*0x5c2cfb*/
      v14 = v6->rot.data[0][2] + a1; /*0x5c2d06*/
      a2 = v27; /*0x5c2d11*/
      v3->x = v27; /*0x5c2d1d*/
      v22 = v12; /*0x5c2d1f*/
      v3->y = v12; /*0x5c2d2b*/
      v23 = v14; /*0x5c2d32*/
      v3->z = v14; /*0x5c2d3f*/
      v7 = sub_7101F0((NiTransform *)v24.rot.data[1], &v24, &PlayerPosition); /*0x5c2d47*/
      v28 = v7->rot.data[0][0] + v16; /*0x5c2d52*/
      v15 = v7->rot.data[0][1] + v18; /*0x5c2d60*/
      v13 = v7->rot.data[0][2] + a1; /*0x5c2d6b*/
      a2 = v28; /*0x5c2d76*/
      PlayerPosition.x = v28; /*0x5c2d82*/
      v8 = reference; /*0x5c2d86*/
      v22 = v15; /*0x5c2d8c*/
      v23 = v13; /*0x5c2d98*/
      PlayerPosition.y = v15; /*0x5c2da0*/
      PlayerPosition.z = v13; /*0x5c2da4*/
      sub_66A5E0(v8); /*0x5c2da8*/
      UpdateCameraCollision(reference, v3, &PlayerPosition, 1u); /*0x5c2dbb*/
      if ( (dword_B3B704[0] & 1) == 0 ) /*0x5c2dc7*/
      {
        dword_B3B704[0] |= 1u; /*0x5c2dc9*/
        v25 = 0; /*0x5c2dd5*/
        sub_70D590((NiCamera *)&unk_B3B5E0); /*0x5c2ddd*/
        atexit(sub_A24E60); /*0x5c2de7*/
        v25 = 0xFFFFFFFF; /*0x5c2def*/
      }
      flt_B3B610[9] = v3->x; /*0x5c2dfb*/
      flt_B3B610[0xA] = v3->y; /*0x5c2e04*/
      flt_B3B610[0xB] = v3->z; /*0x5c2e0f*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)&unk_B3B5E0, 0.0, 1); /*0x5c2e1d*/
      sub_70C340((float *)&unk_B3B5E0, &PlayerPosition.x, &rhs.x); /*0x5c2e31*/
      v24.rot.data[1][0] = flt_B3B610[2]; /*0x5c2e3c*/
      v24.rot.data[1][1] = flt_B3B610[0]; /*0x5c2e46*/
      v24.rot.data[1][2] = flt_B3B610[1]; /*0x5c2e50*/
      v24.rot.data[2][0] = flt_B3B610[5]; /*0x5c2e5a*/
      v24.rot.data[2][1] = flt_B3B610[3]; /*0x5c2e64*/
      v24.rot.data[2][2] = flt_B3B610[4]; /*0x5c2e6e*/
      v24.pos.x = flt_B3B610[8]; /*0x5c2e78*/
      v24.pos.y = flt_B3B610[6]; /*0x5c2e82*/
      v24.pos.z = flt_B3B610[7]; /*0x5c2e8c*/
      if ( *((_WORD *)v4 + 0x5B) ) /*0x5c2e90*/
        v9 = **((_DWORD ***)v4 + 0x2C); /*0x5c2ea4*/
      else
        v9 = 0; /*0x5c2e9a*/
      v9[0x15] = LODWORD(v3->x); /*0x5c2ea8*/
      v9[0x16] = LODWORD(v3->y); /*0x5c2eae*/
      v9[0x17] = LODWORD(v3->z); /*0x5c2eb4*/
      if ( *((_WORD *)v4 + 0x5B) ) /*0x5c2eb7*/
        v10 = **((_DWORD **)v4 + 0x2C); /*0x5c2ecb*/
      else
        v10 = 0; /*0x5c2ec1*/
      qmemcpy((void *)(v10 + 0x30), v24.rot.data[1], 0x24u); /*0x5c2ed9*/
      if ( *((_WORD *)v4 + 0x5B) ) /*0x5c2edb*/
        v11 = **((NiAVObject ***)v4 + 0x2C); /*0x5c2eef*/
      else
        v11 = 0; /*0x5c2ee5*/
      NiAVObject_UpdateNiAVObject(v11, 0.0, 0); /*0x5c2ef9*/
    }
  }
}
