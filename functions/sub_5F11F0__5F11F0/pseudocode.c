void __userpurge sub_5F11F0(Actor *a1@<ecx>, double a2@<st0>, float *a3, float *a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  float v8; // [esp+0h] [ebp-78h]
  float v9; // [esp+0h] [ebp-78h]
  float v10[9]; // [esp+Ch] [ebp-6Ch] BYREF
  float v11[9]; // [esp+30h] [ebp-48h] BYREF
  float v12[9]; // [esp+54h] [ebp-24h] BYREF

  if ( a1 == (Actor *)TESDataHandler_g_PlayerRef && (v5 = CameraP1) != 0 )
  {
    v6 = *(_DWORD *)(v5 + 0x88);
    v7 = v5 + 0x88;
    *(_DWORD *)a3 = v6;
    a3[1] = *(float *)(v7 + 4);
    a3[2] = *(float *)(v7 + 8);
  }
  else
  {
    *a3 = a1->members.super.super.pos[0];
    a3[1] = a1->members.super.super.pos[1];
    a3[2] = a1->members.super.super.pos[2];
    a3[2] = sub_5E40C0(a1) + a3[2];
  }
  a1->vtbl->super.GetZRotation((MobileObject *)a1);
  v8 = a2;
  NiMatrix33_InitRotationTransform(v10, v8);
  if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
  {
    v9 = sub_4A9720(a1);
    NiMatrix33_InitRotationTransposedTransform___(v11, v9);
    qmemcpy(v10, NiMAtrix33_Multiply(v10, v12, v11), sizeof(v10));
  }
  *a4 = v10[1];
  a4[1] = v10[4];
  a4[2] = v10[7];
  sub_43F350(a4);
}
