void __usercall MagicTarget_RemoveAllEffects(void *this@<ecx>, char a2@<bpl>, double a3@<st0>)
{
  ActiveEffect **v3; // esi
  ActiveEffect *v4; // ecx
  bool v5; // zf

  v3 = (ActiveEffect **)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  while ( v3 )
  {
    if ( !v3[1] && !*v3 )
      break;
    v4 = *v3;
    v5 = *v3 == 0;
    v3 = (ActiveEffect **)v3[1];
    if ( !v5 )
      a3 = ActiveEffect_Base_Remove(v4, a2, a3, 1);
  }
}
