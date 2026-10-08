// positive sp value has been detected, the output may be wrong!
void __userpurge MagicCaster_UseActiveMagicItem(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st0>,
        double a4@<st1>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int (__thiscall *v17)(_DWORD *); // edx
  void *v18; // eax
  _BYTE *v19; // eax
  int v20; // edi
  int (__thiscall *v21)(_DWORD *, float *, int *, _DWORD); // edx
  _BYTE *v22; // ebp
  int v23; // eax
  char v24; // al
  int v25; // edx
  int v26; // eax
  TESObjectREFR *v27; // edi
  void *v28; // eax
  EffectSetting *FXEffect; // eax
  int SchoolFailureSound; // eax
  int v31; // ecx
  char *v32; // eax
  int v33; // edi
  int (__thiscall *v34)(_DWORD *, _DWORD); // edx
  int v35; // eax
  unsigned int duration; // [esp+14h] [ebp-30h]
  int durationa; // [esp+14h] [ebp-30h]
  int v38; // [esp+24h] [ebp-20h] BYREF
  float v39; // [esp+28h] [ebp-1Ch] BYREF
  BSStringT string; // [esp+30h] [ebp-14h] BYREF
  int v41; // [esp+40h] [ebp-4h]

  if ( (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*this + 0x30))( /*0x69beed*/
         this,
         a3,
         a4,
         st5_0) )
  {
    v17 = *(int (__thiscall **)(_DWORD *))(*this + 0x30); /*0x69befb*/
    v39 = 0.0; /*0x69befe*/
    v18 = (void *)v17(this); /*0x69bf04*/
    v19 = OblivionDynamicCast( /*0x69bf15*/
            v18,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &IngredientItem `RTTI Type Descriptor',
            0);
    v20 = *this; /*0x69bf1a*/
    v21 = *(int (__thiscall **)(_DWORD *, float *, int *, _DWORD))(*this + 0x30); /*0x69bf1c*/
    v22 = v19; /*0x69bf22*/
    v38 = 0; /*0x69bf32*/
    v23 = v21(this, &v39, &v38, 0); /*0x69bf3a*/
    v24 = (*(int (__thiscall **)(_DWORD *, int))(v20 + 0x1C))(this, v23); /*0x69bf42*/
    v25 = *this; /*0x69bf46*/
    if ( v24 ) /*0x69bf4a*/
    {
      MagicCaster_UseActiveMagicItem_::Cast(v25, this, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16); /*0x69bf4a*/
    }
    else
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(v25 + 0x20))(this); /*0x69bf53*/
      if ( v26 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 0x190))(v26) ) /*0x69bf63*/
        v27 = (TESObjectREFR *)(this + 0xFFFFFFE9); /*0x69bf69*/
      else
        v27 = 0; /*0x69bf6e*/
      v28 = (void *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x30))(this, 0); /*0x69bf79*/
      FXEffect = MagicItem_GetFXEffect(v28, duration); /*0x69bf7d*/
      if ( v27 ) /*0x69bf84*/
      {
        if ( FXEffect ) /*0x69bf88*/
        {
          SchoolFailureSound = Magic_GetSchoolFailureSound(FXEffect->school); /*0x69bf8e*/
          if ( SchoolFailureSound ) /*0x69bf98*/
          {
            v31 = *(_DWORD *)(SchoolFailureSound + 0x28); /*0x69bf9c*/
            if ( !v22 ) /*0x69bf9f*/
            {
              v32 = *(char **)(SchoolFailureSound + 0x28); /*0x69bfa1*/
              if ( !v31 ) /*0x69bfa5*/
                v32 = EmptyString; /*0x69bfa7*/
              sub_65A8B0(v27, v32, 0, 0x102); /*0x69bfb6*/
            }
          }
        }
      }
      durationa = LODWORD(v39); /*0x69bfc1*/
      (*(void (__thiscall **)(_DWORD *))(*this + 0x30))(this); /*0x69bfcc*/
      Magic_CastFailureMsg(&string, durationa); /*0x69bfd0*/
      v41 = 0; /*0x69bfd7*/
      if ( v27 ) /*0x69bfdf*/
      {
        if ( Actor_IsPlayer(v27) ) /*0x69bfe3*/
        {
          if ( !v22 || (v22[0x7C] & 2) != 0 ) /*0x69bff4*/
            GameUI_QueueMessage(string.m_data, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x69c009*/
        }
      }
      v33 = *this; /*0x69c011*/
      v34 = *(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x30); /*0x69c013*/
      *(this + 2) = 7; /*0x69c01a*/
      v35 = v34(this, 0); /*0x69c021*/
      (*(void (__thiscall **)(_DWORD *, int))(v33 + 0x18))(this, v35); /*0x69c029*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x34))(this, 0); /*0x69c034*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x3C))(this, 0); /*0x69c03f*/
      FormHeapFree((unsigned int)string.m_data); /*0x69c046*/
    }
  }
  else
  {
    MagicCaster_UseActiveMagicItem_::Done(a5); /*0x69bef1*/
  }
}
