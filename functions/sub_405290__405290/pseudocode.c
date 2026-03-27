void __cdecl sub_405290(float a1, char a2)
{
  if ( LOBYTE(a1) )
  {
    InterfaceManager_IsMenuMode();
  }
  else if ( a2 )
  {
    TimeGlobals_GetGameHour(&TimeGlobals);
  }
}
