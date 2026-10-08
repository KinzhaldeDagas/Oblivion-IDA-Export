0x728670: push    0FFFFFFFFh; [constructor audit] This supplied-data overload assigns input pointers before bound computation at72A0F0; it does not allocate or copy their payloads. NiObject base7005D0 only initializes header/refcount and increments global object count. Allocation failures are handled by caller allocations before this chain; arbitrary unreadable input/global memory faults are a distinct condition.
0x728672: push    offset SEH_728670
0x728677: mov     eax, large fs:0
0x72867D: push    eax
0x72867E: push    ecx
0x72867F: push    ebx
0x728680: push    esi
0x728681: mov     eax, ds:0B30AACh
0x728686: xor     eax, esp
0x728688: push    eax
0x728689: lea     eax, [esp+1Ch+var_C]
0x72868D: mov     large fs:0, eax
0x728693: mov     esi, ecx
0x728695: mov     [esp+1Ch+var_10], esi
0x728699: call    NiObject_constr
0x72869E: mov     ax, [esp+1Ch+arg_0]
0x7286A3: mov     ecx, [esp+1Ch+arg_4]
0x7286A7: mov     edx, [esp+1Ch+arg_8]
0x7286AB: xor     ebx, ebx
0x7286AD: mov     [esi+8], ax
0x7286B1: mov     eax, [esp+1Ch+arg_C]
0x7286B5: mov     [esi+1Ch], ecx
0x7286B8: mov     ecx, [esp+1Ch+arg_10]
0x7286BC: mov     dword ptr [esi], offset ??_7NiGeometryData@@6B@; const NiGeometryData::`vftable'
0x7286C2: mov     [esi+20h], edx
0x7286C5: mov     [esi+24h], eax
0x7286C8: mov     [esi+28h], ecx
0x7286CB: mov     [esi+2Ch], bx
0x7286CF: mov     [esi+2Eh], bx
0x7286D3: mov     [esi+30h], bl
0x7286D6: mov     [esi+31h], bl
0x7286D9: mov     [esp+1Ch+var_4], ebx
0x7286DD: mov     [esi+34h], ebx
0x7286E0: movzx   eax, [esp+1Ch+arg_14]
0x7286E5: mov     dx, [esi+2Ch]
0x7286E9: and     dx, 0FC0h
0x7286EE: and     eax, 3Fh
0x7286F1: or      dx, ax
0x7286F4: movzx   eax, word ptr [esi+8]
0x7286F8: or      dx, [esp+1Ch+arg_18]
0x7286FD: cmp     ax, bx
0x728700: mov     byte ptr [esp+1Ch+var_4], 1
0x728705: mov     [esi+3Ch], bl
0x728708: mov     [esi+3Dh], bl
0x72870B: mov     [esi+2Ch], dx
0x72870F: jbe     short loc_728725
0x728711: mov     ecx, [esi+1Ch]
0x728714: cmp     ecx, ebx
0x728716: jz      short loc_728725
0x728718: push    ecx; vertices
0x728719: movzx   ecx, ax
0x72871C: push    ecx; vertexCount
0x72871D: lea     ecx, [esi+0Ch]; self
0x728720: call    NiSphere_ComputeFromVertices; Compute the initial NiGeometryData local bounding sphere from the constructor's contiguous vertex array.
0x728725: mov     [esi+38h], ebx
0x728728: mov     dx, ds:0B27504h
0x72872F: mov     [esi+0Ah], dx
0x728733: add     word ptr ds:0B27504h, 1
0x72873B: and     word ptr [esi+2Eh], 0FFFh
0x728741: mov     eax, esi
0x728743: mov     ecx, [esp+1Ch+var_C]
0x728747: mov     large fs:0, ecx
0x72874E: pop     ecx
0x72874F: pop     esi
0x728750: pop     ebx
0x728751: add     esp, 10h
0x728754: retn    1Ch
0x9CA540: mov     ecx, [ebp-10h]
0x9CA543: jmp     NiRefObject_destr
0x9CA548: mov     ecx, [ebp-10h]
0x9CA54B: add     ecx, 34h ; '4'; slot
0x9CA54E: jmp     NiPointerSlot_Release
0x9CA553: mov     edx, [esp+arg_4]
0x9CA557: lea     eax, [edx-0Ch]
0x9CA55A: mov     ecx, [edx-10h]
0x9CA55D: xor     ecx, eax
0x9CA55F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA564: mov     eax, offset stru_AF2C3C
0x9CA569: jmp     ___CxxFrameHandler3
