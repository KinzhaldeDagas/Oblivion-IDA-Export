bool __thiscall sub_569940(_BYTE *this, char *a2)
{
  char v4; // cl
  char v5; // bl
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx

  if ( !a2 ) /*0x56994a*/
    return 1; /*0x56994d*/
  v4 = *this; /*0x569953*/
  v5 = *a2; /*0x569956*/
  if ( v4 != *a2 ) /*0x56995a*/
    return 1; /*0x56995a*/
  v6 = v4 == (char)0xFF || v4 == 1 ? 0 : *((_DWORD *)this + 1);
  v7 = v5 == (char)0xFF || v5 == 1 ? 0 : *((_DWORD *)a2 + 1);
  if ( v6 != v7 ) /*0x569980*/
    return 1; /*0x569980*/
  v8 = v4 ? 0 : *((_DWORD *)this + 2);
  v9 = v5 ? 0 : *((_DWORD *)a2 + 2);
  if ( v8 != v9 ) /*0x56999a*/
    return 1; /*0x56999a*/
  v10 = v4 == 1 ? *((_DWORD *)this + 2) : 0;
  v11 = v5 == 1 ? *((_DWORD *)a2 + 2) : 0;
  if ( v10 != v11 ) /*0x5699b6*/
    return 1; /*0x5699b6*/
  v12 = v4 == 4 ? *((_DWORD *)this + 2) : 0;
  v13 = v5 == 4 ? *((_DWORD *)a2 + 2) : 0;
  if ( v12 != v13 ) /*0x5699d2*/
    return 1; /*0x5699d6*/
  if ( v4 == 5 ) /*0x5699df*/
    v14 = *((_DWORD *)this + 2); /*0x5699e1*/
  else
    v14 = 0; /*0x5699e6*/
  if ( v5 == 5 ) /*0x5699eb*/
    return v14 != *((_DWORD *)a2 + 2); /*0x5699f4*/
  else
    return v14 != 0; /*0x569a01*/
}
