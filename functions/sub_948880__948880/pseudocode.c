int __thiscall sub_948880(void *this, _DWORD *a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // esi
  int result; // eax
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // [esp+14h] [ebp+4h]

  v3 = a2[1]; /*0x948886*/
  sub_918440(this, v3); /*0x94888e*/
  if ( v3 > 0 ) /*0x948895*/
  {
    v5 = 0; /*0x948897*/
    do /*0x9488b3*/
    {
      sub_918480(this, (char *)(v5 + *a2), 3); /*0x9488aa*/
      v5 += 0x10; /*0x9488af*/
      --v3; /*0x9488b2*/
    }
    while ( v3 ); /*0x9488b3*/
  }
  v6 = a2[4]; /*0x9488b5*/
  result = sub_918440(this, v6); /*0x9488bb*/
  if ( v6 > 0 ) /*0x9488c2*/
  {
    v8 = 0; /*0x9488c4*/
    v12 = v6; /*0x9488c6*/
    do /*0x948902*/
    {
      v9 = a2[3]; /*0x9488d0*/
      v10 = *(_DWORD *)(v9 + v8); /*0x9488d3*/
      v11 = v8 + v9; /*0x9488d6*/
      sub_918440(this, v10); /*0x9488db*/
      sub_918440(this, *(_DWORD *)(v11 + 4)); /*0x9488e6*/
      sub_918440(this, *(_DWORD *)(v11 + 8)); /*0x9488f1*/
      v8 += 0xC; /*0x9488fa*/
      result = --v12; /*0x9488fd*/
    }
    while ( v12 ); /*0x948902*/
  }
  return result; /*0x948904*/
}
