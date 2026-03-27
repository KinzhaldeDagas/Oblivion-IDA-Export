0x8BEAD0: push    esi
0x8BEAD1: mov     esi, ecx
0x8BEAD3: cmp     dword ptr [esi+0Ch], 0
0x8BEAD7: jnz     short loc_8BEB4E
0x8BEAD9: push    1
0x8BEADB: push    40h ; '@'
0x8BEADD: mov     ecx, offset FormHeap
0x8BEAE2: call    j_MemoryHeap_Alloc
0x8BEAE7: fldz
0x8BEAE9: mov     dl, al
0x8BEAEB: and     dl, 0Fh
0x8BEAEE: mov     cl, 10h
0x8BEAF0: sub     cl, dl
0x8BEAF2: movzx   edx, cl
0x8BEAF5: add     eax, edx
0x8BEAF7: mov     [eax-1], cl
0x8BEAFA: mov     dword ptr [eax], 0
0x8BEB00: mov     dword ptr [eax+4], 0
0x8BEB07: fst     dword ptr [eax+10h]
0x8BEB0A: fst     dword ptr [eax+14h]
0x8BEB0D: fst     dword ptr [eax+18h]
0x8BEB10: fst     dword ptr [eax+1Ch]
0x8BEB13: fst     dword ptr [eax+10h]
0x8BEB16: fst     dword ptr [eax+14h]
0x8BEB19: fst     dword ptr [eax+18h]
0x8BEB1C: fst     dword ptr [eax+1Ch]
0x8BEB1F: fstp    dword ptr [eax+20h]
0x8BEB22: fld     dword ptr ds:0A379B4h
0x8BEB28: fstp    dword ptr [eax+24h]
0x8BEB2B: mov     byte ptr [eax+28h], 1
0x8BEB2F: cmp     dword ptr [esi+8], 0
0x8BEB33: mov     [esi+0Ch], eax
0x8BEB36: jz      short loc_8BEB40
0x8BEB38: push    eax
0x8BEB39: mov     ecx, esi
0x8BEB3B: call    sub_8BE860
0x8BEB40: mov     eax, [esp+4+arg_0]
0x8BEB44: mov     byte ptr [eax], 1
0x8BEB47: mov     eax, [esi+0Ch]
0x8BEB4A: pop     esi
0x8BEB4B: retn    4
0x8BEB4E: mov     ecx, [esp+4+arg_0]
0x8BEB52: mov     byte ptr [ecx], 0
0x8BEB55: mov     eax, [esi+0Ch]
0x8BEB58: pop     esi
0x8BEB59: retn    4
