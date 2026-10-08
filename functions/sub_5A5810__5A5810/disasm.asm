0x5A5810: mov     edx, [esp+arg_0]
0x5A5814: cmp     edx, [ecx+0Ch]
0x5A5817: jb      short loc_5A581E
0x5A5819: xor     eax, eax
0x5A581B: retn    4
0x5A581E: mov     eax, [ecx+4]
0x5A5821: lea     eax, [eax+edx*4]
0x5A5824: push    esi
0x5A5825: mov     esi, [eax]
0x5A5827: test    esi, esi
0x5A5829: mov     dword ptr [eax], 0
0x5A582F: jz      short loc_5A5835
0x5A5831: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x5A5835: mov     eax, [ecx+0Ch]
0x5A5838: add     eax, 0FFFFFFFFh
0x5A583B: cmp     edx, eax
0x5A583D: jnz     short loc_5A5842
0x5A583F: mov     [ecx+0Ch], eax
0x5A5842: test    esi, esi
0x5A5844: jz      short loc_5A5880
0x5A5846: mov     ecx, [esi+4]
0x5A5849: test    ecx, ecx
0x5A584B: jz      short loc_5A585E
0x5A584D: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5A5852: mov     ecx, [esi+4]
0x5A5855: push    ecx
0x5A5856: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5A585B: add     esp, 4
0x5A585E: mov     ecx, [esi]; this
0x5A5860: test    ecx, ecx
0x5A5862: jz      short loc_5A5880
0x5A5864: call    Tile__Release; Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
0x5A5869: cmp     byte ptr ds:0B3A6D4h, 0
0x5A5870: jnz     short loc_5A5880
0x5A5872: mov     ecx, [esi]
0x5A5874: test    ecx, ecx
0x5A5876: jz      short loc_5A5880
0x5A5878: mov     edx, [ecx]
0x5A587A: mov     eax, [edx]
0x5A587C: push    1
0x5A587E: call    eax
0x5A5880: mov     eax, esi
0x5A5882: pop     esi
0x5A5883: retn    4
