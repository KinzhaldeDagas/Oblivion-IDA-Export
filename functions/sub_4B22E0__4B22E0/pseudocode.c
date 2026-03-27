char __thiscall sub_4B22E0(float *this, float *a2, int a3)
{
  NiAVObject *v5; // [esp-Ch] [ebp-10h]

  v5 = *(NiAVObject **)a2;
  if ( *(_DWORD *)a2 )
    InterlockedIncrement((volatile LONG *)(*(_DWORD *)a2 + 4));
  return sub_4B1A50(this, v5, a2 + 1, a3);
}
