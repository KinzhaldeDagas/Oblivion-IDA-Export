void __thiscall CreatureSoundArray_InsertSoundEntry(_DWORD *this, int a2, unsigned int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  _DWORD *v7; // ecx

  if ( a2 )
  {
    if ( a3 <= 9 )
    {
      if ( !*(this + a3) )
      {
        v4 = (_DWORD *)FormHeapAlloc(8u);
        if ( v4 )
        {
          *v4 = 0;
          v4[1] = 0;
        }
        else
        {
          v4 = 0;
        }
        *(this + a3) = v4;
      }
      v5 = (_DWORD *)*(this + a3);
      if ( v5 )
      {
        do
        {
          v6 = v5[1];
          if ( !v6 && !*v5 || *(_BYTE *)(*v5 + 4) > *(_BYTE *)(a2 + 4) )
          {
            BSSimpleList_PushFront(v5, a2);
            return;
          }
          v7 = v5;
          v5 = (_DWORD *)v5[1];
        }
        while ( v6 );
        if ( v7 )
          BSSimpleList_PushBack(v7, a2);
      }
    }
  }
}
