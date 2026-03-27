NiObject *__thiscall sub_89F6B0(int **this, char *a2)
{
  char *v2; // edi
  int *v4; // ecx
  NiObject **v5; // eax
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = dword_B3FA80;
  if ( !sub_890A10(this, (int)v2) )
    return 0;
  if ( !this )
    return NiRTTI_Cast((BSStringT *)dword_B3FA80, 0);
  v4 = *(this + 2);
  if ( !v4 )
    return NiRTTI_Cast((BSStringT *)dword_B3FA80, 0);
  v5 = (NiObject **)sub_47F990(v4, &v7, (int)v2);
  return NiRTTI_Cast((BSStringT *)dword_B3FA80, *v5);
}
