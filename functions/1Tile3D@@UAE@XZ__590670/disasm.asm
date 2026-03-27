0x590670: push    0FFFFFFFFh
0x590672: push    offset ??1Tile3D@@UAE@XZ_SEH
0x590677: mov     eax, large fs:0
0x59067D: push    eax
0x59067E: push    ecx
0x59067F: push    ebx
0x590680: push    esi
0x590681: mov     eax, ds:0B30AACh
0x590686: xor     eax, esp
0x590688: push    eax
0x590689: lea     eax, [esp+1Ch+var_C]
0x59068D: mov     large fs:0, eax
0x590693: mov     esi, ecx
0x590695: mov     [esp+1Ch+var_10], esi
0x590699: mov     dword ptr [esi], offset ??_7Tile3D@@6B@; const Tile3D::`vftable'
0x59069F: mov     eax, [esi+50h]
0x5906A2: mov     ecx, ds:0B33A1Ch
0x5906A8: push    1
0x5906AA: push    1
0x5906AC: push    eax
0x5906AD: mov     [esp+28h+var_4], 2
0x5906B5: call    QueuedModelLoader_RemoveModel
0x5906BA: xor     ebx, ebx
0x5906BC: cmp     [esi+4], bl
0x5906BF: jnz     short loc_5906C8
0x5906C1: mov     ecx, esi
0x5906C3: call    sub_58DA70
0x5906C8: mov     eax, [esi+50h]
0x5906CB: push    eax
0x5906CC: call    FormHeapFree
0x5906D1: mov     [esi+50h], ebx
0x5906D4: mov     [esi+56h], bx
0x5906D8: mov     [esi+54h], bx
0x5906DC: mov     eax, [esi+48h]
0x5906DF: push    eax
0x5906E0: call    FormHeapFree
0x5906E5: add     esp, 8
0x5906E8: mov     ecx, esi; this
0x5906EA: mov     [esi+48h], ebx
0x5906ED: mov     [esi+4Eh], bx
0x5906F1: mov     [esi+4Ch], bx
0x5906F5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5906FD: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x590702: mov     ecx, [esp+1Ch+var_C]
0x590706: mov     large fs:0, ecx
0x59070D: pop     ecx
0x59070E: pop     esi
0x59070F: pop     ebx
0x590710: add     esp, 10h
0x590713: retn
