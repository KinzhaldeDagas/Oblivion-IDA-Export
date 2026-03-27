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

  v5 = a5;
  v6 = (double)(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x224))(a2, a1) + a5;
  if ( v6 >= 0.0 )
  {
    if ( fCostant_100 >= v6 )
    {
      result = Double_To_SInt32(v5 + (double)*a3);
      *a3 = result;
    }
    else
    {
      v8 = a5;
      v10 = (float)(Double_To_SInt32(a5) - 0x64);
      if ( v10 >= v8 )
      {
        result = Double_To_SInt32((float)0.0 + (double)*a3);
      }
      else
      {
        v11 = v8 - v10;
        result = Double_To_SInt32(v11 + (double)*a3);
      }
      *a3 = result;
    }
  }
  else
  {
    v9 = v5 - v6;
    result = Double_To_SInt32(v9 + (double)*a3);
    *a3 = result;
  }
  return result;
}
