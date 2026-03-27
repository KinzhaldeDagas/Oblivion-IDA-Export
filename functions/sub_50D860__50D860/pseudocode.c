char sub_50D860()
{
  if ( byte_B0703C )
  {
    Interface_ConsolePrint("Water System Off");
    sub_499E20();
    return WaterManager::Destroy_(TES->waterManager, (int *)1);
  }
  else
  {
    Interface_ConsolePrint("Water System On");
    sub_49E280();
    return sub_498F30();
  }
}
