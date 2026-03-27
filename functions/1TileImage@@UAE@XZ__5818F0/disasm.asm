0x5818F0: push    0FFFFFFFFh
0x5818F2: push    offset ??1TileImage@@UAE@XZ_SEH
0x5818F7: mov     eax, large fs:0
0x5818FD: push    eax
0x5818FE: push    ecx
0x5818FF: push    esi
0x581900: push    edi
0x581901: mov     eax, ds:0B30AACh
0x581906: xor     eax, esp
0x581908: push    eax
0x581909: lea     eax, [esp+1Ch+var_C]
0x58190D: mov     large fs:0, eax
0x581913: mov     edi, ecx
0x581915: mov     [esp+1Ch+var_10], edi
0x581919: mov     dword ptr [edi], offset ??_7TileImage@@6B@; const TileImage::`vftable'
0x58191F: cmp     byte ptr [edi+4], 0
0x581923: mov     [esp+1Ch+var_4], 1
0x58192B: jnz     short loc_581932
0x58192D: call    sub_58DA70
0x581932: mov     esi, [edi+44h]
0x581935: test    esi, esi
0x581937: mov     byte ptr [esp+1Ch+var_4], 0
0x58193C: jz      short loc_58195A
0x58193E: lea     eax, [esi+4]
0x581941: push    eax; lpAddend
0x581942: call    dword ptr ds:0A2807Ch
0x581948: test    eax, eax
0x58194A: jnz     short loc_58195A
0x58194C: test    esi, esi
0x58194E: jz      short loc_58195A
0x581950: mov     edx, [esi]
0x581952: mov     eax, [edx]
0x581954: push    1
0x581956: mov     ecx, esi
0x581958: call    eax
0x58195A: mov     ecx, edi; this
0x58195C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x581964: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x581969: mov     ecx, dword ptr [esp+1Ch+var_C]
0x58196D: mov     large fs:0, ecx
0x581974: pop     ecx
0x581975: pop     edi
0x581976: pop     esi
0x581977: add     esp, 10h
0x58197A: retn
