int __thiscall TESActorBase_SetAVfBase(int *this, int a2, float a3)
{
  int v4; // edi
  int v5; // eax

  v4 = *this;
  v5 = Double_To_SInt32(a3);
  return (*(int (__thiscall **)(int *, int, int))(v4 + 0x134))(this, a2, v5);
}
