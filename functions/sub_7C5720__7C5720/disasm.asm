0x7C5720: mov     eax, [esp+x]; Copy a backing NiPointLight world position into ShadowSceneLight cached source coordinates +0x108..+0x110.
0x7C5724: mov     edx, [esp+y]
0x7C5728: mov     [ecx+108h], eax
0x7C572E: mov     eax, [esp+z]
0x7C5732: mov     [ecx+10Ch], edx
0x7C5738: mov     [ecx+110h], eax
0x7C573E: retn    0Ch
