0x890700: fld     [esp+arg_0]; MorrowindMovements jump correction source: vanilla jump setup writes state 1 Jumping and stores jump-height impulse at proxy+0x31C after hkFactor scaling.
0x890704: mov     dword ptr [ecx+2A0h], 1
0x89070E: fmul    qword ptr ds:0A39088h
0x890714: fstp    dword ptr [ecx+31Ch]
0x89071A: retn    4
