0x7ED180: cmp     dword ptr [ecx+7Ch], 0; MEF PERF 2026-10-07 PASS4: Verified unfiltered next iterator: returns0 when shared cursor+7C is null; otherwise advances to next and returns payload. Preserves first/next side effects used by receiver removal path7C5750.
0x7ED184: jz      short loc_7ED192
0x7ED186: mov     eax, [ecx+7Ch]
0x7ED189: mov     edx, [eax]
0x7ED18B: mov     [ecx+7Ch], edx
0x7ED18E: mov     eax, [eax+8]
0x7ED191: retn
0x7ED192: xor     eax, eax
0x7ED194: retn
