0x4A3560: sub     esp, 8; Verified: serializes region-data type/override/priority base header into RDAT.
0x4A3563: xor     eax, eax
0x4A3565: push    esi
0x4A3566: mov     esi, ecx
0x4A3568: mov     [esp+0Ch+Src], eax
0x4A356C: mov     [esp+0Ch+var_4], eax
0x4A3570: mov     eax, [esi]
0x4A3572: mov     edx, [eax+0Ch]
0x4A3575: call    edx
0x4A3577: mov     cl, [esi+6]
0x4A357A: push    8; Size
0x4A357C: lea     edx, [esp+10h+Src]
0x4A3580: mov     [esp+10h+Src], eax
0x4A3584: mov     al, [esi+4]
0x4A3587: push    edx; Src
0x4A3588: push    54414452h; int
0x4A358D: mov     byte ptr [esp+18h+var_4], al
0x4A3591: mov     byte ptr [esp+18h+var_4+1], cl
0x4A3595: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x4A359A: add     esp, 0Ch
0x4A359D: pop     esi
0x4A359E: add     esp, 8
0x4A35A1: retn
