void __userpurge sub_441D50(
        int a1@<ecx>,
        double st7_0@<st0>,
        double st5_0@<st2>,
        double st4_0@<st3>,
        double a5@<st1>,
        double a6@<st5>,
        double a7@<st6>,
        double a8@<st4>,
        double a9@<st7>,
        int a10@<ebp>,
        char a11,
        int a12)
{
  _DWORD *v13; // ecx
  unsigned int v14; // ecx
  unsigned int i; // eax
  unsigned int v16; // edi
  int *GridEntry; // eax
  int *v18; // ebp
  TESObjectCELL *v19; // esi
  int *v20; // ecx
  int v21; // eax
  float a2; // [esp+0h] [ebp-10h]
  int v24; // [esp+Ch] [ebp-4h]

  if ( g_TESDataHandler ) /*0x441d51*/
  {
    v13 = (_DWORD *)MEMORY[0xB35C24]; /*0x441d61*/
    if ( MEMORY[0xB35C24] ) /*0x441d61*/
    {
      if ( a11 ) /*0x441d70*/
        sub_889E10(v13); /*0x441d72*/
      else
        sub_889E00(v13); /*0x441d79*/
    }
    v14 = uGridsToLoad; /*0x441d7e*/
    for ( i = 0; ; ++i ) /*0x441d86*/
    {
      v24 = i; /*0x441d8b*/
      if ( i >= v14 ) /*0x441d8f*/
        break; /*0x441d8f*/
      v16 = 0; /*0x441d95*/
      while ( v16 < v14 ) /*0x441d99*/
      {
        GridEntry = (int *)GetGridEntry(*(GridCellArray **)(a1 + 8), i, v16); /*0x441da0*/
        v18 = GridEntry; /*0x441daa*/
        v19 = (TESObjectCELL *)*GridEntry; /*0x441dac*/
        if ( a11 ) /*0x441daf*/
        {
          if ( v19 ) /*0x441db3*/
          {
            if ( v19->members.cellProcessLevel == 6 ) /*0x441db9*/
              sub_4D6450(*GridEntry, st5_0, a5, st7_0); /*0x441dbd*/
          }
          sub_499FF0((_DWORD *)v18[1]); /*0x441dc5*/
          v14 = uGridsToLoad; /*0x441dca*/
          i = v24; /*0x441dd0*/
          ++v16; /*0x441dd4*/
        }
        else
        {
          if ( v19 ) /*0x441ddb*/
          {
            if ( v19->members.cellProcessLevel == 3 ) /*0x441de1*/
            {
              sub_482390(*(_DWORD **)(a1 + 8), st5_0, a5, st7_0, *(_DWORD *)(a1 + 0xC), v24, v16); /*0x441df0*/
              sub_4D5BD0(v19, a5, st7_0, st5_0, st4_0, a8, a6, a7, a9, (char)v18, 0); /*0x441df9*/
            }
          }
          v14 = uGridsToLoad; /*0x441dfe*/
          i = v24; /*0x441e04*/
          ++v16; /*0x441e08*/
        }
      }
    }
    v20 = (int *)MEMORY[0xB35C24]; /*0x441e15*/
    if ( MEMORY[0xB35C24] ) /*0x441e15*/
    {
      if ( !a11 ) /*0x441e29*/
      {
        sub_88D1D0(v20, a10, 0); /*0x441e6a*/
        goto LABEL_24; /*0x441e6f*/
      }
      sub_88BD60((unsigned int *)v20, 0); /*0x441e2b*/
    }
    if ( a11 ) /*0x441e35*/
    {
LABEL_26:
      v21 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 0x1C); /*0x441e52*/
      if ( v21 ) /*0x441e5a*/
      {
        if ( a11 ) /*0x441e61*/
          *(_WORD *)(v21 + 0x18) |= 1u; /*0x441e63*/
        else
          *(_WORD *)(v21 + 0x18) &= ~1u; /*0x441e71*/
      }
      __asm { fldz } /*0x441e77*/
      __asm { fstp    [esp+10h+a2]; a2 }
      NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x10), a2, 0); /*0x441e82*/
      return; /*0x441e82*/
    }
LABEL_24:
    sub_677360((int)&qword_B3BB2C[0x75]); /*0x441e37*/
    if ( byte_B0703C ) /*0x441e41*/
      WaterSurfaceLoop(*(float *)(a1 + 0x54), st7_0); /*0x441e4d*/
    goto LABEL_26; /*0x441e4d*/
  }
}
