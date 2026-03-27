// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_SetDispositionBonus_::NewDispositionEntry(_DWORD *a1@<ebp>, int a2, float a3)
{
  int *v3; // esi
  int v4; // eax

  v3 = (int *)FormHeapAlloc(8u);
  v4 = Double_To_SInt32(a3);
  v3[1] = a2;
  *v3 = v4;
  BSSimpleList_PushFront(a1, (int)v3);
}
