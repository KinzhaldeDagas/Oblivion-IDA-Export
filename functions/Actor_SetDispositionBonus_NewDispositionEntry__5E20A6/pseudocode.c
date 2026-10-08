// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_SetDispositionBonus_::NewDispositionEntry(_DWORD *a1@<ebp>, int a2, float a3)
{
  int *v3; // esi
  int v4; // eax

  v3 = (int *)FormHeapAlloc(8u); /*0x5e20b4*/
  v4 = Double_To_SInt32(a3); /*0x5e20b6*/
  v3[1] = a2; /*0x5e20bf*/
  *v3 = v4; /*0x5e20c5*/
  BSSimpleList_PushFront(a1, (int)v3); /*0x5e20c7*/
}
