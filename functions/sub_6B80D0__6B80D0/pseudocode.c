Unk1C *__thiscall sub_6B80D0(Unk1C *this, TESQuest *a2, TESTopic *a3, TESForm *a4, TESObjectREFR *a5)
{
  unsigned int **v6; // edi
  unsigned __int8 *v7; // ebp
  BSStringT *v8; // eax
  BSStringT *v9; // eax
  unsigned int *v11[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  this->unk00[0] = 0;
  this->unk00[1] = 0;
  this->unk00[2] = 0;
  this->form = 0;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( a2 )
      {
        this->quest = a2;
        this->form = a4;
        this->topic = a3;
        this->unk018 = (UInt32)a5;
        v11[0] = 0;
        v11[1] = 0;
        v12 = 0;
        sub_531270(a4, v11);
        v6 = v11;
        do
        {
          v7 = (unsigned __int8 *)*v6;
          if ( !*v6 )
            break;
          v6 = (unsigned int **)v6[1];
          v8 = (BSStringT *)FormHeapAlloc(0x18u);
          LOBYTE(v12) = 1;
          v9 = v8 ? sub_6B83B0(v8, a2, a3, a4, a5, v7) : 0;
          LOBYTE(v12) = 0;
          BSSimpleList_PushBack(this, (int)v9);
        }
        while ( v6 );
        v12 = 0xFFFFFFFF;
        sub_5308E0(v11);
      }
    }
  }
  return this;
}
