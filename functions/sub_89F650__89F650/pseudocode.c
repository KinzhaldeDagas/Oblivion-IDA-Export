char __thiscall sub_89F650(int **this, int a2, NiRTTI *a3)
{
  NiRTTI *v3; // edi
  char result; // al
  int *v6; // ecx
  _DWORD *v7; // ecx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = a3; /*0x89f655*/
  if ( !a3 ) /*0x89f65d*/
    v3 = &stru_B3FA80; /*0x89f65f*/
  result = sub_890A10(this, (int)v3); /*0x89f665*/
  if ( result ) /*0x89f66c*/
  {
    if ( this ) /*0x89f670*/
    {
      v6 = *(this + 2); /*0x89f672*/
      if ( v6 ) /*0x89f677*/
        result = (unsigned __int8)sub_8BC7B0(v6, &v8, (int)v3); /*0x89f67f*/
    }
  }
  if ( a2 ) /*0x89f68a*/
  {
    result = 0; /*0x89f68c*/
    if ( this ) /*0x89f690*/
    {
      v7 = *(this + 2); /*0x89f692*/
      if ( v7 ) /*0x89f697*/
        return (unsigned __int8)sub_8BC750(v7, (int)v3, a2, 0); /*0x89f69c*/
    }
  }
  return result; /*0x89f6a1*/
}
