BOOL __thiscall sub_59B920(_DWORD *this)
{
  char v1; // bl
  InputGlobal *input; // edx
  int v3; // eax
  int v4; // eax
  UInt32 numJoysticks; // eax
  bool v6; // zf

  v1 = 3;
  do
  {
    if ( (int)++*(this + 0x17) >= 3 )
      *(this + 0x17) = 0;
    input = OSGlobals->input;
    v3 = *(this + 0x17);
    if ( !v3 )
    {
      numJoysticks = 0;
      v6 = input->keyboardInterface == 0;
      goto LABEL_10;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      numJoysticks = 0;
      v6 = input->mouseInterface == 0;
LABEL_10:
      LOBYTE(numJoysticks) = !v6;
      goto LABEL_11;
    }
    if ( v4 != 1 )
      goto LABEL_12;
    numJoysticks = input->numJoysticks;
LABEL_11:
    if ( numJoysticks )
      return v1 != 0;
LABEL_12:
    --v1;
  }
  while ( v1 );
  return v1 != 0;
}
