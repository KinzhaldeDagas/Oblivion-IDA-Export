// Pass225/226: NiScreenTexture copy helper; copies records, smart-copies +0x14 texturing property, and preserves +0x18 pending mask.
__int16 __thiscall sub_73E150(unsigned int *this, unsigned int *a2, _DWORD **a3)
{
  unsigned int *v3; // ebx
  int v5; // eax
  __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // dx
  __int16 v9; // cx
  __int16 v10; // dx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v21; // [esp+Ch] [ebp-20h]
  _DWORD v22[7]; // [esp+10h] [ebp-1Ch] BYREF
  int v23; // [esp+34h] [ebp+8h]

  v3 = a2; /*0x73e158*/
  sub_700770(this, (int)a2, a3); /*0x73e162*/
  v21 = 0; /*0x73e16c*/
  if ( *(this + 4) ) /*0x73e169*/
  {
    v23 = 0; /*0x73e179*/
    do /*0x73e228*/
    {
      v5 = v23 + *(this + 2); /*0x73e183*/
      v6 = *(_WORD *)(v5 + 2); /*0x73e18a*/
      LOWORD(v22[0]) = *(_WORD *)v5; /*0x73e18e*/
      v7 = *(_WORD *)(v5 + 4); /*0x73e193*/
      HIWORD(v22[0]) = v6; /*0x73e197*/
      v8 = *(_WORD *)(v5 + 6); /*0x73e19c*/
      LOWORD(v22[1]) = v7; /*0x73e1a0*/
      v9 = *(_WORD *)(v5 + 8); /*0x73e1a5*/
      HIWORD(v22[1]) = v8; /*0x73e1a9*/
      v10 = *(_WORD *)(v5 + 0xA); /*0x73e1ae*/
      LOWORD(v22[2]) = v9; /*0x73e1b2*/
      v11 = *(_DWORD *)(v5 + 0xC); /*0x73e1b7*/
      HIWORD(v22[2]) = v10; /*0x73e1ba*/
      v12 = *(_DWORD *)(v5 + 0x10); /*0x73e1bf*/
      v22[3] = v11; /*0x73e1c2*/
      v13 = *(_DWORD *)(v5 + 0x14); /*0x73e1c6*/
      v22[4] = v12; /*0x73e1c9*/
      v14 = *(_DWORD *)(v5 + 0x18); /*0x73e1cd*/
      v15 = a2[3]; /*0x73e1d0*/
      v16 = a2[4] == v15; /*0x73e1d3*/
      v22[5] = v13; /*0x73e1d6*/
      v22[6] = v14; /*0x73e1da*/
      if ( v16 ) /*0x73e1de*/
      {
        if ( v15 ) /*0x73e1e2*/
          v17 = 2 * v15; /*0x73e1e4*/
        else
          v17 = 1; /*0x73e1e8*/
        sub_73DD70(a2 + 2, v17); /*0x73e1f0*/
      }
      v23 += 0x1C; /*0x73e1fa*/
      qmemcpy((void *)(a2[2] + 0x1C * a2[4]++), v22, 0x1Cu); /*0x73e218*/
      ++v21; /*0x73e224*/
    }
    while ( v21 < *(this + 4) ); /*0x73e228*/
    v3 = a2; /*0x73e22e*/
  }
  v18 = v3[5]; /*0x73e233*/
  if ( v18 == *(this + 5) ) /*0x73e239*/
  {
    LOWORD(v19) = *((_WORD *)this + 0xC); /*0x73e291*/
    *((_WORD *)v3 + 0xC) = v19;                 // Pass226: NiScreenTexture copy helper stores preserved +0x18 mask after record/property copy. /*0x73e297*/
  }
  else
  {
    if ( v18 ) /*0x73e23d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x73e243*/
        (**(void (__thiscall ***)(unsigned int, int))v18)(v18, 1); /*0x73e259*/
    }
    v19 = *(this + 5); /*0x73e25b*/
    v3[5] = v19; /*0x73e260*/
    if ( v19 ) /*0x73e263*/
      LOWORD(v19) = InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x73e269*/
    *((_WORD *)v3 + 0xC) = *((_WORD *)this + 0xC);// Pass226: NiScreenTexture copy helper copies source +0x18 pending mask to destination. /*0x73e275*/
  }
  return v19; /*0x73e273*/
}
