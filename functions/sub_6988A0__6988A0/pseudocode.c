Concurrency::details::SchedulerBase *__userpurge sub_6988A0@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        void *a4,
        TESForm::ModReferenceList *a5,
        void *a6,
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
  TESObjectCELL *ParentCell; // eax
  int v21; // eax
  _DWORD *v22; // ebx
  _DWORD **sound; // ebx
  int *v24; // eax
  int v25; // ecx
  PlayerCharacter *v26; // eax
  int v28; // [esp+28h] [ebp-4Ch]
  float v29; // [esp+2Ch] [ebp-48h]
  float v30; // [esp+38h] [ebp-3Ch]
  int v31; // [esp+38h] [ebp-3Ch]
  hkVector4 a2; // [esp+40h] [ebp-34h] BYREF
  char v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  LODWORD(a2.x) = a1;
  sub_69F360((TESObjectREFR *)a1, st5_0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  *(_DWORD *)a1 = &MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'};
  *((_DWORD *)a1 + 6) = &MagicBoltProjectile::`vftable'{for `TESChildCell'};
  v34 = 0;
  *((_DWORD *)a1 + 0x1F) = 0;
  *((_DWORD *)a1 + 0x22) = 0;
  *((_DWORD *)a1 + 0x23) = 0;
  *((_DWORD *)a1 + 0x24) = 0;
  *((_DWORD *)a1 + 0x25) = 0;
  dword_B2DC90 = iShockSubSegments;
  v14 = *((_DWORD *)a1 + 0x1D);
  *((_DWORD *)a1 + 0x20) = 0;
  v29 = *(float *)(v14 + 0x74);
  LOBYTE(v34) = 5;
  v15 = v29 * flt_B37EE8;
  *((_DWORD *)a1 + 0x21) = 0;
  *((_DWORD *)a1 + 0x26) = 0;
  *((_DWORD *)a1 + 0x27) = 0;
  *((float *)a1 + 0x17) = v15;
  *((float *)a1 + 0x28) = 0.0;
  if ( (PlayerCharacter *)(*(int (__thiscall **)(void *))(*(_DWORD *)a4 + 0x20))(a4) == TESDataHandler_g_PlayerRef )
  {
    if ( PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1) )
    {
      if ( (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1)->members.super.m_flags & 1) == 0 )
      {
        v30 = fShockCastVOffset + *((float *)a1 + 0xD);
        TESObjectREFR_SetPosition((TESObjectREFR *)a1, *((float *)a1 + 0xB), *((float *)a1 + 0xC), v30);
      }
    }
  }
  v16 = sub_69FD20(*((_DWORD *)a1 + 0x1D));
  v17 = v16;
  if ( v16 )
    InterlockedIncrement((volatile LONG *)(v16 + 4));
  LOBYTE(v34) = 6;
  if ( v17 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    v28 = 0;
    v17 = 0;
  }
  sub_696CE0(a1);
  sub_4D7D10((MobileObject *)a1, *((volatile LONG **)a1 + 0x22));
  sub_698410((TESObjectREFR *)a1);
  a2.x = -flt_A7DEB4;
  a2.y = 0.0;
  a2.z = 0.0;
  a2.w = 0.0;
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
  if ( CharProxy )
  {
    v19 = *((_OWORD **)CharProxy + 2);
    if ( v19 )
      sub_8AC0B0(v19, &a2);
  }
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, st5_0, a3, 0.0, (TESObjectREFR *)a1);
  v21 = *((_DWORD *)a1 + 0x1D);
  *((_DWORD *)a1 + 0x20) = 0;
  if ( *(_DWORD *)(v21 + 0x84) )
  {
    v22 = *((_DWORD **)a1 + 0x27);
    v31 = *(_DWORD *)(*(_DWORD *)(v21 + 0x84) + 0xC);
    if ( v22 )
    {
      sub_6B73E0(v22);
      FormHeapFree((unsigned int)v22);
      *((_DWORD *)a1 + 0x27) = 0;
    }
    sound = (_DWORD **)OSGlobals->sound;
    if ( sound )
    {
      if ( *((_DWORD *)a1 + 0x25) )
      {
        OSGLobals_PlaySound(v31, 0x102, 1);
        *((_DWORD *)a1 + 0x27) = v24;
        if ( v24 )
        {
          sub_6B7360(v24, *((float *)a1 + 0xB), *((float *)a1 + 0xC), *((float *)a1 + 0xD));
          sub_6AA980(sound, **((_DWORD **)a1 + 0x27), *((_DWORD *)a1 + 0x25));
          sub_6B7190(*((int **)a1 + 0x27), 1);
        }
      }
    }
    v17 = v28;
  }
  sub_69FF10((TESObjectREFR *)a1);
  v25 = *((_DWORD *)a1 + 0x1A);
  if ( v25 )
    v26 = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x20))(v25);
  else
    v26 = 0;
  if ( v26 == TESDataHandler_g_PlayerRef )
    BSSimpleList_PushFront(ActorProcessManager_ptr.unk4C, (int)a1);
  else
    fNumberOfWeightedProjectileExisting = fMagicTrackingMultBolt + fNumberOfWeightedProjectileExisting;
  v33 = 5;
  if ( v17 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
      (**(void (__cdecl ***)(int))v17)(1);
  }
  return a1;
}
