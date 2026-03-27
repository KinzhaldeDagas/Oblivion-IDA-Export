void __thiscall sub_67A8C0(int *this, TESObjectCELL *a2)
{
  bool v2; // zf
  int *v3; // esi
  TESObjectCELL *v4; // edi
  char v5; // bl
  int v6; // edi
  char v7; // bl
  int v8; // edi
  void (__thiscall ***v9)(_DWORD, int); // ebp
  int *v10; // ebx
  int *v11; // esi
  TESObjectCELL *v12; // edi
  char v13; // bl
  int *v14; // edi
  char v15; // bl
  int v16; // edi
  void (__thiscall ***v17)(_DWORD, int); // ebp
  int *v18; // ebx
  int v19[5]; // [esp+0h] [ebp-2Ch] BYREF
  int v20; // [esp+14h] [ebp-18h]
  int *v21; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  int *v24; // [esp+24h] [ebp-8h]
  int *v25; // [esp+28h] [ebp-4h]

  v2 = *(this + 0x11) == 0;
  v3 = this + 0x10;
  v24 = this;
  v20 = 0;
  if ( v2 )
  {
    v4 = 0;
    v2 = *v3 == 0;
    v20 = 1;
    if ( v2 )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = a2;
  }
  v5 = 0;
LABEL_6:
  if ( (v20 & 1) != 0 )
  {
    v20 &= ~1u;
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        ((void (__thiscall *)(TESObjectCELL *, int))v4->vtbl->super.InitializeComponent)(v4, 1);
    }
  }
  if ( !v5 )
  {
    v21 = 0;
    if ( v3 )
    {
      while ( !v3[1] )
      {
        v20 |= 2u;
        v6 = 0;
        v2 = *v3 == 0;
        v22 = 0;
        if ( !v2 )
          goto LABEL_16;
        v7 = 1;
LABEL_17:
        if ( (v20 & 2) != 0 )
        {
          v20 &= ~2u;
          if ( v6 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
              (**(void (__thiscall ***)(int, int))v6)(v6, 1);
          }
        }
        if ( !v7 )
        {
          v8 = *sub_677C70(v3, &v23);
          if ( v23 )
          {
            v9 = (void (__thiscall ***)(_DWORD, int))v23;
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              (**v9)(v9, 1);
          }
          if ( *(TESObjectCELL **)(v8 + 0xC) == a2 )
          {
            v10 = v21;
            if ( v21 )
            {
              v19[0] = v8;
              v25 = v19;
              InterlockedIncrement((volatile LONG *)(v8 + 4));
              sub_67A760((Ni2DBuffer **)v10, v19[0]);
              v3 = (int *)v10[1];
            }
            else
            {
              sub_67A850(v3);
            }
          }
          else
          {
            v21 = v3;
            v3 = (int *)v3[1];
          }
          if ( v3 )
            continue;
        }
        goto LABEL_31;
      }
      v6 = v22;
LABEL_16:
      v7 = 0;
      goto LABEL_17;
    }
  }
LABEL_31:
  v11 = v24 + 0x12;
  if ( v24[0x13] )
  {
    v12 = a2;
  }
  else
  {
    v20 |= 4u;
    v12 = 0;
    if ( !*v11 )
    {
      v13 = 1;
      goto LABEL_36;
    }
  }
  v13 = 0;
LABEL_36:
  if ( (v20 & 4) != 0 )
  {
    v20 &= ~4u;
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v12->members) )
        ((void (__thiscall *)(TESObjectCELL *, int))v12->vtbl->super.InitializeComponent)(v12, 1);
    }
  }
  if ( !v13 )
  {
    v21 = 0;
    if ( v11 )
    {
      while ( !v11[1] )
      {
        v20 |= 8u;
        v14 = 0;
        v2 = *v11 == 0;
        v24 = 0;
        if ( !v2 )
          goto LABEL_46;
        v15 = 1;
LABEL_47:
        if ( (v20 & 8) != 0 )
        {
          v20 &= ~8u;
          if ( v14 )
          {
            if ( !InterlockedDecrement(v14 + 1) )
              (*(void (__thiscall **)(int *, int))*v14)(v14, 1);
          }
        }
        if ( !v15 )
        {
          v16 = *sub_677C70(v11, &v23);
          if ( v23 )
          {
            v17 = (void (__thiscall ***)(_DWORD, int))v23;
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              (**v17)(v17, 1);
          }
          if ( *(TESObjectCELL **)(v16 + 0xC) == a2 )
          {
            v18 = v21;
            if ( v21 )
            {
              v19[0] = v16;
              v25 = v19;
              InterlockedIncrement((volatile LONG *)(v16 + 4));
              sub_67A760((Ni2DBuffer **)v18, v19[0]);
              v11 = (int *)v18[1];
            }
            else
            {
              sub_67A850(v11);
            }
          }
          else
          {
            v21 = v11;
            v11 = (int *)v11[1];
          }
          if ( v11 )
            continue;
        }
        return;
      }
      v14 = v24;
LABEL_46:
      v15 = 0;
      goto LABEL_47;
    }
  }
}
