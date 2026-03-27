0x539960: push    esi
0x539961: mov     esi, ecx
0x539963: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x539968: test    byte ptr [esp+4+arg_0], 1
0x53996D: jz      short loc_539978
0x53996F: push    esi
0x539970: call    FormHeapFree
0x539975: add     esp, 4
0x539978: mov     eax, esi
0x53997A: pop     esi
0x53997B: retn    4
