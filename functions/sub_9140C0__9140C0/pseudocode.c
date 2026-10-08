void __thiscall sub_9140C0(float *this, __m128 *a2, _DWORD *a3, int a4)
{
  int v5; // esi
  double v6; // st7
  float v8; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-24h]
  __int128 v10; // [esp+20h] [ebp-20h] BYREF

  v9 = a4; /*0x9140ee*/
  sub_913D30(this, &v10, &v8); /*0x9140f2*/
  sub_9145A0((int)this, a3, a2, (int)a3, v9); /*0x914100*/
  if ( 1.0 != *(this + 5) ) /*0x91410f*/
  {
    v5 = *((_DWORD *)this + 4); /*0x914111*/
    v6 = v8; /*0x914114*/
    *(__int128 *)(v5 + 0x10) = v10; /*0x91411d*/
    *(float *)(v5 + 0x1C) = v6; /*0x914121*/
  }
  if ( unk_BA83FC-- == 1 ) /*0x914124*/
    unk_BA83F8 = 0; /*0x91412d*/
  LeaveCriticalSection(&unk_BA8380); /*0x91413c*/
}
