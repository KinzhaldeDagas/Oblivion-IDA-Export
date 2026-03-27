0x6F8B70: push    0FFFFFFFFh
0x6F8B72: push    offset ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UAE@XZ_SEH
0x6F8B77: mov     eax, large fs:0
0x6F8B7D: push    eax
0x6F8B7E: push    ecx
0x6F8B7F: push    esi
0x6F8B80: mov     eax, ds:0B30AACh
0x6F8B85: xor     eax, esp
0x6F8B87: push    eax
0x6F8B88: lea     eax, [esp+18h+var_C]
0x6F8B8C: mov     large fs:0, eax
0x6F8B92: mov     esi, ecx
0x6F8B94: mov     [esp+18h+var_10], esi
0x6F8B98: mov     dword ptr [esi], offset ??_7?$basic_filebuf@DU?$char_traits@D@std@@@std@@6B@; const std::filebuf::`vftable'
0x6F8B9E: cmp     byte ptr [esi+48h], 0
0x6F8BA2: mov     [esp+18h+var_4], 0
0x6F8BAA: jz      short loc_6F8BB1
0x6F8BAC: call    sub_6F83E0
0x6F8BB1: mov     ecx, esi
0x6F8BB3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6F8BBB: call    ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ; std::streambuf::~streambuf<char,std::char_traits<char>>(void)
0x6F8BC0: mov     ecx, [esp+18h+var_C]
0x6F8BC4: mov     large fs:0, ecx
0x6F8BCB: pop     ecx
0x6F8BCC: pop     esi
0x6F8BCD: add     esp, 10h
0x6F8BD0: retn
