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

  v12 = &v10;
  v11 = this;
  v4 = Dst | 0xF;
  if ( (Dst | 0xF) == 0xFFFFFFFF )
  {
    v4 = Dst;
  }
  else
  {
    v5 = *(this + 6);
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= 0xFFFFFFFE - v6 )
      v4 = v6 + v5;
  }
  v13 = 0;
  Dsta = sub_412E70((char *)(v4 + 1));
  if ( (_DWORD)MaxCount )
  {
    if ( *(this + 6) < 0x10u )
      v7 = this + 1;
    else
      v7 = (_DWORD *)*(this + 1);
    HIDWORD(v9) = v7;
    LODWORD(v9) = v4 + 1;
    memcpy_s(Dsta, v9, (const void *)MaxCount, v10);
  }
  if ( *(this + 6) >= 0x10u )
    FormHeapFree(*(this + 1));
  result = this + 1;
  *((_BYTE *)this + 4) = 0;
  *(this + 1) = Dsta;
  *(this + 6) = v4;
  *(this + 5) = MaxCount;
  if ( v4 >= 0x10 )
    result = Dsta;
  result[MaxCount] = 0;
  return result;
}
