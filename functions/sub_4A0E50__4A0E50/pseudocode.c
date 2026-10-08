int *__thiscall sub_4A0E50(int ***this, int *a2, int *a3)
{
  char v3; // bl
  int *v4; // eax
  int *v5; // ebp
  bool v6; // zf
  int *v7; // esi
  int *v8; // eax
  int **v9; // eax
  int v10; // eax
  int *v11; // esi
  int *v13[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = 0; /*0x4a0e77*/
  v4 = (int *)*(this + 1); /*0x4a0e7d*/
  v5 = a3; /*0x4a0e82*/
  if ( v4 ) /*0x4a0e86*/
  {
    while ( 1 ) /*0x4a0e90*/
    {
      v6 = *a3 == v4[2]; /*0x4a0e90*/
      v7 = v4; /*0x4a0e96*/
      v4 = (int *)*v4; /*0x4a0e98*/
      if ( v6 ) /*0x4a0e9a*/
        break; /*0x4a0e9a*/
      if ( !v4 ) /*0x4a0e9e*/
        goto LABEL_4; /*0x4a0e9e*/
    }
    v8 = v7; /*0x4a0ec0*/
  }
  else
  {
LABEL_4:
    v8 = 0; /*0x4a0ea0*/
  }
  a3 = v8; /*0x4a0ea4*/
  if ( v8 ) /*0x4a0ea8*/
  {
    v9 = sub_4A0630(this, v13, &a3); /*0x4a0eb4*/
    v3 = 1; /*0x4a0eb9*/
  }
  else
  {
    v9 = (int **)v5; /*0x4a0ec4*/
  }
  v10 = (int)*v9; /*0x4a0ec6*/
  *a2 = v10; /*0x4a0ece*/
  if ( v10 ) /*0x4a0ed0*/
    InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x4a0ed6*/
  v13[3] = 0; /*0x4a0ee2*/
  if ( (v3 & 1) != 0 ) /*0x4a0eea*/
  {
    v11 = v13[0]; /*0x4a0eec*/
    if ( v13[0] ) /*0x4a0ef9*/
    {
      if ( !InterlockedDecrement(v13[0] + 1) ) /*0x4a0eff*/
      {
        if ( v11 ) /*0x4a0f0b*/
          (*(void (__thiscall **)(int *, int))*v11)(v11, 1); /*0x4a0f15*/
      }
    }
  }
  return a2; /*0x4a0f19*/
}
