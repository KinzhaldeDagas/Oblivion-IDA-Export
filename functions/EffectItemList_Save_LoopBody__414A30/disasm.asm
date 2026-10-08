0x414A30: mov     edi, [esi+4]
0x414A33: test    edi, edi
0x414A35: jz      short EffectItemList_Save___LoopContinue
0x414A37: mov     eax, [edi]
0x414A39: push    4; Size
0x414A3B: lea     ecx, [esp+4+Src]
0x414A3F: push    ecx; Src
0x414A40: push    44494645h; int
0x414A45: mov     [esp+0Ch+Src], eax
0x414A49: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x414A4E: add     esp, 0Ch
0x414A51: mov     ecx, edi
0x414A53: call    EffectItem_Save
