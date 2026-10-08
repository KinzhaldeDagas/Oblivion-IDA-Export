int __thiscall sub_7251C0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int result; // eax
  unsigned int v6; // ebp
  int v7; // ebx
  void (__cdecl *v8)(int, int, int, signed int *, int); // eax
  int (__cdecl *v9)(int, int, int, signed int *, int); // edx
  int v10; // [esp-28h] [ebp-38h]
  int v11; // [esp-24h] [ebp-34h]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp-10h] [ebp-20h]

  v2 = a2; /*0x7251c4*/
  j_nullsub_3(a2); /*0x7251cb*/
  sub_7094A0(this + 8, v2); /*0x7251d4*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7251df*/
  v12 = *(_DWORD *)(v2 + 0x220); /*0x7251ef*/
  a2 = 4; /*0x7251f0*/
  result = v4(v12, this + 0x20, 4, &a2, 1); /*0x7251f8*/
  v6 = 0; /*0x7251fa*/
  if ( *((_DWORD *)this + 8) ) /*0x7251ff*/
  {
    v7 = 0; /*0x725203*/
    do /*0x725259*/
    {
      v14 = v7 + *((_DWORD *)this + 9); /*0x725219*/
      v13 = *(_DWORD *)(v2 + 0x220); /*0x72521a*/
      v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(v13 + 8); /*0x72521b*/
      a2 = 4; /*0x72521e*/
      v8(v13, v14, 4, &a2, 1); /*0x725226*/
      v9 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x72523c*/
      v11 = *((_DWORD *)this + 9) + v7 + 4; /*0x725241*/
      v10 = *(_DWORD *)(v2 + 0x220); /*0x725242*/
      a2 = 4; /*0x725243*/
      result = v9(v10, v11, 4, &a2, 1); /*0x72524b*/
      ++v6; /*0x72524d*/
      v7 += 0x10; /*0x725253*/
    }
    while ( v6 < *((_DWORD *)this + 8) ); /*0x725259*/
  }
  return result; /*0x72525b*/
}
