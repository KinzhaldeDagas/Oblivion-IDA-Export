void __thiscall sub_913E40(float *this, __m128 *a2, __m128 *a3, unsigned int a4, int a5)
{
  int v6; // esi
  double v7; // st7
  float v9; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+24h] [ebp-24h]
  __int128 v11; // [esp+28h] [ebp-20h] BYREF

  v10 = a5;
  sub_913D30(this, &v11, &v9);
  sub_9143D0((int)this, (int)a3, a2, a3, a4, v10);
  if ( 1.0 != *(this + 5) )
  {
    v6 = *((_DWORD *)this + 4);
    v7 = v9;
    *(__int128 *)(v6 + 0x10) = v11;
    *(float *)(v6 + 0x1C) = v7;
  }
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
}
