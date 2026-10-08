_DWORD *__thiscall sub_6F8210(int this, _DWORD *a2, int a3, int Origin, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  int v10; // ecx
  fpos_t Pos; // [esp+10h] [ebp-8h] BYREF

  v6 = this + 0x40; /*0x6f8220*/
  if ( **(_DWORD **)(this + 0x20) == this + 0x40 && Origin == 1 && !*(_DWORD *)(this + 0x3C) ) /*0x6f822c*/
    v7 = a3 - 1; /*0x6f8236*/
  else
    v7 = a3; /*0x6f823a*/
  if ( !*(_DWORD *)(this + 0x4C) /*0x6f8275*/
    || !sub_6F7AB0((_DWORD *)this)
    || (v7 || Origin != 1) && fseek(*(FILE **)(this + 0x4C), v7, Origin)
    || fgetpos(*(FILE **)(this + 0x4C), &Pos) )
  {
    *a2 = dword_AA3E5C; /*0x6f82d8*/
    a2[2] = 0; /*0x6f82da*/
    a2[3] = 0; /*0x6f82dd*/
    a2[4] = 0; /*0x6f82e0*/
    return a2; /*0x6f82c9*/
  }
  else
  {
    if ( **(_DWORD **)(this + 0x20) == v6 ) /*0x6f8286*/
    {
      **(_DWORD **)(this + 0x10) = v6; /*0x6f828b*/
      **(_DWORD **)(this + 0x20) = this + 0x41; /*0x6f8297*/
      **(_DWORD **)(this + 0x30) = 0; /*0x6f829f*/
    }
    v9 = HIDWORD(Pos); /*0x6f82a9*/
    a2[2] = Pos; /*0x6f82ae*/
    v10 = *(_DWORD *)(this + 0x44); /*0x6f82b1*/
    *a2 = 0; /*0x6f82b6*/
    a2[3] = v9; /*0x6f82bc*/
    a2[4] = v10; /*0x6f82bf*/
    return a2; /*0x6f82a1*/
  }
}
