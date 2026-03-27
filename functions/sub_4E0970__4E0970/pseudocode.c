int __thiscall sub_4E0970(_DWORD *this, char *a2)
{
  _WORD *v2; // edi
  int result; // eax
  char *v4; // esi
  int v5; // ebp
  int v6; // eax
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  int v9; // eax
  char v10; // [esp+8h] [ebp-30h] BYREF
  __int16 v11; // [esp+Ah] [ebp-2Eh]
  __int16 v12; // [esp+Ch] [ebp-2Ch]
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  _BYTE v16[8]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v17; // [esp+24h] [ebp-14h]
  char *v18; // [esp+28h] [ebp-10h]

  v2 = (_WORD *)*(this + 0xF);
  result = 0;
  if ( v2 )
  {
    v4 = a2;
    v5 = 3;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( !a2 )
      v4 = &v10;
    *((_DWORD *)v4 + 2) = this;
    *((_DWORD *)v4 + 3) = v2;
    *((_DWORD *)v4 + 4) = sub_4A05E0((int)v2);
    v17 = 0xF;
    v16[4] = 1;
    v18 = v4;
    sub_88A7D0(v2, (int)v16, (void (__cdecl *)(int, int))sub_4DAC00);
    v6 = *((unsigned __int16 *)v4 + 1);
    v7 = *((_WORD *)v4 + 2);
    v8 = v6 + v7;
    if ( (_WORD)v6 )
    {
      if ( v7 )
      {
        *v4 |= 4u;
        v5 = (unsigned __int16)(v8 + 3);
      }
      else
      {
        *v4 |= 1u;
      }
      v5 += 0x18 * v6;
    }
    v9 = v8;
    if ( (*v4 & 2) != 0 )
      v9 = (unsigned __int16)(v8 - 1);
    return v5 + 0x1C * v9;
  }
  return result;
}
