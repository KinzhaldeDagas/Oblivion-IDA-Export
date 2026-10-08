// Default range clone: clone through the NiObject pointer map, then invoke the clone's post-clone/collapse virtual. Subclasses override when authored data must be sliced.
int __thiscall NiInterpolator_CloneTimeRange(void *this, int a2, int a3)
{
  int v3; // esi

  v3 = NiObject_CloneWithPointerMap(this); /*0x6eba66*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x90))(v3); /*0x6eba72*/
  return v3; /*0x6eba76*/
}
