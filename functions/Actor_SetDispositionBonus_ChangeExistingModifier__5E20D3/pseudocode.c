// positive sp value has been detected, the output may be wrong!
int __userpurge Actor_SetDispositionBonus_::ChangeExistingModifier@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int *a3@<edi>,
        int a4,
        float a5)
{
  double v5; // st6
  double v6; // st7
  int result; // eax
  double v8; // st7
  float v9; // [esp+8h] [ebp+8h]
  float v10; // [esp+8h] [ebp+8h]
  float v11; // [esp+8h] [ebp+8h]

  v5 = a5; /*0x5e20e8*/
  v6 = (double)(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x224))(a2, a1) + a5; /*0x5e20ee*/
  if ( v6 >= 0.0 ) /*0x5e20f9*/
  {
    if ( fCostant_100 >= v6 ) /*0x5e2122*/
    {
      result = Double_To_SInt32(v5 + (double)*a3); /*0x5e2183*/
      *a3 = result; /*0x5e2188*/
    }
    else
    {
      v8 = a5; /*0x5e2124*/
      v10 = (float)(Double_To_SInt32(a5) - 0x64); /*0x5e2136*/
      if ( v10 >= v8 ) /*0x5e2145*/
      {
        result = Double_To_SInt32((float)0.0 + (double)*a3); /*0x5e2171*/
      }
      else
      {
        v11 = v8 - v10; /*0x5e2149*/
        result = Double_To_SInt32(v11 + (double)*a3); /*0x5e2153*/
      }
      *a3 = result; /*0x5e2158*/
    }
  }
  else
  {
    v9 = v5 - v6; /*0x5e20fd*/
    result = Double_To_SInt32(v9 + (double)*a3); /*0x5e2107*/
    *a3 = result; /*0x5e210c*/
  }
  return result; /*0x5e2112*/
}
