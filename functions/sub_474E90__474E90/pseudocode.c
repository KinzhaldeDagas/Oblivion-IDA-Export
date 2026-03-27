void __userpurge sub_474E90(
        Ni2DBuffer **Dst@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        float a5,
        AnimSequenceSingle *a6)
{
  int v7; // eax
  AnimSequenceSingle *v8; // edi
  Ni2DBuffer *v9; // eax
  _DWORD *v10; // ebp
  int AnimationGroup; // eax
  int v12; // eax
  Ni2DBuffer *v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  float *v16; // esi
  unsigned __int16 v17; // ax
  int v18; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+0h] [ebp-18h]
  size_t v20; // [esp+4h] [ebp-14h]
  size_t v21; // [esp+4h] [ebp-14h]
  size_t v22; // [esp+4h] [ebp-14h]
  size_t v23; // [esp+4h] [ebp-14h]
  size_t v24; // [esp+4h] [ebp-14h]
  float v25; // [esp+4h] [ebp-14h]
  char Dsta; // [esp+13h] [ebp-5h] BYREF
  int v27; // [esp+14h] [ebp-4h] BYREF

  LODWORD(v20) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v20);
  LODWORD(v21) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst + 1, v21);
  LODWORD(v22) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst + 3, v22);
  LODWORD(v23) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dsta, v23);
  if ( Dsta )
  {
    LODWORD(v24) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v27, v24);
    v7 = (int)Dst[2];
    if ( !v7 )
      goto LABEL_13;
    v8 = a6;
    if ( !(unsigned __int8)AnimSequenceSingle::AnimSequenceSingle(a6, v7, 0) )
      goto LABEL_13;
    v9 = *Dst;
    if ( *Dst == (Ni2DBuffer *)2 )
    {
      v10 = *((_DWORD **)v8 + 0x27);
      AnimationGroup = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width);
      if ( !sub_470960(v10, AnimationGroup, &a6) )
        goto LABEL_13;
      *((_BYTE *)v8 + 0xC4) = 1;
      v19 = (int)Dst[3];
      v18 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width);
      v12 = (*(int (__thiscall **)(AnimSequenceSingle *, int))(*(_DWORD *)a6 + 0x10))(a6, v27);
      v13 = (Ni2DBuffer *)sub_474530(v8, v12, *(float *)&v18, v19);
    }
    else
    {
      if ( !v9 )
      {
        *Dst = (Ni2DBuffer *)1;
        goto LABEL_13;
      }
      if ( v9 != (Ni2DBuffer *)3 )
        goto LABEL_13;
      v14 = *((_DWORD **)v8 + 0x27);
      v15 = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)Dst[2]->members.width);
      if ( !sub_470960(v14, v15, &a6) )
        goto LABEL_13;
      v13 = (Ni2DBuffer *)(*(int (__thiscall **)(AnimSequenceSingle *, int))(*(_DWORD *)a6 + 0x10))(a6, v27);
    }
    NiSmartPointer_Set__(Dst + 4, v13);
LABEL_13:
    v16 = (float *)Dst[4];
    if ( v16 )
    {
      __asm { fld     [esp+10h+arg_0] }
      __asm { fstp    dword ptr [esp+14h+var_14]; float }
      sub_49F5F0(v16, v25);
    }
    else
    {
      v17 = sub_49F550();
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, v17);
    }
    return;
  }
  if ( !*Dst && LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x4Cu )
    *Dst = (Ni2DBuffer *)1;
}
