void __thiscall sub_4D9310(char *this, char a2)
{
  int *v6; // eax
  int *v7; // edi
  int v8; // edi
  float *sound; // ebx
  float *v10; // eax
  BSExtraDataVtbl *v11; // eax
  int *v12; // eax
  int *v13; // edi
  int v14; // edi
  float *v15; // ebx
  float *v16; // eax
  BSExtraDataVtbl *v17; // eax
  int *v18; // eax
  int *v19; // edi
  int v20; // edi
  float *v21; // ebx
  float *v22; // eax
  BSExtraDataVtbl *v23; // eax
  int *v24; // eax
  int *v25; // edi
  float *v26; // ebp
  int v27; // ebx
  float *v28; // edi
  int v29; // eax
  _DWORD *v30; // eax
  unsigned int v31; // esi
  _DWORD *v32; // ecx
  ExtraDataList *v33; // esi
  int *v34; // eax
  int *v35; // edi

  if ( a2 )
  {
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) )
    {
      if ( OSGlobals->sound )
      {
        if ( (*((_DWORD *)this + 2) & 0x800) == 0 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x12 )
          {
            v6 = (int *)sub_41E960((ExtraDataList *)(this + 0x44));
            v7 = v6;
            if ( v6 )
            {
              if ( sub_6B73A0(v6) )
              {
                sub_6B7240(v7);
                sub_6B73C0(v7);
              }
              if ( !sub_6B73A0(v7) )
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu);
            }
            v8 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x54);
            sound = (float *)OSGlobals->sound;
            v10 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this);
            v11 = (BSExtraDataVtbl *)sub_6AE4B0(sound, *v10, v10[1], v10[2], v8, 0, 1, 1);
            if ( v11 )
              sub_423B10((ExtraDataList *)(this + 0x44), v11);
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18
            && (*((_DWORD *)this + 2) & 0x2000) == 0 )
          {
            v12 = (int *)sub_41E960((ExtraDataList *)(this + 0x44));
            v13 = v12;
            if ( v12 )
            {
              if ( sub_6B73A0(v12) )
              {
                sub_6B7240(v13);
                sub_6B73C0(v13);
              }
              if ( !sub_6B73A0(v13) )
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu);
            }
            v14 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x60);
            v15 = (float *)OSGlobals->sound;
            v16 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this);
            v17 = (BSExtraDataVtbl *)sub_6AE4B0(v15, *v16, v16[1], v16[2], v14, 0, 1, 0);
            if ( v17 )
              sub_423B10((ExtraDataList *)(this + 0x44), v17);
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1A
            && (*((_DWORD *)this + 2) & 0x2000) == 0 )
          {
            v18 = (int *)sub_41E960((ExtraDataList *)(this + 0x44));
            v19 = v18;
            if ( v18 )
            {
              if ( sub_6B73A0(v18) )
              {
                sub_6B7240(v19);
                sub_6B73C0(v19);
              }
              if ( !sub_6B73A0(v19) )
                BaseExtraList_RemoveExtraByType((_DWORD *)this + 0x11, 0x5Bu);
            }
            v20 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 0x8C);
            v21 = (float *)OSGlobals->sound;
            v22 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this);
            v23 = (BSExtraDataVtbl *)sub_6AE4B0(v21, *v22, v22[1], v22[2], v20, 0, 1, 1);
            if ( v23 )
              sub_423B10((ExtraDataList *)(this + 0x44), v23);
          }
          if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0xA )
          {
            v24 = (int *)sub_41E960((ExtraDataList *)(this + 0x44));
            v25 = v24;
            if ( v24 )
            {
              if ( sub_6B73A0(v24) )
              {
                sub_6B7240(v25);
                sub_6B73C0(v25);
              }
            }
            v26 = (float *)OSGlobals->sound;
            v27 = *((_DWORD *)this + 3);
            v28 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x174))(this);
            v29 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this);
            v30 = sub_6AE4B0(v26, *v28, v28[1], v28[2], v29, v27, 0, 1);
            v31 = (unsigned int)v30;
            if ( v30 )
            {
              sub_6B73E0(v30);
              FormHeapFree(v31);
            }
          }
        }
      }
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0xA )
      {
        v32 = OSGlobals->sound;
        if ( v32 )
        {
          if ( sub_6ACA40(v32, *((_DWORD *)this + 3)) )
          {
            sub_6AB890((_DWORD *)OSGlobals->sound, *((_DWORD *)this + 3));
            sub_6AC9F0((_DWORD *)OSGlobals->sound, *((_DWORD *)this + 3));
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) )
    {
      if ( OSGlobals->sound )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x12
          || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x18
          || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1A )
        {
          v33 = (ExtraDataList *)(this + 0x44);
          v34 = (int *)sub_41E960(v33);
          v35 = v34;
          if ( v34 )
          {
            sub_6B7240(v34);
            sub_6B73C0(v35);
            BaseExtraList_RemoveExtraByType(v33, 0x5Bu);
          }
        }
      }
    }
  }
}
