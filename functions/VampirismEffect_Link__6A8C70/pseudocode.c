// Verified VampirismEffect_Link forwards linkContext to ActiveEffect_Base_Link, then RTTI-casts it to Character/Actor before restoring vampire state. Supports the Probable actor-reference context type.
void __thiscall VampirismEffect_Link(ActiveEffect *this, TESObjectREFR *a2)
{
  _DWORD **v3; // eax
  _DWORD **v4; // esi
  _DWORD *v5; // ecx

  ActiveEffect_Base_Link(this, a2); /*0x6a8c7a*/
  v3 = (_DWORD **)OblivionDynamicCast( /*0x6a8c8e*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
                    &Character `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x6a8c93*/
  if ( v3 && (v5 = v3[0x16]) != 0 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 0x320))(v5) ) /*0x6a8cab*/
  {
    if ( ((int (__thiscall *)(_DWORD **))(*v4)[0x55])(v4) ) /*0x6a8cbb*/
      sub_60E2E0(v4, this->members.magnitude); /*0x6a8cca*/
    (*(void (__thiscall **)(_DWORD *))(*v4[0x16] + 0x5C))(v4[0x16]); /*0x6a8cd7*/
    LOBYTE(MEMORY[0xB33D80]) = 1; /*0x6a8cd9*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*v4[0x16] + 0x318))(v4[0x16], a2); /*0x6a8cec*/
    LOBYTE(MEMORY[0xB33D80]) = 0; /*0x6a8cee*/
    VampirismEffect_Link_::Done((int)a2); /*0x6a8cef*/
  }
  else
  {
    VampirismEffect_Link_::Done((int)a2); /*0x6a8caf*/
  }
}
