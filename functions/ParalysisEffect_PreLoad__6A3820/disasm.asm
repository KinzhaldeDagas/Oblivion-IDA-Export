0x6A3820: push    esi
0x6A3821: mov     esi, [esp+4+arg_0]
0x6A3825: push    esi
0x6A3826: call    nullsub_returnvVoid_1arg; nullsub_returnvVoid_1arg; used by Low/MiddleLow current package getter slots and other default no-op vfuncs.
0x6A382B: mov     eax, [esi+3Ch]
0x6A382E: test    eax, eax
0x6A3830: pop     esi
0x6A3831: jz      short locret_6A383E
0x6A3833: push    0
0x6A3835: push    eax
0x6A3836: call    sub_8A5580; ODismemberment: recursively walks NiAVObject children and dispatches the bhkConstraint attach/remove helpers on each bhkCollisionObject-backed node.
0x6A383B: add     esp, 8
0x6A383E: retn    4
