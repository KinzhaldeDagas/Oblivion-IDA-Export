// positive sp value has been detected, the output may be wrong!
int __fastcall TESActorBase_GetAViBase_::def_519DA7(int a1, char a2, int a3)
{
  double AV; // st7

  AV = AVCollection_GetAV((_DWORD *)(a1 + 0xD0), a2);
  return Double_To_SInt32(AV);
}
