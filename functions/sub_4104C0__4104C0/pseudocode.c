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

  if ( !*this && !sub_410160((int *)this, ArgList, a3, a4, 0) )
    return 0;
  v6 = LOBYTE(a5);
  v7 = (FreeEntry **)*this;
  *(this + 1) = *(signed int **)(dword_B350D8 + 0x280);
  if ( LOBYTE(a5) )
  {
    v8 = (double)nWidth;
    v9 = *v7;
    v10 = (double)(int)*v7;
  }
  else
  {
    v8 = (double)nHeight;
    v9 = v7[1];
    v10 = (double)(int)v9;
  }
  if ( (int)v9 < 0 )
    v10 = v10 + 4294967300.0;
  v16 = v8 / v10;
  v11 = v16;
  *((float *)this + 5) = v16;
  if ( v6 )
    v17 = 0.0;
  else
    v17 = ((double)nWidth - (double)(unsigned int)*v7 * v11) * 0.5;
  *((float *)this + 6) = v17;
  if ( v6 )
    v12 = ((double)nHeight - v11 * (double)(unsigned int)v7[1]) * 0.5;
  else
    v12 = 0.0;
  v13 = (FreeEntry *)*(this + 1);
  v18 = v12;
  *((float *)this + 7) = v18;
  v14 = (signed int *)sub_40FEE0(v13, *v7, v7[1], (FreeEntry *)4, (FreeEntry *)0x100, (FreeEntry *)0x16);
  *(this + 2) = v14;
  if ( !v14 )
  {
    if ( !a3 )
      PrintError("Could not allocate textures for %s playback.", ArgList);
    *(this + 8) = 0;
    return 0;
  }
  return 1;
}
