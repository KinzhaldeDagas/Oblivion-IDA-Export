0x6944C0: push    0FFFFFFFFh
0x6944C2: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x6944C7: mov     eax, large fs:0
0x6944CD: push    eax
0x6944CE: push    ecx
0x6944CF: push    esi
0x6944D0: push    edi
0x6944D1: mov     eax, ds:0B30AACh
0x6944D6: xor     eax, esp
0x6944D8: push    eax
0x6944D9: lea     eax, [esp+1Ch+var_C]
0x6944DD: mov     large fs:0, eax
0x6944E3: mov     edi, ecx
0x6944E5: mov     [esp+1Ch+var_10], edi
0x6944E9: mov     esi, [edi+38h]
0x6944EC: test    esi, esi
0x6944EE: mov     [esp+1Ch+var_4], 0
0x6944F6: jz      short loc_694514
0x6944F8: lea     eax, [esi+4]
0x6944FB: push    eax; lpAddend
0x6944FC: call    dword ptr ds:0A2807Ch
0x694502: test    eax, eax
0x694504: jnz     short loc_694514
0x694506: test    esi, esi
0x694508: jz      short loc_694514
0x69450A: mov     edx, [esi]
0x69450C: mov     eax, [edx]
0x69450E: push    1
0x694510: mov     ecx, esi
0x694512: call    eax
0x694514: mov     ecx, edi; this
0x694516: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x69451E: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x694523: mov     ecx, dword ptr [esp+1Ch+var_C]
0x694527: mov     large fs:0, ecx
0x69452E: pop     ecx
0x69452F: pop     edi
0x694530: pop     esi
0x694531: add     esp, 10h
0x694534: retn
