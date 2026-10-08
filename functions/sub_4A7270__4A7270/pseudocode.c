char __thiscall sub_4A7270(float **this, char a2)
{
  float **v2; // edi
  int v4; // ebp
  int v5; // eax
  float **v6; // ebx
  float **v7; // ecx
  float **v8; // esi
  char v9; // [esp+7h] [ebp-5h]

  v2 = this; /*0x4a7274*/
  if ( (unsigned int)*(this + 9) < 4 ) /*0x4a727e*/
    return 0; /*0x4a7280*/
  v4 = (int)*(this + 1); /*0x4a728b*/
  v5 = *(_DWORD *)(v4 + 4); /*0x4a728e*/
  v6 = this; /*0x4a7294*/
  if ( v5 ) /*0x4a7296*/
  {
    while ( 2 ) /*0x4a7298*/
    {
      v7 = (float **)v5; /*0x4a7298*/
      v8 = *(float ***)(v5 + 4); /*0x4a729e*/
      v9 = 0; /*0x4a72a5*/
      do /*0x4a72fd*/
      {
        if ( !v8 ) /*0x4a72b2*/
        {
          if ( a2 ) /*0x4a72b9*/
          {
            if ( v6 != v2 ) /*0x4a72bd*/
              v8 = v2; /*0x4a72bf*/
          }
          v9 = 1; /*0x4a72c1*/
        }
        if ( v6 && v7 && v8 ) /*0x4a72d0*/
        {
          if ( sub_4A6AF0(*v6, *(float **)v4, *v7, *v8) ) /*0x4a72df*/
            return 1; /*0x4a731a*/
          v2 = this; /*0x4a72eb*/
        }
        v7 = v8; /*0x4a72f1*/
        if ( v8 ) /*0x4a72f3*/
          v8 = (float **)v8[1]; /*0x4a72f5*/
      }
      while ( !v9 ); /*0x4a72fd*/
      v6 = (float **)v4; /*0x4a72ff*/
      v4 = *(_DWORD *)(v4 + 4); /*0x4a7301*/
      v5 = *(_DWORD *)(v4 + 4); /*0x4a7304*/
      if ( v5 ) /*0x4a7309*/
        continue; /*0x4a7309*/
      break;
    }
  }
  return 0; /*0x4a7282*/
}
