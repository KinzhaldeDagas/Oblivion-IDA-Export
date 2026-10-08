0x46AC90: mov     ecx, ds:0B33B00h; self
0x46AC96: jmp     SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
