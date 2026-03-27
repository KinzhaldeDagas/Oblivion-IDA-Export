LONG __thiscall sub_88E880(float *this, int a2)
{
  int v3; // ebx
  int v4; // ebp
  NiAVObject *v5; // eax
  LONG result; // eax

  v3 = *(_DWORD *)(a2 + 0x10);
  if ( v3 )
    InterlockedIncrement((volatile LONG *)(v3 + 4));
  sub_897670((_DWORD *)a2, 0);
  sub_897670(this, v3);
  v4 = *(_DWORD *)this;
  *(this + 6) = *(float *)(a2 + 0x18);
  *(this + 5) = *(float *)(a2 + 0x14);
  *(this + 8) = *(float *)(a2 + 0x20);
  v5 = sub_452A60((Atmosphere *)a2);
  result = (*(int (__thiscall **)(float *, NiAVObject *))(v4 + 0x4C))(this, v5);
  if ( v3 )
  {
    result = InterlockedDecrement((volatile LONG *)(v3 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v3)(v3, 1);
  }
  return result;
}
