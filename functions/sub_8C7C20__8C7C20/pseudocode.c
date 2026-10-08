int __thiscall sub_8C7C20(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int *v13; // ebx
  int v14; // edi
  char v16; // [esp+17h] [ebp-21h] BYREF
  unsigned int v17; // [esp+18h] [ebp-20h]
  _DWORD *v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h]
  int v20[2]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v21; // [esp+34h] [ebp-4h]

  v2 = this; /*0x8c7c47*/
  v18 = this; /*0x8c7c49*/
  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v16); /*0x8c7c5b*/
  v19 = v3; /*0x8c7c61*/
  if ( v3 ) /*0x8c7c65*/
  {
    v4 = sub_7124D0(a2); /*0x8c7c71*/
    v5 = a2[1] < 2u; /*0x8c7c76*/
    v6 = v4; /*0x8c7c7a*/
    v17 = v4; /*0x8c7c7c*/
    if ( v5 ) /*0x8c7c80*/
    {
      sub_8C69C0((int **)(v3 + 8), v4); /*0x8c7c88*/
      if ( v6 ) /*0x8c7c8f*/
      {
        v20[0] = 0; /*0x8c7c91*/
        v20[1] = 0; /*0x8c7c95*/
        v7 = v6; /*0x8c7c99*/
        do /*0x8c7cd5*/
        {
          v8 = *(_DWORD *)(v3 + 0x14); /*0x8c7ca0*/
          v5 = v8 < *(_DWORD *)(v3 + 0x10); /*0x8c7ca3*/
          v21 = 0; /*0x8c7ca6*/
          if ( !v5 ) /*0x8c7cae*/
            sub_8C69C0((int **)(v3 + 8), v8 + *(_DWORD *)(v3 + 0x1C)); /*0x8c7cb8*/
          sub_8C68D0((_DWORD *)(v3 + 8), v8, v20); /*0x8c7cc5*/
          --v7; /*0x8c7cca*/
          v21 = 0xFFFFFFFF; /*0x8c7ccd*/
        }
        while ( v7 ); /*0x8c7cd5*/
        v6 = v17; /*0x8c7cd7*/
      }
    }
    v9 = 0; /*0x8c7cdb*/
    if ( v6 ) /*0x8c7cdf*/
    {
      while ( 1 ) /*0x8c7ceb*/
      {
        v10 = sub_7124A0(a2); /*0x8c7ceb*/
        v11 = *(_DWORD *)(v3 + 0xC); /*0x8c7cf0*/
        v12 = *(_DWORD *)(v11 + 8 * v9); /*0x8c7cf3*/
        v13 = (int *)(v11 + 8 * v9); /*0x8c7cf6*/
        v14 = v10; /*0x8c7cf9*/
        if ( v12 != v10 ) /*0x8c7cfd*/
        {
          if ( v12 ) /*0x8c7d01*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8c7d07*/
              (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8c7d1d*/
          }
          *v13 = v14; /*0x8c7d21*/
          if ( v14 ) /*0x8c7d23*/
            InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x8c7d29*/
        }
        if ( ++v9 >= v17 ) /*0x8c7d36*/
          break; /*0x8c7d36*/
        v3 = v19; /*0x8c7ce3*/
      }
    }
    v2 = v18; /*0x8c7d38*/
  }
  return sub_8A2600(v2, (int)a2); /*0x8c7d48*/
}
