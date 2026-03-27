int sub_410340()
{
  int result; // eax

  if ( ObjectPtr )
  {
    if ( dword_B3342C )
      PrintError("Trying to pause a movie while another movie is already paused.  This is not currently supported.");
    result = BinkPause(*(_DWORD *)ObjectPtr, 1);
    dword_B3342C = ObjectPtr;
    ObjectPtr = 0;
  }
  return result;
}
