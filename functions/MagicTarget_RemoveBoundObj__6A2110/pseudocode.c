void __userpurge MagicTarget_RemoveBoundObj(int a1@<ecx>, char a2@<bpl>, double a3@<st0>, TESBoundObject *a4, char a5)
{
  ActiveEffect **v5; // esi
  ActiveEffect *v6; // ecx
  bool v7; // zf

  if ( a4 )
  {
    v5 = (ActiveEffect **)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    while ( v5 )
    {
      if ( !v5[1] && !*v5 )
        break;
      v6 = *v5;
      v7 = *v5 == 0;
      v5 = (ActiveEffect **)v5[1];
      if ( !v7 && !v6->members.bTerminated && v6->members.boundObjectOrParentForm == a4 )
        a3 = ActiveEffect_Base_Remove(v6, a2, a3, a5);
    }
  }
}
