0x8CEA50: mov     edx, [esp+arg_0]; TES4 authoritative: bhkCharacterPointCollector constructor. Base all-contact collector starts with inline 0x30-byte hit storage at this+0x20, initial capacity 8; this+0x1A0 links back to proxy+0x10 collector state.
0x8CEA54: fld     dword ptr ds:0A99DCCh
0x8CEA5A: mov     eax, ecx
0x8CEA5C: mov     dword ptr [eax+18h], 80000008h; TES4 authoritative: collector inline hit capacity/flags = 8 entries.
0x8CEA63: lea     ecx, [eax+20h]
0x8CEA66: mov     [eax+10h], ecx; TES4 authoritative: collector hit array pointer = this+0x20 inline storage.
0x8CEA69: fstp    dword ptr [eax+4]
0x8CEA6C: xor     ecx, ecx
0x8CEA6E: mov     [eax+1A0h], edx
0x8CEA74: mov     [eax+14h], ecx; TES4 authoritative: collector hit count initialized to 0.
0x8CEA77: mov     dword ptr [eax], offset ??_7bhkCharacterPointCollector@@6B@; const bhkCharacterPointCollector::`vftable'
0x8CEA7D: mov     [eax+1A4h], ecx
0x8CEA83: mov     edx, 80000000h
0x8CEA88: mov     [eax+1ACh], edx
0x8CEA8E: mov     [eax+1B0h], ecx
0x8CEA94: mov     [eax+1B8h], edx
0x8CEA9A: mov     [eax+1BCh], ecx
0x8CEAA0: mov     [eax+1C4h], edx
0x8CEAA6: mov     [eax+1A8h], ecx
0x8CEAAC: mov     [eax+1C0h], ecx
0x8CEAB2: mov     [eax+1B4h], ecx
0x8CEAB8: retn    4
