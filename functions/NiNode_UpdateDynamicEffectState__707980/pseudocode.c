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

  v2 = 0; /*0x7079a8*/
  v8 = 0; /*0x7079aa*/
  m_parent = this->members.super.m_parent; /*0x7079ae*/
  v4 = InterlockedDecrement; /*0x7079b3*/
  v10 = 0; /*0x7079b9*/
  if ( m_parent ) /*0x7079bd*/
  {
    v5 = sub_70B400(m_parent, &v9); /*0x7079c4*/
    LOBYTE(v10) = 1; /*0x7079ce*/
    OB_NiSmartPointer_Assign_010201A0(&v8, v5); /*0x7079d3*/
    v6 = (void (__thiscall ***)(_DWORD, int))v9; /*0x7079d8*/
    LOBYTE(v10) = 0; /*0x7079de*/
    if ( v9 ) /*0x7079e3*/
    {
      if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x7079e9*/
      {
        if ( v6 ) /*0x7079f1*/
          (**v6)(v6, 1); /*0x7079fb*/
      }
    }
    v2 = v8; /*0x7079fd*/
  }
  result = ((int (__thiscall *)(NiNode *, int))this->vtbl->super.UpdateEffectsDownward)(this, v2); /*0x707a09*/
  v10 = 0xFFFFFFFF; /*0x707a0d*/
  if ( v2 ) /*0x707a15*/
  {
    result = v4((volatile LONG *)(v2 + 4)); /*0x707a1b*/
    if ( !result ) /*0x707a1f*/
      return (**(LONG (__thiscall ***)(int, int))v2)(v2, 1); /*0x707a29*/
  }
  return result; /*0x707a2b*/
}
