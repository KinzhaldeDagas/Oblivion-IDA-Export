0x404DD0: mov     eax, dword ptr g_NiParallelUpdateTaskManager; 3DTheft decode 2026-05-16: returns g_NiParallelUpdateTaskManager != 0 && manager->byte+0x1B0 != 0. Used by morph update to decide whether to submit a NiGeomMorpherUpdateTask.
0x404DD5: test    eax, eax
0x404DD7: jz      short loc_404DE9
0x404DD9: mov     al, [eax+1B0h]
0x404DDF: test    al, al
0x404DE1: jz      short loc_404DE9
0x404DE3: mov     eax, 1
0x404DE8: retn
0x404DE9: xor     eax, eax
0x404DEB: retn
