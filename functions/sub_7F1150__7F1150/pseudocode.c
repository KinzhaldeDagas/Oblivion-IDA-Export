// SpeedTreeLeafShader vtable slot +0x90, matching the SetupPasses slot used by the Oblivion frond and branch shader vtables. Dispatches virtual slot +0x94 with the leaf shader's stored pass/setup object at this+0x394.
int __thiscall sub_7F1150(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *(this + 0xE5)); /*0x7f1161*/
}
