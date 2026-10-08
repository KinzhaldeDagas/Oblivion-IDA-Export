void __thiscall sub_913F70(float *this, int a2, float a3, int a4)
{
  int v5; // esi
  double v6; // st7
  float v8; // [esp+14h] [ebp-24h] BYREF
  __int128 v9; // [esp+18h] [ebp-20h] BYREF

  sub_913D30(this, &v9, &v8); /*0x913f9b*/
  sub_92B1F0((_DWORD **)this); /*0x913fab*/
  if ( 1.0 != *(this + 5) ) /*0x913fba*/
  {
    v5 = *((_DWORD *)this + 4); /*0x913fbc*/
    v6 = v8; /*0x913fbf*/
    *(__int128 *)(v5 + 0x10) = v9; /*0x913fc8*/
    *(float *)(v5 + 0x1C) = v6; /*0x913fcc*/
  }
  if ( unk_BA83FC-- == 1 ) /*0x913fcf*/
    unk_BA83F8 = 0; /*0x913fd8*/
  LeaveCriticalSection(&unk_BA8380); /*0x913fe7*/
}
