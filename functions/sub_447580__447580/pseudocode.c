unsigned int __thiscall sub_447580(unsigned int *this)
{
  unsigned int *v1; // ebx
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

  v1 = this; /*0x447584*/
  v2 = this + 0x30; /*0x447587*/
  sub_5A56F0(this + 0x30); /*0x447593*/
  v13 = v1[0x34]; /*0x44759e*/
  result = 0; /*0x4475a2*/
  v11 = 0; /*0x4475a9*/
  if ( v13 - 1 > 0 ) /*0x4475ad*/
  {
    while ( 1 ) /*0x4475ca*/
    {
      v4 = *(_DWORD *)(v1[0x31] + 4 * result); /*0x4475ca*/
      v5 = result + 1; /*0x4475cd*/
      v14 = v4; /*0x4475d4*/
      v6 = v4; /*0x4475d8*/
      v12 = result; /*0x4475da*/
      v16 = result + 1; /*0x4475de*/
      if ( (int)(result + 1) < v13 ) /*0x4475e2*/
      {
        do /*0x447624*/
        {
          v7 = *(_DWORD *)(v1[0x31] + 4 * v5); /*0x4475ec*/
          if ( !v6 /*0x447611*/
            || v7 && (v8 = CRT_StricmpLocaleDispatch(EmptyString, EmptyString), v4 = v14, v9 = v8 < 0, result = v11, v9) )
          {
            v12 = v5; /*0x447613*/
            v6 = v7; /*0x447617*/
          }
          v1 = this; /*0x447619*/
          ++v5; /*0x44761d*/
        }
        while ( v5 < v13 ); /*0x447624*/
        v5 = v16; /*0x447626*/
      }
      if ( v6 && v6 != v4 ) /*0x447630*/
        break; /*0x447630*/
LABEL_26:
      result = v5; /*0x44768b*/
      v11 = v5; /*0x447696*/
      if ( v5 >= v13 - 1 ) /*0x44769a*/
        return result; /*0x44769a*/
      result = v5; /*0x4475c0*/
    }
    if ( result < v2[3] ) /*0x447635*/
    {
      if ( *(_DWORD *)(v2[1] + 4 * result) ) /*0x44763f*/
      {
LABEL_17:
        *(_DWORD *)(v2[1] + 4 * result) = v6; /*0x447649*/
        if ( v12 < v2[3] ) /*0x447656*/
        {
          v10 = v2[1]; /*0x44766a*/
          if ( v4 ) /*0x44766d*/
          {
            if ( !*(_DWORD *)(v10 + 4 * v12) ) /*0x44766f*/
              ++v2[4]; /*0x447675*/
          }
          else if ( *(_DWORD *)(v10 + 4 * v12) ) /*0x44767b*/
          {
            --v2[4]; /*0x447681*/
          }
        }
        else
        {
          v2[3] = v12 + 1; /*0x44765d*/
          if ( v4 ) /*0x447660*/
            ++v2[4]; /*0x447662*/
        }
        *(_DWORD *)(v2[1] + 4 * v12) = v4; /*0x447688*/
        goto LABEL_26; /*0x447688*/
      }
    }
    else
    {
      v2[3] = v5; /*0x447637*/
    }
    ++v2[4]; /*0x447645*/
    goto LABEL_17; /*0x447645*/
  }
  return result; /*0x4476a2*/
}
