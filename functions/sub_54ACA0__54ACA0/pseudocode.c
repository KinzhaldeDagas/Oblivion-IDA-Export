void __thiscall sub_54ACA0(int ***this, char a2, char a3, char a4, char a5)
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

  if ( a2 ) /*0x54acac*/
    ((void (__thiscall *)(int ***))(*this)[0x35])(this); /*0x54acb6*/
  if ( a4 ) /*0x54acbf*/
  {
    if ( *(this + 0x1A) ) /*0x54acc1*/
    {
      for ( i = (*(this + 0x18))[2]; i; i = (*(this + 0x18))[2] ) /*0x54acce*/
      {
        (*(void (__thiscall **)(int *, int))*i)(i, 1); /*0x54acd9*/
        v7 = *(this + 0x18); /*0x54acdb*/
        v8 = *v7; /*0x54acde*/
        v9 = *v7 == 0; /*0x54ace0*/
        *(this + 0x18) = (int **)*v7; /*0x54ace2*/
        if ( v9 ) /*0x54ace5*/
          *(this + 0x19) = 0; /*0x54acec*/
        else
          v8[1] = 0; /*0x54ace7*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x17))[2])(this + 0x17, v7); /*0x54acf7*/
        *(this + 0x1A) = (int **)((char *)*(this + 0x1A) + 0xFFFFFFFF); /*0x54acf9*/
        if ( !*(this + 0x1A) ) /*0x54acfc*/
          break; /*0x54acff*/
      }
    }
  }
  if ( a3 ) /*0x54ad0f*/
  {
    if ( *(this + 0x31) ) /*0x54ad11*/
    {
      for ( j = (*(this + 0x2F))[2]; j; j = (*(this + 0x2F))[2] ) /*0x54ad24*/
      {
        (*(void (__thiscall **)(int *, int))*j)(j, 1); /*0x54ad36*/
        v11 = *(this + 0x2F); /*0x54ad38*/
        v12 = *v11; /*0x54ad3b*/
        v9 = *v11 == 0; /*0x54ad3d*/
        *(this + 0x2F) = (int **)*v11; /*0x54ad3f*/
        if ( v9 ) /*0x54ad42*/
          *(this + 0x30) = 0; /*0x54ad49*/
        else
          v12[1] = 0; /*0x54ad44*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x2E))[2])(this + 0x2E, v11); /*0x54ad54*/
        *(this + 0x31) = (int **)((char *)*(this + 0x31) + 0xFFFFFFFF); /*0x54ad56*/
        if ( !*(this + 0x31) ) /*0x54ad59*/
          break; /*0x54ad5f*/
      }
    }
  }
  if ( a5 ) /*0x54ad72*/
  {
    if ( *(this + 0x48) ) /*0x54ad74*/
    {
      for ( k = (*(this + 0x46))[2]; k; k = (*(this + 0x46))[2] ) /*0x54ad87*/
      {
        (*(void (__thiscall **)(int *, int))*k)(k, 1); /*0x54ad96*/
        v14 = *(this + 0x46); /*0x54ad98*/
        v15 = *v14; /*0x54ad9b*/
        v9 = *v14 == 0; /*0x54ad9d*/
        *(this + 0x46) = (int **)*v14; /*0x54ad9f*/
        if ( v9 ) /*0x54ada2*/
          *(this + 0x47) = 0; /*0x54ada9*/
        else
          v15[1] = 0; /*0x54ada4*/
        ((void (__thiscall *)(int ***, int **))(*(this + 0x45))[2])(this + 0x45, v14); /*0x54adb4*/
        *(this + 0x48) = (int **)((char *)*(this + 0x48) + 0xFFFFFFFF); /*0x54adb6*/
        if ( !*(this + 0x48) ) /*0x54adb9*/
          break; /*0x54adbf*/
      }
    }
  }
}
