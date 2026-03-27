int __thiscall sub_459370(_DWORD *this, _DWORD *a2, int a3)
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
  result = sub_4E31E0(a2, v6);
  if ( v6 + a3 + 2 != *(this + 5) )
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
               dword_B34D90,
               "LoadHavokData() call did not properly empty buffer.");
  *(this + 5) = v4;
  return result;
}
