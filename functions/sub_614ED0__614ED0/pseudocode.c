char __thiscall sub_614ED0(TESForm *this, void *a2)
{
  _DWORD **v3; // esi
  int CurrentTarget; // ebx
  double v6; // [esp+Ch] [ebp-8h]

  v3 = (_DWORD **)OblivionDynamicCast( /*0x614ef0*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &CombatController `RTTI Type Descriptor',
                    0);
  if ( !v3 ) /*0x614ef7*/
    return 0; /*0x614efb*/
  if ( sub_566400(this, a2) ) /*0x614f07*/
  {
    CurrentTarget = CombatController_GetCurrentTarget((int)v3); /*0x614f19*/
    if ( CombatController_GetCurrentTarget((int)this) == CurrentTarget /*0x614f42*/
      && *((_BYTE *)this + 0x48) == *((_BYTE *)v3 + 0x48)
      && *((_BYTE *)this + 0x49) == *((_BYTE *)v3 + 0x49)
      && *((_BYTE *)this + 0x4A) == *((_BYTE *)v3 + 0x4A)
      && *((_BYTE *)this + 0x4D) == *((_BYTE *)v3 + 0x4D) )
    {
      v6 = sub_612F30(this); /*0x614f4b*/
      if ( sub_612F30(v3) == v6 ) /*0x614f5f*/
        return 1; /*0x614f63*/
    }
  }
  return 0; /*0x614ef9*/
}
