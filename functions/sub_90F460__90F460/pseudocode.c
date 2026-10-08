void __thiscall sub_90F460(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD **v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  char i; // [esp+10h] [ebp-4h]

  if ( *a2 ) /*0x90f46a*/
  {
    v3 = *(this + 0x49) - 1; /*0x90f476*/
    if ( v3 < 0 ) /*0x90f477*/
    {
LABEL_6:
      v5 = *(this + 0x15) - 1; /*0x90f48f*/
      v10[1] = a2; /*0x90f493*/
      v10[0] = this; /*0x90f497*/
      for ( i = 0; v5 >= 0; --v5 ) /*0x90f4a0*/
      {
        v6 = *(_DWORD *)(*(this + 0x14) + 4 * v5); /*0x90f4a5*/
        if ( v6 ) /*0x90f4aa*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 4))(v6, v10); /*0x90f4b3*/
      }
    }
    else
    {
      v4 = (_DWORD **)(*(this + 0x48) + 8 * v3 + 4); /*0x90f47f*/
      while ( *v4 != a2 ) /*0x90f485*/
      {
        --v3; /*0x90f487*/
        v4 += 0xFFFFFFFE; /*0x90f488*/
        if ( v3 < 0 ) /*0x90f48d*/
          goto LABEL_6; /*0x90f48d*/
      }
      sub_88D7D0(this, a2, 1); /*0x90f4ca*/
      v7 = *(_DWORD *)(*(this + 0x48) + 8 * v3); /*0x90f4d5*/
      if ( v7 ) /*0x90f4da*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 0x18))(v7); /*0x90f4de*/
      v8 = *(this + 0x49) - 1; /*0x90f4e7*/
      *(this + 0x49) = v8; /*0x90f4e8*/
      v9 = *(this + 0x48); /*0x90f4ee*/
      *(_DWORD *)(v9 + 8 * v3) = *(_DWORD *)(v9 + 8 * v8); /*0x90f4f7*/
      *(_DWORD *)(v9 + 8 * v3 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x90f4fe*/
    }
  }
}
