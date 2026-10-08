0x4BB060: movsx   eax, byte ptr [ecx+90h]; Map TESObjectWEAP.type byte +0x90 through the six-entry native skill-AV table at 0xB086A0. Receiver is TESObjectWEAP *; no per-instance weapon-class sidecar is consulted.
0x4BB067: mov     eax, ds:0B086A0h[eax*4]
0x4BB06E: retn
