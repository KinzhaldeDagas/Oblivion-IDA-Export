char sub_50D860()
{
  if ( byte_B0703C ) /*0x50d860*/
  {
    Interface_ConsolePrint("Water System Off"); /*0x50d86e*/
    sub_499E20(); /*0x50d87e*/
    return WaterManager::Destroy_(MEMORY[0xB333A0]->waterManager, (int *)1); /*0x50d88e*/
  }
  else
  {
    Interface_ConsolePrint("Water System On"); /*0x50d899*/
    sub_49E280(); /*0x50d8aa*/
    return sub_498F30(); /*0x50d8b7*/
  }
}
