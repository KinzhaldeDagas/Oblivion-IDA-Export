void __thiscall CombatController_ApplyMagicItemCosts__(unsigned int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // edi
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // edx
  _DWORD *v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // edx
  _DWORD *v34; // eax
  int v35; // eax

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) - 6;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v5 = (_DWORD *)*(this + 0x1F);
        if ( v5 )
        {
          if ( *v5 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x1F));
            *(this + 0x1F) = 0;
          }
        }
        v6 = (_DWORD *)*(this + 0x20);
        if ( v6 )
        {
          if ( *v6 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x20));
            *(this + 0x20) = 0;
          }
        }
        v7 = (_DWORD *)*(this + 0x21);
        if ( v7 )
        {
          if ( *v7 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x21));
            *(this + 0x21) = 0;
          }
        }
        v8 = (_DWORD *)*(this + 0x22);
        if ( v8 )
        {
          if ( v7 == v8 && !*(this + 0x21) )
            *(this + 0x22) = 0;
        }
        v9 = (_DWORD *)*(this + 0x22);
        if ( v9 )
        {
          if ( *v9 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x22));
            *(this + 0x22) = 0;
          }
        }
        v10 = (_DWORD *)*(this + 0x24);
        if ( v10 )
        {
          if ( *v10 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x24));
            *(this + 0x24) = 0;
          }
        }
        v11 = (_DWORD *)*(this + 0x27);
        if ( v11 )
        {
          if ( *v11 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x27));
            *(this + 0x27) = 0;
          }
        }
        v12 = (_DWORD *)*(this + 0x26);
        if ( v12 )
        {
          if ( *v12 == a2 )
          {
            sub_613D60(this, v4, *(this + 0x26));
            *(this + 0x26) = 0;
          }
        }
        v13 = (_DWORD *)*(this + 0x25);
        if ( v13 )
        {
          if ( *v13 == a2 )
          {
LABEL_75:
            sub_613D60(this, v4, *(this + 0x25));
            *(this + 0x25) = 0;
          }
        }
      }
    }
    else
    {
      v14 = (_DWORD *)*(this + 0x1F);
      if ( v14 )
      {
        if ( *v14 == a2 )
        {
          v15 = v14[1];
          if ( v15 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v15 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v16, *(this + 0x1F));
              *(this + 0x1F) = 0;
            }
          }
        }
      }
      v17 = (_DWORD *)*(this + 0x20);
      if ( v17 )
      {
        if ( *v17 == a2 )
        {
          v18 = v17[1];
          if ( v18 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v18 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v19, *(this + 0x20));
              *(this + 0x20) = 0;
            }
          }
        }
      }
      v20 = (_DWORD *)*(this + 0x21);
      if ( v20 )
      {
        if ( *v20 == a2 )
        {
          v21 = v20[1];
          if ( v21 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v21 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, *(this + 0x21), *(this + 0x21));
              *(this + 0x21) = 0;
            }
          }
        }
      }
      v22 = (_DWORD *)*(this + 0x22);
      if ( v22 )
      {
        if ( v20 == v22 && !*(this + 0x21) )
          *(this + 0x22) = 0;
      }
      v23 = (_DWORD *)*(this + 0x22);
      if ( v23 )
      {
        if ( *v23 == a2 )
        {
          v24 = v23[1];
          if ( v24 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v24 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v25, *(this + 0x22));
              *(this + 0x22) = 0;
            }
          }
        }
      }
      v26 = (_DWORD *)*(this + 0x24);
      if ( v26 )
      {
        if ( *v26 == a2 )
        {
          v27 = v26[1];
          if ( v27 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v27 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v28, *(this + 0x24));
              *(this + 0x24) = 0;
            }
          }
        }
      }
      v29 = (_DWORD *)*(this + 0x27);
      if ( v29 )
      {
        if ( *v29 == a2 )
        {
          v30 = v29[1];
          if ( v30 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v30 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, *(this + 0x27), *(this + 0x27));
              *(this + 0x27) = 0;
            }
          }
        }
      }
      v31 = (_DWORD *)*(this + 0x26);
      if ( v31 )
      {
        if ( *v31 == a2 )
        {
          v32 = v31[1];
          if ( v32 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v32 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v33, *(this + 0x26));
              *(this + 0x26) = 0;
            }
          }
        }
      }
      v34 = (_DWORD *)*(this + 0x25);
      if ( v34 )
      {
        if ( *v34 == a2 )
        {
          v35 = v34[1];
          if ( v35 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v35 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              goto LABEL_75;
            }
          }
        }
      }
    }
  }
}
