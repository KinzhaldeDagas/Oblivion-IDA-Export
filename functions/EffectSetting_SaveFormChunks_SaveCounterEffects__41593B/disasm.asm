0x41593B: movsx   edx, ax
0x41593E: add     edx, edx
0x415940: add     edx, edx
0x415942: push    edx; Size
0x415943: push    ecx; Src
0x415944: push    45435345h; int
0x415949: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x41594E: add     esp, 0Ch
