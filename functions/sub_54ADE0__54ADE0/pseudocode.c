void __thiscall sub_54ADE0(int ***this, char a2, char a3, char a4, char a5)
{
  int *i; // ecx
  int **v7; // ecx
  int *v8; // eax
  bool v9; // zf
  int *j; // ecx
  int **v11; // ecx
  int *v12; // eax
  int *k; // ecx
  int **v14; // ecx
  int *v15; // eax
  int *m; // ecx
  int **v17; // ecx
  int *v18; // eax

  if ( a2 ) /*0x54adef*/
  {
    if ( *(this + 0xC) ) /*0x54adf1*/
    {
      for ( i = (*(this + 0xA))[2]; i; i = (*(this + 0xA))[2] ) /*0x54adfe*/
      {
        (*(void (__thiscall **)(int *, int))*i)(i, 1); /*0x54ae09*/
        v7 = *(this + 0xA); /*0x54ae0b*/
        v8 = *v7; /*0x54ae0e*/
        v9 = *v7 == 0; /*0x54ae10*/
        *(this + 0xA) = (int **)*v7; /*0x54ae12*/
        if ( v9 ) /*0x54ae15*/
          *(this + 0xB) = 0; /*0x54ae1c*/
        else
          v8[1] = 0; /*0x54ae17*/
        ((void (__thiscall *)(int ***, int **))(*(this + 9))[2])(this + 9, v7); /*0x54ae27*/
        *(this + 0xC) = (int **)((char *)*(this + 0xC) + 0xFFFFFFFF); /*0x54ae29*/
        if ( !*(this + 0xC) ) /*0x54ae2c*/
          break; /*0x54ae2f*/
      }
    }
  }
  if ( a4 ) /*0x54ae3f*/
  {
    if ( *(this + 0x23) ) /*0x54ae41*/
    {
      for ( j = (*(this + 0x21))[2]; j; j = (*(this + 0x21))[2] ) /*0x54ae54*/
      {
        (*(void (__thiscall **)(int *, int))*j)(j, 1); /*0x54ae66*/
        v11 = *(this + 0x21); /*0x54ae68*/
        v12 = *v11; /*0x54ae6b*/
        v9 = *v11 == 0; /*0x54ae6d*/
        *(this + 0x21) = (int **)*v11; /*0x54ae6f*/
        if ( v9 ) /*0x54ae72*/
          *(this + 0x22) = 0; /*0x54ae79*/
        else
          v12[1] = 0; /*0x54ae74*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x20))[2])(this + 0x20, v11); /*0x54ae84*/
        *(this + 0x23) = (int **)((char *)*(this + 0x23) + 0xFFFFFFFF); /*0x54ae86*/
        if ( !*(this + 0x23) ) /*0x54ae89*/
          break; /*0x54ae8f*/
      }
    }
  }
  if ( a3 ) /*0x54aea2*/
  {
    if ( *(this + 0x3A) ) /*0x54aea4*/
    {
      for ( k = (*(this + 0x38))[2]; k; k = (*(this + 0x38))[2] ) /*0x54aeb7*/
      {
        (*(void (__thiscall **)(int *, int))*k)(k, 1); /*0x54aec6*/
        v14 = *(this + 0x38); /*0x54aec8*/
        v15 = *v14; /*0x54aecb*/
        v9 = *v14 == 0; /*0x54aecd*/
        *(this + 0x38) = (int **)*v14; /*0x54aecf*/
        if ( v9 ) /*0x54aed2*/
          *(this + 0x39) = 0; /*0x54aed9*/
        else
          v15[1] = 0; /*0x54aed4*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x37))[2])(this + 0x37, v14); /*0x54aee4*/
        *(this + 0x3A) = (int **)((char *)*(this + 0x3A) + 0xFFFFFFFF); /*0x54aee6*/
        if ( !*(this + 0x3A) ) /*0x54aee9*/
          break; /*0x54aeef*/
      }
    }
  }
  if ( a5 ) /*0x54af02*/
  {
    if ( *(this + 0x51) ) /*0x54af04*/
    {
      for ( m = (*(this + 0x4F))[2]; m; m = (*(this + 0x4F))[2] ) /*0x54af17*/
      {
        (*(void (__thiscall **)(int *, int))*m)(m, 1); /*0x54af26*/
        v17 = *(this + 0x4F); /*0x54af28*/
        v18 = *v17; /*0x54af2b*/
        v9 = *v17 == 0; /*0x54af2d*/
        *(this + 0x4F) = (int **)*v17; /*0x54af2f*/
        if ( v9 ) /*0x54af32*/
          *(this + 0x50) = 0; /*0x54af39*/
        else
          v18[1] = 0; /*0x54af34*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x4E))[2])(this + 0x4E, v17); /*0x54af44*/
        *(this + 0x51) = (int **)((char *)*(this + 0x51) + 0xFFFFFFFF); /*0x54af46*/
        if ( !*(this + 0x51) ) /*0x54af49*/
          break; /*0x54af4f*/
      }
    }
  }
}
