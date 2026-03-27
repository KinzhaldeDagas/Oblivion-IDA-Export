0x411730: push    esi
0x411731: mov     esi, ecx
0x411733: call    ??1SceneGraph@@UAE@XZ; SceneGraph::~SceneGraph(void)
0x411738: test    byte ptr [esp+4+arg_0], 1
0x41173D: jz      short loc_411748
0x41173F: push    esi
0x411740: call    FormHeapFree
0x411745: add     esp, 4
0x411748: mov     eax, esi
0x41174A: pop     esi
0x41174B: retn    4
