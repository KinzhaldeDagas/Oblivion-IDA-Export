0x4C9830: mov     al, [ecx+24h]; Verified getter: returns whether TESObjectCELL flags0 bit 0x20 is set. Its uses include door access/trespass checks and IsOffLimitToThePlayer. Probable semantic identity: Public; Fallout independently names the corresponding bit SetPublic.
0x4C9833: shr     al, 5
0x4C9836: and     al, 1
0x4C9838: retn
