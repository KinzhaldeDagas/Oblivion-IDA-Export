__m128 *__thiscall sub_8A9C60(_DWORD **this, int a2)
{
  __m128 v4; // [esp+10h] [ebp-10h] BYREF

  (*(void (__thiscall **)(_DWORD, int))(**(this + 0x14) + 0x40))(*(this + 0x14), a2);
  return sub_8A9970((int)this, &v4);
}
