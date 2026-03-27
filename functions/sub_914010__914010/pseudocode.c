bool *__thiscall sub_914010(float *this, bool *a2, __m128 *a3, int a4)
{
  bool v5; // bl
  int v6; // esi
  double v7; // st7
  bool *result; // eax
  char v10; // [esp+17h] [ebp-29h] BYREF
  float v11; // [esp+18h] [ebp-28h] BYREF
  bool *v12; // [esp+1Ch] [ebp-24h]
  __int128 v13; // [esp+20h] [ebp-20h] BYREF

  v12 = a2;
  sub_913D30(this, &v13, &v11);
  v5 = *sub_9144C0((int)this, a4, &v10, a3, a4) != 0;
  if ( 1.0 != *(this + 5) )
  {
    v6 = *((_DWORD *)this + 4);
    v7 = v11;
    *(__int128 *)(v6 + 0x10) = v13;
    *(float *)(v6 + 0x1C) = v7;
  }
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
  result = v12;
  *v12 = v5;
  return result;
}
