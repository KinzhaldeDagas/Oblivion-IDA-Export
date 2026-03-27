void __thiscall sub_913F70(float *this, int a2, float a3, int a4)
{
  int v5; // esi
  double v6; // st7
  float v8; // [esp+14h] [ebp-24h] BYREF
  __int128 v9; // [esp+18h] [ebp-20h] BYREF

  sub_913D30(this, &v9, &v8);
  sub_92B1F0((_DWORD **)this);
  if ( 1.0 != *(this + 5) )
  {
    v5 = *((_DWORD *)this + 4);
    v6 = v8;
    *(__int128 *)(v5 + 0x10) = v9;
    *(float *)(v5 + 0x1C) = v6;
  }
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
}
