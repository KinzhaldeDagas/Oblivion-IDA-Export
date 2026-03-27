OSGlobals *__cdecl sub_6AF850(OSGlobals *a1)
{
  OSGlobals *result; // eax

  result = a1;
  if ( a1 )
  {
    dword_B3C0F0 = (int)a1;
  }
  else
  {
    result = OSGlobals;
    dword_B3C0F0 = (int)OSGlobals->sound;
  }
  return result;
}
