0x533360: push    esi
0x533361: mov     esi, ecx
0x533363: call    ??1bhkRigidBody@@UAE@XZ; bhkRigidBody::~bhkRigidBody(void)
0x533368: test    byte ptr [esp+4+arg_0], 1
0x53336D: jz      short loc_533378
0x53336F: push    esi
0x533370: call    FormHeapFree
0x533375: add     esp, 4
0x533378: mov     eax, esi
0x53337A: pop     esi
0x53337B: retn    4
