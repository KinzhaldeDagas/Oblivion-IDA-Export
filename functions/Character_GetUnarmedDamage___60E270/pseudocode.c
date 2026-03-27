int __usercall Character_GetUnarmedDamage_@<eax>(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v6; // [esp-4h] [ebp-20h]
  float FatigueFraction; // [esp+0h] [ebp-1Ch]
  char v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  *(float *)&v9 = 0.0;
  *(float *)&v10 = 0.0;
  FatigueFraction = Actor_GetFatigueFraction(this, a2, a3);
  v8 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))this->vtbl->GetActorValue)(
         this,
         0,
         LODWORD(FatigueFraction),
         0);
  v6 = ((int (__thiscall *)(Actor *))this->vtbl->GetActorValue)(this);
  v4 = ((int (__thiscall *)(Actor *))this->vtbl->GetActorValue)(this);
  Calc_HandToHandDamage(v4, 0x11, v6, COERCE_FLOAT(7), v8, (float *)&v9, (float *)&v10);
  return Double_To_SInt32(*(float *)&v9);
}
