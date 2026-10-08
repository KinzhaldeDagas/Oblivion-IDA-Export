0x79EA70: push    ecx; Vector-context checked trampoline for exception-safe uninitialized SFrondGuide range copy. The vector owner is used by checked-iterator machinery; constructed records are 0x30 bytes.
0x79EA71: mov     edx, [esp+4+destinationFirst]
0x79EA75: mov     byte ptr [esp+4+var_4], 0
0x79EA79: mov     eax, [esp+4+var_4]
0x79EA7C: push    eax
0x79EA7D: mov     eax, [esp+8+destinationFirst]
0x79EA81: push    edx
0x79EA82: mov     edx, [esp+0Ch+first]
0x79EA86: push    ecx
0x79EA87: mov     ecx, [esp+10h+last]
0x79EA8B: push    eax; destinationFirst
0x79EA8C: push    ecx; last
0x79EA8D: push    edx; first
0x79EA8E: call    OB_SFrondGuide_UninitializedCopy_010201A0; Exception-safe uninitialized copy of compact SFrondGuide records. Placement-copy-constructs [first,last) into destination; unwind cleanup destroys the already constructed prefix before rethrowing.
0x79EA93: add     esp, 1Ch
0x79EA96: retn    0Ch
