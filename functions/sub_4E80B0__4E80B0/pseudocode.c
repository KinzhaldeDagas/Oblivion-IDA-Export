void __thiscall sub_4E80B0(char *this, float a2, _DWORD *a3)
{
  char *v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  float v8; // [esp+14h] [ebp-Ch]
  float v9; // [esp+18h] [ebp-8h]
  float v10; // [esp+1Ch] [ebp-4h]
  float v11; // [esp+28h] [ebp+8h]
  float v12; // [esp+28h] [ebp+8h]

  if ( a3 ) /*0x4e80bd*/
  {
    BSSimpleList_PushBack(a3, (int)this); /*0x4e80c7*/
    v5 = this + 0x20; /*0x4e80cc*/
    if ( this != (char *)0xFFFFFFE0 ) /*0x4e80d1*/
    {
      do /*0x4e8175*/
      {
        if ( !*((_DWORD *)v5 + 1) && !*(_DWORD *)v5 ) /*0x4e80dd*/
          break; /*0x4e80e0*/
        v6 = *(_DWORD *)v5; /*0x4e80e6*/
        if ( *(_DWORD *)v5 ) /*0x4e80e6*/
        {
          v7 = a3; /*0x4e80f0*/
          while ( *v7 != v6 ) /*0x4e80f4*/
          {
            v7 = (_DWORD *)v7[1]; /*0x4e80f6*/
            if ( !v7 ) /*0x4e80fb*/
            {
              v8 = *(float *)(*a3 + 0x14) - *(float *)(v6 + 0x14); /*0x4e8108*/
              v9 = *(float *)(*a3 + 0x18) - *(float *)(v6 + 0x18); /*0x4e8112*/
              v10 = *(float *)(*a3 + 0x1C) - *(float *)(v6 + 0x1C); /*0x4e811c*/
              v11 = v8 * v8 + v9 * v9 + v10 * v10; /*0x4e813c*/
              v12 = sqrt(v11); /*0x4e8149*/
              if ( a2 >= (double)v12 ) /*0x4e815e*/
                sub_4E80B0((char *)v6, a2, a3); /*0x4e8167*/
              break; /*0x4e8167*/
            }
          }
        }
        v5 = *((char **)v5 + 1); /*0x4e8170*/
      }
      while ( v5 ); /*0x4e8175*/
    }
  }
}
