void __cdecl sub_578D30(signed int a1)
{
  if ( TESDataHandler_g_PlayerRef )
  {
    if ( TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef) )
      sub_5A8BC0(a1);
  }
}
