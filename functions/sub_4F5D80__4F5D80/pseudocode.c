// [Controller decode 2026-07-09] IsXBox eval callback: writes 0.0 to the script result and returns success. This tests platform build, not attached controller type.
//
// [Controller decode 2026-07-09] Central decoded PC controller/joystick/IsXBox summary is stored in IDB netnode "$ ControllerStuff"; full external doc is C:\src\OblivionIDA\ControllerStuff.md.
//
// [Controller decode 2026-07-09] Controller decode completion estimate stored in IDB netnode "$ ControllerStuff" sup 200. Current overall decoded PC Controller/IsXBox/Joystick knowledge is about 92%.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1065; metadata at sup 999; completion estimate at sup 200.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1067; metadata at sup 999; completion estimate at sup 200.
char __cdecl sub_4F5D80(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f5d86*/
  if ( MEMORY[0xB361AC] ) /*0x4f5d88*/
    Interface_ConsolePrint("IsXBox >> %1.0f", 0.0); /*0x4f5d9c*/
  return 1; /*0x4f5da6*/
}
