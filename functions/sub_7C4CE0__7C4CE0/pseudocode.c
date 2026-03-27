int sub_7C4CE0()
{
  int v0; // eax
  int v1; // ecx
  NiTMap_Entry_TESCELL *v2; // eax
  bool v3; // zf
  TESObjectCELL *v4; // esi
  int result; // eax
  TESObjectCELL *v6; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v7; // [esp+4h] [ebp-8h] BYREF
  void *v8; // [esp+8h] [ebp-4h] BYREF

  v0 = 0;
  if ( dword_B2CBC8 )
  {
    v1 = dword_B2CBCC;
    while ( !*(_DWORD *)(v1 + 4 * v0) )
    {
      if ( ++v0 >= (unsigned int)dword_B2CBC8 )
        goto LABEL_5;
    }
    v2 = *(NiTMap_Entry_TESCELL **)(v1 + 4 * v0);
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  v3 = dword_B2CBD0 == 0;
  v7 = v2;
  v6 = 0;
  if ( !v3 )
  {
    if ( v2 )
    {
      do
      {
        sub_452600((NiTMap_TESCELL *)&off_B2CBC4, &v7, &v8, &v6);
        v4 = v6;
        if ( v6 )
        {
          sub_7C3850(v6);
          FormHeapFree((unsigned int)v4);
        }
      }
      while ( v7 );
    }
  }
  result = NiTMap_Clear(&off_B2CBC4);
  dword_B43348 = 0;
  dword_B4334C = 0;
  return result;
}
