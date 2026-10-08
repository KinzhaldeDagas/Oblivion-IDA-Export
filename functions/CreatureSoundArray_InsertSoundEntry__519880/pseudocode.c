void __thiscall CreatureSoundArray_InsertSoundEntry(_DWORD *this, int a2, unsigned int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  _DWORD *v7; // ecx

  if ( a2 ) /*0x51988a*/
  {
    if ( a3 <= 9 ) /*0x519894*/
    {
      if ( !*(this + a3) ) /*0x519896*/
      {
        v4 = (_DWORD *)FormHeapAlloc(8u); /*0x51989e*/
        if ( v4 ) /*0x5198a8*/
        {
          *v4 = 0; /*0x5198aa*/
          v4[1] = 0; /*0x5198b0*/
        }
        else
        {
          v4 = 0; /*0x5198b9*/
        }
        *(this + a3) = v4; /*0x5198bb*/
      }
      v5 = (_DWORD *)*(this + a3); /*0x5198be*/
      if ( v5 ) /*0x5198c3*/
      {
        do /*0x5198e0*/
        {
          v6 = v5[1]; /*0x5198c5*/
          if ( !v6 && !*v5 || *(_BYTE *)(*v5 + 4) > *(_BYTE *)(a2 + 4) ) /*0x5198d8*/
          {
            BSSimpleList_PushFront(v5, a2); /*0x5198f5*/
            return; /*0x5198f5*/
          }
          v7 = v5; /*0x5198da*/
          v5 = (_DWORD *)v5[1]; /*0x5198dc*/
        }
        while ( v6 ); /*0x5198e0*/
        if ( v7 ) /*0x5198e4*/
          BSSimpleList_PushBack(v7, a2); /*0x5198e7*/
      }
    }
  }
}
