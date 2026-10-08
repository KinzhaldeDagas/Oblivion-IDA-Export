// RadiantAI: per-process package refresh wrapper; calls actor base package chooser chain and stores selected package at process+0x8.
char __userpurge sub_648E40@<al>(int a1@<ecx>, double a2@<st1>, double a3@<st0>, TESChildCELL *a4)
{
  TESPackage *v6; // esi
  int v7; // eax
  char *location; // ecx
  TESWorldSpace *WorldSpace; // eax
  BSExtraDataVtbl *DwordAtOffset40; // [esp-4h] [ebp-18h]
  _DWORD *v12; // [esp+0h] [ebp-14h]
  void *vtbl; // [esp+4h] [ebp-10h]

  v6 = sub_5E0330((Actor *)a4, a2, a3); /*0x648e50*/
  v7 = *(_DWORD *)(a1 + 8); /*0x648e52*/
  if ( v7 ) /*0x648e57*/
  {
    if ( v6 != (TESPackage *)v7 ) /*0x648e5b*/
    {
      if ( !v6 || (LOBYTE(v7) = TESDataHandler_IsFormIDCreated_(v6->members.super.refID), !(_BYTE)v7) ) /*0x648e72*/
        LOBYTE(v7) = (*((int (__thiscall **)(TESChildCELL *, int))a4->vtbl + 0x11))(a4, 0x30000); /*0x648e80*/
    }
  }
  *(_DWORD *)(a1 + 8) = v6; /*0x648e84*/
  if ( v6 ) /*0x648e87*/
  {
    location = (char *)v6->members.location; /*0x648e89*/
    if ( !location || (v7 = sub_569740(location), v7 == 2) ) /*0x648e98*/
    {
      vtbl = a4[0xA].vtbl; /*0x648ea8*/
      v12 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x5D))(a4); /*0x648ead*/
      DwordAtOffset40 = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(a4); /*0x648eb5*/
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4); /*0x648eb8*/
      LOBYTE(v7) = (unsigned __int8)TESObjectREFR_SetStartLocation( /*0x648ec0*/
                                      a4,
                                      (BSExtraDataVtbl *)WorldSpace,
                                      DwordAtOffset40,
                                      v12,
                                      *(float *)&vtbl);
    }
  }
  return v7; /*0x648ec5*/
}
