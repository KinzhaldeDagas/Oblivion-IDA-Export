double __usercall sub_5F0750@<st0>(_DWORD *this@<ecx>, double result@<st0>)
{
  int v4; // ecx
  int v5; // eax
  ActiveEffect **i; // edi
  ActiveEffect *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx

  v4 = *(this + 0x16); /*0x5f0754*/
  if ( v4 ) /*0x5f075e*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x3D0))(v4) ) /*0x5f076c*/
    {
      v5 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(*(_DWORD *)*(this + 0x16) + 0x3D0))( /*0x5f0782*/
             *(this + 0x16),
             result);
      for ( i = (ActiveEffect **)(*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 0x68) + 8))(v5 + 0x68); /*0x5f0792*/
            i;
            i = (ActiveEffect **)i[1] )
      {
        if ( !i[1] && !*i ) /*0x5f079b*/
          break; /*0x5f079e*/
        v7 = *i; /*0x5f07a0*/
        if ( *i ) /*0x5f07a0*/
        {
          if ( (v7->members.effectItem->setting->effectFlags & 0x40000) != 0 ) /*0x5f07b5*/
          {
            v8 = OblivionDynamicCast( /*0x5f07c6*/
                   v7,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                   &SummonCreatureEffect `RTTI Type Descriptor',
                   0);
            if ( v8 ) /*0x5f07d0*/
              v9 = (_DWORD *)v8[0xF]; /*0x5f07d2*/
            else
              v9 = 0; /*0x5f07d7*/
            if ( v9 == this ) /*0x5f07db*/
            {
              v8[0xF] = 0; /*0x5f07e1*/
              result = ActiveEffect_Base_Remove(v7, (char)this, result, 1); /*0x5f07e8*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5f07ff*/
}
