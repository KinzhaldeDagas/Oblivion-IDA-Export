void __thiscall sub_913EE0(float *this, __m128 *a2, int a3)
{
  int v4; // esi
  double v5; // st7
  float v7; // [esp+Ch] [ebp-24h] BYREF
  __int128 v8; // [esp+10h] [ebp-20h] BYREF

  sub_913D30(this, &v8, &v7); /*0x913f0b*/
  sub_9146E0((int)this, a3, a2, a3); /*0x913f14*/
  if ( 1.0 != *(this + 5) ) /*0x913f23*/
  {
    v4 = *((_DWORD *)this + 4); /*0x913f25*/
    v5 = v7; /*0x913f28*/
    *(__int128 *)(v4 + 0x10) = v8; /*0x913f31*/
    *(float *)(v4 + 0x1C) = v5; /*0x913f35*/
  }
  if ( unk_BA83FC-- == 1 ) /*0x913f38*/
    unk_BA83F8 = 0; /*0x913f41*/
  LeaveCriticalSection(&unk_BA8380); /*0x913f50*/
}
