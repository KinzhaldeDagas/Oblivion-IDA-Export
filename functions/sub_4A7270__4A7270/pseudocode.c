char __thiscall sub_4A7270(float **this, char a2)
{
  float **v2; // edi
  int v4; // ebp
  int v5; // eax
  float **v6; // ebx
  float **v7; // ecx
  float **v8; // esi
  char v9; // [esp+7h] [ebp-5h]

  v2 = this;
  if ( (unsigned int)*(this + 9) < 4 )
    return 0;
  v4 = (int)*(this + 1);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = this;
  if ( v5 )
  {
    while ( 2 )
    {
      v7 = (float **)v5;
      v8 = *(float ***)(v5 + 4);
      v9 = 0;
      do
      {
        if ( !v8 )
        {
          if ( a2 )
          {
            if ( v6 != v2 )
              v8 = v2;
          }
          v9 = 1;
        }
        if ( v6 && v7 && v8 )
        {
          if ( sub_4A6AF0(*v6, *(float **)v4, *v7, *v8) )
            return 1;
          v2 = this;
        }
        v7 = v8;
        if ( v8 )
          v8 = (float **)v8[1];
      }
      while ( !v9 );
      v6 = (float **)v4;
      v4 = *(_DWORD *)(v4 + 4);
      v5 = *(_DWORD *)(v4 + 4);
      if ( v5 )
        continue;
      break;
    }
  }
  return 0;
}
