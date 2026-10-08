void __thiscall sub_411330(SceneGraph *this)
{
  double v2; // st5
  double v3; // st7
  double v4; // st5
  NiCamera *v5; // eax
  float v6; // [esp+Ch] [ebp-34h]
  float v7; // [esp+10h] [ebp-30h]
  float FarPlane; // [esp+14h] [ebp-2Ch]
  float v9; // [esp+14h] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-2Ch]
  int a2[10]; // [esp+18h] [ebp-28h] BYREF

  if ( byte_B03144 ) /*0x41135e*/
  {
    if ( (unk_B33450 & 1) == 0 ) /*0x41136f*/
    {
      unk_B33450 |= 1u; /*0x411371*/
      unk_B3344C = GetFarPlane(this); /*0x411384*/
      a2[9] = 0xFFFFFFFF; /*0x41138a*/
    }
    if ( 1.0 / (double)dword_B0314C < *(float *)&MEMORY[0xB33E90][0xC] /*0x4113c4*/
      || 1.0 / (double)dword_B03154 > *(float *)&MEMORY[0xB33E90][0xC] )
    {
      FarPlane = GetFarPlane(this); /*0x4113d7*/
      v7 = (float)dword_B0315C; /*0x4113e1*/
      v6 = (1.0 / *(float *)&MEMORY[0xB33E90][0xC] - (double)dword_B0314C) / (double)dword_B03154; /*0x411405*/
      v2 = v6; /*0x411413*/
      if ( v6 <= 1.0 ) /*0x411418*/
      {
        v3 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x41143d*/
        if ( v2 > 0.0 ) /*0x411431*/
          v7 = v7 + v2 * (FarPlane - v7); /*0x41143f*/
      }
      else
      {
        v3 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x41141c*/
        v7 = FarPlane; /*0x411422*/
      }
      v9 = v7 - unk_B3344C; /*0x411459*/
      v4 = v9; /*0x41145d*/
      v10 = fabs(v9); /*0x411465*/
      if ( v10 > 10.0 ) /*0x411478*/
      {
        v5 = *((NiCamera **)g_WorldSceneReceiverRoot + 0x37); /*0x411481*/
        qmemcpy(a2, &v5->members.Frustum, 0x1Cu); /*0x411498*/
        unk_B3344C = v3 * v4 + unk_B3344C; /*0x41149a*/
        *(float *)&a2[5] = unk_B3344C; /*0x4114a6*/
        Camera_SetFrustum(v5, (int)a2); /*0x4114b1*/
      }
    }
  }
}
