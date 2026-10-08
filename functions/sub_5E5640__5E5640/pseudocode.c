// Process vfunc +0x2D0 in range 2..5 guard used by Player_OnInput jump gate with Acrobatics mastery. Treat as an action/movement lock signal when deciding climb eligibility.
bool __thiscall Actor_IsCurrentActionInRange2To5(_DWORD **this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x5e565d*/
  if ( *(this + 0x16) ) /*0x5e5640*/
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x2D0))(*(this + 0x16)); /*0x5e5651*/
    if ( v1 >= 2 && v1 <= 5 ) /*0x5e565b*/
      return 1; /*0x5e5644*/
  }
  return result; /*0x5e565f*/
}
