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

  if ( a3 )
  {
    BSSimpleList_PushBack(a3, (int)this);
    v5 = this + 0x20;
    if ( this != (char *)0xFFFFFFE0 )
    {
      do
      {
        if ( !*((_DWORD *)v5 + 1) && !*(_DWORD *)v5 )
          break;
        v6 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 )
        {
          v7 = a3;
          while ( *v7 != v6 )
          {
            v7 = (_DWORD *)v7[1];
            if ( !v7 )
            {
              v8 = *(float *)(*a3 + 0x14) - *(float *)(v6 + 0x14);
              v9 = *(float *)(*a3 + 0x18) - *(float *)(v6 + 0x18);
              v10 = *(float *)(*a3 + 0x1C) - *(float *)(v6 + 0x1C);
              v11 = v8 * v8 + v9 * v9 + v10 * v10;
              v12 = sqrt(v11);
              if ( a2 >= (double)v12 )
                sub_4E80B0((char *)v6, a2, (int)a3);
              break;
            }
          }
        }
        v5 = *((char **)v5 + 1);
      }
      while ( v5 );
    }
  }
}
