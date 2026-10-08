0x4158E1: push    40h ; '@'; Size
0x4158E3: lea     eax, [esi+58h]
0x4158E6: push    eax; Src
0x4158E7: push    41544144h; int
0x4158EC: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
