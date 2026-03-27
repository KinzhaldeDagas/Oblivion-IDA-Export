bool __thiscall sub_5F0270(MobileObject *this, float a2)
{
  bhkCharacterProxy *CharProxy; // edi
  void *niNode; // ecx
  int v5; // eax
  float v7; // [esp+Ch] [ebp-1Ch]
  float v8; // [esp+18h] [ebp-10h]
  float v9[3]; // [esp+1Ch] [ebp-Ch] BYREF

  CharProxy = MobileObject_GetCharProxy(this);
  if ( !CharProxy )
    return 1;
  niNode = this->super.niNode;
  if ( !niNode )
    return 1;
  v5 = (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)niNode + 0x58))(niNode, "Bip01 NonAccum");
  if ( !v5 )
    return 1;
  v8 = *(float *)(v5 + 0x90);
  sub_5E1500((__m128 *)CharProxy, v9);
  v7 = v8 - v9[2];
  return a2 >= (double)v7;
}
