int __thiscall Player_Actor_PostLink_CleanAVModifiers(_DWORD *this, int a2, int a3, char a4)
{
  void **v5; // edi
  _BYTE v7[288]; // [esp+Ch] [ebp-120h] BYREF

  _memset((int)v7, 0, sizeof(v7)); /*0x666a87*/
  v5 = (void **)(*(int (__thiscall **)(_DWORD *))(*(this + 0x1A) + 8))(this + 0x1A); /*0x666a9a*/
  if ( !v5 ) /*0x666a9e*/
    JUMPOUT(0x666B30); /*0x666b30*/
  return Player_Actor_PostLink_CleanAVModifiers_::EffectLoop_Test(v5, a2, a3, a4);
}
