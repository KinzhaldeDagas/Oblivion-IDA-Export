int __thiscall sub_459080(_DWORD *this, void (__thiscall *a2)(NiRefObject *this, bool freeThis), int a3)
{
  int v4; // ebp
  unsigned __int16 *v5; // eax
  unsigned __int16 v6; // bx
  int result; // eax

  v4 = *(this + 5);
  *(this + 5) = a3;
  v5 = (unsigned __int16 *)SaveLoad_CurrentSavegame->unk000[5];
  v6 = *v5;
  SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v5 + 1);
  sub_4E2F70(a2, 0);
  result = v6;
  if ( v6 + a3 + 2 != *(this + 5) )
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
               dword_B34D90,
               "LoadAttachedAnimations() call did not properly empty buffer.");
  *(this + 5) = v4;
  return result;
}
