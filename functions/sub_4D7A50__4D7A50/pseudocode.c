bool __thiscall sub_4D7A50(_BYTE *this)
{
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this)
      && (unsigned int)*(unsigned __int8 *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) - 0x23 <= 2
      && ExtraDataList::TrespassPackakePresent((ExtraDataList *)(this + 0x44));
}
