0x700790: push    0FFFFFFFFh
0x700792: push    offset SEH_700790
0x700797: mov     eax, large fs:0
0x70079D: push    eax
0x70079E: sub     esp, 49Ch
0x7007A4: mov     eax, ds:0B30AACh
0x7007A9: xor     eax, esp
0x7007AB: mov     [esp+4A8h+var_10], eax
0x7007B2: push    ebx
0x7007B3: push    esi
0x7007B4: push    edi
0x7007B5: mov     eax, ds:0B30AACh
0x7007BA: xor     eax, esp
0x7007BC: push    eax
0x7007BD: lea     eax, [esp+4B8h+var_C]
0x7007C4: mov     large fs:0, eax
0x7007CA: mov     esi, [esp+4B8h+arg_0]
0x7007D1: xor     ebx, ebx
0x7007D3: mov     edi, ecx
0x7007D5: lea     ecx, [esp+4B8h+var_498]; this
0x7007D9: mov     [esp+4B8h+var_4], ebx
0x7007E0: mov     [esp+4B8h+var_49C], esi
0x7007E4: mov     [esp+4B8h+var_4A0], ebx
0x7007E8: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x7007ED: push    edi
0x7007EE: lea     ecx, [esp+4BCh+var_498]
0x7007F2: mov     [esp+4BCh+var_4], 1
0x7007FD: call    sub_713E50
0x700802: lea     eax, [esp+4B8h+var_4A4]
0x700806: push    eax
0x700807: lea     ecx, [esp+4BCh+var_4A8]
0x70080B: push    ecx
0x70080C: lea     ecx, [esp+4C0h+var_498]
0x700810: mov     [esp+4C0h+var_4A8], ebx
0x700814: mov     [esp+4C0h+var_4A4], ebx
0x700818: call    sub_7121D0
0x70081D: mov     edx, [esp+4B8h+var_4A4]
0x700821: mov     eax, [esp+4B8h+var_4A8]
0x700825: push    edx
0x700826: push    eax
0x700827: lea     ecx, [esp+4C0h+var_498]
0x70082B: call    sub_712070
0x700830: mov     ecx, [esp+4B8h+var_290]
0x700837: mov     eax, [ecx]
0x700839: cmp     eax, ebx
0x70083B: mov     [esi], eax
0x70083D: jz      short loc_700849
0x70083F: add     eax, 4
0x700842: push    eax; lpAddend
0x700843: call    dword ptr ds:0A28078h
0x700849: mov     edx, [esp+4B8h+var_4A8]
0x70084D: push    edx
0x70084E: mov     [esp+4BCh+var_4A0], 1
0x700856: call    FormHeapFree
0x70085B: add     esp, 4
0x70085E: lea     ecx, [esp+4B8h+var_498]; this
0x700862: mov     byte ptr [esp+4B8h+var_4], bl
0x700869: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x70086E: mov     eax, esi
0x700870: mov     ecx, [esp+4B8h+var_C]
0x700877: mov     large fs:0, ecx
0x70087E: pop     ecx
0x70087F: pop     edi
0x700880: pop     esi
0x700881: pop     ebx
0x700882: mov     ecx, [esp+4A8h+var_10]
0x700889: xor     ecx, esp
0x70088B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x700890: add     esp, 4A8h
0x700896: retn    4
