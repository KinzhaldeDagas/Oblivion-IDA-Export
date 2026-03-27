void __thiscall Actor::AddPackagEWakeUp_(PlayerCharacter *a1)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx

  Unk_6F = a1->vtbl->super.super.Unk_6F;
  a1->isWakeUpPackage = 1;
  Unk_6F((MobileObject *)a1, 0);
  sub_5F7EC0((Actor *)a1);
}
