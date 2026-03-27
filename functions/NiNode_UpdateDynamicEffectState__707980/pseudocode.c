LONG __thiscall NiNode_UpdateDynamicEffectState(NiNode *this)
{
  int v2; // esi
  NiNode *m_parent; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  LONG result; // eax
  int v8; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+20h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  m_parent = this->members.super.m_parent;
  v4 = InterlockedDecrement;
  v10 = 0;
  if ( m_parent )
  {
    v5 = sub_70B400(m_parent, &v9);
    LOBYTE(v10) = 1;
    sub_55E2A0(&v8, v5);
    v6 = (void (__thiscall ***)(_DWORD, int))v9;
    LOBYTE(v10) = 0;
    if ( v9 )
    {
      if ( !v4((volatile LONG *)(v9 + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
    }
    v2 = v8;
  }
  result = ((int (__thiscall *)(NiNode *, int))this->vtbl->super.UpdateEffectsDownward)(this, v2);
  v10 = 0xFFFFFFFF;
  if ( v2 )
  {
    result = v4((volatile LONG *)(v2 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return result;
}
