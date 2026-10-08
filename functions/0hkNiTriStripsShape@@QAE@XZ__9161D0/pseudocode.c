hkNiTriStripsShape *__thiscall hkNiTriStripsShape::hkNiTriStripsShape(hkNiTriStripsShape *this, int a2)
{
  char *v3; // esi
  int i; // ebx
  unsigned int v5; // eax
  unsigned int v8; // [esp+1Ch] [ebp-38h]
  int *v9; // [esp+20h] [ebp-34h]
  __int128 v10; // [esp+24h] [ebp-30h]

  sub_9156C0(this); /*0x916210*/
  v3 = (char *)this + 0x24; /*0x916215*/
  *(_DWORD *)this = &hkNiTriStripsShape::`vftable'; /*0x91621a*/
  *((_DWORD *)this + 9) = &NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x916224*/
  *((_DWORD *)this + 0xB) = 0; /*0x91622a*/
  *((_DWORD *)this + 0xE) = 1; /*0x91622d*/
  *((_DWORD *)this + 0xC) = 0; /*0x916234*/
  *((_DWORD *)this + 0xD) = 0; /*0x916237*/
  *((_DWORD *)this + 0xA) = 0; /*0x91623a*/
  *((float *)this + 8) = *(float *)(a2 + 4); /*0x916240*/
  *(float *)&v10 = *(float *)(a2 + 0x20); /*0x91624b*/
  *((float *)&v10 + 1) = *(float *)(a2 + 0x24); /*0x916252*/
  *((float *)&v10 + 2) = *(float *)(a2 + 0x28); /*0x916259*/
  *((float *)&v10 + 3) = *(float *)(a2 + 0x2C); /*0x916260*/
  *((__int128 *)this + 1) = v10; /*0x916269*/
  for ( i = 0; i < *(_DWORD *)(a2 + 0x14); ++i ) /*0x916272*/
  {
    v5 = *((_DWORD *)v3 + 3); /*0x91627a*/
    v9 = (int *)(*(_DWORD *)(a2 + 0xC) + 8 * i); /*0x916280*/
    v8 = v5; /*0x916284*/
    if ( v5 >= *((_DWORD *)v3 + 2) ) /*0x916288*/
    {
      sub_8C69C0((int **)v3, v5 + *((_DWORD *)v3 + 5)); /*0x916292*/
      v5 = v8; /*0x916297*/
    }
    sub_8C68D0(v3, v5, v9); /*0x9162a3*/
  }
  return this; /*0x9162b4*/
}
