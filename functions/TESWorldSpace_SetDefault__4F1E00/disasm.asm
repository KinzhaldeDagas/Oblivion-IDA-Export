0x4F1E00: push    ebx; WRLD/SNAM runtime default verified 2026-10-01: TESWorldSpace::SetDefault explicitly sets music field unk084[4]=0 at0x4F1E53. The TESWorldSpace constructor0x4F2A10 calls SetDefault0x4F1E00 at0x4F2BD7. TESWorldSpace::Load later assigns each reached SNAM candidate at0x4F210C; full absent SNAM is therefore known music enum0 (Default), not unknown.
0x4F1E01: push    esi
0x4F1E02: mov     esi, ecx
0x4F1E04: xor     ebx, ebx
0x4F1E06: mov     [esi+7Ch], ebx
0x4F1E09: mov     [esi+5Ch], bl
0x4F1E0C: call    TESForm_HasBuiltinFormID; Returns true when this TESForm has a built-in FormID in the reserved range 0x00000001..0x000007FF.
0x4F1E11: test    al, al
0x4F1E13: jnz     short loc_4F1E19
0x4F1E15: or      byte ptr [esi+5Ch], 1
0x4F1E19: mov     [esi+58h], ebx
0x4F1E1C: mov     [esi+80h], ebx
0x4F1E22: mov     eax, [esi+28h]
0x4F1E25: push    eax
0x4F1E26: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F1E2B: mov     [esi+28h], ebx
0x4F1E2E: mov     [esi+2Eh], bx
0x4F1E32: mov     [esi+2Ch], bx
0x4F1E36: add     esp, 4
0x4F1E39: xor     eax, eax
0x4F1E3B: mov     [esi+84h], eax; Authoritative full-WRLD MNAM initial state: SetDefault zeroes the five unk084 dwords; the first four are the 16-byte MNAM field. Short MNAM prefix overlays are therefore exactly reconstructible for a fresh non-partial form, while partial override records inherit prior field bytes.
0x4F1E41: mov     [esi+88h], eax
0x4F1E47: mov     [esi+8Ch], eax
0x4F1E4D: mov     [esi+90h], eax
0x4F1E53: mov     [esi+94h], ebx; Oblivion WRLD default music proof: TESWorldSpace::SetDefault writes dword0 to unk084[4], the SNAM U32, here. Constructor0x4F2A10 invokes SetDefault at0x4F2BD7. A full non-partial WRLD without SNAM therefore has effective enum value0 (Default).
0x4F1E59: mov     ecx, esi
0x4F1E5B: pop     esi
0x4F1E5C: pop     ebx
0x4F1E5D: jmp     j_TESForm_InitializeComponents
