int __thiscall sub_4C0190(_DWORD *this, float a2, __int16 a3)
{
  unsigned __int8 v3; // bl
  int result; // eax
  unsigned __int16 v5; // bp
  unsigned int v6; // edx
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  double v10; // st7
  int v11; // ecx
  _DWORD *v12; // ecx
  int v13; // ecx
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+14h] [ebp+4h]

  v3 = LOBYTE(a2); /*0x4c0194*/
  result = 0; /*0x4c0198*/
  if ( LOBYTE(a2) < 4u && (unsigned __int16)a3 < 0x121u ) /*0x4c01ad*/
  {
    v16 = flt_A3B888; /*0x4c01ba*/
    v5 = 0; /*0x4c01be*/
    v6 = 0; /*0x4c01c2*/
    v14 = 0.0; /*0x4c01c4*/
    do /*0x4c0224*/
    {
      v15 = 0.0; /*0x4c01cc*/
      v7 = *(this + 9); /*0x4c01d6*/
      if ( v7 ) /*0x4c01db*/
      {
        v8 = *(_DWORD *)(v7 + 4 * v3 + 0x40) == 0; /*0x4c01e0*/
        v9 = (_DWORD *)(v7 + 4 * v3 + 0x40); /*0x4c01e5*/
        if ( !v8 ) /*0x4c01e9*/
          v15 = *(float *)(*(_DWORD *)(*v9 + 4 * (unsigned __int16)a3) + 4 * (unsigned __int16)v6); /*0x4c01fb*/
      }
      if ( v16 < (double)v15 ) /*0x4c020e*/
      {
        v16 = v15; /*0x4c0210*/
        v5 = v6; /*0x4c0214*/
      }
      ++v6; /*0x4c021a*/
      v14 = v15 + v14; /*0x4c0220*/
    }
    while ( v6 < 8 ); /*0x4c0224*/
    v10 = v16; /*0x4c0229*/
    v17 = 1.0 - v14; /*0x4c0235*/
    if ( v17 >= v10 ) /*0x4c0244*/
    {
      v13 = *(this + 9); /*0x4c0273*/
      result = 0; /*0x4c0276*/
      if ( v13 ) /*0x4c027a*/
        return *(_DWORD *)(v13 + 4 * v3 + 0x20); /*0x4c027f*/
    }
    else
    {
      result = 0; /*0x4c0246*/
      v11 = *(this + 9); /*0x4c024e*/
      if ( v11 ) /*0x4c0253*/
      {
        v8 = *(_DWORD *)(v11 + 4 * v3 + 0x30) == 0; /*0x4c0258*/
        v12 = (_DWORD *)(v11 + 4 * v3 + 0x30); /*0x4c025c*/
        if ( !v8 ) /*0x4c0260*/
          return *(_DWORD *)(*v12 + 4 * v5); /*0x4c0267*/
      }
    }
  }
  return result; /*0x4c026b*/
}
