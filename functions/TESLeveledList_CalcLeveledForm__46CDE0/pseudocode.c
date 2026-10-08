// CustomAnimSupport decode: leveled-list resolver evidence with chance/level/random/container logic; not used as deterministic animation target list.
int __thiscall TESLeveledList_CalcLeveledForm(_BYTE *this, int a2, int a3)
{
  int result; // eax
  void *v4; // [esp+48h] [ebp+Ch]
  TESObject *v5; // [esp+4Ch] [ebp+10h]
  TESObject *v6; // [esp+50h] [ebp+14h]
  int v7; // [esp+54h] [ebp+18h]
  TESObject *v8; // [esp+58h] [ebp+1Ch]
  int v9; // [esp+5Ch] [ebp+20h]
  void *v10; // [esp+60h] [ebp+24h]
  TESContainer v11; // [esp+64h] [ebp+28h]
  TESObject *v12; // [esp+74h] [ebp+38h]
  int v13; // [esp+78h] [ebp+3Ch]
  int v14; // [esp+7Ch] [ebp+40h]
  int v15; // [esp+80h] [ebp+44h]
  int v16; // [esp+84h] [ebp+48h]

  if ( v4 && (_WORD)a3 ) /*0x46ce1d*/
  {
    if ( (*(this + 0xD) & 1) != 0 ) /*0x46ce30*/
      return TESLeveledList_CalcLeveledForm_::CalcEffectiveLevel( /*0x46ce31*/
               0,
               (int)this,
               (unsigned __int16)a2,
               a3,
               a2,
               a3,
               (int)v4,
               (int)v5,
               (int)v6,
               v7,
               (int)v8,
               v9,
               (int)v10,
               (int)v11.vtbl,
               *(int *)&v11.type,
               (int)v11.list.data,
               (int)v11.list.next,
               (int)v12);                       // Morrowind Leveling hook point: replace raw leveled-list level load/store with adjusted world level, preserving flags for following JZ.
    else
      return TESLeveledList_CalcLeveledForm_::InitContainer( /*0x46ce30*/
               0,
               this,
               a3,
               a2,
               a3,
               v4,
               v5,
               v6,
               v7,
               v8,
               v9,
               v10,
               v11,
               v12,
               v13,
               v14,
               v15,
               v16);
  }
  else
  {
    TESLeveledList_CalcLeveledForm_::Done(a2, a3, (int)v4); /*0x46ce0f*/
  }
  return result;
}
