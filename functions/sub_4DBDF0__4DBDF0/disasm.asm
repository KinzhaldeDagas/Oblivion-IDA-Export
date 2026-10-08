0x4DBDF0: push    edi; Verified lock-data factory: returns the existing ExtraLockData payload or allocates a zeroed 12-byte payload, installs it in an ExtraLock wrapper, and returns it. An allocation failure leaves/sets a null-payload ExtraLock wrapper through ExtraDataList_SetLock.
0x4DBDF1: lea     edi, [ecx+44h]
0x4DBDF4: mov     ecx, edi; this
0x4DBDF6: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4DBDFB: test    eax, eax
0x4DBDFD: jnz     short loc_4DBE38
0x4DBDFF: push    esi
0x4DBE00: push    0Ch; Size
0x4DBE02: call    FormHeapAlloc
0x4DBE07: add     esp, 4
0x4DBE0A: test    eax, eax
0x4DBE0C: jz      short loc_4DBE2B
0x4DBE0E: mov     esi, eax
0x4DBE10: push    esi; lockData
0x4DBE11: mov     ecx, edi; this
0x4DBE13: mov     byte ptr [eax], 0
0x4DBE16: mov     dword ptr [eax+4], 0
0x4DBE1D: mov     byte ptr [eax+8], 0
0x4DBE21: call    ExtraDataList_SetLock; Verified ExtraLock lifecycle setter: if type 0x31 exists, frees its old ExtraLockData payload and replaces it; otherwise allocates a 16-byte ExtraLock wrapper, constructs it with the supplied 12-byte ExtraLockData*, and adds it to ExtraDataList.
0x4DBE26: mov     eax, esi
0x4DBE28: pop     esi
0x4DBE29: pop     edi
0x4DBE2A: retn
0x4DBE2B: xor     esi, esi
0x4DBE2D: push    esi; lockData
0x4DBE2E: mov     ecx, edi; this
0x4DBE30: call    ExtraDataList_SetLock; Verified ExtraLock lifecycle setter: if type 0x31 exists, frees its old ExtraLockData payload and replaces it; otherwise allocates a 16-byte ExtraLock wrapper, constructs it with the supplied 12-byte ExtraLockData*, and adds it to ExtraDataList.
0x4DBE35: mov     eax, esi
0x4DBE37: pop     esi
0x4DBE38: pop     edi
0x4DBE39: retn
