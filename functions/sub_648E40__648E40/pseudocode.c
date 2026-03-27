char __userpurge sub_648E40@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, TESChildCELL *a4)
{
  char *v5; // esi
  int v6; // eax
  char *v7; // ecx
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *ParentCell; // [esp-4h] [ebp-18h]
  float *v11; // [esp+0h] [ebp-14h]
  void *vtbl; // [esp+4h] [ebp-10h]

  v5 = sub_5E0330((Actor *)a4, a2, a3);
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
  {
    if ( v5 != (char *)v6 )
    {
      if ( !v5 || (LOBYTE(v6) = TESDataHandler_IsFormIDCreated_(*((_DWORD *)v5 + 3)), !(_BYTE)v6) )
        LOBYTE(v6) = (*((int (__thiscall **)(TESChildCELL *, int))a4->vtbl + 0x11))(a4, 0x30000);
    }
  }
  *(_DWORD *)(a1 + 8) = v5;
  if ( v5 )
  {
    v7 = *((char **)v5 + 9);
    if ( !v7 || (v6 = sub_569740(v7), v6 == 2) )
    {
      vtbl = a4[0xA].vtbl;
      v11 = (float *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x5D))(a4);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a4);
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4);
      LOBYTE(v6) = (unsigned __int8)sub_4D7A20(
                                      a4,
                                      (BSExtraDataVtbl *)WorldSpace,
                                      (BSExtraDataVtbl *)ParentCell,
                                      v11,
                                      *(float *)&vtbl);
    }
  }
  return v6;
}
