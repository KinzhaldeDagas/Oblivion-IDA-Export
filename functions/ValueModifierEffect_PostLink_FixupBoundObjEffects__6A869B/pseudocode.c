int __usercall ValueModifierEffect_PostLink_::FixupBoundObjEffects@<eax>(int *a1@<edi>, float *a2@<esi>, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  float v8; // [esp+Ch] [ebp-4h]

  v3 = *a1; /*0x6a86ab*/
  v8 = -a2[6]; /*0x6a86b2*/
  v4 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a2 + 0x44))(a2, LODWORD(v8)); /*0x6a86b5*/
  (*(void (__thiscall **)(int *, int))(v3 + 0x2AC))(a1, v4); /*0x6a86c0*/
  v5 = *a1; /*0x6a86d2*/
  v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x44))(a2); /*0x6a86db*/
  (*(void (__thiscall **)(int *, int))(v5 + 0x294))(a1, v6); /*0x6a86e6*/
  return ValueModifierEffect_PostLink_::Done_(a3);
}
