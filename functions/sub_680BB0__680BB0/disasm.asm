0x680BB0: push    ecx; Verified: Inserts a search-node index into the single AStarWorldNodeList. Reads that index's fitness from the 0x10-byte transient state table and keeps the list in ascending fitness order (before first >=, otherwise tail). This differs from Fallout's TeleportDoorSearch AStarQueue: Fallout AddNode selects one of 20 buckets from normalized fitness, then sorts within that bucket.
0x680BB1: mov     edx, [esp+4+node]
0x680BB5: test    edx, edx
0x680BB7: jz      loc_680C3D
0x680BBD: cmp     dword ptr [ecx+0Ch], 0
0x680BC1: jnz     short loc_680BD1
0x680BC3: lea     eax, [esp+4+node]
0x680BC7: push    eax
0x680BC8: call    NiTList_AddHead; NiTList AddHead helper. Allocates a node, stores payload at +0x08, installs it as the list head, repairs the previous head/backlink or empty-list tail, and increments count. Repeated per-light calls reverse the source iterator order.
0x680BCD: pop     ecx
0x680BCE: retn    4
0x680BD1: movzx   edx, word ptr [edx]
0x680BD4: push    ebx
0x680BD5: mov     ebx, ds:0B3BF00h
0x680BDB: push    edi
0x680BDC: mov     di, ds:0B3BF04h
0x680BE3: xor     eax, eax
0x680BE5: cmp     dx, di
0x680BE8: jnb     short loc_680BF2
0x680BEA: movzx   eax, dx
0x680BED: shl     eax, 4
0x680BF0: add     eax, ebx
0x680BF2: fld     dword ptr [eax]
0x680BF4: push    esi
0x680BF5: mov     esi, [ecx+4]
0x680BF8: fstp    [esp+10h+var_4]
0x680BFC: test    esi, esi
0x680BFE: jz      short loc_680C30
0x680C00: fld     [esp+10h+var_4]
0x680C04: mov     edx, [esi+8]
0x680C07: test    edx, edx
0x680C09: jz      short loc_680C41
0x680C0B: movzx   edx, word ptr [edx]
0x680C0E: xor     eax, eax
0x680C10: cmp     dx, di
0x680C13: jnb     short loc_680C1D
0x680C15: movzx   eax, dx
0x680C18: shl     eax, 4
0x680C1B: add     eax, ebx
0x680C1D: fld     dword ptr [eax]
0x680C1F: fcomp   st(1)
0x680C21: fnstsw  ax
0x680C23: test    ah, 1
0x680C26: jz      short loc_680C41
0x680C28: mov     esi, [esi]
0x680C2A: test    esi, esi
0x680C2C: jnz     short loc_680C04
0x680C2E: fstp    st
0x680C30: lea     eax, [esp+10h+node]
0x680C34: push    eax
0x680C35: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x680C3A: pop     esi
0x680C3B: pop     edi
0x680C3C: pop     ebx
0x680C3D: pop     ecx
0x680C3E: retn    4
0x680C41: lea     edx, [esp+10h+node]
0x680C45: fstp    st
0x680C47: push    edx
0x680C48: push    esi
0x680C49: call    NiTPointerList__InsertBeforePosition
0x680C4E: pop     esi
0x680C4F: pop     edi
0x680C50: pop     ebx
0x680C51: pop     ecx
0x680C52: retn    4
