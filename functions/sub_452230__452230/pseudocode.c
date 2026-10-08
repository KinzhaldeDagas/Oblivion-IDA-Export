// EnginePatch v1: save-buffer free hook used to remove tracked record ranges and avoid stale bounds during savegame loading.
int __thiscall sub_452230(_DWORD *this, void *a2)
{
  int result; // eax

  result = MemoryHeap_Free_checked(a2); /*0x45223d*/
  *(this + 5) = 0; /*0x452242*/
  return result; /*0x452249*/
}
