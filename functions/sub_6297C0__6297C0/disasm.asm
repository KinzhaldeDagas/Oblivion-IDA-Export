0x6297C0: fld     dword ptr [ecx+230h]; Return HighProcess+0x230, the action-5 idle-window timer. HighProcess initializes it to rand()%5000 * 0.001 + 1.0 (1.000..5.999 seconds).
0x6297C6: retn
