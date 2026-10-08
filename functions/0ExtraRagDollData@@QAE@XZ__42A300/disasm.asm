0x42A300: mov     eax, ecx; MEF v35 cleanup proof: ExtraRagDollData constructor only sets type/vtable and zeroes fields +8/+C. Before payload attachment, direct FormHeapFree is complete cleanup.
0x42A302: xor     ecx, ecx
0x42A304: mov     byte ptr [eax+4], 19h
0x42A308: mov     [eax+8], ecx
0x42A30B: mov     dword ptr [eax], offset ??_7ExtraRagDollData@@6B@; const ExtraRagDollData::`vftable'
0x42A311: mov     [eax+0Ch], ecx
0x42A314: retn
