void sub_67F180()
{
  unsigned __int16 *v0; // ecx
  int *v1; // eax
  unsigned int v2; // esi
  NiTMap_TESCELL *v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL *v7; // eax
  TESObjectCELL *v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *flags; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // esi
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edi
  TESObjectCELL *v20; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *i; // [esp+8h] [ebp-8h] BYREF
  void *v22; // [esp+Ch] [ebp-4h] BYREF

  if ( lowPathWorld_ptr )
  {
    sub_6805F0();
LABEL_3:
    v0 = (unsigned __int16 *)dword_B3BE18;
    v1 = (int *)dword_B3BE1C;
    while ( v1 || v0 )
    {
      v2 = (unsigned int)v0;
      if ( v0 )
      {
        sub_680340(v0);
        FormHeapFree(v2);
        v1 = (int *)dword_B3BE1C;
      }
      if ( v1 )
      {
        dword_B3BE1C = v1[1];
        dword_B3BE18 = *v1;
        FormHeapFree((unsigned int)v1);
        goto LABEL_3;
      }
      v0 = 0;
      dword_B3BE18 = 0;
    }
    v3 = (NiTMap_TESCELL *)lowPathWorld_ptr;
    v4 = lowPathWorld_ptr[1];
    v5 = 0;
    if ( v4 )
    {
      m_buckets = v3->m_buckets;
      while ( !*m_buckets )
      {
        ++v5;
        ++m_buckets;
        if ( v5 >= v4 )
          goto LABEL_15;
      }
      v7 = v3->m_buckets[v5];
    }
    else
    {
LABEL_15:
      v7 = 0;
    }
    for ( i = v7; i; v3 = (NiTMap_TESCELL *)lowPathWorld_ptr )
    {
      v20 = 0;
      sub_452600(v3, &i, &v22, &v20);
      v8 = v20;
      if ( v20 )
      {
        v9 = *(_DWORD *)&v20->members.super.type;
        v10 = 0;
        if ( v9 )
        {
          flags = (_DWORD *)v20->members.super.flags;
          while ( !*flags )
          {
            ++v10;
            ++flags;
            if ( v10 >= v9 )
              goto LABEL_22;
          }
          v12 = *(_DWORD **)(v20->members.super.flags + 4 * v10);
        }
        else
        {
LABEL_22:
          v12 = 0;
        }
        v13 = v12;
        while ( v13 )
        {
          v14 = (_DWORD *)v13[2];
          if ( *v13 )
          {
            v13 = (_DWORD *)*v13;
          }
          else
          {
            v15 = ((int (__thiscall *)(TESObjectCELL *, _DWORD))v8->vtbl->super.ClearComponentReferences)(v8, v13[1]);
            v16 = *(_DWORD *)&v8->members.super.type;
            v17 = v15 + 1;
            if ( v17 >= v16 )
            {
LABEL_32:
              v13 = 0;
            }
            else
            {
              v18 = (_DWORD *)(v8->members.super.flags + 4 * v17);
              while ( 1 )
              {
                v13 = (_DWORD *)*v18;
                if ( *v18 )
                  break;
                ++v17;
                ++v18;
                if ( v17 >= v16 )
                  goto LABEL_32;
              }
            }
          }
          if ( v14 )
          {
            if ( v14[1] )
            {
              do
              {
                v19 = *(_DWORD *)(v14[1] + 4);
                FormHeapFree(v14[1]);
                v14[1] = v19;
              }
              while ( v19 );
            }
            *v14 = 0;
            FormHeapFree((unsigned int)v14);
          }
        }
        NiTMap_Clear(v8);
        ((void (__thiscall *)(TESObjectCELL *, int))v8->vtbl->super.InitializeComponent)(v8, 1);
      }
    }
    NiTMap_Clear(v3);
    if ( lowPathWorld_ptr )
      (*(void (__thiscall **)(_DWORD *, int))*lowPathWorld_ptr)(lowPathWorld_ptr, 1);
    lowPathWorld_ptr = 0;
  }
}
