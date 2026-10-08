int **__thiscall sub_4A0630(int ***this, int **a2, int **a3)
{
  int *v4; // ebp
  int **v6; // edx
  int *v7; // eax
  int v8; // edi

  v4 = *a3; /*0x4a0662*/
  if ( *a3 == (int *)*(this + 1) ) /*0x4a0667*/
  {
    *a3 = (int *)*v4; /*0x4a0670*/
    sub_4A0480(this, a2); /*0x4a0675*/
    return a2; /*0x4a067a*/
  }
  else if ( v4 == (int *)*(this + 2) ) /*0x4a0694*/
  {
    *a3 = 0; /*0x4a069a*/
    sub_4A0510(this, a2); /*0x4a06a3*/
    return a2; /*0x4a06a8*/
  }
  else
  {
    v6 = (int **)v4[1]; /*0x4a06bf*/
    v7 = (int *)*v4; /*0x4a06c4*/
    *a3 = (int *)*v4; /*0x4a06c7*/
    if ( v6 ) /*0x4a06c9*/
      *v6 = v7; /*0x4a06cb*/
    if ( v7 ) /*0x4a06cf*/
      v7[1] = (int)v6; /*0x4a06d1*/
    v8 = v4[2]; /*0x4a06d4*/
    if ( v8 ) /*0x4a06dd*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x4a06e3*/
    ((void (__thiscall *)(int ***, int *))(*this)[2])(this, v4); /*0x4a06f9*/
    *(this + 3) = (int **)((char *)*(this + 3) + 0xFFFFFFFF); /*0x4a06fb*/
    *a2 = (int *)v8; /*0x4a0705*/
    if ( v8 ) /*0x4a0707*/
    {
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x4a070d*/
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x4a0728*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x4a073a*/
    }
    return a2; /*0x4a073c*/
  }
}
