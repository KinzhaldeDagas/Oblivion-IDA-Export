0x531FA0: push    esi
0x531FA1: mov     esi, ecx
0x531FA3: call    ??1bhkShapePhantom@@UAE@XZ; bhkShapePhantom::~bhkShapePhantom(void)
0x531FA8: test    byte ptr [esp+4+arg_0], 1
0x531FAD: jz      short loc_531FB8
0x531FAF: push    esi
0x531FB0: call    FormHeapFree
0x531FB5: add     esp, 4
0x531FB8: mov     eax, esi
0x531FBA: pop     esi
0x531FBB: retn    4
