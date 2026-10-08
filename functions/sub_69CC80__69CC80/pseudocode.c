void __userpurge sub_69CC80(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        int a5,
        int a6,
        int a7,
        TESObjectREFR *a8,
        char a9)
{
  bhkCharacterProxy *CharProxy; // eax
  int v11; // edi
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  double v15; // st7
  char *v16; // edi
  char *v17; // ebp
  int v18; // eax
  double v19; // st7
  int *sound; // ecx
  int v21; // eax
  int *v22; // edi
  float *v23; // eax
  float v24; // ecx
  float v25; // edx
  __int64 v26; // [esp-18h] [ebp-44h]
  __int64 v27; // [esp-10h] [ebp-3Ch]
  float v28; // [esp+4h] [ebp-28h]
  float v29[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v30; // [esp+28h] [ebp-4h]

  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x69cc8e*/
  bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, v29); /*0x69cc95*/
  v11 = LODWORD(v29[0]) | 0x4000; /*0x69cca0*/
  v12 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)a1) + 0xD9); /*0x69ccab*/
  if ( v12 ) /*0x69ccb3*/
  {
    v13 = v12[2]; /*0x69ccb5*/
    if ( v13 ) /*0x69ccba*/
    {
      v14 = v13 + 0x14; /*0x69ccbc*/
      if ( v14 ) /*0x69ccbf*/
        *(_DWORD *)(v14 + 0x1C) = v11; /*0x69ccc1*/
    }
    (*(void (__thiscall **)(_DWORD *))(*v12 + 0x80))(v12); /*0x69cccc*/
  }
  v15 = *(float *)(a1 + 0x80) - *(float *)(a1 + 0x7C); /*0x69ccda*/
  *(_DWORD *)(a1 + 0x88) = 1; /*0x69ccdd*/
  v29[0] = v15 / *(float *)(a1 + 0x80); /*0x69cced*/
  if ( !a9 && v29[0] > 0.0 ) /*0x69ccfe*/
  {
    v16 = *(char **)(a1 + 0x6C); /*0x69cd08*/
    v17 = *(char **)(a1 + 0x68); /*0x69cd0b*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1); /*0x69cd10*/
    v19 = v29[0]; /*0x69cd21*/
    v28 = v29[0]; /*0x69cd25*/
    HIDWORD(v26) = *(_DWORD *)v18; /*0x69cd31*/
    v27 = *(_QWORD *)(v18 + 4); /*0x69cd39*/
    LODWORD(v26) = Shared_GetDwordAtOffset40((void *)a1); /*0x69cd46*/
    MagicCaster_TargetEffectHit__(v17, a2, v19, a3, v16, v26, v27, a1, a8, 0, v28, 1.0); /*0x69cd4a*/
  }
  sound = (int *)MEMORY[0xB33398]->sound; /*0x69cd55*/
  if ( sound ) /*0x69cd5a*/
  {
    v21 = *(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x8C); /*0x69cd63*/
    if ( v21 ) /*0x69cd6b*/
    {
      if ( !a9 ) /*0x69cd6f*/
      {
        v22 = OSGLobals_PlaySound(sound, *(void **)(v21 + 0xC), 0x102, 1); /*0x69cd81*/
        if ( v22 ) /*0x69cd85*/
        {
          v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1); /*0x69cd91*/
          v24 = *v23; /*0x69cd93*/
          v25 = v23[1]; /*0x69cd95*/
          v30 = v23[2]; /*0x69cd9e*/
          v29[2] = v25; /*0x69cdaa*/
          v29[1] = v24; /*0x69cdb2*/
          sub_6B7360(v22, v24, v25, v30); /*0x69cdc3*/
          sub_6B71C0(v22, 0); /*0x69cdcc*/
          sub_6B73E0(v22); /*0x69cdd3*/
          FormHeapFree((unsigned int)v22); /*0x69cdd9*/
        }
      }
    }
  }
}
