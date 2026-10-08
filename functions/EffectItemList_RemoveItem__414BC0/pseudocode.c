char __thiscall EffectItemList_RemoveItem(int *this, _DWORD *a2)
{
  int *v3; // ecx
  int *v4; // eax

  v3 = this + 1; /*0x414bc3*/
  v4 = v3; /*0x414bc6*/
  if ( v3 ) /*0x414bca*/
  {
    while ( (_DWORD *)*v4 != a2 ) /*0x414bd3*/
    {
      v4 = (int *)v4[1]; /*0x414bd5*/
      if ( !v4 ) /*0x414bda*/
        return (char)v4; /*0x414bda*/
    }
    BSSimpleList_Remove(v3, (int)a2); /*0x414be2*/
    LOBYTE(v4) = EffectItem_IsHostile(a2); /*0x414be9*/
    if ( (_BYTE)v4 ) /*0x414bf0*/
      --*(this + 3); /*0x414bf2*/
  }
  return (char)v4; /*0x414bdd*/
}
