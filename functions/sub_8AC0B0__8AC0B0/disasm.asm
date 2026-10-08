0x8AC0B0: mov     eax, [esp+arg_0]; TES4 authoritative: writes proxy velocity vector back into bhk collision object+0x10. Climbing/Slowfall velocity edits must happen before these calls or must write both proxy+0x2E0 and object+0x10 after the fact.
0x8AC0B4: movaps  xmm0, xmmword ptr [eax]
0x8AC0B7: movaps  xmmword ptr [ecx+10h], xmm0
0x8AC0BB: retn    4
