void __thiscall sub_9140C0(float *this, __m128 *a2, int a3, int a4)
{
  int v5; // esi
  double v6; // st7
  float v8; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-24h]
  __int128 v10; // [esp+20h] [ebp-20h] BYREF

  v9 = a4;
  sub_913D30(this, &v10, &v8);
  sub_9145A0((int)this, a3, a2, a3, v9);
  if ( 1.0 != *(this + 5) )
  {
    v5 = *((_DWORD *)this + 4);
    v6 = v8;
    *(__int128 *)(v5 + 0x10) = v10;
    *(float *)(v5 + 0x1C) = v6;
  }
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
}
