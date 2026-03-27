void __thiscall sub_6B8CF0(BSStringT *this, TESQuest *a2, TESTopic *a3, TESForm *a4, TESObjectREFR *a5)
{
  TESForm *v6; // ecx
  unsigned int **v7; // edi
  unsigned int *v8; // esi
  unsigned int v9; // eax
  BSStringT *v10; // eax
  BSStringT *v11; // eax
  int v12; // [esp+14h] [ebp-1Ch]
  unsigned int *v13[2]; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+2Ch] [ebp-4h]

  v13[0] = 0;
  v13[1] = 0;
  v6 = *((TESForm **)this + 6);
  v14 = 0;
  sub_531270(v6, v13);
  v7 = v13;
  v12 = 0;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    LOWORD(v9) = *((_WORD *)v8 + 0xA);
    v7 = (unsigned int **)v7[1];
    v9 = (_WORD)v9 == 0xFFFF ? strlen((const char *)v8[4]) : (unsigned __int16)v9;
    if ( v9 )
    {
      if ( !*((_BYTE *)this + 0x20) || !v12 )
      {
        v10 = (BSStringT *)FormHeapAlloc(0x18u);
        LOBYTE(v14) = 1;
        if ( v10 )
          v11 = sub_6B83B0(v10, a2, a3, a4, a5, (unsigned __int8 *)v8);
        else
          v11 = 0;
        LOBYTE(v14) = 0;
        BSSimpleList_PushBack((_DWORD *)this + 3, (int)v11);
        ++v12;
      }
    }
  }
  while ( v7 );
  v14 = 0xFFFFFFFF;
  sub_5308E0(v13);
}
