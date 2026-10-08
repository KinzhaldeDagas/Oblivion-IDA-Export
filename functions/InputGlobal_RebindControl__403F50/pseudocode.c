// [Controller decode 2026-07-09] Full control rebind path. Applies broader reserved-key checks, clears conflicts, and writes the new keyboard/mouse/joystick binding byte.
bool __thiscall InputGlobal::RebindControl(InputGlobal *this, UInt8 whichCtrl, UInt8 whichScheme, UInt8 newButton)
{
  int v5; // eax
  int v6; // edx

  if ( !whichScheme /*0x403fa9*/
    && (newButton == 1
     || newButton == 0x29
     || newButton == 0xB7
     || newButton == 2
     || newButton == 3
     || newButton == 4
     || newButton == 5
     || newButton == 6
     || newButton == 7
     || newButton == 8
     || newButton == 9
     || newButton == 0x3B
     || newButton == 0x3C
     || newButton == 0x3D
     || newButton == 0x3E) )
  {
    return 0; /*0x403fac*/
  }
  v5 = 0; /*0x403fb2*/
  v6 = 0x1D * whichScheme; /*0x403fb4*/
  while ( this->KeyboardInputControls[0x1D * whichScheme + v5] != newButton ) /*0x403fc3*/
  {
    if ( ++v5 >= 0x1D ) /*0x403fcb*/
    {
      this->KeyboardInputControls[whichCtrl + v6] = newButton; /*0x403fd4*/
      return 1; /*0x403fdf*/
    }
  }
  this->KeyboardInputControls[v6 + v5] = this->KeyboardInputControls[v6 + whichCtrl]; /*0x403ff1*/
  this->KeyboardInputControls[whichCtrl + v6] = newButton; /*0x403fff*/
  return 1; /*0x403fab*/
}
