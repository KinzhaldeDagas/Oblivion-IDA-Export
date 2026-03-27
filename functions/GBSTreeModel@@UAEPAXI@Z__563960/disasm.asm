0x563960: push    esi
0x563961: mov     esi, ecx
0x563963: call    ??1BSTreeModel@@UAE@XZ; BSTreeModel::~BSTreeModel(void)
0x563968: test    byte ptr [esp+4+arg_0], 1
0x56396D: jz      short loc_563978
0x56396F: push    esi
0x563970: call    FormHeapFree
0x563975: add     esp, 4
0x563978: mov     eax, esi
0x56397A: pop     esi
0x56397B: retn    4
