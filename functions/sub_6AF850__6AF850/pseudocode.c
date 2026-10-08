OSGlobals *__cdecl sub_6AF850(OSGlobals *a1)
{
  OSGlobals *result; // eax

  result = a1; /*0x6af850*/
  if ( a1 ) /*0x6af856*/
  {
    unk_B3C0F0 = (int)a1; /*0x6af858*/
  }
  else
  {
    result = MEMORY[0xB33398]; /*0x6af85e*/
    unk_B3C0F0 = (int)MEMORY[0xB33398]->sound; /*0x6af866*/
  }
  return result; /*0x6af85d*/
}
