// Create/reposition the two persistent anchors and partition active lights by native transition/source-visibility state.
void __thiscall sub_7C6DE0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int **v7; // eax
  int *v8; // esi
  int v9; // edi
  int *v10; // ecx
  int *v11; // eax
  int **v12; // eax
  bool v13; // bl
  void (__thiscall ***v14)(_DWORD, int); // ebp
  int v15; // [esp+4h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  v2 = this; /*0x7c6de4*/
  v3 = (_DWORD *)*(this + 0x43); /*0x7c6de6*/
  v15 = 0; /*0x7c6df2*/
  v4 = this + 0x3D; /*0x7c6dfa*/
  if ( v3 ) /*0x7c6e00*/
  {
    NiTPointerList_MoveNodeBefore(v4, v3, (_DWORD *)v2[0x3E]); /*0x7c6e24*/
  }
  else
  {
    sub_749800(v4, v2 + 0x45); /*0x7c6e09*/
    v2[0x43] = v2[0x3E]; /*0x7c6e14*/
  }
  v5 = (_DWORD *)v2[0x42]; /*0x7c6e29*/
  v6 = v2 + 0x3D; /*0x7c6e31*/
  if ( v5 ) /*0x7c6e37*/
  {
    NiTPointerList_MoveNodeBefore(v6, v5, (_DWORD *)v2[0x3E]); /*0x7c6e5b*/
  }
  else
  {
    sub_749800(v6, v2 + 0x44); /*0x7c6e40*/
    v2[0x42] = v2[0x3E]; /*0x7c6e4b*/
  }
  v7 = (int **)v2[0x43]; /*0x7c6e60*/
  if ( v7 ) /*0x7c6e68*/
  {
    v8 = *v7; /*0x7c6e6f*/
    if ( *v7 ) /*0x7c6e6f*/
    {
      while ( 1 ) /*0x7c6e84*/
      {
        v9 = v8[2];                             // Pre-projection partition uses transition +0xDC/+0xE0 and backing-light cull state, not projector-branch transform. /*0x7c6e84*/
        v17 = *v8; /*0x7c6e8e*/
        if ( v9 ) /*0x7c6e92*/
        {
          if ( *(float *)(v9 + 0xDC) > dbl_A2FC80 || flt_B2C680 <= (double)*(float *)(v9 + 0xE0) ) /*0x7c6ebe*/
          {
            v15 |= 1u; /*0x7c6f38*/
            v13 = (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v9, &v18) + 0x18) & 1) == 0 /*0x7c6f6f*/
               && (*(float *)(v9 + 0xDC) < dbl_A6E700 || flt_B2C680 <= (double)*(float *)(v9 + 0xE0));
            if ( (v15 & 1) != 0 ) /*0x7c6f76*/
            {
              v15 &= ~1u; /*0x7c6f7c*/
              if ( v18 ) /*0x7c6f83*/
              {
                v14 = (void (__thiscall ***)(_DWORD, int))v18; /*0x7c6f85*/
                if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7c6f8b*/
                  (**v14)(v14, 1); /*0x7c6fa2*/
                v2 = this; /*0x7c6fa4*/
              }
            }
            if ( v13 ) /*0x7c6faa*/
            {
              if ( v9 == a2 ) /*0x7c6fb0*/
                NiTPointerList_MoveNodeAfter(v2 + 0x3D, v8, (int *)v2[0x42]); /*0x7c6fc0*/
              else
                NiTPointerList_MoveNodeBefore(v2 + 0x3D, v8, (_DWORD *)v2[0x43]); /*0x7c6fd5*/
            }
          }
          else
          {
            v10 = (int *)v2[0x42]; /*0x7c6ec0*/
            if ( v8 != v10 ) /*0x7c6ec8*/
            {
              if ( (int *)v2[0x3E] == v8 ) /*0x7c6ed4*/
                v2[0x3E] = *v8; /*0x7c6ed8*/
              if ( (int *)v2[0x3E] == v10 ) /*0x7c6ee4*/
                v2[0x3E] = v8; /*0x7c6ee6*/
              if ( (int *)v2[0x3F] == v8 ) /*0x7c6ef2*/
                v2[0x3F] = v8[1]; /*0x7c6ef7*/
              if ( *v8 ) /*0x7c6efd*/
                *(_DWORD *)(*v8 + 4) = v8[1]; /*0x7c6f06*/
              v11 = (int *)v8[1]; /*0x7c6f09*/
              if ( v11 ) /*0x7c6f0e*/
                *v11 = *v8; /*0x7c6f12*/
              v12 = (int **)v10[1]; /*0x7c6f14*/
              v8[1] = (int)v12; /*0x7c6f19*/
              *v8 = (int)v10; /*0x7c6f1c*/
              if ( v12 ) /*0x7c6f1e*/
                *v12 = v8; /*0x7c6f20*/
              v10[1] = (int)v8; /*0x7c6f22*/
            }
          }
        }
        if ( !v17 ) /*0x7c6fdf*/
          break; /*0x7c6fdf*/
        v8 = (int *)v17; /*0x7c6e80*/
      }
    }
  }
}
