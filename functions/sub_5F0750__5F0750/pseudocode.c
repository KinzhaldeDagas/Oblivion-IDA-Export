char __usercall sub_5F0750@<al>(_DWORD *this@<ecx>, double a2@<st2>)
{
  int v3; // ecx
  int v4; // eax
  ActiveEffect **i; // edi
  ActiveEffect *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  char v10; // [esp+7h] [ebp-1h]

  v3 = *(this + 0x16);
  v10 = 0;
  if ( !v3 || !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x3D0))(v3) )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x3D0))(*(this + 0x16));
  for ( i = (ActiveEffect **)(*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 0x68) + 8))(v4 + 0x68);
        i;
        i = (ActiveEffect **)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v6 = *i;
    if ( *i )
    {
      if ( (v6->members.effectItem->setting->effectFlags & 0x40000) != 0 )
      {
        v7 = OblivionDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
               &SummonCreatureEffect `RTTI Type Descriptor',
               0);
        if ( v7 )
          v8 = (_DWORD *)v7[0xF];
        else
          v8 = 0;
        if ( v8 == this )
        {
          v7[0xF] = 0;
          ActiveEffect_Base_Remove(v6, (char)this, a2, 1);
          v10 = 1;
        }
      }
    }
  }
  return v10;
}
