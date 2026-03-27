HANDLE sub_40FDD0()
{
  HANDLE result; // eax

  result = hHandle;
  if ( hHandle )
  {
    byte_B33425 = 1;
    result = (HANDLE)WaitForSingleObject(hHandle, 0xFFFFFFFF);
    hHandle = 0;
    byte_B33425 = 0;
  }
  return result;
}
