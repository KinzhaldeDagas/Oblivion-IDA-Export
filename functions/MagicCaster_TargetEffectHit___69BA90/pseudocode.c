unsigned int __userpurge MagicCaster_TargetEffectHit__@<eax>(
        char *a1@<ecx>,
        double a2@<st2>,
        double st7_0@<st0>,
        double a4@<st1>,
        char *a5,
        TESObjectCELL *a6,
        int a7,
        __int64 a8,
        int a9,
        Actor *a10,
        int a11,
        float a12,
        float a13)
{
  char *v13; // ebp
  double v15; // st7
  double v16; // st7
  int StrongestItem; // esi
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  void (__thiscall ***v20)(_DWORD, int); // esi
  Actor *v21; // edi
  int (__thiscall **v22)(int, int); // edi
  int v23; // eax
  char v24; // al
  MagicTarget *v25; // eax
  MagicCaster *v26; // ecx
  Actor *ParentActor; // edi
  ActorVtbl *vtbl; // edi
  int SchoolAV; // eax
  int (__thiscall ***v30)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int); // eax
  int v31; // eax
  float *v32; // eax
  unsigned int result; // eax
  unsigned int v34; // esi
  __int128 v35; // [esp+14h] [ebp-3Ch]
  float v36; // [esp+24h] [ebp-2Ch]
  char *v37; // [esp+38h] [ebp-18h]
  float v38; // [esp+3Ch] [ebp-14h]
  int v39; // [esp+3Ch] [ebp-14h]
  Actor *v40; // [esp+40h] [ebp-10h]
  _DWORD *v41; // [esp+44h] [ebp-Ch]
  int v42; // [esp+48h] [ebp-8h] BYREF
  unsigned int v43; // [esp+4Ch] [ebp-4h]

  v13 = a5;
  if ( a5 )
    v37 = a5 + 0xC;
  else
    v37 = 0;
  if ( (*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a5 + 0x18))(
         a5,
         st7_0,
         a4,
         a2) )
  {
    v15 = 1.0;
  }
  else
  {
    v15 = 0.0;
    (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x2C))(a1, 0, 0.0);
  }
  v38 = v15;
  v16 = v38 * a12;
  *(float *)&v39 = v16;
  StrongestItem = EffectItemList_GetStrongestItem(2, 0);
  v41 = (_DWORD *)StrongestItem;
  v43 = 0;
  v42 = 0;
  MagicCaster_GetTargetsInArea_(a1, v13, 2, *(float *)&a7, a8, &v42);
  LOBYTE(a5) = 0;
  if ( !v37 )
  {
LABEL_35:
    v21 = a10;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v18 = *((_DWORD **)v37 + 1);
    if ( !v18 || v18[4] != 2 || *v18 == 0x454C4554 )
    {
      v21 = a10;
      goto LABEL_32;
    }
    v19 = (_DWORD *)(*(int (__thiscall **)(char *, char *, _DWORD *, _DWORD))(*(_DWORD *)a1 + 0x40))(a1, v13, v18, 0);
    v20 = (void (__thiscall ***)(_DWORD, int))v19;
    if ( v18 != v41 )
      v19[5] |= 0xEu;
    ActiveEffect_Base_ApplyScalingFactor(v19, v39);
    v21 = a10;
    if ( a10 )
    {
      if ( !a10->vtbl->super.super.GetMagicTarget((TESObjectREFR *)a10) )
        goto LABEL_26;
      if ( v21 == (Actor *)(*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x20))(a1) )
        goto LABEL_26;
      if ( a9 )
      {
        v22 = (int (__thiscall **)(int, int))(*(_DWORD *)a9 + 0x21C);
        v23 = ((int (__thiscall *)(Actor *, _DWORD))a10->vtbl->super.super.GetMagicTarget)(a10, v20);
        v24 = (*v22)((int)a10, v23);
        v21 = a10;
        if ( !v24 )
          goto LABEL_26;
      }
      v25 = v21->vtbl->super.super.GetMagicTarget((TESObjectREFR *)v21);
      if ( !((unsigned int (__thiscall *)(MagicTarget *, char *, char *, void (__thiscall ***)(_DWORD, int), _DWORD))v25->vtbl->Destructor)(
              v25,
              a1,
              v13,
              v20,
              0) )
        goto LABEL_26;
      v26 = *(MagicCaster **)(a9 + 0x68);
      if ( v26 )
      {
        ParentActor = MagicCaster_GetParentActor(v26);
        v40 = ParentActor;
        if ( ParentActor && !(_BYTE)a5 && !(*(int (__thiscall **)(char *))(*(_DWORD *)v13 + 0x18))(v13) )
          goto LABEL_24;
      }
      else
      {
        v40 = 0;
        ParentActor = 0;
      }
      if ( (*(int (__thiscall **)(char *))(*(_DWORD *)v13 + 0x18))(v13) != 5 )
      {
LABEL_25:
        v21 = a10;
LABEL_26:
        v30 = (int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int))v21->vtbl->super.super.GetMagicTarget((TESObjectREFR *)v21);
        goto LABEL_29;
      }
LABEL_24:
      vtbl = ParentActor->vtbl;
      LOBYTE(a5) = 1;
      SchoolAV = EffectItemList_GetSchoolAV();
      ((void (__thiscall *)(Actor *, int, int, _DWORD))vtbl->ModExperience)(v40, SchoolAV, 1, 0.0);
      goto LABEL_25;
    }
    v30 = 0;
LABEL_29:
    v16 = a13;
    MagicCaster_ApplyAOE__(
      a1,
      (int)v13,
      (int)v20,
      (int)a6,
      a7,
      a8,
      SHIDWORD(a8),
      v30,
      a9,
      (float **)&v42,
      (char *)&a5,
      a13);
    if ( v20 )
      (**v20)(v20, 1);
LABEL_32:
    v31 = *((_DWORD *)v37 + 2);
    if ( !v31 )
      break;
    v37 = (char *)(v31 - 4);
    if ( v31 == 4 )
    {
      StrongestItem = (int)v41;
      goto LABEL_35;
    }
  }
  StrongestItem = (int)v41;
LABEL_37:
  LOBYTE(a10) = EffectSetting_GetProjectileType(*(_DWORD **)(a9 + 0x74)) == 3;
  v32 = (float *)EffectItemList_GetStrongestItem(2, 1);
  if ( !(_BYTE)a10 )
  {
    if ( v32 )
    {
      MagicCaster_ExplosionCalcs____(
        a1,
        __SPAIR64__(a8, a7),
        *((float *)&a8 + 1),
        a6,
        (int)v13,
        v32,
        COERCE_FLOAT(&v42),
        a12,
        a13);
    }
    else if ( v21 )
    {
      if ( v21->vtbl->super.super.IsActor((TESObjectREFR *)v21) )
      {
        if ( StrongestItem )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x58) & 0x20000000) != 0
            && sub_699EB0((MagicCaster *)a1, (int)&v21->members.magicTarget, (int)v13) )
          {
            EffectItem_MagickaCost((float *)StrongestItem);
            v36 = v16;
            HIDWORD(v35) = StrongestItem;
            LODWORD(v35) = a7;
            *(_QWORD *)((char *)&v35 + 4) = a8;
            sub_699900((int)a1, (int)a1, v16, v21, v35, v36);
          }
        }
      }
    }
  }
  result = v43;
  if ( v43 )
  {
    do
    {
      v34 = *(_DWORD *)(result + 4);
      FormHeapFree(result);
      result = v34;
    }
    while ( v34 );
  }
  return result;
}
