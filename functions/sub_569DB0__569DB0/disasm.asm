0x569DB0: push    8; Size
0x569DB2: push    ecx; Src
0x569DB3: push    54445350h; int
0x569DB8: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x569DBD: add     esp, 0Ch
0x569DC0: retn
