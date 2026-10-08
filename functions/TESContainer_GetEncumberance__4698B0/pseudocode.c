double __thiscall TESContainer_GetEncumberance(int this)
{
  double result; // st7
  int **v2; // esi
  int *v3; // edi
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  result = 0.0; /*0x4698b7*/
  v5 = 0.0; /*0x4698b9*/
  if ( (*(_BYTE *)(this + 4) & 1) != 0 ) /*0x4698bc*/
  {
    v2 = (int **)(this + 8); /*0x4698c5*/
    if ( *(_DWORD *)(this + 8) ) /*0x4698be*/
    {
      do /*0x469905*/
      {
        v3 = *v2; /*0x4698d0*/
        v4 = (*v2)[1]; /*0x4698d2*/
        v2 = (int **)v2[1]; /*0x4698d8*/
        if ( (*(_DWORD *)(v4 + 8) & 0x20) == 0 ) /*0x4698e1*/
          v5 = TESWeightForm_GetWeightForForm_Fast(v4) * (double)(int)abs32(*v3) + v5; /*0x4698ff*/
      }
      while ( v2 ); /*0x469905*/
    }
    return v5; /*0x469908*/
  }
  return result; /*0x46990d*/
}
