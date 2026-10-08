int __thiscall sub_6D95C0(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // eax
  int v8; // edx
  char v9; // bl
  unsigned int i; // edi
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  unsigned __int8 v14; // [esp+7h] [ebp-15h]
  unsigned int v15; // [esp+8h] [ebp-14h]
  int v16; // [esp+Ch] [ebp-10h] BYREF
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  result = *(this + 7); /*0x6d95c6*/
  if ( result ) /*0x6d95cb*/
  {
    v3 = *(_DWORD *)(result + 8); /*0x6d95d1*/
    v4 = *(_DWORD **)(result + 0xC); /*0x6d95da*/
    v5 = *(_DWORD *)(result + 0x10); /*0x6d95de*/
    v15 = v3; /*0x6d95e1*/
    v14 = *(_BYTE *)(result + 0x14); /*0x6d95e5*/
    if ( !v3 ) /*0x6d95e9*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))result; /*0x6d95eb*/
      if ( !InterlockedDecrement((volatile LONG *)(result + 4)) ) /*0x6d95f5*/
        (**v6)(v6, 1); /*0x6d960b*/
      *(this + 7) = 0; /*0x6d960d*/
      *(this + 3) = LODWORD(flt_B3EBA0[0]); /*0x6d961a*/
      *(this + 4) = LODWORD(flt_B3EBA0[1]); /*0x6d9623*/
      result = LODWORD(flt_B3EBA0[2]); /*0x6d9626*/
      *(this + 5) = LODWORD(flt_B3EBA0[2]); /*0x6d962b*/
      *(this + 6) = LODWORD(flt_B3EBA0[3]); /*0x6d9636*/
      return result; /*0x6d963d*/
    }
    v7 = v4[2]; /*0x6d9644*/
    v16 = v4[1]; /*0x6d9647*/
    v8 = v4[3]; /*0x6d964b*/
    v17 = v7; /*0x6d964e*/
    result = v4[4]; /*0x6d9652*/
    v18 = v8; /*0x6d9656*/
    v19 = result; /*0x6d965a*/
    if ( v3 == 1 && v5 != 4 ) /*0x6d9663*/
      goto LABEL_17; /*0x6d9663*/
    if ( v5 == 1 || v5 == 5 ) /*0x6d966d*/
    {
      v9 = 1; /*0x6d9673*/
      for ( i = 1; i < v3; ++i ) /*0x6d9675*/
      {
        result = sub_6D5A40((float *)((char *)v4 + i * v14 + 4), (float *)&v16); /*0x6d9699*/
        if ( (_BYTE)result ) /*0x6d96a0*/
          v9 = 0; /*0x6d96a2*/
        if ( !v9 ) /*0x6d96a9*/
          return result; /*0x6d96a9*/
        v3 = v15; /*0x6d9680*/
      }
LABEL_17:
      v11 = *(this + 7); /*0x6d96b7*/
      if ( v11 ) /*0x6d96bc*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6d96c2*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6d96d8*/
        *(this + 7) = 0; /*0x6d96da*/
      }
      v12 = v17; /*0x6d96e5*/
      result = v18; /*0x6d96e9*/
      *(this + 3) = v16; /*0x6d96ed*/
      v13 = v19; /*0x6d96f0*/
      *(this + 4) = v12; /*0x6d96f4*/
      *(this + 5) = result; /*0x6d96f7*/
      *(this + 6) = v13; /*0x6d96fa*/
    }
  }
  return result; /*0x6d9639*/
}
