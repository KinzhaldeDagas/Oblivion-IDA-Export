int __thiscall TESLeveledList_CalcLeveledForm(_BYTE *this, int a2, int a3)
{
  int v4; // [esp+48h] [ebp+Ch]
  int v5; // [esp+4Ch] [ebp+10h]
  int v6; // [esp+50h] [ebp+14h]
  int v7; // [esp+54h] [ebp+18h]
  int v8; // [esp+58h] [ebp+1Ch]
  char v9; // [esp+5Ch] [ebp+20h]
  int v10; // [esp+60h] [ebp+24h]
  int v11; // [esp+64h] [ebp+28h]
  int v12; // [esp+68h] [ebp+2Ch]
  int v13; // [esp+6Ch] [ebp+30h]
  int v14; // [esp+70h] [ebp+34h]
  int v15; // [esp+74h] [ebp+38h]

  if ( !v4 || !(_WORD)a3 )
    return TESLeveledList_CalcLeveledForm_::Done(a2, a3, v4);
  if ( (*(this + 0xD) & 1) != 0 )
    return TESLeveledList_CalcLeveledForm_::CalcEffectiveLevel(
             0,
             (int)this,
             (unsigned __int16)a2,
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
             v15);
  return TESLeveledList_CalcLeveledForm_::InitContainer(
           0,
           (int)this,
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
           v15);
}
