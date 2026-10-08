0x6297D0: fld     [esp+value]; Assign HighProcess+0x230, the action-5 idle-window timer. The action-5 handler decrements it before scanning and reseeds it to 1.000..5.999 seconds only after it becomes nonpositive.
0x6297D4: fstp    dword ptr [ecx+230h]
0x6297DA: retn    4
