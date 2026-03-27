char __thiscall sub_4C6280(unsigned int **this)
{
  int v2; // ebp
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  unsigned int **v6; // eax
  int v7; // eax
  unsigned int *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // ebx
  _DWORD *v17; // ecx
  NiTMap_Entry_TESCELL *v18; // eax
  TESObjectCELL *v19; // ebx
  int i; // esi
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  TESObjectCELL *v24; // [esp+Ch] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v25; // [esp+10h] [ebp-Ch] BYREF
  int v26; // [esp+14h] [ebp-8h]
  void *v27; // [esp+18h] [ebp-4h] BYREF

  *(this + 7) = (unsigned int *)((unsigned int)*(this + 7) & 0xFFFFFFF7);
  sub_4C58D0(this);
  v2 = 0;
  if ( *(this + 9) )
  {
    v3 = 0;
    v24 = 0;
    v26 = 0;
    do
    {
      v4 = (int)*(this + 9);
      v5 = *(_DWORD *)(v4 + v2 + 0x40) == 0;
      v6 = (unsigned int **)(v4 + v2 + 0x40);
      if ( !v5 )
      {
        FormHeapFree(**v6);
        FormHeapFree((*(this + 9))[v2 / 4u + 0x10]);
        (*(this + 9))[v2 / 4u + 0x10] = 0;
      }
      v7 = (int)*(this + 9);
      v5 = *(_DWORD *)(v7 + v2 + 0x30) == 0;
      v8 = (unsigned int *)(v7 + v2 + 0x30);
      if ( !v5 )
      {
        FormHeapFree(*v8);
        (*(this + 9))[v2 / 4u + 0xC] = 0;
      }
      v9 = (*(this + 9))[1];
      if ( v9 )
      {
        FormHeapFree(*(_DWORD *)(v9 + v2));
        *(_DWORD *)((*(this + 9))[1] + v2) = 0;
      }
      v10 = (*(this + 9))[2];
      if ( v10 )
      {
        FormHeapFree(*(_DWORD *)(v10 + v2));
        *(_DWORD *)((*(this + 9))[2] + v2) = 0;
      }
      v11 = (*(this + 9))[3];
      if ( v11 )
      {
        FormHeapFree(*(_DWORD *)(v11 + v2));
        *(_DWORD *)((*(this + 9))[3] + v2) = 0;
      }
      v12 = (*(this + 9))[4];
      if ( v12 )
      {
        FormHeapFree(*(_DWORD *)(v12 + v2));
        *(_DWORD *)((*(this + 9))[4] + v2) = 0;
      }
      v13 = (int)*(this + 9);
      if ( *(_DWORD *)(v3 + v13 + 0x60) )
      {
        v14 = *(_DWORD *)(v3 + v13 + 0x58);
        v15 = 0;
        if ( v14 )
        {
          v16 = *(_DWORD **)(v3 + v13 + 0x5C);
          v17 = v16;
          while ( !*v17 )
          {
            ++v15;
            ++v17;
            if ( v15 >= v14 )
              goto LABEL_20;
          }
          v18 = (NiTMap_Entry_TESCELL *)v16[v15];
        }
        else
        {
LABEL_20:
          v18 = 0;
        }
        v25 = v18;
        while ( v25 )
        {
          sub_452600((NiTMap_TESCELL *)((char *)*(this + 9) + v3 + 0x54), &v25, &v27, &v24);
          v19 = v24;
          if ( v24 )
          {
            for ( i = 0; i < 0x10; ++i )
            {
              if ( *((_DWORD *)&v19->vtbl + i) )
              {
                **((_DWORD **)&v19->vtbl + i) = 0;
                FormHeapFree(*((_DWORD *)&v19->vtbl + i));
              }
            }
            FormHeapFree((unsigned int)v19);
            v3 = v26;
          }
        }
      }
      NiTMap_Clear((unsigned int *)((char *)*(this + 9) + v3 + 0x54));
      v2 += 4;
      v3 += 0x10;
      v26 = v3;
    }
    while ( v2 < 0x10 );
    FormHeapFree((*(this + 9))[4]);
    FormHeapFree((*(this + 9))[1]);
    FormHeapFree((*(this + 9))[3]);
    FormHeapFree((*(this + 9))[2]);
    v21 = (*(this + 9))[0x14];
    if ( v21 )
    {
      if ( *(_WORD *)(v21 + 4) )
      {
        if ( !--*(_WORD *)(v21 + 6) )
          (**(void (__thiscall ***)(unsigned int, int))v21)(v21, 1);
      }
      (*(this + 9))[0x14] = 0;
    }
  }
  v22 = (unsigned int)*(this + 9);
  if ( v22 )
  {
    sub_4C2180(*(this + 9));
    FormHeapFree(v22);
  }
  *(this + 9) = 0;
  return 1;
}
