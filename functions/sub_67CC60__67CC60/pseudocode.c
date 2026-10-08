bool __thiscall sub_67CC60(TESObjectREFR ****this)
{
  TESObjectREFR ***v1; // edi
  TESObjectREFR **v2; // ebp
  TESObjectREFR *v3; // esi
  bool v4; // bl
  int v5; // eax
  TESObjectREFR *v6; // eax
  _DWORD *flags; // esi
  TESObjectREFR ***v8; // eax
  TESObjectREFR ***v9; // eax
  unsigned int v10; // ecx
  bool v12; // [esp+7h] [ebp-5h]

  if ( !*this ) /*0x67cc69*/
    return 1; /*0x67cd9f*/
  v12 = 1; /*0x67cc79*/
  v1 = *this; /*0x67cc7d*/
  do /*0x67cd68*/
  {
    v2 = *v1; /*0x67cc80*/
    if ( !*v1 ) /*0x67cc80*/
      break; /*0x67cc84*/
    v3 = *v2; /*0x67cc8f*/
    if ( v12 ) /*0x67cc92*/
      v12 = ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[1].GetSleepState)(v3, 0) == 0; /*0x67cca4*/
    v4 = 0; /*0x67ccad*/
    if ( sub_5E6CD0(v3, 1) ) /*0x67ccaf*/
    {
      v5 = (*((int (__thiscall **)(_DWORD *))v3[1].vtbl->super.super.InitializeComponent + 0x61))(&v3[1].vtbl->super.super.InitializeComponent); /*0x67ccc3*/
      if ( *(_BYTE *)(v5 + 0x50) ) /*0x67ccc5*/
      {
        v6 = sub_628140((int *)v5, v3); /*0x67cccf*/
        v4 = g_GameSettingStringPointers_B36CD8[0xD4] < TesObjectREF_GetDistance(v3, v6, 0); /*0x67cceb*/
      }
    }
    if ( v3 != (TESObjectREFR *)reference /*0x67cd1f*/
      && (v3->vtbl->IsDead(v3, 0)
       || (flags = (_DWORD *)v3->member.super.flags, ((unsigned __int8)flags & 0x20) != 0)
       || ((unsigned __int16)flags & 0x800) != 0
       || v4) )
    {
      v8 = (TESObjectREFR ***)v1[1]; /*0x67cd21*/
      if ( v8 ) /*0x67cd26*/
      {
        v1[1] = v8[1]; /*0x67cd2b*/
        *v1 = *v8; /*0x67cd31*/
        FormHeapFree((unsigned int)v8); /*0x67cd33*/
      }
      else
      {
        *v1 = 0; /*0x67cd4d*/
      }
      FormHeapFree((unsigned int)v2); /*0x67cd3c*/
      v1 = *this; /*0x67cd45*/
    }
    else
    {
      v1 = (TESObjectREFR ***)v1[1]; /*0x67cd63*/
    }
  }
  while ( v1 ); /*0x67cd68*/
  if ( v12 ) /*0x67cd77*/
    return 0; /*0x67cd77*/
  v9 = *this; /*0x67cd7d*/
  if ( !*this ) /*0x67cd7d*/
    return 0; /*0x67cd7d*/
  v10 = 0; /*0x67cd83*/
  do /*0x67cd92*/
  {
    if ( *v9 ) /*0x67cd85*/
      ++v10; /*0x67cd8a*/
    v9 = (TESObjectREFR ***)v9[1]; /*0x67cd8d*/
  }
  while ( v9 ); /*0x67cd92*/
  return v10 > 1; /*0x67cda5*/
}
