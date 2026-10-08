signed int __thiscall sub_728440(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3, __int16 a4)
{
  int v5; // edx
  float *v6; // ecx
  int v7; // esi
  unsigned int v8; // edx
  int v9; // esi
  int v10; // edx
  signed int result; // eax
  int v12; // edx
  int v13; // edi
  unsigned __int16 v14; // bx
  float *v15; // ecx
  unsigned int v16; // edx
  int v17; // esi
  __int16 v18; // [esp+20h] [ebp+Ch]

  v5 = *(this + 7); /*0x728451*/
  if ( (a4 & 1) != 0 ) /*0x728455*/
  {
    v6 = (float *)(v5 + 0xC * a3); /*0x72845d*/
    v7 = v5 + 0xC * a2; /*0x728468*/
    v8 = 0; /*0x72846b*/
    v9 = v7 - (_DWORD)v6; /*0x72846d*/
    while ( 1 ) /*0x728470*/
    {
      if ( *v6 > (double)*(float *)((char *)v6 + v9) ) /*0x72847c*/
        return 0xFFFFFFFF; /*0x7285a9*/
      if ( *v6 < (double)*(float *)((char *)v6 + v9) ) /*0x72848e*/
        return 1; /*0x7285ae*/
      ++v8; /*0x728494*/
      ++v6; /*0x728497*/
      if ( v8 >= 3 ) /*0x72849d*/
        goto LABEL_6; /*0x72849d*/
    }
  }
  else
  {
LABEL_6:
    v10 = *(this + 8); /*0x72849f*/
    if ( !v10 || (a4 & 2) == 0 || (result = sub_7283F0(v10 + 0xC * a2, (float *)(v10 + 0xC * a3), 3u)) == 0 ) /*0x7284ce*/
    {
      v12 = *(this + 9); /*0x7284d4*/
      if ( !v12 || (a4 & 4) == 0 || (result = sub_7283F0(v12 + 0x10 * a2, (float *)(v12 + 0x10 * a3), 4u)) == 0 ) /*0x728500*/
      {
        v13 = *(this + 0xA); /*0x728506*/
        if ( v13 ) /*0x72850b*/
        {
          if ( (a4 & 8) != 0 ) /*0x728516*/
          {
            v14 = 0; /*0x728523*/
            v18 = 0; /*0x728530*/
            if ( (*(_BYTE *)(this + 0xB) & 0x3F) != 0 ) /*0x728534*/
            {
              while ( 2 ) /*0x728540*/
              {
                v15 = (float *)(v13 + 8 * (v14 + a3)); /*0x728540*/
                v16 = 0; /*0x728553*/
                v17 = 8 * (a2 + v14) - 8 * (v14 + a3); /*0x728555*/
                do /*0x72857c*/
                {
                  if ( *v15 > (double)*(float *)((char *)v15 + v17) ) /*0x728563*/
                    return 0xFFFFFFFF; /*0x7285c4*/
                  if ( *v15 < (double)*(float *)((char *)v15 + v17) ) /*0x728571*/
                    return 1; /*0x7285ca*/
                  ++v16; /*0x728573*/
                  ++v15; /*0x728576*/
                }
                while ( v16 < 2 ); /*0x72857c*/
                v14 += *((_WORD *)this + 4); /*0x728582*/
                if ( (unsigned __int16)++v18 < (unsigned __int8)(*(_BYTE *)(this + 0xB) & 0x3F) ) /*0x728592*/
                  continue; /*0x728592*/
                break;
              }
            }
          }
        }
        return 0; /*0x728594*/
      }
    }
  }
  return result; /*0x728597*/
}
