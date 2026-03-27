DWORD __thiscall InputGlobals::GetJoystickPOVControlCount(InputGlobal *this, int a2)
{
  return this->joysticDevCaps[a2].dwPOVs;
}
