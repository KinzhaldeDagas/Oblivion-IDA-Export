double __userpurge MagicTarget_RemoveBoundObj@<st0>(
        int a1@<ecx>,
        char a2@<bpl>,
        double result@<st0>,
        TESBoundObject *a4,
        char a5)
{
  ActiveEffect **v5; // esi
  ActiveEffect *v6; // ecx
  bool v7; // zf

  if ( a4 ) /*0x6a2117*/
  {
    v5 = (ActiveEffect **)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x6a2121*/
    while ( v5 ) /*0x6a2125*/
    {
      if ( !v5[1] && !*v5 ) /*0x6a2137*/
        break; /*0x6a2139*/
      v6 = *v5; /*0x6a213b*/
      v7 = *v5 == 0; /*0x6a213d*/
      v5 = (ActiveEffect **)v5[1]; /*0x6a213f*/
      if ( !v7 && !v6->members.bTerminated && v6->members.boundObjectOrParentForm == a4 ) /*0x6a214c*/
        result = ActiveEffect_Base_Remove(v6, a2, result, a5); /*0x6a214f*/
    }
  }
  return result; /*0x6a215a*/
}
