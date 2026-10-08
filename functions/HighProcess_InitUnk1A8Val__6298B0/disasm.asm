0x6298B0: fldz; Clears HighProcess.conversationScanCooldown to 0.0, making the social-scan timer immediately eligible when other procedure gates permit.
0x6298B2: fstp    dword ptr [ecx+1A8h]
0x6298B8: retn
