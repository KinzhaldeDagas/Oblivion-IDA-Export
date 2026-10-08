Concurrency::details::SchedulerBase *__userpurge sub_6988A0@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        Data *a4,
        TESForm::ModReferenceList *a5,
        TESObjectCELL *(__thiscall *a6)(TESChildCELL *this),
        TESForm *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v14; // eax
  double v15; // st7
  int v16; // eax
  int v17; // ebx
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v19; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v21; // eax
  _DWORD *v22; // ebx
  int *sound; // ebx
  int *v24; // eax
  int v25; // ecx
  PlayerCharacter *v26; // eax
  int v28; // [esp+28h] [ebp-4Ch]
  float slot; // [esp+2Ch] [ebp-48h]
  float v30; // [esp+38h] [ebp-3Ch]
  void *v31; // [esp+38h] [ebp-3Ch]
  hkVector4 a2; // [esp+40h] [ebp-34h] BYREF
  char v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  LODWORD(a2.x) = a1; /*0x69891f*/
  sub_69F360( /*0x698923*/
    (TESObjectREFR *)a1,
    st5_0,
    a3,
    a4,
    a5,
    a6,
    a7,
    *(float *)&a8,
    *(float *)&a9,
    *(float *)&a10,
    a11,
    a12,
    a13);
  *(_DWORD *)a1 = &MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}; /*0x69892a*/
  *((_DWORD *)a1 + 6) = &MagicBoltProjectile::`vftable'{for `TESChildCell'}; /*0x698930*/
  v34 = 0; /*0x698937*/
  *((_DWORD *)a1 + 0x1F) = 0; /*0x69893b*/
  *((_DWORD *)a1 + 0x22) = 0; /*0x69893e*/
  *((_DWORD *)a1 + 0x23) = 0; /*0x698944*/
  *((_DWORD *)a1 + 0x24) = 0; /*0x69894a*/
  *((_DWORD *)a1 + 0x25) = 0; /*0x698950*/
  dword_B2DC90 = LODWORD(flt_B37ED0[0xB4]); /*0x69895c*/
  v14 = *((_DWORD *)a1 + 0x1D); /*0x698962*/
  *((_DWORD *)a1 + 0x20) = 0; /*0x698965*/
  slot = *(float *)(v14 + 0x74); /*0x69896e*/
  LOBYTE(v34) = 5; /*0x698978*/
  v15 = slot * flt_B37ED0[6]; /*0x69897d*/
  *((_DWORD *)a1 + 0x21) = 0; /*0x698983*/
  *((_DWORD *)a1 + 0x26) = 0; /*0x698989*/
  *((_DWORD *)a1 + 0x27) = 0; /*0x69898f*/
  *((float *)a1 + 0x17) = v15; /*0x698995*/
  *((float *)a1 + 0x28) = 0.0; /*0x69899a*/
  if ( (PlayerCharacter *)(*(int (__thiscall **)(Data *))(a4->errorState + 0x20))(a4) == reference ) /*0x6989af*/
  {
    if ( PlayerCharacter_GetNodeByPerspective(reference, 1) ) /*0x6989b3*/
    {
      if ( (PlayerCharacter_GetNodeByPerspective(reference, 1)->members.super.m_flags & 1) == 0 ) /*0x6989cd*/
      {
        v30 = flt_B37ED0[0xA0] + *((float *)a1 + 0xD); /*0x6989ed*/
        TESObjectREFR_SetPosition((TESObjectREFR *)a1, *((float *)a1 + 0xB), *((float *)a1 + 0xC), v30); /*0x6989fd*/
      }
    }
  }
  v16 = sub_69FD20(*((_DWORD *)a1 + 0x1D)); /*0x698a06*/
  v17 = v16; /*0x698a0b*/
  if ( v16 ) /*0x698a16*/
    InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x698a1c*/
  LOBYTE(v34) = 6; /*0x698a24*/
  if ( v17 ) /*0x698a29*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x698a2f*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x698a41*/
    v28 = 0; /*0x698a43*/
    v17 = 0; /*0x698a47*/
  }
  sub_696CE0(a1); /*0x698a4b*/
  MobileObject_SetNiNode((MobileObject *)a1, *((NiAVObject **)a1 + 0x22)); /*0x698a59*/
  sub_698410((TESObjectREFR *)a1); /*0x698a60*/
  a2.x = -flt_A7DEB4; /*0x698a6f*/
  a2.y = 0.0; /*0x698a75*/
  a2.z = 0.0; /*0x698a79*/
  a2.w = 0.0; /*0x698a7d*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x698a81*/
  if ( CharProxy ) /*0x698a88*/
  {
    v19 = *((_OWORD **)CharProxy + 2); /*0x698a8a*/
    if ( v19 ) /*0x698a8f*/
      sub_8AC0B0(v19, &a2); /*0x698a98*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x698aa0*/
  TESObjectCELL_AddReference(DwordAtOffset40, (TESObjectREFR *)a1); /*0x698aa7*/
  v21 = *((_DWORD *)a1 + 0x1D); /*0x698aac*/
  *((_DWORD *)a1 + 0x20) = 0; /*0x698aaf*/
  if ( *(_DWORD *)(v21 + 0x84) ) /*0x698ab5*/
  {
    v22 = *((_DWORD **)a1 + 0x27); /*0x698ac7*/
    v31 = *(void **)(*(_DWORD *)(v21 + 0x84) + 0xC); /*0x698ad2*/
    if ( v22 ) /*0x698ad6*/
    {
      sub_6B73E0(v22); /*0x698ada*/
      FormHeapFree((unsigned int)v22); /*0x698ae0*/
      *((_DWORD *)a1 + 0x27) = 0; /*0x698ae8*/
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x698af3*/
    if ( sound ) /*0x698af8*/
    {
      if ( *((_DWORD *)a1 + 0x25) ) /*0x698afa*/
      {
        v24 = OSGLobals_PlaySound(sound, v31, 0x102, 1); /*0x698b10*/
        *((_DWORD *)a1 + 0x27) = v24; /*0x698b17*/
        if ( v24 ) /*0x698b1d*/
        {
          sub_6B7360(v24, *((float *)a1 + 0xB), *((float *)a1 + 0xC), *((float *)a1 + 0xD)); /*0x698b50*/
          sub_6AA980((_DWORD **)sound, **((_DWORD **)a1 + 0x27), *((_DWORD *)a1 + 0x25)); /*0x698b67*/
          sub_6B7190(*((int **)a1 + 0x27), 1); /*0x698b74*/
        }
      }
    }
    v17 = v28; /*0x698b79*/
  }
  sub_69FF10((TESObjectREFR *)a1); /*0x698b7f*/
  v25 = *((_DWORD *)a1 + 0x1A); /*0x698b84*/
  if ( v25 ) /*0x698b89*/
    v26 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x20))(v25); /*0x698b90*/
  else
    v26 = 0; /*0x698b94*/
  if ( v26 == reference ) /*0x698b9c*/
    BSSimpleList_PushFront(&qword_B3BB2C[0x89], (int)a1); /*0x698bb8*/
  else
    MEMORY[0xB3C0D0] = flt_B37ED0[0x90] + MEMORY[0xB3C0D0]; /*0x698baa*/
  v33 = 5; /*0x698bbf*/
  if ( v17 ) /*0x698bc4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x698bca*/
      (**(void (__cdecl ***)(int))v17)(1); /*0x698bdc*/
  }
  return a1; /*0x698bef*/
}
