0x474BD0: push    0; Convenience wrapper returning the first active BSAnimGroupSequence from ActorAnimData.
0x474BD2: call    ActorAnimData_FindNextActiveAnimGroupSequence; Iterates the controller manager sequence array, filters to BSAnimGroupSequence RTTI, and returns the first active sequence or the next active sequence after the supplied pointer.
0x474BD7: retn
