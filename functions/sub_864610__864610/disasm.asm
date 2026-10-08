0x864610: lea     eax, [ecx+64h]
0x864613: lea     edx, [ecx+0C4h]
0x864619: push    eax; transform
0x86461A: push    edx; input
0x86461B: add     ecx, 20h ; ' '; output
0x86461E: call    NiBound_TransformInto
0x864623: retn
