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

  v5 = *(this + 7);
  if ( (a4 & 1) != 0 )
  {
    v6 = (float *)(v5 + 0xC * a3);
    v7 = v5 + 0xC * a2;
    v8 = 0;
    v9 = v7 - (_DWORD)v6;
    while ( 1 )
    {
      if ( *v6 > (double)*(float *)((char *)v6 + v9) )
        return 0xFFFFFFFF;
      if ( *v6 < (double)*(float *)((char *)v6 + v9) )
        return 1;
      ++v8;
      ++v6;
      if ( v8 >= 3 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v10 = *(this + 8);
    if ( !v10 || (a4 & 2) == 0 || (result = sub_7283F0(v10 + 0xC * a2, (float *)(v10 + 0xC * a3), 3u)) == 0 )
    {
      v12 = *(this + 9);
      if ( !v12 || (a4 & 4) == 0 || (result = sub_7283F0(v12 + 0x10 * a2, (float *)(v12 + 0x10 * a3), 4u)) == 0 )
      {
        v13 = *(this + 0xA);
        if ( v13 )
        {
          if ( (a4 & 8) != 0 )
          {
            v14 = 0;
            v18 = 0;
            if ( (*(_BYTE *)(this + 0xB) & 0x3F) != 0 )
            {
              while ( 2 )
              {
                v15 = (float *)(v13 + 8 * (v14 + a3));
                v16 = 0;
                v17 = 8 * (a2 + v14) - 8 * (v14 + a3);
                do
                {
                  if ( *v15 > (double)*(float *)((char *)v15 + v17) )
                    return 0xFFFFFFFF;
                  if ( *v15 < (double)*(float *)((char *)v15 + v17) )
                    return 1;
                  ++v16;
                  ++v15;
                }
                while ( v16 < 2 );
                v14 += *((_WORD *)this + 4);
                if ( (unsigned __int16)++v18 < (unsigned __int8)(*(_BYTE *)(this + 0xB) & 0x3F) )
                  continue;
                break;
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return result;
}
