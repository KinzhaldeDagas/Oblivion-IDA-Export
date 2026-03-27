0x723B30: push    esi
0x723B31: mov     esi, ecx
0x723B33: call    ??1NiLODNode@@UAE@XZ; NiLODNode::~NiLODNode(void)
0x723B38: test    byte ptr [esp+4+arg_0], 1
0x723B3D: jz      short loc_723B48
0x723B3F: push    esi
0x723B40: call    FormHeapFree
0x723B45: add     esp, 4
0x723B48: mov     eax, esi
0x723B4A: pop     esi
0x723B4B: retn    4
