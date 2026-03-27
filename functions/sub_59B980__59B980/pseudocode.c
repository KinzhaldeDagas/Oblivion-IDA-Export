BOOL __thiscall sub_59B980(_DWORD *this)
{
  char v1; // bl
  int v2; // eax
  InputGlobal *input; // edx
  int v4; // eax
  int v5; // eax
  UInt32 numJoysticks; // eax
  bool v7; // zf

  v1 = 3;
  do
  {
    v2 = *(this + 0x17);
    if ( v2 )
      *(this + 0x17) = v2 - 1;
    else
      *(this + 0x17) = 2;
    input = OSGlobals->input;
    v4 = *(this + 0x17);
    if ( !v4 )
    {
      numJoysticks = 0;
      v7 = input->keyboardInterface == 0;
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      numJoysticks = 0;
      v7 = input->mouseInterface == 0;
LABEL_11:
      LOBYTE(numJoysticks) = !v7;
      goto LABEL_12;
    }
    if ( v5 != 1 )
      goto LABEL_13;
    numJoysticks = input->numJoysticks;
LABEL_12:
    if ( numJoysticks )
      return v1 != 0;
LABEL_13:
    --v1;
  }
  while ( v1 );
  return v1 != 0;
}
