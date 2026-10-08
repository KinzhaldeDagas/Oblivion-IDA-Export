0x796980: push    ecx; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for uninitialized move of 0x10-byte vector owners. Function boundary now includes the add-esp/ret 0x0C normal tail through 0x7969A8.
0x796981: mov     edx, [esp+4+destinationFirst]
0x796985: mov     byte ptr [esp+4+var_4], 0
0x796989: mov     eax, [esp+4+var_4]
0x79698C: push    eax
0x79698D: mov     eax, [esp+8+destinationFirst]
0x796991: push    edx
0x796992: mov     edx, [esp+0Ch+first]
0x796996: push    ecx
0x796997: mov     ecx, [esp+10h+last]
0x79699B: push    eax; destinationFirst
0x79699C: push    ecx; last
0x79699D: push    edx; first
0x79699E: call    OB_stVector4_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move of 0x10-byte vector owners. Constructs empty destinations, swaps begin/end/capacity ownership from each source, leaves sources empty, returns destinationFirst+count, and destroys the constructed prefix only on unwind. The prior noreturn annotation was false.
0x7969A3: add     esp, 1Ch
0x7969A6: retn    0Ch
