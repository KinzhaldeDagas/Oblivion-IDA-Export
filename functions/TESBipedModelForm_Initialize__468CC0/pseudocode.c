int __thiscall TESBipedModelForm_Initialize(int this)
{
  *(_WORD *)(this + 4) = 0; /*0x468cc8*/
  *(_BYTE *)(this + 6) = 0; /*0x468ccc*/
  (**(void (__thiscall ***)(int))(this + 8))(this + 8); /*0x468cd3*/
  (**(void (__thiscall ***)(int))(this + 0x38))(this + 0x38); /*0x468cdd*/
  (**(void (__thiscall ***)(int))(this + 0x68))(this + 0x68); /*0x468ce7*/
  (**(void (__thiscall ***)(int))(this + 0x20))(this + 0x20); /*0x468cf1*/
  (**(void (__thiscall ***)(int))(this + 0x50))(this + 0x50); /*0x468cfb*/
  return (**(int (__thiscall ***)(int))(this + 0x74))(this + 0x74);
}
