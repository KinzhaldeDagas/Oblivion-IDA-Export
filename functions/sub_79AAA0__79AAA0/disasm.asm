0x79AAA0: push    ecx; OBLIVION AUTHORITY (2026-08-30): Adapter for the 0x0C-byte CBranchChildRef backward-copy routine used by checked vector insertion.
0x79AAA1: mov     ecx, [esp+4+destinationLast]
0x79AAA5: mov     edx, [esp+4+destinationLast]
0x79AAA9: mov     byte ptr [esp+4+var_4], 0
0x79AAAD: mov     eax, [esp+4+var_4]
0x79AAB0: push    eax
0x79AAB1: mov     eax, [esp+8+destinationLast]
0x79AAB5: push    ecx
0x79AAB6: mov     ecx, [esp+0Ch+last]
0x79AABA: push    edx
0x79AABB: mov     edx, [esp+10h+first]
0x79AABF: push    eax; destinationLast
0x79AAC0: push    ecx; last
0x79AAC1: push    edx; first
0x79AAC2: call    OB_CBranchChildRef_CopyBackward_010201A0; OBLIVION AUTHORITY (2026-08-30): Copies CBranchChildRef records backward from [first,last) into the range ending at destinationLast. Each record is exactly 0x0C bytes (three dwords: parent vertex index, interpolation fraction, child pointer); returns the first destination record. RT4.1 StructsSupport.h:131-147 corroborates the already-observed SIdvBranch layout.
0x79AAC7: add     esp, 1Ch
0x79AACA: retn
