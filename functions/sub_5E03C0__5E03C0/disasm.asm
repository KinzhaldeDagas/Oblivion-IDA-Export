0x5E03C0: cmp     dword ptr [ecx+58h], 0; 3DTheft decode 2026-05-17: Actor wrapper for process vfunc +0xD0; writes the resolved procedure target/follow reference into the actor process.
0x5E03C4: jz      short locret_5E03D3
0x5E03C6: mov     ecx, [ecx+58h]
0x5E03C9: mov     eax, [ecx]
0x5E03CB: mov     eax, [eax+0D0h]
0x5E03D1: jmp     eax
0x5E03D3: retn    4
