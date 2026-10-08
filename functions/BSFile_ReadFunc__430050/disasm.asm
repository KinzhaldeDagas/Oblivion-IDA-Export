0x430050: mov     edx, [esp+arg_8]; MEF SAVE AUDIT 2026-10-08: SR-1 callback dispatch: BSFile read callback forwards first three cdecl arguments to virtual+38, resolving native BSFile vtableA3636C slot to4302B0. Generic save wrapper supplies two extra component arguments, ignored by this body. Read returns actual bytes; no tail initialization here.
0x430054: mov     ecx, [esp+arg_0]
0x430058: mov     eax, [ecx]
0x43005A: mov     eax, [eax+38h]
0x43005D: push    edx
0x43005E: mov     edx, [esp+4+arg_4]
0x430062: push    edx
0x430063: call    eax
0x430065: retn
