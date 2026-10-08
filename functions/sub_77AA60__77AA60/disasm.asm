0x77AA60: mov     eax, [esp+a2]
0x77AA64: push    eax; geometry
0x77AA65: push    ecx; shader
0x77AA66: call    NiD3DShader_CreateSCMExtraData; Verified NiD3DShader_CreateSCMExtraData: removes the prior named cache, counts attribute-kind30000000 entries in shader-owned and pass-owned maps, creates NiSCMExtraData when needed and prepopulates 8-byte key/extra-pointer arrays before attaching it to the geometry. The render wrapper later resets cursors, and attribute callbacks consume the cache. Fallout AddEntry is an architectural guide; preserve Oblivion two-stage offsets and actual key generation.
0x77AA6B: add     esp, 8
0x77AA6E: mov     al, 1
0x77AA70: retn    4
