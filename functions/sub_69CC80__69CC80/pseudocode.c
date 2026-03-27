void __userpurge sub_69CC80(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        int a5,
        int a6,
        int a7,
        Actor *a8,
        char a9)
{
  bhkCharacterProxy *CharProxy; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st7
  char *v17; // edi
  char *v18; // ebp
  int v19; // eax
  double v20; // st7
  TESObjectCELL *ParentCell; // eax
  int v22; // eax
  int *v23; // eax
  int *v24; // edi
  float *v25; // eax
  float v26; // ecx
  float v27; // edx
  int v28; // [esp-14h] [ebp-40h]
  __int64 v29; // [esp-10h] [ebp-3Ch]
  float v30; // [esp+4h] [ebp-28h]
  float v31[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v32; // [esp+28h] [ebp-4h]

  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
  sub_57E270(CharProxy, v31);
  v12 = LODWORD(v31[0]) | 0x4000;
  v13 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)a1) + 0xD9);
  if ( v13 )
  {
    v14 = v13[2];
    if ( v14 )
    {
      v15 = v14 + 0x14;
      if ( v15 )
        *(_DWORD *)(v15 + 0x1C) = v12;
    }
    (*(void (__thiscall **)(_DWORD *))(*v13 + 0x80))(v13);
  }
  v16 = *(float *)(a1 + 0x80) - *(float *)(a1 + 0x7C);
  *(_DWORD *)(a1 + 0x88) = 1;
  v31[0] = v16 / *(float *)(a1 + 0x80);
  if ( !a9 && v31[0] > 0.0 )
  {
    v17 = *(char **)(a1 + 0x6C);
    v18 = *(char **)(a1 + 0x68);
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
    v20 = v31[0];
    v30 = v31[0];
    v28 = *(_DWORD *)v19;
    v29 = *(_QWORD *)(v19 + 4);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
    MagicCaster_TargetEffectHit__(v18, a2, v20, a3, v17, ParentCell, v28, v29, a1, a8, 0, v30, 1.0);
  }
  if ( OSGlobals->sound )
  {
    v22 = *(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x8C);
    if ( v22 )
    {
      if ( !a9 )
      {
        OSGLobals_PlaySound(*(_DWORD *)(v22 + 0xC), 0x102, 1);
        v24 = v23;
        if ( v23 )
        {
          v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
          v26 = *v25;
          v27 = v25[1];
          v32 = v25[2];
          v31[2] = v27;
          v31[1] = v26;
          sub_6B7360(v24, v26, v27, v32);
          sub_6B71C0(v24, 0);
          sub_6B73E0(v24);
          FormHeapFree((unsigned int)v24);
        }
      }
    }
  }
}
