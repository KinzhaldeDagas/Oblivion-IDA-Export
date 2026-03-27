void __userpurge sub_6181F0(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, int *a4)
{
  TESSaveLoad *v4; // ecx
  _DWORD *v5; // eax
  int v6; // edi
  bool v7; // zf
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  size_t v10; // [esp-4h] [ebp-Ch]
  int Dst; // [esp+4h] [ebp-4h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  LODWORD(v10) = 2;
  Dst = 0;
  SaveLoad_LoadData((int)v4, &Dst, v10);
  if ( (_WORD)Dst )
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
    }
    else
    {
      v5 = 0;
    }
    v6 = 0;
    v7 = (_WORD)Dst == 0;
    *a4 = (int)v5;
    if ( !v7 )
    {
      do
      {
        v8 = (_DWORD *)FormHeapAlloc(8u);
        if ( v8 )
        {
          *v8 = 0;
          v8[1] = 0;
          v9 = v8;
        }
        else
        {
          v9 = 0;
        }
        sub_614DB0(v9, a1, a2, st7_0);
        BSSimpleList_PushBack((_DWORD *)*a4, (int)v9);
        ++v6;
      }
      while ( v6 < (unsigned __int16)Dst );
    }
  }
  else
  {
    *a4 = 0;
  }
}
