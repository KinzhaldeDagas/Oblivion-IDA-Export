void __thiscall __noreturn sub_6EF660(_DWORD *this, int a2, int a3, unsigned int end, float *begin)
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
  char v20[48]; // [esp+20h] [ebp-48h] BYREF
  int v21; // [esp+50h] [ebp-18h]
  _DWORD *v22; // [esp+54h] [ebp-14h]
  float *v23; // [esp+58h] [ebp-10h]
  unsigned int v24; // [esp+64h] [ebp-4h]

  v23 = v19; /*0x6ef688*/
  v22 = this; /*0x6ef68d*/
  v6 = begin[1]; /*0x6ef693*/
  v7 = begin[2]; /*0x6ef698*/
  v19[4] = *begin; /*0x6ef69b*/
  v19[5] = v6; /*0x6ef6aa*/
  v8 = begin[3]; /*0x6ef6ad*/
  v19[6] = v7; /*0x6ef6b5*/
  v19[7] = v8; /*0x6ef6bd*/
  `eh vector copy constructor iterator'( /*0x6ef6c0*/
    v20,
    (char *)begin + 0x10,
    0x10u,
    3,
    (void (__thiscall *)(void *, void *))sub_557340,
    (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
  v9 = *(this + 1); /*0x6ef6c5*/
  v10 = 0; /*0x6ef6c8*/
  v24 = 0; /*0x6ef6cc*/
  if ( v9 ) /*0x6ef6cf*/
    v11 = (*(this + 3) - v9) >> 6; /*0x6ef6da*/
  else
    v11 = 0; /*0x6ef6d1*/
  if ( end ) /*0x6ef6e2*/
  {
    if ( v9 ) /*0x6ef6ea*/
      v10 = (*(this + 2) - v9) >> 6; /*0x6ef6f1*/
    if ( 0x3FFFFFF - v10 < end ) /*0x6ef6fd*/
      OB_stVector_ThrowLengthError_010201A0(end); /*0x6ef6ff*/
    if ( v9 ) /*0x6ef706*/
      v12 = (*(this + 2) - v9) >> 6; /*0x6ef711*/
    else
      v12 = 0; /*0x6ef708*/
    if ( v11 < end + v12 ) /*0x6ef718*/
    {
      if ( 0x3FFFFFF - (v11 >> 1) >= v11 ) /*0x6ef72b*/
        v13 = (char *)((v11 >> 1) + v11); /*0x6ef731*/
      else
        v13 = 0; /*0x6ef72d*/
      if ( v9 ) /*0x6ef735*/
        v14 = (*(this + 2) - v9) >> 6; /*0x6ef740*/
      else
        v14 = 0; /*0x6ef737*/
      if ( (unsigned int)v13 < end + v14 ) /*0x6ef747*/
      {
        if ( v9 ) /*0x6ef74b*/
          v15 = (*(this + 2) - v9) >> 6; /*0x6ef756*/
        else
          v15 = 0; /*0x6ef74d*/
        v13 = (char *)(end + v15); /*0x6ef759*/
      }
      v16 = sub_556350(v13); /*0x6ef75e*/
      v17 = *(this + 1); /*0x6ef763*/
      LOBYTE(v21) = 0; /*0x6ef766*/
      LOBYTE(v24) = 1; /*0x6ef77f*/
      sub_557A10(v17, a3, (int)v16); /*0x6ef783*/
    }
    v18 = *(this + 2); /*0x6ef831*/
    v21 = v18; /*0x6ef840*/
    if ( (v18 - a3) >> 6 < end ) /*0x6ef843*/
      sub_559980(this, a3, v18, a3 + (end << 6)); /*0x6ef854*/
    sub_559980(this, v18 - (end << 6), v18, v18); /*0x6ef8cc*/
  }
  v24 = 0xFFFFFFFF; /*0x6ef8ff*/
  _LN21(v20, 0x10u, 3, (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0); /*0x6ef906*/
}
