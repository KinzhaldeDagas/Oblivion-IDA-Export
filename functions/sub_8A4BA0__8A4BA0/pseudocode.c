int *__thiscall sub_8A4BA0(int *this)
{
  int *result; // eax
  NodeVoid *v3; // edi
  bool v4; // bl
  void (__thiscall ***v5)(void *, int); // esi
  void *v6; // esi
  int v7; // edi
  NiRTTI *v8; // eax
  char v9; // al
  void (__thiscall ***v10)(void *, int); // esi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  bhkRefObject *v14; // eax
  bhkRefObject *v15; // esi
  int v16; // [esp+20h] [ebp-28h]
  NodeVoid *i; // [esp+24h] [ebp-24h]
  int v18; // [esp+28h] [ebp-20h]
  float v20; // [esp+30h] [ebp-18h]
  void *outData; // [esp+34h] [ebp-14h] BYREF
  void *v22; // [esp+38h] [ebp-10h] BYREF
  unsigned int v23; // [esp+44h] [ebp-4h]

  result = (int *)((unsigned int)*(this + 6) >> 2); /*0x8a4bd2*/
  v16 = 0; /*0x8a4bd7*/
  if ( (*(this + 6) & 4) == 0 )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x8a4be6*/
    v18 = result ? result[0xAC] : 0;
    if ( v18 )
    {
      v3 = (NodeVoid *)(this + 4); /*0x8a4c06*/
      for ( i = v3; ; v3 = i )
      {
        v4 = 0; /*0x8a4c2d*/
        if ( v3 ) /*0x8a4c16*/
        {
          v16 |= 1u; /*0x8a4c24*/
          if ( *NodeVoid_GetDataAddRef(v3, &outData) ) /*0x8a4c29*/
            v4 = 1; /*0x8a4c16*/
        }
        if ( (v16 & 1) != 0 ) /*0x8a4c38*/
        {
          v5 = (void (__thiscall ***)(void *, int))outData; /*0x8a4c3a*/
          v16 &= ~1u; /*0x8a4c3e*/
          if ( outData ) /*0x8a4c45*/
          {
            if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a4c4b*/
            {
              if ( v5 ) /*0x8a4c57*/
                (**v5)(v5, 1); /*0x8a4c61*/
            }
          }
        }
        if ( !v4 ) /*0x8a4c65*/
          break; /*0x8a4c65*/
        v6 = *NodeVoid_GetDataAddRef(v3, &v22); /*0x8a4c77*/
        v23 = 0; /*0x8a4c7b*/
        if ( v6 )
        {
          v8 = (NiRTTI *)(*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 4))(v6); /*0x8a4c8c*/
          if ( v8 ) /*0x8a4c90*/
          {
            while ( v8 != &MEMORY[0xBA7D50] ) /*0x8a4c97*/
            {
              v8 = v8->parent; /*0x8a4c99*/
              if ( !v8 ) /*0x8a4c9e*/
                goto LABEL_23; /*0x8a4c9e*/
            }
            v9 = 1; /*0x8a4d06*/
          }
          else
          {
LABEL_23:
            v9 = 0; /*0x8a4ca0*/
          }
          v7 = v9 != 0 ? (unsigned int)v6 : 0;
        }
        else
        {
          v7 = 0; /*0x8a4c81*/
        }
        v10 = (void (__thiscall ***)(void *, int))v22; /*0x8a4caa*/
        v23 = 0xFFFFFFFF; /*0x8a4cb0*/
        if ( v22 ) /*0x8a4cb8*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v22 + 1) ) /*0x8a4cbe*/
          {
            if ( v10 ) /*0x8a4cca*/
              (**v10)(v10, 1); /*0x8a4cd4*/
          }
        }
        i = i->next; /*0x8a4cdf*/
        if ( v7 ) /*0x8a4ce3*/
        {
          v11 = *(this + 2); /*0x8a4cef*/
          v20 = 1.0; /*0x8a4cf2*/
          if ( v11 && (v12 = v11 + 0x14) != 0 ) /*0x8a4cff*/
            v13 = *(_DWORD *)(v12 + 0x1C); /*0x8a4d01*/
          else
            v13 = 0; /*0x8a4d0a*/
          if ( (v13 & 0x3F) == 8 ) /*0x8a4d14*/
          {
            switch ( (v13 >> 8) & 0x1F ) /*0x8a4d2b*/
            {
              case 0x11u: /*0x8a4d2b*/
              case 0x12u: /*0x8a4d2b*/
              case 0x17u: /*0x8a4d2b*/
              case 0x18u: /*0x8a4d2b*/
                v20 = flt_A3744C; /*0x8a4d38*/
                break; /*0x8a4d38*/
              default:
                break;
            }
          }
          v14 = sub_8C22F0(v7, v20); /*0x8a4d3c*/
          v15 = v14; /*0x8a4d4a*/
          if ( v14 ) /*0x8a4d51*/
          {
            sub_8A46C0(this, (volatile LONG *)v14); /*0x8a4d5c*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x60))(v7); /*0x8a4d68*/
            ((void (__thiscall *)(bhkRefObject *, int))v15->__vftable[1].Unk_04)(v15, v18); /*0x8a4d76*/
          }
        }
      }
      *(this + 6) |= 4u; /*0x8a4d81*/
      return this; /*0x8a4d7d*/
    }
  }
  return result; /*0x8a4d85*/
}
