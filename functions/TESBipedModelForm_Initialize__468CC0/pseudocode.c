int __thiscall TESBipedModelForm_Initialize(int this)
{
  *(_WORD *)(this + 4) = 0;
  *(_BYTE *)(this + 6) = 0;
  (**(void (__thiscall ***)(int))(this + 8))(this + 8);
  (**(void (__thiscall ***)(int))(this + 0x38))(this + 0x38);
  (**(void (__thiscall ***)(int))(this + 0x68))(this + 0x68);
  (**(void (__thiscall ***)(int))(this + 0x20))(this + 0x20);
  (**(void (__thiscall ***)(int))(this + 0x50))(this + 0x50);
  return (**(int (__thiscall ***)(int))(this + 0x74))(this + 0x74);
}
