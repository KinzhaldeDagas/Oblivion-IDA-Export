int __thiscall sub_8A10D0(_DWORD *this, int a2, _DWORD **a3)
{
  _DWORD *v3; // esi
  int (__stdcall *v4)(char *); // edx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  char v13; // [esp+Fh] [ebp-5h] BYREF
  _DWORD *v14; // [esp+10h] [ebp-4h]

  v3 = this; /*0x8a10d5*/
  v4 = *(int (__stdcall **)(char *))(*this + 0x74); /*0x8a10d9*/
  v14 = this; /*0x8a10e4*/
  v5 = v4(&v13); /*0x8a10e8*/
  v6 = v5; /*0x8a10ee*/
  if ( v5 ) /*0x8a10f2*/
  {
    v7 = 0; /*0x8a10f5*/
    if ( *(int *)(v5 + 8) > 0 ) /*0x8a10fa*/
    {
      do /*0x8a1147*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7); /*0x8a1103*/
        if ( v8 ) /*0x8a1108*/
          v9 = *(_DWORD *)(v8 + 8); /*0x8a110a*/
        else
          v9 = 0; /*0x8a110f*/
        if ( v9 ) /*0x8a1113*/
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD **))(*(_DWORD *)v9 + 0x8C))(v9, a3) ) /*0x8a1120*/
          {
            v10 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v9 + 0x18))(v9, a3); /*0x8a112e*/
            if ( v10 ) /*0x8a1132*/
              v11 = *(_DWORD *)(v10 + 8); /*0x8a1134*/
            else
              v11 = 0; /*0x8a1139*/
            *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7) = v11; /*0x8a113e*/
          }
        }
        ++v7; /*0x8a1141*/
      }
      while ( v7 < *(_DWORD *)(v6 + 8) ); /*0x8a1147*/
      v3 = v14; /*0x8a1149*/
    }
  }
  return sub_8A2670(v3, a2, a3); /*0x8a115b*/
}
