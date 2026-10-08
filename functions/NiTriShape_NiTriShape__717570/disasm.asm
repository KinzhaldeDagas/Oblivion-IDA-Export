0x717570: mov     eax, [esp+a2]; [constructor audit] Data-taking shape ctor ->722690->7227B0->708450->6FFD30->7005D0. No heap allocation in this path. 7227D3 stores geometry data at+B4, 7227DF retains once; subsequent derived constructors only write vtables. Distinct from no-argument clone constructor7226C0.
0x717574: push    esi
0x717575: push    eax
0x717576: mov     esi, ecx
0x717578: call    NiTriBasedGeom__NiTriBasedGeom
0x71757D: mov     dword ptr [esi], offset ??_7NiTriShape@@6B@;
0x717583: mov     eax, esi
0x717585: pop     esi
0x717586: retn    4
