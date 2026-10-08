0xA1BCC0: push    offset g_PathGridCriticalSection; Verified exit cleanup paired with TESPathGrid_InitializeCriticalSection: calls DeleteCriticalSection(&g_PathGridCriticalSection).
0xA1BCC5: call    ds:DeleteCriticalSection
0xA1BCCB: retn
