_DWORD *__thiscall sub_67CF50(int ***this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // eax
  int *v6; // edi
  int *v7; // esi
  TESObjectREFR ****v8; // ecx
  bool v9; // bl
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-4h]

  if ( unk_B333B8 ) /*0x67cf51*/
  {
    result = (_DWORD *)FormHeapAlloc(8u); /*0x67cf5f*/
    if ( result ) /*0x67cf69*/
    {
      *result = 0; /*0x67cf6b*/
      result[1] = 0; /*0x67cf71*/
    }
    else
    {
      return 0; /*0x67cf7d*/
    }
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u); /*0x67cf84*/
    if ( v5 ) /*0x67cf90*/
    {
      *v5 = 0; /*0x67cf92*/
      v5[1] = 0; /*0x67cf94*/
      v11 = v5; /*0x67cf97*/
    }
    else
    {
      v11 = 0; /*0x67cf9d*/
    }
    v6 = (int *)*this; /*0x67cfa2*/
    if ( *this ) /*0x67cfa2*/
    {
      do /*0x67d028*/
      {
        if ( !v6[1] && !*v6 ) /*0x67cfb7*/
          break; /*0x67cfb9*/
        v7 = (int *)*v6; /*0x67cfbb*/
        v8 = (TESObjectREFR ****)*v6; /*0x67cfc0*/
        v9 = v6 == (int *)*this; /*0x67cfc2*/
        v6 = (int *)v6[1]; /*0x67cfc5*/
        if ( sub_67CC60(v8) ) /*0x67cfc7*/
        {
          if ( a2 == v7[3] ) /*0x67cffd*/
          {
            v10 = *v7; /*0x67cfff*/
            if ( *v7 ) /*0x67cfff*/
            {
              while ( *(_DWORD *)v10 ) /*0x67d009*/
              {
                if ( **(_DWORD **)v10 == a3 ) /*0x67d011*/
                {
                  BSSimpleList_PushFront(v11, (int)v7); /*0x67d021*/
                  break; /*0x67d021*/
                }
                v10 = *(_DWORD *)(v10 + 4); /*0x67d013*/
                if ( !v10 ) /*0x67d018*/
                  break; /*0x67d018*/
              }
            }
          }
        }
        else
        {
          BSSimpleList_Remove((int *)*this, (int)v7); /*0x67cfd4*/
          if ( v7 ) /*0x67cfdb*/
          {
            sub_67B5F0(v7, (int)v6); /*0x67cfdf*/
            FormHeapFree((unsigned int)v7); /*0x67cfe5*/
          }
          if ( v9 ) /*0x67cfef*/
            v6 = (int *)*this; /*0x67cff1*/
        }
      }
      while ( v6 ); /*0x67d028*/
    }
    return v11; /*0x67d02c*/
  }
  return result; /*0x67cf78*/
}
