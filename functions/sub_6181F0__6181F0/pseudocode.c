void __userpurge sub_6181F0(double a1@<st2>, double a2@<st1>, double st7_0@<st0>, int *a4)
{
  TESSaveLoadGame_SerializationView *v4; // ecx
  _DWORD *v5; // eax
  int v6; // edi
  bool v7; // zf
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int Dst; // [esp+4h] [ebp-4h] BYREF

  v4 = g_TESSaveLoadGame; /*0x6181f1*/
  Dst = 0; /*0x618201*/
  SaveLoad_LoadData(v4, &Dst, 2u); /*0x618205*/
  if ( (_WORD)Dst ) /*0x61820f*/
  {
    v5 = (_DWORD *)FormHeapAlloc(8u); /*0x618213*/
    if ( v5 ) /*0x61821d*/
    {
      *v5 = 0; /*0x61821f*/
      v5[1] = 0; /*0x618221*/
    }
    else
    {
      v5 = 0; /*0x618226*/
    }
    v6 = 0; /*0x61822e*/
    v7 = (_WORD)Dst == 0; /*0x618230*/
    *a4 = (int)v5; /*0x618235*/
    if ( !v7 ) /*0x618237*/
    {
      do /*0x618272*/
      {
        v8 = (_DWORD *)FormHeapAlloc(8u); /*0x618242*/
        if ( v8 ) /*0x61824c*/
        {
          *v8 = 0; /*0x61824e*/
          v8[1] = 0; /*0x618250*/
          v9 = v8; /*0x618253*/
        }
        else
        {
          v9 = 0; /*0x618257*/
        }
        sub_614DB0(v9, a1, a2, st7_0); /*0x61825b*/
        BSSimpleList_PushBack((_DWORD *)*a4, (int)v9); /*0x618263*/
        ++v6; /*0x61826d*/
      }
      while ( v6 < (unsigned __int16)Dst ); /*0x618272*/
    }
  }
  else
  {
    *a4 = 0; /*0x618280*/
  }
}
