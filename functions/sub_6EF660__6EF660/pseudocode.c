void __thiscall __noreturn sub_6EF660(_DWORD *this, int a2, int a3, unsigned int a4, float *a5)
{
  float v6; // ecx
  float v7; // edx
  float v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // ecx
  char *v13; // ebx
  int v14; // ecx
  int v15; // ebx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  float v19[8]; // [esp+0h] [ebp-68h] BYREF
  _BYTE v20[48]; // [esp+20h] [ebp-48h] BYREF
  int v21; // [esp+50h] [ebp-18h]
  _DWORD *v22; // [esp+54h] [ebp-14h]
  float *v23; // [esp+58h] [ebp-10h]
  unsigned int v24; // [esp+64h] [ebp-4h]

  v23 = v19;
  v22 = this;
  v6 = a5[1];
  v7 = a5[2];
  v19[4] = *a5;
  v19[5] = v6;
  v8 = a5[3];
  v19[6] = v7;
  v19[7] = v8;
  `eh vector copy constructor iterator'(
    v20,
    a5 + 4,
    0x10u,
    3,
    (void (__thiscall *)(void *, void *))sub_557340,
    sub_794EB0);
  v9 = *(this + 1);
  v10 = 0;
  v24 = 0;
  if ( v9 )
    v11 = (*(this + 3) - v9) >> 6;
  else
    v11 = 0;
  if ( a4 )
  {
    if ( v9 )
      v10 = (*(this + 2) - v9) >> 6;
    if ( 0x3FFFFFF - v10 < a4 )
      sub_790B90();
    if ( v9 )
      v12 = (*(this + 2) - v9) >> 6;
    else
      v12 = 0;
    if ( v11 < a4 + v12 )
    {
      if ( 0x3FFFFFF - (v11 >> 1) >= v11 )
        v13 = (char *)((v11 >> 1) + v11);
      else
        v13 = 0;
      if ( v9 )
        v14 = (*(this + 2) - v9) >> 6;
      else
        v14 = 0;
      if ( (unsigned int)v13 < a4 + v14 )
      {
        if ( v9 )
          v15 = (*(this + 2) - v9) >> 6;
        else
          v15 = 0;
        v13 = (char *)(a4 + v15);
      }
      v16 = sub_556350(v13);
      v17 = *(this + 1);
      LOBYTE(v21) = 0;
      LOBYTE(v24) = 1;
      sub_557A10(v17, a3, (int)v16);
    }
    v18 = *(this + 2);
    v21 = v18;
    if ( (v18 - a3) >> 6 < a4 )
      sub_559980(this, a3, v18, a3 + (a4 << 6));
    sub_559980(this, v18 - (a4 << 6), v18, v18);
  }
  v24 = 0xFFFFFFFF;
  _LN21(v20, 0x10u, 3, sub_794EB0);
}
