bool *__thiscall sub_914010(float *this, bool *a2, __m128 *a3, int a4)
{
  int v5; // edx
  bool v6; // bl
  int v7; // esi
  double v8; // st7
  bool *result; // eax
  char v11; // [esp+17h] [ebp-29h] BYREF
  float v12; // [esp+18h] [ebp-28h] BYREF
  bool *v13; // [esp+1Ch] [ebp-24h]
  __int128 v14; // [esp+20h] [ebp-20h] BYREF

  v13 = a2; /*0x91403e*/
  sub_913D30(this, &v14, &v12); /*0x914042*/
  v6 = *sub_9144C0((int)this, v5, &v11, a3, a4) != 0; /*0x91405d*/
  if ( 1.0 != *(this + 5) ) /*0x914065*/
  {
    v7 = *((_DWORD *)this + 4); /*0x914067*/
    v8 = v12; /*0x91406a*/
    *(__int128 *)(v7 + 0x10) = v14; /*0x914073*/
    *(float *)(v7 + 0x1C) = v8; /*0x914077*/
  }
  if ( unk_BA83FC-- == 1 ) /*0x91407a*/
    unk_BA83F8 = 0; /*0x914083*/
  LeaveCriticalSection(&unk_BA8380); /*0x914092*/
  result = v13; /*0x914098*/
  *v13 = v6; /*0x9140a2*/
  return result; /*0x91409c*/
}
