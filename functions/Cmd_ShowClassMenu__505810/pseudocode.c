char __usercall Cmd_ShowClassMenu@<al>(char a1@<bpl>, char a2@<dil>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _BYTE *BaseClass; // esi

  if ( TESDataHandler_g_PlayerRef )
  {
    BaseClass = (_BYTE *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
    if ( !TESClass_IsPlayable(BaseClass) )
      BaseClass = (_BYTE *)Actor_GetDefaultClass(TESDataHandler_g_PlayerRef);
    sub_57AA20(a1, a2, a3, a4, a5, (int)BaseClass);
  }
  return 1;
}
