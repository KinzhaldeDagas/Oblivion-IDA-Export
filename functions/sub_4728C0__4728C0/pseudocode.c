float *__fastcall sub_4728C0(int a1)
{
  float *result; // eax
  int v2; // ecx
  float *v3; // ecx
  _DWORD *i; // edi
  int v5; // eax
  char v6; // al
  float *v7; // esi
  int v8; // eax
  char v9; // al

  result = (float *)a1;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    result[6] = Vector3_InitValue_;
    result[7] = *(&Vector3_InitValue_ + 1);
    result[8] = dword_B3F9B0;
    qmemcpy((void *)(v2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
    v3 = (float *)(*((_DWORD *)result + 2) + 0x54);
    *v3 = Vector3_InitValue_;
    v3[1] = *(&Vector3_InitValue_ + 1);
    v3[2] = dword_B3F9B0;
    result = *((float **)result + 2);
    for ( i = *((_DWORD **)result + 3); i; i = (_DWORD *)i[0xD] )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
      if ( v5 )
      {
        while ( (char *)v5 != dword_B3CCB0 )
        {
          v5 = *(_DWORD *)(v5 + 4);
          if ( !v5 )
            goto LABEL_6;
        }
        v6 = 1;
      }
      else
      {
LABEL_6:
        v6 = 0;
      }
      result = v6 != 0 ? (float *)i : 0;
      if ( result )
      {
        result = (float *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)result + 0x80))(result, 0);
        v7 = result;
        if ( result )
        {
          v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)result + 4))(result);
          if ( v8 )
          {
            while ( (char *)v8 != dword_B3CD1C )
            {
              v8 = *(_DWORD *)(v8 + 4);
              if ( !v8 )
                goto LABEL_12;
            }
            v9 = 1;
          }
          else
          {
LABEL_12:
            v9 = 0;
          }
          result = v9 != 0 ? v7 : 0;
          if ( result )
            result = (float *)sub_471640(result);
        }
      }
    }
  }
  return result;
}
