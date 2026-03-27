0x7A3860: push    0FFFFFFFFh
0x7A3862: push    offset ??1CTreeEngine@@UAE@XZ_SEH
0x7A3867: mov     eax, large fs:0
0x7A386D: push    eax
0x7A386E: push    ecx
0x7A386F: push    ebx
0x7A3870: push    esi
0x7A3871: mov     eax, ds:0B30AACh
0x7A3876: xor     eax, esp
0x7A3878: push    eax
0x7A3879: lea     eax, [esp+1Ch+var_C]
0x7A387D: mov     large fs:0, eax
0x7A3883: mov     esi, ecx
0x7A3885: mov     [esp+1Ch+var_10], esi
0x7A3889: lea     ecx, [esi+84h]
0x7A388F: mov     [esp+1Ch+var_4], 4
0x7A3897: call    sub_7A5B70
0x7A389C: mov     eax, [esi+78h]
0x7A389F: xor     ebx, ebx
0x7A38A1: cmp     eax, ebx
0x7A38A3: jz      short loc_7A38AE
0x7A38A5: push    eax
0x7A38A6: call    FormHeapFree
0x7A38AB: add     esp, 4
0x7A38AE: mov     [esi+78h], ebx
0x7A38B1: mov     [esi+7Ch], ebx
0x7A38B4: mov     [esi+80h], ebx
0x7A38BA: mov     eax, [esi+64h]
0x7A38BD: cmp     eax, ebx
0x7A38BF: jz      short loc_7A38CA
0x7A38C1: push    eax
0x7A38C2: call    FormHeapFree
0x7A38C7: add     esp, 4
0x7A38CA: mov     [esi+64h], ebx
0x7A38CD: mov     [esi+68h], ebx
0x7A38D0: mov     [esi+6Ch], ebx
0x7A38D3: cmp     dword ptr [esi+3Ch], 10h
0x7A38D7: jb      short loc_7A38E5
0x7A38D9: mov     eax, [esi+28h]
0x7A38DC: push    eax
0x7A38DD: call    FormHeapFree
0x7A38E2: add     esp, 4
0x7A38E5: mov     dword ptr [esi+3Ch], 0Fh
0x7A38EC: mov     [esi+38h], ebx
0x7A38EF: lea     ecx, [esi+20h]; void *
0x7A38F2: mov     [esi+28h], bl
0x7A38F5: mov     byte ptr [esp+1Ch+var_4], bl
0x7A38F9: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7A38FE: mov     ecx, esi; this
0x7A3900: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7A3908: call    ??1CBillboardLeaf@@UAE@XZ; CBillboardLeaf::~CBillboardLeaf(void)
0x7A390D: mov     ecx, [esp+1Ch+var_C]
0x7A3911: mov     large fs:0, ecx
0x7A3918: pop     ecx
0x7A3919: pop     esi
0x7A391A: pop     ebx
0x7A391B: add     esp, 10h
0x7A391E: retn
