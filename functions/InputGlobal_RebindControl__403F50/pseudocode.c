bool __thiscall InputGlobal::RebindControl(InputGlobal *this, UInt8 whichCtrl, UInt8 whichScheme, UInt8 newButton)
{
  int v5; // eax
  int v6; // edx

  if ( !whichScheme
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
    return 0;
  }
  v5 = 0;
  v6 = 0x1D * whichScheme;
  while ( this->KeyboardInputControls[0x1D * whichScheme + v5] != newButton )
  {
    if ( ++v5 >= 0x1D )
    {
      this->KeyboardInputControls[whichCtrl + v6] = newButton;
      return 1;
    }
  }
  this->KeyboardInputControls[v6 + v5] = this->KeyboardInputControls[v6 + whichCtrl];
  this->KeyboardInputControls[whichCtrl + v6] = newButton;
  return 1;
}
