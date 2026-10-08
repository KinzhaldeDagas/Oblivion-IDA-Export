void __thiscall sub_913E40(float *this, __m128 *a2, __m128 *a3, unsigned int a4, int a5)
{
  int v6; // esi
  double v7; // st7
  float v9; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+24h] [ebp-24h]
  __int128 v11; // [esp+28h] [ebp-20h] BYREF

  v10 = a5; /*0x913e6e*/
  sub_913D30(this, &v11, &v9); /*0x913e72*/
  sub_9143D0((int)this, (int)a3, a2, a3, a4, v10); /*0x913e87*/
  if ( 1.0 != *(this + 5) ) /*0x913e96*/
  {
    v6 = *((_DWORD *)this + 4); /*0x913e98*/
    v7 = v9; /*0x913e9b*/
    *(__int128 *)(v6 + 0x10) = v11; /*0x913ea4*/
    *(float *)(v6 + 0x1C) = v7; /*0x913ea8*/
  }
  if ( unk_BA83FC-- == 1 ) /*0x913eab*/
    unk_BA83F8 = 0; /*0x913eb4*/
  LeaveCriticalSection(&unk_BA8380); /*0x913ec3*/
}
