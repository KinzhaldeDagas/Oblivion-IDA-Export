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

  if ( a2 ) /*0x613e1d*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) - 6; /*0x613e2e*/
    if ( v3 ) /*0x613e31*/
    {
      if ( v3 == 1 ) /*0x613e3a*/
      {
        v5 = (_DWORD *)*(this + 0x1F); /*0x613e40*/
        if ( v5 ) /*0x613e45*/
        {
          if ( *v5 == a2 ) /*0x613e49*/
          {
            sub_613D60(this, v4, *(this + 0x1F)); /*0x613e4e*/
            *(this + 0x1F) = 0; /*0x613e53*/
          }
        }
        v6 = (_DWORD *)*(this + 0x20); /*0x613e56*/
        if ( v6 ) /*0x613e5e*/
        {
          if ( *v6 == a2 ) /*0x613e62*/
          {
            sub_613D60(this, v4, *(this + 0x20)); /*0x613e67*/
            *(this + 0x20) = 0; /*0x613e6c*/
          }
        }
        v7 = (_DWORD *)*(this + 0x21); /*0x613e72*/
        if ( v7 ) /*0x613e7a*/
        {
          if ( *v7 == a2 ) /*0x613e7e*/
          {
            sub_613D60(this, v4, *(this + 0x21)); /*0x613e83*/
            *(this + 0x21) = 0; /*0x613e88*/
          }
        }
        v8 = (_DWORD *)*(this + 0x22); /*0x613e8e*/
        if ( v8 ) /*0x613e96*/
        {
          if ( v7 == v8 && !*(this + 0x21) ) /*0x613e9c*/
            *(this + 0x22) = 0; /*0x613ea4*/
        }
        v9 = (_DWORD *)*(this + 0x22); /*0x613eaa*/
        if ( v9 ) /*0x613eb2*/
        {
          if ( *v9 == a2 ) /*0x613eb6*/
          {
            sub_613D60(this, v4, *(this + 0x22)); /*0x613ebb*/
            *(this + 0x22) = 0; /*0x613ec0*/
          }
        }
        v10 = (_DWORD *)*(this + 0x24); /*0x613ec6*/
        if ( v10 ) /*0x613ece*/
        {
          if ( *v10 == a2 ) /*0x613ed2*/
          {
            sub_613D60(this, v4, *(this + 0x24)); /*0x613ed7*/
            *(this + 0x24) = 0; /*0x613edc*/
          }
        }
        v11 = (_DWORD *)*(this + 0x27); /*0x613ee2*/
        if ( v11 ) /*0x613eea*/
        {
          if ( *v11 == a2 ) /*0x613eee*/
          {
            sub_613D60(this, v4, *(this + 0x27)); /*0x613ef3*/
            *(this + 0x27) = 0; /*0x613ef8*/
          }
        }
        v12 = (_DWORD *)*(this + 0x26); /*0x613efe*/
        if ( v12 ) /*0x613f06*/
        {
          if ( *v12 == a2 ) /*0x613f0a*/
          {
            sub_613D60(this, v4, *(this + 0x26)); /*0x613f0f*/
            *(this + 0x26) = 0; /*0x613f14*/
          }
        }
        v13 = (_DWORD *)*(this + 0x25); /*0x613f1a*/
        if ( v13 ) /*0x613f22*/
        {
          if ( *v13 == a2 ) /*0x613f2a*/
          {
LABEL_75:
            sub_613D60(this, v4, *(this + 0x25)); /*0x61416c*/
            *(this + 0x25) = 0; /*0x61417a*/
          }
        }
      }
    }
    else
    {
      v14 = (_DWORD *)*(this + 0x1F); /*0x613f45*/
      if ( v14 ) /*0x613f4a*/
      {
        if ( *v14 == a2 ) /*0x613f4e*/
        {
          v15 = v14[1]; /*0x613f50*/
          if ( v15 ) /*0x613f55*/
          {
            if ( OblivionDynamicCast( /*0x613f67*/
                   *(void **)(v15 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v16, *(this + 0x1F)); /*0x613f79*/
              *(this + 0x1F) = 0; /*0x613f7e*/
            }
          }
        }
      }
      v17 = (_DWORD *)*(this + 0x20); /*0x613f81*/
      if ( v17 ) /*0x613f89*/
      {
        if ( *v17 == a2 ) /*0x613f8d*/
        {
          v18 = v17[1]; /*0x613f8f*/
          if ( v18 ) /*0x613f94*/
          {
            if ( OblivionDynamicCast( /*0x613fa6*/
                   *(void **)(v18 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v19, *(this + 0x20)); /*0x613fbb*/
              *(this + 0x20) = 0; /*0x613fc0*/
            }
          }
        }
      }
      v20 = (_DWORD *)*(this + 0x21); /*0x613fc6*/
      if ( v20 ) /*0x613fce*/
      {
        if ( *v20 == a2 ) /*0x613fd2*/
        {
          v21 = v20[1]; /*0x613fd4*/
          if ( v21 ) /*0x613fd9*/
          {
            if ( OblivionDynamicCast( /*0x613feb*/
                   *(void **)(v21 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, *(this + 0x21), *(this + 0x21)); /*0x614000*/
              *(this + 0x21) = 0; /*0x614005*/
            }
          }
        }
      }
      v22 = (_DWORD *)*(this + 0x22); /*0x61400b*/
      if ( v22 ) /*0x614013*/
      {
        if ( v20 == v22 && !*(this + 0x21) ) /*0x614019*/
          *(this + 0x22) = 0; /*0x614021*/
      }
      v23 = (_DWORD *)*(this + 0x22); /*0x614027*/
      if ( v23 ) /*0x61402f*/
      {
        if ( *v23 == a2 ) /*0x614033*/
        {
          v24 = v23[1]; /*0x614035*/
          if ( v24 ) /*0x61403a*/
          {
            if ( OblivionDynamicCast( /*0x61404c*/
                   *(void **)(v24 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v25, *(this + 0x22)); /*0x614061*/
              *(this + 0x22) = 0; /*0x614066*/
            }
          }
        }
      }
      v26 = (_DWORD *)*(this + 0x24); /*0x61406c*/
      if ( v26 ) /*0x614074*/
      {
        if ( *v26 == a2 ) /*0x614078*/
        {
          v27 = v26[1]; /*0x61407a*/
          if ( v27 ) /*0x61407f*/
          {
            if ( OblivionDynamicCast( /*0x614091*/
                   *(void **)(v27 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v28, *(this + 0x24)); /*0x6140a6*/
              *(this + 0x24) = 0; /*0x6140ab*/
            }
          }
        }
      }
      v29 = (_DWORD *)*(this + 0x27); /*0x6140b1*/
      if ( v29 ) /*0x6140b9*/
      {
        if ( *v29 == a2 ) /*0x6140bd*/
        {
          v30 = v29[1]; /*0x6140bf*/
          if ( v30 ) /*0x6140c4*/
          {
            if ( OblivionDynamicCast( /*0x6140d6*/
                   *(void **)(v30 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, *(this + 0x27), *(this + 0x27)); /*0x6140eb*/
              *(this + 0x27) = 0; /*0x6140f0*/
            }
          }
        }
      }
      v31 = (_DWORD *)*(this + 0x26); /*0x6140f6*/
      if ( v31 ) /*0x6140fe*/
      {
        if ( *v31 == a2 ) /*0x614102*/
        {
          v32 = v31[1]; /*0x614104*/
          if ( v32 ) /*0x614109*/
          {
            if ( OblivionDynamicCast( /*0x61411b*/
                   *(void **)(v32 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              sub_613D60(this, v33, *(this + 0x26)); /*0x614130*/
              *(this + 0x26) = 0; /*0x614135*/
            }
          }
        }
      }
      v34 = (_DWORD *)*(this + 0x25); /*0x61413b*/
      if ( v34 ) /*0x614143*/
      {
        if ( *v34 == a2 ) /*0x614147*/
        {
          v35 = v34[1]; /*0x614149*/
          if ( v35 ) /*0x61414e*/
          {
            if ( OblivionDynamicCast( /*0x614160*/
                   *(void **)(v35 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectBOOK `RTTI Type Descriptor',
                   0) )
            {
              goto LABEL_75; /*0x61416a*/
            }
          }
        }
      }
    }
  }
}
