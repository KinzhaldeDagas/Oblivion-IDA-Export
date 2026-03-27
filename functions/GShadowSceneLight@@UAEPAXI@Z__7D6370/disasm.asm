0x7D6370: push    esi
0x7D6371: mov     esi, ecx
0x7D6373: call    ??1ShadowSceneLight@@UAE@XZ; ShadowSceneLight::~ShadowSceneLight(void)
0x7D6378: test    byte ptr [esp+4+arg_0], 1
0x7D637D: jz      short loc_7D6388
0x7D637F: push    esi
0x7D6380: call    FormHeapFree
0x7D6385: add     esp, 4
0x7D6388: mov     eax, esi
0x7D638A: pop     esi
0x7D638B: retn    4
