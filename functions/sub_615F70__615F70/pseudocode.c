char __cdecl sub_615F70(float a1, unsigned int groupID, float *a3)
{
  float v3; // ebp
  char v4; // bl
  float *v6; // esi
  unsigned int v7; // eax
  unsigned __int16 AnimGroup; // ax
  int v9; // edi
  int v10; // eax
  CAS_TESAnimGroup_Decoded *v11; // edi
  float *MovementVector; // eax
  double v13; // st7
  double RequiredNoteTime; // [esp+8h] [ebp-18h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch] BYREF
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]

  v3 = a1; /*0x615f75*/
  v4 = 0; /*0x615f79*/
  if ( a1 == 0.0 ) /*0x615f7d*/
    return 0; /*0x615f80*/
  v6 = a3; /*0x615f8d*/
  *a3 = g_zeroNiPoint3.x; /*0x615f91*/
  v7 = groupID; /*0x615f99*/
  v6[1] = g_zeroNiPoint3.y; /*0x615fa0*/
  v6[2] = g_zeroNiPoint3.z; /*0x615fae*/
  AnimGroup = Actor_LoadAnimGroup_((Actor *)LODWORD(v3), v7, 0, 0); /*0x615fb1*/
  v9 = AnimGroup; /*0x615fb6*/
  if ( AnimGroup_UsesPowerOrCastNoteTemplate(AnimGroup) ) /*0x615fba*/
  {
    v10 = (*(int (__thiscall **)(TESObjectREFR *))(*(_DWORD *)LODWORD(v3) + 0x164))((TESObjectREFR *)LODWORD(v3)); /*0x615fd5*/
    if ( ActorAnimData_FindAnimMapEntry(*(_DWORD **)(v10 + 0x9C), v9, &a1) ) /*0x615fe5*/
    {
      v11 = *(CAS_TESAnimGroup_Decoded **)((*(int (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)LODWORD(a1) + 0x10))( /*0x615fff*/
                                             LODWORD(a1),
                                             0xFFFFFFFF)
                                         + 0x68);
      RequiredNoteTime = TESAnimGroup_GetRequiredNoteTime(v11, 2); /*0x61600b*/
      a1 = RequiredNoteTime - TESAnimGroup_GetRequiredNoteTime(v11, 0); /*0x616023*/
      MovementVector = (float *)TESAnimGroup_GetMovementVector(v11, &v16); /*0x616027*/
      *(float *)&RequiredNoteTime = *MovementVector * a1; /*0x61603d*/
      *((float *)&RequiredNoteTime + 1) = MovementVector[1] * a1; /*0x616046*/
      v15 = a1 * MovementVector[2]; /*0x616053*/
      a1 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)LODWORD(v3) + 0xEC))(LODWORD(v3)); /*0x616059*/
      v4 = 1; /*0x61605d*/
      v13 = a1; /*0x61606b*/
      v16 = *(float *)&RequiredNoteTime * a1; /*0x61606d*/
      *v6 = v16; /*0x616079*/
      v17 = *((float *)&RequiredNoteTime + 1) * v13; /*0x61607d*/
      v6[1] = v17; /*0x616085*/
      v18 = v13 * v15; /*0x61608c*/
      v6[2] = v18; /*0x616094*/
    }
  }
  return v4; /*0x615f7f*/
}
