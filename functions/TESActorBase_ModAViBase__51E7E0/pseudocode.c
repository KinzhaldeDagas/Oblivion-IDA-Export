int __thiscall TESActorBase_ModAViBase(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  v4 = *this;
  v5 = (*(int (__thiscall **)(int *, int))(*this + 0x128))(this, a2);
  return (*(int (__thiscall **)(int *, int, int))(v4 + 0x134))(this, a2, a3 + v5);
}
