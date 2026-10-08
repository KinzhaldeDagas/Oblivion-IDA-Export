int __thiscall sub_6FDC30(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v3; // ebx
  void (__cdecl *v4)(unsigned int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, UInt32 *, int, int *, int); // eax
  unsigned int v6; // eax
  unsigned int *v7; // esi
  int (__cdecl *v8)(unsigned int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v10; // ebp
  int *v11; // edi
  unsigned int *v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int (__cdecl *v15)(unsigned int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // [esp-3Ch] [ebp-74h]
  unsigned int v20; // [esp-28h] [ebp-60h]
  unsigned int v21; // [esp-14h] [ebp-4Ch]
  unsigned int v22; // [esp+18h] [ebp-20h] BYREF
  unsigned int v23; // [esp+1Ch] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-18h] BYREF
  int v25; // [esp+24h] [ebp-14h] BYREF
  NiRenderer *v26; // [esp+28h] [ebp-10h]
  unsigned int v27; // [esp+34h] [ebp-4h]

  v26 = this; /*0x6fdc59*/
  v3 = a2; /*0x6fdc5d*/
  NiTimeController_LoadBinary(this, (signed int)a2); /*0x6fdc62*/
  v21 = a2[0x87]; /*0x6fdc7e*/
  v4 = *(void (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v21 + 4); /*0x6fdc7f*/
  v24 = 4; /*0x6fdc82*/
  v4(v21, &this->members.pad014[0xA], 4, &v24, 1); /*0x6fdc86*/
  v20 = a2[0x87]; /*0x6fdc9a*/
  v5 = *(void (__cdecl **)(unsigned int, UInt32 *, int, int *, int))(v20 + 4); /*0x6fdc9b*/
  v24 = 4; /*0x6fdc9e*/
  v5(v20, &this->members.pad014[0xB], 4, &v24, 1); /*0x6fdca2*/
  v6 = a2[0x87]; /*0x6fdca4*/
  v7 = 0; /*0x6fdcb7*/
  v23 = 0; /*0x6fdcb9*/
  v19 = v6; /*0x6fdcbd*/
  v8 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v6 + 4); /*0x6fdcbe*/
  v24 = 4; /*0x6fdcc1*/
  result = v8(v19, &v23, 4, &v24, 1); /*0x6fdcc5*/
  v10 = 0; /*0x6fdcca*/
  if ( v23 ) /*0x6fdcd0*/
  {
    v11 = (int *)&this->members.pad014[0xC]; /*0x6fdcd6*/
    while ( 1 ) /*0x6fdce8*/
    {
      v12 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6fdce8*/
      if ( v12 ) /*0x6fdcf2*/
      {
        *v12 = 0; /*0x6fdcf4*/
        v12[1] = 0; /*0x6fdcf6*/
        v12[2] = 0; /*0x6fdcf9*/
        v7 = v12; /*0x6fdcfc*/
      }
      v13 = *((unsigned __int16 *)v11 + 4); /*0x6fdcfe*/
      v27 = 0xFFFFFFFF; /*0x6fdd04*/
      if ( v10 >= v13 ) /*0x6fdd0c*/
        NiTArray_SetSize((unsigned __int16 *)v11, v10 + *((unsigned __int16 *)v11 + 7)); /*0x6fdd17*/
      if ( v10 < *((unsigned __int16 *)v11 + 5) ) /*0x6fdd22*/
      {
        if ( v7 ) /*0x6fdd38*/
        {
          if ( !*(_DWORD *)(v11[1] + 4 * v10) ) /*0x6fdd3d*/
            ++*((_WORD *)v11 + 6); /*0x6fdd43*/
        }
        else if ( *(_DWORD *)(v11[1] + 4 * v10) ) /*0x6fdd4d*/
        {
          --*((_WORD *)v11 + 6); /*0x6fdd53*/
        }
      }
      else
      {
        *((_WORD *)v11 + 5) = v10 + 1; /*0x6fdd29*/
        if ( v7 ) /*0x6fdd2d*/
          ++*((_WORD *)v11 + 6); /*0x6fdd2f*/
      }
      *(_DWORD *)(v11[1] + 4 * v10) = v7; /*0x6fdd5e*/
      v14 = v3[0x87]; /*0x6fdd61*/
      v22 = 0; /*0x6fdd73*/
      v15 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v14 + 4); /*0x6fdd7b*/
      v25 = 4; /*0x6fdd7f*/
      result = v15(v14, &v22, 4, &v25, 1); /*0x6fdd87*/
      for ( i = 0; i < v22; ++i ) /*0x6fdd92*/
      {
        v17 = v7[1]; /*0x6fdd94*/
        if ( v7[2] == v17 ) /*0x6fdd9a*/
        {
          if ( v17 ) /*0x6fdd9e*/
            v18 = 2 * v17; /*0x6fdda0*/
          else
            v18 = 1; /*0x6fdda4*/
          sub_6E8CA0(v7, v18); /*0x6fddac*/
        }
        *(_DWORD *)(*v7 + 4 * v7[2]++) = v26; /*0x6fddba*/
        result = sub_712A20(a2); /*0x6fddc5*/
      }
      if ( ++v10 >= v23 ) /*0x6fddda*/
        break; /*0x6fddda*/
      v3 = a2; /*0x6fdce0*/
      v7 = 0; /*0x6fdce4*/
    }
  }
  return result; /*0x6fdde0*/
}
