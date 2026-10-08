bool __thiscall sub_5F0270(MobileObject *this, float a2)
{
  bhkCharacterProxy *CharProxy; // edi
  void *niNode; // ecx
  int v5; // eax
  float v7; // [esp+Ch] [ebp-1Ch]
  float v8; // [esp+18h] [ebp-10h]
  float v9[3]; // [esp+1Ch] [ebp-Ch] BYREF

  CharProxy = MobileObject_GetCharProxy(this); /*0x5f027f*/
  if ( !CharProxy ) /*0x5f0283*/
    return 1; /*0x5f0283*/
  niNode = this->super.niNode; /*0x5f0285*/
  if ( !niNode ) /*0x5f028a*/
    return 1; /*0x5f028a*/
  v5 = (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)niNode + 0x58))(niNode, "Bip01 NonAccum"); /*0x5f0296*/
  if ( !v5 ) /*0x5f029a*/
    return 1; /*0x5f02fa*/
  v8 = *(float *)(v5 + 0x90); /*0x5f02bd*/
  sub_5E1500((__m128 *)CharProxy, v9); /*0x5f02c1*/
  v7 = v8 - v9[2]; /*0x5f02ce*/
  return a2 >= (double)v7; /*0x5f02e2*/
}
