void __thiscall sub_75A570(_DWORD *this, float a2, float a3)
{
  int v4; // ecx
  float v5; // edi
  int i; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  float v10; // [esp+28h] [ebp-4h]

  v4 = *(this + 6); /*0x75a574*/
  v5 = a3; /*0x75a57b*/
  if ( v4 ) /*0x75a57f*/
  {
    if ( *(_WORD *)(LODWORD(a3) + 0x48) ) /*0x75a581*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 0x54))(v4); /*0x75a58d*/
  }
  for ( i = 0; /*0x75a591*/
        (unsigned __int16)i < *(_WORD *)(LODWORD(v5) + 0x48);
        *(float *)(*(_DWORD *)(LODWORD(v5) + 0x5C) + 4 * v9 + 0x14) = a3 )
  {
    v7 = *(this + 6); /*0x75a5a9*/
    v10 = *(float *)(*(this + 4) + 0xE8); /*0x75a5ae*/
    a3 = a2; /*0x75a5b6*/
    if ( v7 /*0x75a5d4*/
      && (v8 = (*(int (__stdcall **)(float, float *, float, int))(*(_DWORD *)v7 + 0x4C))(
                 COERCE_FLOAT(LODWORD(v10)),
                 &a3,
                 COERCE_FLOAT(LODWORD(v5)),
                 i)) != 0 )
    {
      (*(void (__thiscall **)(int, _DWORD, float, int))(*(_DWORD *)v8 + 0x50))( /*0x75a5e7*/
        v8,
        LODWORD(a2),
        COERCE_FLOAT(LODWORD(v5)),
        i);
    }
    else
    {
      a3 = v10; /*0x75a5ef*/
    }
    v9 = 7 * (unsigned __int16)i++; /*0x75a604*/
  }
}
