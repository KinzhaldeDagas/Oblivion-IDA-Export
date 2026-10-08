NiAVObject **__thiscall sub_724040(int this, NiAVObject **child, NiAVObject *arg1)
{
  unsigned int v4; // eax
  bool v5; // zf
  NiAVObject **v6; // ecx
  _DWORD *v7; // ecx
  unsigned __int16 v8; // cx
  int v9; // eax

  v4 = 0; /*0x724044*/
  v5 = *(_WORD *)(this + 0xB6) == 0; /*0x724046*/
  *(_DWORD *)(this + 0xE8) = 1; /*0x72405a*/
  if ( !v5 ) /*0x724064*/
  {
    v6 = *(NiAVObject ***)(this + 0xB0); /*0x724066*/
    while ( arg1 != *v6 ) /*0x724072*/
    {
      ++v4; /*0x72407b*/
      ++v6; /*0x72407e*/
      if ( v4 >= *(unsigned __int16 *)(this + 0xB6) ) /*0x724083*/
        goto LABEL_11; /*0x724083*/
    }
    if ( v4 < *(unsigned __int16 *)(this + 0xF6) ) /*0x724090*/
    {
      v7 = (_DWORD *)(*(_DWORD *)(this + 0xF0) + 4 * v4); /*0x724098*/
      v5 = *v7 == 0; /*0x72409d*/
      *v7 = 0; /*0x72409f*/
      if ( !v5 ) /*0x7240a5*/
        --*(_WORD *)(this + 0xF8); /*0x7240a7*/
      v8 = *(_WORD *)(this + 0xF6); /*0x7240b0*/
      if ( v4 == v8 - 1 ) /*0x7240bf*/
        *(_WORD *)(this + 0xF6) = v8 - 1; /*0x7240c4*/
    }
  }
LABEL_11:
  NiNode::RemoveObject((NiNode *)this, child, arg1); /*0x7240cb*/
  v9 = *(_DWORD *)(this + 0xE0); /*0x7240d8*/
  if ( v9 > (int)0xFFFFFFFF /*0x7240f4*/
    && (v9 >= *(unsigned __int16 *)(this + 0xB6) || !*(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v9)) )
  {
    *(_DWORD *)(this + 0xE0) = 0xFFFFFFFF; /*0x7240fa*/
  }
  return child; /*0x724106*/
}
