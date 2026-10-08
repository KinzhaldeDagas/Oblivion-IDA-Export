void __thiscall sub_4D9310(char *this, char a2)
{
  int *ExtraSound; // eax
  int *v4; // edi
  int v5; // edi
  float *sound; // ebx
  float *v7; // eax
  BSExtraDataVtbl *v8; // eax
  int *v9; // eax
  int *v10; // edi
  int v11; // edi
  float *v12; // ebx
  float *v13; // eax
  BSExtraDataVtbl *v14; // eax
  int *v15; // eax
  int *v16; // edi
  int v17; // edi
  float *v18; // ebx
  float *v19; // eax
  BSExtraDataVtbl *v20; // eax
  int *v21; // eax
  int *v22; // edi
  float *v23; // ebp
  int v24; // ebx
  float *v25; // edi
  int v26; // eax
  _DWORD *v27; // eax
  unsigned int v28; // esi
  _DWORD *v29; // ecx
  ExtraDataList *v30; // esi
  int *v31; // eax
  int *v32; // edi

  if ( a2 ) /*0x4d931b*/
  {
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) ) /*0x4d9329*/
    {
      if ( MEMORY[0xB33398]->sound ) /*0x4d9338*/
      {
        if ( (*((_DWORD *)this + 2) & 0x800) == 0 ) /*0x4d934b*/
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x12 ) /*0x4d9361*/
          {
            ExtraSound = (int *)ExtraDataList_GetExtraSound((ExtraDataList *)(this + 0x44)); /*0x4d936c*/
            v4 = ExtraSound; /*0x4d9371*/
            if ( ExtraSound ) /*0x4d9375*/
            {
              if ( sub_6B73A0(ExtraSound) ) /*0x4d9379*/
              {
                sub_6B7240(v4); /*0x4d9384*/
                sub_6B73C0(v4); /*0x4d938b*/
              }
              if ( !sub_6B73A0(v4) ) /*0x4d9392*/
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu); /*0x4d939f*/
            }
            v5 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x54); /*0x4d93b8*/
            sound = (float *)MEMORY[0xB33398]->sound; /*0x4d93bb*/
            v7 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this); /*0x4d93c6*/
            v8 = (BSExtraDataVtbl *)sub_6AE4B0(sound, *v7, v7[1], v7[2], v5, 0, COERCE_FLOAT(1), (_DWORD *)1); /*0x4d93e6*/
            if ( v8 ) /*0x4d93ed*/
              sub_423B10((ExtraDataList *)(this + 0x44), v8); /*0x4d93f2*/
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18 /*0x4d9416*/
            && (*((_DWORD *)this + 2) & 0x2000) == 0 )
          {
            v9 = (int *)ExtraDataList_GetExtraSound((ExtraDataList *)(this + 0x44)); /*0x4d9421*/
            v10 = v9; /*0x4d9426*/
            if ( v9 ) /*0x4d942a*/
            {
              if ( sub_6B73A0(v9) ) /*0x4d942e*/
              {
                sub_6B7240(v10); /*0x4d9439*/
                sub_6B73C0(v10); /*0x4d9440*/
              }
              if ( !sub_6B73A0(v10) ) /*0x4d9447*/
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu); /*0x4d9454*/
            }
            v11 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x60); /*0x4d946d*/
            v12 = (float *)MEMORY[0xB33398]->sound; /*0x4d9470*/
            v13 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this); /*0x4d947b*/
            v14 = (BSExtraDataVtbl *)sub_6AE4B0(v12, *v13, v13[1], v13[2], v11, 0, COERCE_FLOAT(1), 0); /*0x4d949b*/
            if ( v14 ) /*0x4d94a2*/
              sub_423B10((ExtraDataList *)(this + 0x44), v14); /*0x4d94a7*/
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1A /*0x4d94cb*/
            && (*((_DWORD *)this + 2) & 0x2000) == 0 )
          {
            v15 = (int *)ExtraDataList_GetExtraSound((ExtraDataList *)(this + 0x44)); /*0x4d94d6*/
            v16 = v15; /*0x4d94db*/
            if ( v15 ) /*0x4d94df*/
            {
              if ( sub_6B73A0(v15) ) /*0x4d94e3*/
              {
                sub_6B7240(v16); /*0x4d94ee*/
                sub_6B73C0(v16); /*0x4d94f5*/
              }
              if ( !sub_6B73A0(v16) ) /*0x4d94fc*/
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu); /*0x4d9509*/
            }
            v17 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x8C); /*0x4d9522*/
            v18 = (float *)MEMORY[0xB33398]->sound; /*0x4d9528*/
            v19 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this); /*0x4d9533*/
            v20 = (BSExtraDataVtbl *)sub_6AE4B0(v18, *v19, v19[1], v19[2], v17, 0, COERCE_FLOAT(1), (_DWORD *)1); /*0x4d9553*/
            if ( v20 ) /*0x4d955a*/
              sub_423B10((ExtraDataList *)(this + 0x44), v20); /*0x4d955f*/
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0xA ) /*0x4d9574*/
          {
            v21 = (int *)ExtraDataList_GetExtraSound((ExtraDataList *)(this + 0x44)); /*0x4d957d*/
            v22 = v21; /*0x4d9582*/
            if ( v21 ) /*0x4d9586*/
            {
              if ( sub_6B73A0(v21) ) /*0x4d958a*/
              {
                sub_6B7240(v22); /*0x4d9595*/
                sub_6B73C0(v22); /*0x4d959c*/
              }
            }
            v23 = (float *)MEMORY[0xB33398]->sound; /*0x4d95a9*/
            v24 = *((_DWORD *)this + 3); /*0x4d95b2*/
            v25 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this); /*0x4d95bf*/
            v26 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this); /*0x4d95ca*/
            v27 = sub_6AE4B0(v23, *v25, v25[1], v25[2], v26, v24, 0.0, (_DWORD *)1); /*0x4d95e4*/
            v28 = (unsigned int)v27; /*0x4d95e9*/
            if ( v27 ) /*0x4d95ed*/
            {
              sub_6B73E0(v27); /*0x4d95f5*/
              FormHeapFree(v28); /*0x4d95fb*/
            }
          }
        }
      }
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) ) /*0x4d9612*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0xA ) /*0x4d9628*/
      {
        v29 = MEMORY[0xB33398]->sound; /*0x4d9630*/
        if ( v29 ) /*0x4d9635*/
        {
          if ( sub_6ACA40(v29, *((_DWORD *)this + 3)) ) /*0x4d963b*/
          {
            sub_6AB890((_DWORD *)MEMORY[0xB33398]->sound, *((_DWORD *)this + 3)); /*0x4d9650*/
            sub_6AC9F0((_DWORD *)MEMORY[0xB33398]->sound, *((_DWORD *)this + 3)); /*0x4d9662*/
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) ) /*0x4d9671*/
    {
      if ( MEMORY[0xB33398]->sound ) /*0x4d967c*/
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x12 /*0x4d96b6*/
          || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18
          || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1A )
        {
          v30 = (ExtraDataList *)(this + 0x44); /*0x4d96b8*/
          v31 = (int *)ExtraDataList_GetExtraSound(v30); /*0x4d96bd*/
          v32 = v31; /*0x4d96c2*/
          if ( v31 ) /*0x4d96c6*/
          {
            sub_6B7240(v31); /*0x4d96ca*/
            sub_6B73C0(v32); /*0x4d96d1*/
            BaseExtraList_RemoveExtraByType(v30, 0x5Bu); /*0x4d96da*/
          }
        }
      }
    }
  }
}
