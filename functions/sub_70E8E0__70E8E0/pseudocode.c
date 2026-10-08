LONG __thiscall sub_70E8E0(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  nullsub_returnvVoid_1arg((int)a2); /*0x70e8ea*/
  result = sub_7124A0(a2); /*0x70e8f1*/
  v4 = *(this + 0x13); /*0x70e8f6*/
  v5 = result; /*0x70e8f9*/
  if ( v4 != result ) /*0x70e8fd*/
  {
    if ( v4 ) /*0x70e901*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x70e907*/
      if ( !result ) /*0x70e90f*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x70e91d*/
    }
    *(this + 0x13) = v5; /*0x70e921*/
    if ( v5 ) /*0x70e924*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x70e92a*/
  }
  return result; /*0x70e930*/
}
