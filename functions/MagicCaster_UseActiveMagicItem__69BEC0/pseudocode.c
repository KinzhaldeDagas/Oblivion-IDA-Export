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
  _DWORD *v28; // eax
  int FXEffect; // eax
  int SchoolFailureSound; // eax
  int v31; // ecx
  const char *v32; // eax
  int v33; // edi
  int (__thiscall *v34)(_DWORD *, _DWORD); // edx
  int v35; // eax
  int duration; // [esp+14h] [ebp-30h]
  int v37; // [esp+18h] [ebp-2Ch]
  int v38; // [esp+28h] [ebp-1Ch] BYREF
  float v39; // [esp+2Ch] [ebp-18h] BYREF
  BSStringT string; // [esp+30h] [ebp-14h] BYREF
  int v41; // [esp+40h] [ebp-4h]

  if ( (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*this + 0x30))(
         this,
         a3,
         a4,
         st5_0) )
  {
    v17 = *(int (__thiscall **)(_DWORD *))(*this + 0x30);
    v39 = 0.0;
    v18 = (void *)v17(this);
    v19 = OblivionDynamicCast(
            v18,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &IngredientItem `RTTI Type Descriptor',
            0);
    v20 = *this;
    v21 = *(int (__thiscall **)(_DWORD *, float *, int *, _DWORD))(*this + 0x30);
    v22 = v19;
    v38 = 0;
    v23 = v21(this, &v39, &v38, 0);
    v24 = (*(int (__thiscall **)(_DWORD *, int))(v20 + 0x1C))(this, v23);
    v25 = *this;
    if ( v24 )
    {
      MagicCaster_UseActiveMagicItem_::Cast(v25, this, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }
    else
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(v25 + 0x20))(this);
      if ( v26 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 0x190))(v26) )
        v27 = (TESObjectREFR *)(this + 0xFFFFFFE9);
      else
        v27 = 0;
      v28 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x30))(this, 0);
      FXEffect = MagicItem_GetFXEffect(v28, v37);
      if ( v27 )
      {
        if ( FXEffect )
        {
          SchoolFailureSound = Magic_GetSchoolFailureSound(*(_DWORD *)(FXEffect + 0x64));
          if ( SchoolFailureSound )
          {
            v31 = *(_DWORD *)(SchoolFailureSound + 0x28);
            if ( !v22 )
            {
              v32 = *(const char **)(SchoolFailureSound + 0x28);
              if ( !v31 )
                v32 = EmptyString;
              sub_65A8B0(v27, v32, 0, 0x102);
            }
          }
        }
      }
      duration = v38;
      (*(void (__thiscall **)(_DWORD *))(*this + 0x30))(this);
      Magic_CastFailureMsg(&string, duration);
      v41 = 0;
      if ( v27 )
      {
        if ( Actor_IsPlayer(v27) )
        {
          if ( !v22 || (v22[0x7C] & 2) != 0 )
            GameUI_QueueMessage(string.m_data, 0, 1u, flt_A30634);
        }
      }
      v33 = *this;
      v34 = *(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x30);
      *(this + 2) = 7;
      v35 = v34(this, 0);
      (*(void (__thiscall **)(_DWORD *, int))(v33 + 0x18))(this, v35);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x34))(this, 0);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x3C))(this, 0);
      FormHeapFree((unsigned int)string.m_data);
    }
  }
  else
  {
    MagicCaster_UseActiveMagicItem_::Done(a5);
  }
}
