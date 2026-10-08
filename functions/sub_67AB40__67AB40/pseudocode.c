void __thiscall sub_67AB40(NodeVoid *this, int a2)
{
  NodeVoid *next; // ebp
  int v3; // esi
  bool v4; // zf
  char v5; // bl
  Ni2DBuffer *v6; // esi
  void (__thiscall ***v7)(void *, int); // edi
  _DWORD *v8; // eax
  int v9; // eax
  NodeVoid *v10; // edi
  Ni2DBuffer *v11; // [esp-4h] [ebp-28h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  NodeVoid *v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+18h] [ebp-Ch]
  void *outData[2]; // [esp+1Ch] [ebp-8h] BYREF

  v12 = 0; /*0x67ab4c*/
  if ( a2 ) /*0x67ab54*/
  {
    next = this + 8; /*0x67ab5a*/
    if ( !sub_677CA0((_DWORD *)this + 0x10) ) /*0x67ab5f*/
    {
      v13 = 0; /*0x67ab6e*/
      while ( next ) /*0x67ab76*/
      {
        if ( next->next ) /*0x67ab80*/
        {
          v3 = v14; /*0x67ab9a*/
        }
        else
        {
          v12 |= 1u; /*0x67ab86*/
          v3 = 0; /*0x67ab8b*/
          v4 = next->data == 0; /*0x67ab8d*/
          v14 = 0; /*0x67ab90*/
          if ( v4 ) /*0x67ab94*/
          {
            v5 = 1; /*0x67ab96*/
            goto LABEL_9; /*0x67ab98*/
          }
        }
        v5 = 0; /*0x67ab9e*/
LABEL_9:
        if ( (v12 & 1) != 0 ) /*0x67aba5*/
        {
          v12 &= ~1u; /*0x67aba7*/
          if ( v3 ) /*0x67abae*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x67abb4*/
              (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x67abc6*/
          }
        }
        if ( v5 ) /*0x67abca*/
          return; /*0x67abca*/
        v6 = (Ni2DBuffer *)*NodeVoid_GetDataAddRef(next, outData); /*0x67abdc*/
        if ( outData[0] ) /*0x67abe4*/
        {
          v7 = (void (__thiscall ***)(void *, int))outData[0]; /*0x67abe6*/
          if ( !InterlockedDecrement((volatile LONG *)outData[0] + 1) ) /*0x67abec*/
            (**v7)(v7, 1); /*0x67ac02*/
        }
        if ( (*((int (__thiscall **)(Ni2DBuffer *))v6->__vftable + 0x15))(v6) ) /*0x67ac0b*/
        {
          if ( (*((int (__thiscall **)(Ni2DBuffer *))v6->__vftable + 0x15))(v6) != 1 ) /*0x67ac25*/
            goto LABEL_27; /*0x67ac25*/
          v8 = OblivionDynamicCast( /*0x67ac36*/
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSTempEffect `RTTI Type Descriptor',
                 &BSTempEffectGeometryDecal `RTTI Type Descriptor',
                 0);
        }
        else
        {
          v8 = OblivionDynamicCast( /*0x67ac17*/
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BSTempEffect `RTTI Type Descriptor',
                 (struct TypeDescriptor *)&BSTempEffectDecal `RTTI Type Descriptor',
                 0);
        }
        if ( v8 ) /*0x67ac40*/
        {
          v9 = v8[6]; /*0x67ac42*/
          if ( v9 ) /*0x67ac47*/
          {
            if ( *(_DWORD *)(v9 + 0x48) == a2 ) /*0x67ac50*/
            {
              v10 = v13; /*0x67ac52*/
              if ( v13 ) /*0x67ac58*/
              {
                v11 = v6; /*0x67ac5d*/
                outData[1] = &v11; /*0x67ac5f*/
                InterlockedIncrement((volatile LONG *)&v6->members); /*0x67ac67*/
                sub_67A760((Ni2DBuffer **)v10, v11); /*0x67ac6f*/
                next = v10->next; /*0x67ac74*/
              }
              else
              {
                sub_67A850((int *)next); /*0x67ac7b*/
              }
              continue; /*0x67ac77*/
            }
          }
        }
LABEL_27:
        v13 = next; /*0x67ac82*/
        next = next->next; /*0x67ac86*/
      }
    }
  }
}
