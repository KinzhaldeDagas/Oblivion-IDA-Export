void __usercall sub_488FD3(int a1@<esi>, int a2, int a3, int a4, float a5)
{
  _DWORD *v5; // ecx
  int v6; // ebx
  int *SafeFloatPointer; // eax
  signed int Magnitude; // eax

  v5 = *(_DWORD **)(a1 + 4);
  if ( !v5 )
    JUMPOUT(0x488EF4);
  v6 = v5[7];
  if ( (*(_DWORD *)(v6 + 0x58) & 0x100) != 0 )
  {
    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fMagicCEEnchantMagOffset);
    Magnitude = Double_To_SInt32(*(float *)SafeFloatPointer);
  }
  else
  {
    Magnitude = EffectItem_GetMagnitude(v5);
  }
  sub_489003(Magnitude, v6, a1, a2, a3, a4, a5);
}
