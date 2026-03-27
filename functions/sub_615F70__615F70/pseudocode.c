char __cdecl sub_615F70(float a1, int a2, float *a3)
{
  float v3; // ebp
  char v4; // bl
  float *v6; // esi
  int v7; // eax
  unsigned __int16 AnimGroup; // ax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // edi
  float *v12; // eax
  double v13; // st7
  double v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch] BYREF
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]

  v3 = a1;
  v4 = 0;
  if ( a1 == 0.0 )
    return 0;
  v6 = a3;
  *a3 = Vector3_InitValue_;
  v7 = a2;
  v6[1] = *(&Vector3_InitValue_ + 1);
  v6[2] = dword_B3F9B0;
  AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)LODWORD(v3), v7, 0, 0);
  v9 = AnimGroup;
  if ( sub_51ACC0(AnimGroup) )
  {
    v10 = (*(int (__thiscall **)(TESObjectREFR *))(*(_DWORD *)LODWORD(v3) + 0x164))((TESObjectREFR *)LODWORD(v3));
    if ( sub_470960(*(_DWORD **)(v10 + 0x9C), v9, &a1) )
    {
      v11 = *(_DWORD **)((*(int (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)LODWORD(a1) + 0x10))(
                           LODWORD(a1),
                           0xFFFFFFFF)
                       + 0x68);
      v14 = sub_51AE20((int)v11, 2u);
      a1 = v14 - sub_51AE20((int)v11, 0);
      v12 = (float *)sub_51AAB0(v11, &v16);
      *(float *)&v14 = *v12 * a1;
      *((float *)&v14 + 1) = v12[1] * a1;
      v15 = a1 * v12[2];
      a1 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v3) + 0xEC))(LODWORD(v3));
      v4 = 1;
      v13 = a1;
      v16 = *(float *)&v14 * a1;
      *v6 = v16;
      v17 = *((float *)&v14 + 1) * v13;
      v6[1] = v17;
      v18 = v13 * v15;
      v6[2] = v18;
    }
  }
  return v4;
}
