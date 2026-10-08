0x5852C0: push    0FFFFFFFFh
0x5852C2: push    offset TileTemplateItem_constr_SEH
0x5852C7: mov     eax, large fs:0
0x5852CD: push    eax
0x5852CE: push    ecx
0x5852CF: push    esi
0x5852D0: mov     eax, ds:0B30AACh
0x5852D5: xor     eax, esp
0x5852D7: push    eax
0x5852D8: lea     eax, [esp+18h+var_C]
0x5852DC: mov     large fs:0, eax
0x5852E2: mov     esi, ecx
0x5852E4: mov     [esp+18h+var_10], esi
0x5852E8: mov     [esp+18h+var_4], 1
0x5852F0: call    Tile__TileTemplate__Clear; Verified: walks typed template item list, frees item BSStringT buffer and each item; removes list nodes and decrements count. Mirrors role of Fallout TileTemplate::Clear, but no pooling established here.
0x5852F5: lea     ecx, [esi+0Ch]
0x5852F8: mov     byte ptr [esp+18h+var_4], 0
0x5852FD: call    ??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ; NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(void)
0x585302: mov     eax, [esi]
0x585304: push    eax
0x585305: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x58530A: add     esp, 4
0x58530D: mov     dword ptr [esi], 0
0x585313: mov     word ptr [esi+6], 0
0x585319: mov     word ptr [esi+4], 0
0x58531F: mov     ecx, [esp+18h+var_C]
0x585323: mov     large fs:0, ecx
0x58532A: pop     ecx
0x58532B: pop     esi
0x58532C: add     esp, 10h
0x58532F: retn
0x9BF870: mov     ecx, [ebp-10h]; void *
0x9BF873: jmp     BSStringT_Clear
0x9BF878: mov     ecx, [ebp-10h]
0x9BF87B: add     ecx, 0Ch
0x9BF87E: jmp     j_??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ; NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(void)
0x9BF883: mov     edx, [esp+arg_4]
0x9BF887: lea     eax, [edx-8]
0x9BF88A: mov     ecx, [edx-0Ch]
0x9BF88D: xor     ecx, eax
0x9BF88F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF894: mov     eax, offset stru_AE8D6C
0x9BF899: jmp     ___CxxFrameHandler3
