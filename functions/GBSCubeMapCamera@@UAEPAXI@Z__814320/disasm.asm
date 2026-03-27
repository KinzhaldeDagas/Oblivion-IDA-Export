0x814320: push    esi
0x814321: mov     esi, ecx
0x814323: call    ??1BSCubeMapCamera@@UAE@XZ; BSCubeMapCamera::~BSCubeMapCamera(void)
0x814328: test    byte ptr [esp+4+arg_0], 1
0x81432D: jz      short loc_814338
0x81432F: push    esi
0x814330: call    FormHeapFree
0x814335: add     esp, 4
0x814338: mov     eax, esi
0x81433A: pop     esi
0x81433B: retn    4
