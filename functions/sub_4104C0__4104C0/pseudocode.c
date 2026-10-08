char __thiscall sub_4104C0(signed int **this, const char *ArgList, char a3, char a4, float a5)
{
  char v6; // cl
  FreeEntry **v7; // eax
  double v8; // st7
  FreeEntry *v9; // edx
  double v10; // st6
  double v11; // st7
  double v12; // st7
  FreeEntry *v13; // ecx
  signed int *v14; // eax
  float v16; // [esp+1Ch] [ebp+10h]
  float v17; // [esp+1Ch] [ebp+10h]
  float v18; // [esp+1Ch] [ebp+10h]

  if ( !*this && !sub_410160((int *)this, ArgList, a3, a4, 0) ) /*0x4104e2*/
    return 0; /*0x4104e2*/
  v6 = LOBYTE(a5); /*0x4104f4*/
  v7 = (FreeEntry **)*this; /*0x4104fa*/
  *(this + 1) = *(signed int **)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x280); /*0x4104fc*/
  if ( LOBYTE(a5) ) /*0x4104ff*/
  {
    v8 = (double)nWidth; /*0x410501*/
    v9 = *v7; /*0x410507*/
    v10 = (double)(int)*v7; /*0x410509*/
  }
  else
  {
    v8 = (double)nHeight; /*0x41050d*/
    v9 = v7[1]; /*0x410513*/
    v10 = (double)(int)v9; /*0x410516*/
  }
  if ( (int)v9 < 0 ) /*0x41051b*/
    v10 = v10 + 4294967300.0; /*0x41051d*/
  v16 = v8 / v10; /*0x410527*/
  v11 = v16; /*0x41052b*/
  *((float *)this + 5) = v16; /*0x41052f*/
  if ( v6 ) /*0x41053a*/
    v17 = 0.0; /*0x41053c*/
  else
    v17 = ((double)nWidth - (double)(unsigned int)*v7 * v11) * 0.5; /*0x41055c*/
  *((float *)this + 6) = v17; /*0x410566*/
  if ( v6 ) /*0x410569*/
    v12 = ((double)nHeight - v11 * (double)(unsigned int)v7[1]) * 0.5; /*0x41058d*/
  else
    v12 = 0.0; /*0x41056b*/
  v13 = (FreeEntry *)*(this + 1); /*0x41058f*/
  v18 = v12; /*0x410592*/
  *((float *)this + 7) = v18; /*0x4105a1*/
  v14 = (signed int *)sub_40FEE0(v13, *v7, v7[1], (FreeEntry *)4, (FreeEntry *)0x100, (FreeEntry *)0x16); /*0x4105ae*/
  *(this + 2) = v14; /*0x4105b8*/
  if ( !v14 ) /*0x4105bb*/
  {
    if ( !a3 ) /*0x4105bf*/
      PrintError("Could not allocate textures for %s playback.", ArgList); /*0x4105c7*/
    *(this + 8) = 0; /*0x4105cf*/
    return 0; /*0x4105db*/
  }
  return 1; /*0x4105d6*/
}
