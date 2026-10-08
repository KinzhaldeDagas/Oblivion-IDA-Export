// EffectItemList_HasScriptEffect: true only when the effect item's script pointer matches and its EffectSetting flags do not include 0x400000.
bool __thiscall EffectItemList_HasScriptEffect(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  bool v4; // bl
  int v5; // edi
  int v6; // eax
  int v7; // esi

  v2 = this; /*0x414f81*/
  if ( !*(this + 2) && !*(this + 1) ) /*0x414f89*/
    return 0; /*0x414f8f*/
  v4 = 0; /*0x414f96*/
  if ( this ) /*0x414f9a*/
  {
    do /*0x414fd2*/
    {
      if ( v4 ) /*0x414fa4*/
        break; /*0x414fa4*/
      v5 = v2[1]; /*0x414fa6*/
      if ( v5 ) /*0x414fab*/
      {
        EffectItem_GetScript((UInt32 **)v2[1]); /*0x414faf*/
        if ( v6 == a2 ) /*0x414fb6*/
          v4 = (*(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 0x400000) == 0; /*0x414fc6*/
      }
      v7 = v2[2]; /*0x414fc8*/
      if ( !v7 ) /*0x414fcd*/
        break; /*0x414fcd*/
      v2 = (_DWORD *)(v7 - 4); /*0x414fcf*/
    }
    while ( v2 ); /*0x414fd2*/
  }
  return v4; /*0x414f91*/
}
