unsigned int __thiscall sub_447580(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // ebp
  unsigned int result; // eax
  int v4; // ecx
  signed int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  bool v9; // sf
  int v10; // edx
  unsigned int v11; // [esp+8h] [ebp-18h]
  unsigned int v12; // [esp+Ch] [ebp-14h]
  signed int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  signed int v16; // [esp+1Ch] [ebp-4h]

  v1 = this;
  v2 = this + 0x30;
  sub_5A56F0(this + 0x30);
  v13 = v1[0x34];
  result = 0;
  v11 = 0;
  if ( v13 - 1 > 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v1[0x31] + 4 * result);
      v5 = result + 1;
      v14 = v4;
      v6 = v4;
      v12 = result;
      v16 = result + 1;
      if ( (int)(result + 1) < v13 )
      {
        do
        {
          v7 = *(_DWORD *)(v1[0x31] + 4 * v5);
          if ( !v6 || v7 && (v8 = _strcmp(EmptyString, EmptyString), v4 = v14, v9 = v8 < 0, result = v11, v9) )
          {
            v12 = v5;
            v6 = v7;
          }
          v1 = this;
          ++v5;
        }
        while ( v5 < v13 );
        v5 = v16;
      }
      if ( v6 && v6 != v4 )
        break;
LABEL_26:
      result = v5;
      v11 = v5;
      if ( v5 >= v13 - 1 )
        return result;
      result = v5;
    }
    if ( result < v2[3] )
    {
      if ( *(_DWORD *)(v2[1] + 4 * result) )
      {
LABEL_17:
        *(_DWORD *)(v2[1] + 4 * result) = v6;
        if ( v12 < v2[3] )
        {
          v10 = v2[1];
          if ( v4 )
          {
            if ( !*(_DWORD *)(v10 + 4 * v12) )
              ++v2[4];
          }
          else if ( *(_DWORD *)(v10 + 4 * v12) )
          {
            --v2[4];
          }
        }
        else
        {
          v2[3] = v12 + 1;
          if ( v4 )
            ++v2[4];
        }
        *(_DWORD *)(v2[1] + 4 * v12) = v4;
        goto LABEL_26;
      }
    }
    else
    {
      v2[3] = v5;
    }
    ++v2[4];
    goto LABEL_17;
  }
  return result;
}
