int __thiscall sub_62B5C0(float *this, int a2)
{
  unsigned __int8 (__thiscall *v3)(float *); // edx
  int result; // eax
  int v5; // ebp
  TESTopic *Topic; // eax
  TESTopic *v7; // ebx
  double v8; // st7
  bool v9; // zf
  int v10; // ebp
  _DWORD *v11; // ebx
  UInt32 DwordAtOffset40; // eax
  float *v13; // eax
  int v14; // ebx
  UInt32 v15; // eax
  TESWorldSpace *v16; // [esp+24h] [ebp-18h]
  TESWorldSpace *WorldSpace; // [esp+28h] [ebp-14h]
  float v18; // [esp+28h] [ebp-14h]

  if ( !*((_DWORD *)this + 0xB) /*0x62b628*/
    && ((*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x558))(this, a2), !*((_DWORD *)this + 0xB))
    || (Actor_SetAlerted((_DWORD **)a2, 1),
        v3 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 0xC0),
        *(this + 0x7A) = *(this + 0x7A) + *(float *)&MEMORY[0xB33E90][0xC],
        v3(this))
    && *((_BYTE *)this + 0xD0)
    || flt_B36778[0x46] < (double)*(this + 0x7A) )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x188))(this, a2, 1); /*0x62b637*/
    Actor_SetAlerted((_DWORD **)a2, 0); /*0x62b63d*/
    result = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0xBC))(this, 0); /*0x62b64e*/
    *(this + 0x7A) = 0.0; /*0x62b652*/
    return result; /*0x62b65c*/
  }
  v5 = *((_DWORD *)this + 0xB); /*0x62b661*/
  if ( *(this + 0x67) <= 0.0 && Actor_IsNPC(*((Actor **)this + 0xB)) ) /*0x62b673*/
  {
    Topic = TESTopic::GetTopic(DialogueType_Detection, 3); /*0x62b680*/
    v7 = Topic; /*0x62b685*/
    if ( Topic ) /*0x62b68c*/
    {
      if ( Topic != (TESTopic *)0xFFFFFFD8 && !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&Topic->questInfoEntries) ) /*0x62b695*/
      {
        *(_DWORD *)(a2 + 0xE4) = v5; /*0x62b6a4*/
        (*(void (__thiscall **)(float *, int, TESTopic *, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x1A4))( /*0x62b6b6*/
          this,
          a2,
          v7,
          0,
          0,
          1);
      }
    }
    v8 = flt_A35AA4; /*0x62b6b8*/
  }
  else
  {
    v8 = *(this + 0x67) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62b6c6*/
  }
  v9 = *((_BYTE *)this + 0xD0) == 0; /*0x62b6cc*/
  *(this + 0x67) = v8; /*0x62b6d3*/
  if ( !v9 ) /*0x62b6d9*/
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0xBC))(this, 1); /*0x62b6e7*/
    v10 = *(_DWORD *)this; /*0x62b6f4*/
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB)); /*0x62b6fb*/
    WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)); /*0x62b705*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(*((void **)this + 0xB)); /*0x62b706*/
    result = (*(int (__thiscall **)(float *, int, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v10 + 0x3DC))( /*0x62b72a*/
               this,
               a2,
               *v11,
               v11[1],
               v11[2],
               DwordAtOffset40,
               WorldSpace);
    if ( !(_BYTE)result ) /*0x62b72e*/
      return result; /*0x62b72e*/
    v13 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB)); /*0x62b73b*/
    *(this + 0x35) = *v13; /*0x62b73f*/
    *(this + 0x36) = v13[1]; /*0x62b748*/
    *(this + 0x37) = v13[2]; /*0x62b751*/
  }
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x238))(this, a2, 0x201); /*0x62b767*/
  v14 = *(_DWORD *)this; /*0x62b76f*/
  v18 = flt_A44BA4; /*0x62b775*/
  v16 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)); /*0x62b780*/
  v15 = Shared_GetDwordAtOffset40(*((void **)this + 0xB)); /*0x62b781*/
  return (*(int (__thiscall **)(float *, int, float *, UInt32, TESWorldSpace *, _DWORD))(v14 + 0x414))( /*0x62b658*/
           this,
           a2,
           this + 0x35,
           v15,
           v16,
           LODWORD(v18));
}
