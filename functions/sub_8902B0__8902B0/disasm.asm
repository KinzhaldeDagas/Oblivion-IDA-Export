0x8902B0: push    ebp
0x8902B1: mov     ebp, esp
0x8902B3: and     esp, 0FFFFFFF0h
0x8902B6: push    0FFFFFFFFh
0x8902B8: push    offset SEH_8902B0
0x8902BD: mov     eax, large fs:0
0x8902C3: push    eax
0x8902C4: sub     esp, 1E8h
0x8902CA: mov     eax, ds:0B30AACh
0x8902CF: xor     eax, esp
0x8902D1: mov     [esp+1F4h+var_14], eax
0x8902D8: push    ebx
0x8902D9: push    esi
0x8902DA: push    edi
0x8902DB: mov     eax, ds:0B30AACh
0x8902E0: xor     eax, esp
0x8902E2: push    eax
0x8902E3: lea     eax, [esp+204h+var_C]
0x8902EA: mov     large fs:0, eax
0x8902F0: mov     eax, [ebp+arg_0]
0x8902F3: mov     esi, ecx
0x8902F5: mov     [esp+204h+var_1F4], eax
0x8902F9: call    sub_89F570
0x8902FE: test    esi, esi
0x890300: jz      short loc_89035B
0x890302: mov     ebx, [esi+8]
0x890305: test    ebx, ebx
0x890307: jz      short loc_89035B
0x890309: lea     edi, [esi+10h]
0x89030C: push    edi
0x89030D: lea     ecx, [esp+208h+var_1F0]; this
0x890311: call    ??0bhkCharacterPointCollector@@QAE@XZ; bhkCharacterPointCollector::bhkCharacterPointCollector(void)
0x890316: mov     edx, [esi]
0x890318: mov     eax, [edx+58h]
0x89031B: mov     ecx, esi
0x89031D: mov     [esp+204h+var_4], 0
0x890328: call    eax
0x89032A: mov     edx, [esp+204h+var_1F4]
0x89032E: push    edi
0x89032F: lea     ecx, [esp+208h+var_1F0]
0x890333: push    ecx
0x890334: add     eax, 20h ; ' '
0x890337: push    eax
0x890338: push    edx
0x890339: mov     ecx, ebx
0x89033B: call    sub_8AD7D0
0x890340: mov     ecx, edi
0x890342: call    sub_8CE8F0
0x890347: lea     ecx, [esp+204h+var_1F0]; this
0x89034B: mov     [esp+204h+var_4], 0FFFFFFFFh
0x890356: call    ??1bhkCharacterPointCollector@@UAE@XZ; bhkCharacterPointCollector::~bhkCharacterPointCollector(void)
0x89035B: mov     ecx, esi
0x89035D: call    sub_89F570
0x890362: mov     ecx, [esp+204h+var_C]
0x890369: mov     large fs:0, ecx
0x890370: pop     ecx
0x890371: pop     edi
0x890372: pop     esi
0x890373: pop     ebx
0x890374: mov     ecx, [esp+1F4h+var_14]
0x89037B: xor     ecx, esp
0x89037D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x890382: mov     esp, ebp
0x890384: pop     ebp
0x890385: retn    4
