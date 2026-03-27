void __thiscall sub_67AB40(int *this, int a2)
{
  int *v2; // ebp
  int v3; // esi
  bool v4; // zf
  char v5; // bl
  volatile LONG *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi
  _DWORD *v8; // eax
  int v9; // eax
  int *v10; // edi
  volatile LONG *v11; // [esp-4h] [ebp-28h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int *v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+18h] [ebp-Ch]
  int v15[2]; // [esp+1Ch] [ebp-8h] BYREF

  v12 = 0;
  if ( a2 )
  {
    v2 = this + 0x10;
    if ( !sub_677CA0(this + 0x10) )
    {
      v13 = 0;
      while ( v2 )
      {
        if ( v2[1] )
        {
          v3 = v14;
        }
        else
        {
          v12 |= 1u;
          v3 = 0;
          v4 = *v2 == 0;
          v14 = 0;
          if ( v4 )
          {
            v5 = 1;
            goto LABEL_9;
          }
        }
        v5 = 0;
LABEL_9:
        if ( (v12 & 1) != 0 )
        {
          v12 &= ~1u;
          if ( v3 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
              (**(void (__thiscall ***)(int, int))v3)(v3, 1);
          }
        }
        if ( v5 )
          return;
        v6 = (volatile LONG *)*sub_677C70(v2, v15);
        if ( v15[0] )
        {
          v7 = (void (__thiscall ***)(_DWORD, int))v15[0];
          if ( !InterlockedDecrement((volatile LONG *)(v15[0] + 4)) )
            (**v7)(v7, 1);
        }
        if ( (*(int (__thiscall **)(volatile LONG *))(*v6 + 0x54))(v6) )
        {
          if ( (*(int (__thiscall **)(volatile LONG *))(*v6 + 0x54))(v6) != 1 )
            goto LABEL_27;
          v8 = OblivionDynamicCast(
                 (void *)v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSTempEffect `RTTI Type Descriptor',
                 &BSTempEffectGeometryDecal `RTTI Type Descriptor',
                 0);
        }
        else
        {
          v8 = OblivionDynamicCast(
                 (void *)v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSTempEffect `RTTI Type Descriptor',
                 (struct TypeDescriptor *)&BSTempEffectDecal `RTTI Type Descriptor',
                 0);
        }
        if ( v8 )
        {
          v9 = v8[6];
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 0x48) == a2 )
            {
              v10 = v13;
              if ( v13 )
              {
                v11 = v6;
                v15[1] = (int)&v11;
                InterlockedIncrement(v6 + 1);
                sub_67A760((Ni2DBuffer **)v10, (int)v11);
                v2 = (int *)v10[1];
              }
              else
              {
                sub_67A850(v2);
              }
              continue;
            }
          }
        }
LABEL_27:
        v13 = v2;
        v2 = (int *)v2[1];
      }
    }
  }
}
