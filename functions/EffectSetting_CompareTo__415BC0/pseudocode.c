char __thiscall EffectSetting_CompareTo(TESForm *this, TESForm *a2)
{
  _DWORD *v3; // esi
  __int16 v4; // cx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // esi

  v3 = OblivionDynamicCast( /*0x415bdd*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &EffectSetting `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x415be4*/
  {
    if ( !TESForm_CompareAllComponentsTo(this, a2) /*0x415cee*/
      && *((_DWORD *)this + 0x26) == v3[0x26]
      && *((_DWORD *)this + 0x16) == v3[0x16]
      && *((float *)v3 + 0x17) == *((float *)this + 0x17)
      && *((_DWORD *)this + 0x18) == v3[0x18]
      && *((_DWORD *)this + 0x19) == v3[0x19]
      && *((_DWORD *)this + 0x1A) == v3[0x1A]
      && *((_DWORD *)this + 0x1C) == v3[0x1C]
      && *((_DWORD *)this + 0x1E) == v3[0x1E]
      && *((_DWORD *)this + 0x1F) == v3[0x1F]
      && *((float *)v3 + 0x1D) == *((float *)this + 0x1D)
      && *((_DWORD *)this + 0x20) == v3[0x20]
      && *((_DWORD *)this + 0x21) == v3[0x21]
      && *((_DWORD *)this + 0x22) == v3[0x22]
      && *((_DWORD *)this + 0x23) == v3[0x23]
      && *((float *)v3 + 0x24) == *((float *)this + 0x24)
      && *((float *)v3 + 0x25) == *((float *)this + 0x25) )
    {
      v4 = *((_WORD *)this + 0x36); /*0x415cf0*/
      if ( v4 == *((_WORD *)v3 + 0x36) ) /*0x415cf8*/
      {
        v5 = 0; /*0x415cfd*/
        if ( v4 <= 0 ) /*0x415d01*/
          return 0; /*0x415d27*/
        v6 = *((_DWORD **)this + 0x27); /*0x415d03*/
        v7 = v3[0x27] - (_DWORD)v6; /*0x415d0f*/
        while ( *v6 == *(_DWORD *)((char *)v6 + v7) ) /*0x415d16*/
        {
          ++v5; /*0x415d18*/
          ++v6; /*0x415d1b*/
          if ( v5 >= v4 ) /*0x415d20*/
            return 0; /*0x415d20*/
        }
      }
    }
  }
  return 1; /*0x415d22*/
}
