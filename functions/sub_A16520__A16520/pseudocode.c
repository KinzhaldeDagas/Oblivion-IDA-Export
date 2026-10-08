void __cdecl sub_A16520()
{
  void (__thiscall ***v0)(void *, int); // esi

  v0 = (void (__thiscall ***)(void *, int))g_WorldSceneReceiverRoot; /*0xa16521*/
  if ( g_WorldSceneReceiverRoot ) /*0xa16529*/
  {
    if ( !InterlockedDecrement((volatile LONG *)g_WorldSceneReceiverRoot + 1) ) /*0xa1652f*/
    {
      if ( v0 ) /*0xa1653b*/
        (**v0)(v0, 1); /*0xa16545*/
    }
  }
}
