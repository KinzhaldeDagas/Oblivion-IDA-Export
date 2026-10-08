void __thiscall Actor::AddPackagEWakeUp_(PlayerCharacter *a1)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx

  Unk_6F = a1->vtbl->super.super.Unk_6F; /*0x660885*/
  a1->isWakeUpPackage = 1; /*0x66088d*/
  Unk_6F((MobileObject *)a1, 0); /*0x660894*/
  sub_5F7EC0((Actor *)a1); /*0x660899*/
}
