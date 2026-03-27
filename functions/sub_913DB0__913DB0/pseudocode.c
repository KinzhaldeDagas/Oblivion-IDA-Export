void __thiscall sub_913DB0(float *this, float *a2, int a3)
{
  int v4; // esi
  double v5; // st7
  float v7; // [esp+Ch] [ebp-24h] BYREF
  __int128 v8; // [esp+10h] [ebp-20h] BYREF

  sub_913D30(this, &v8, &v7);
  sub_9143A0((int)this, a3, a2, a3);
  if ( 1.0 != *(this + 5) )
  {
    v4 = *((_DWORD *)this + 4);
    v5 = v7;
    *(__int128 *)(v4 + 0x10) = v8;
    *(float *)(v4 + 0x1C) = v5;
  }
  if ( dword_BA83FC-- == 1 )
    dword_BA83F8 = 0;
  LeaveCriticalSection(&stru_BA8380);
}
