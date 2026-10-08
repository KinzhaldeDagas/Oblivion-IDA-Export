//
//
// [2026-10-03 frond clone trace] Verified NiObject base copy registration: NiTMap_SetAt(*cloningProcess, originalThis, destination). Reached from leaf property CreateClone7F1E60 through CopyMembers7F1C30. This is why the plugin preserves native member copying rather than raw-copying the property allocation.
int __thiscall sub_700770(void *this, int a3, _DWORD **arg4)
{
  return NiTMap_SetAt(*arg4, (int)this, a3); /*0x700781*/
}
