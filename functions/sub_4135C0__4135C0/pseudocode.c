_BYTE *__userpurge sub_4135C0@<eax>(_DWORD *this@<ecx>, unsigned int Dst, rsize_t MaxCount)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _DWORD *v7; // eax
  _BYTE *result; // eax
  rsize_t v9; // [esp-Ch] [ebp-34h]
  rsize_t v10; // [esp+0h] [ebp-28h] BYREF
  _DWORD *v11; // [esp+14h] [ebp-14h]
  rsize_t *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]
  _DWORD *Dsta; // [esp+30h] [ebp+8h]

  v12 = &v10; /*0x4135e8*/
  v11 = this; /*0x4135ed*/
  v4 = Dst | 0xF; /*0x4135f5*/
  if ( (Dst | 0xF) == 0xFFFFFFFF ) /*0x4135fb*/
  {
    v4 = Dst; /*0x4135fd*/
  }
  else
  {
    v5 = *(this + 6); /*0x413601*/
    v6 = v5 >> 1; /*0x41360d*/
    if ( v4 / 3 < v5 >> 1 && v5 <= 0xFFFFFFFE - v6 ) /*0x41361e*/
      v4 = v6 + v5; /*0x413620*/
  }
  v13 = 0; /*0x413629*/
  Dsta = sub_412E70((char *)(v4 + 1)); /*0x413638*/
  if ( (_DWORD)MaxCount ) /*0x41366c*/
  {
    if ( *(this + 6) < 0x10u ) /*0x413672*/
      v7 = this + 1; /*0x413679*/
    else
      v7 = (_DWORD *)*(this + 1); /*0x413674*/
    HIDWORD(v9) = v7; /*0x41367d*/
    LODWORD(v9) = v4 + 1; /*0x413684*/
    memcpy_s(Dsta, v9, (const void *)MaxCount, v10); /*0x413686*/
  }
  if ( *(this + 6) >= 0x10u ) /*0x413692*/
    FormHeapFree(*(this + 1)); /*0x413698*/
  result = this + 1; /*0x4136a6*/
  *((_BYTE *)this + 4) = 0; /*0x4136a9*/
  *(this + 1) = Dsta; /*0x4136ac*/
  *(this + 6) = v4; /*0x4136ae*/
  *(this + 5) = MaxCount; /*0x4136b1*/
  if ( v4 >= 0x10 ) /*0x4136b4*/
    result = Dsta; /*0x4136b6*/
  result[MaxCount] = 0; /*0x4136b8*/
  return result; /*0x4136bc*/
}
