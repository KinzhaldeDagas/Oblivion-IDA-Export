OB_stVector4_010201A0 *__thiscall sub_6F22C0(OB_stVector4_010201A0 *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // edi
  bool v9; // cc
  _DWORD *v10; // ecx
  int v12; // [esp+0h] [ebp-24h] BYREF
  OB_stVector4_010201A0 *v13; // [esp+10h] [ebp-14h]
  int *v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+20h] [ebp-4h]
  _DWORD *v16; // [esp+2Ch] [ebp+8h]

  v14 = &v12; /*0x6f22e8*/
  v13 = this; /*0x6f22ed*/
  v4 = *(_DWORD *)(a2 + 4); /*0x6f22f3*/
  if ( v4 ) /*0x6f22fa*/
    v5 = (*(_DWORD *)(a2 + 8) - v4) / 0xC; /*0x6f2313*/
  else
    v5 = 0; /*0x6f22fc*/
  this->begin = 0; /*0x6f2317*/
  this->end = 0; /*0x6f231a*/
  this->capacity = 0; /*0x6f231d*/
  if ( v5 ) /*0x6f2320*/
  {
    v6 = 0xC * v5; /*0x6f2331*/
    v7 = FormHeapAlloc(0xC * v5); /*0x6f2334*/
    this->begin = (unsigned int *)v7; /*0x6f233b*/
    this->end = (unsigned int *)v7; /*0x6f233e*/
    this->capacity = (unsigned int *)(v7 + v6); /*0x6f2341*/
    v8 = *(_DWORD **)(a2 + 8); /*0x6f2344*/
    v9 = *(_DWORD *)(a2 + 4) <= (unsigned int)v8; /*0x6f234a*/
    v15 = 0; /*0x6f234d*/
    if ( !v9 ) /*0x6f2354*/
      _invalid_parameter_noinfo(); /*0x6f2356*/
    v16 = *(_DWORD **)(a2 + 4); /*0x6f2361*/
    v10 = v16; /*0x6f235b*/
    if ( (unsigned int)v16 > *(_DWORD *)(a2 + 8) ) /*0x6f2364*/
    {
      _invalid_parameter_noinfo(); /*0x6f2366*/
      v10 = v16; /*0x6f236b*/
    }
    this->end = sub_6F11A0(v10, v8, this->begin); /*0x6f2389*/
  }
  return this; /*0x6f238e*/
}
