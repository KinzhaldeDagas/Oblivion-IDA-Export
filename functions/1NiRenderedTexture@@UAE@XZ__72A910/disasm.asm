0x72A910: push    0FFFFFFFFh
0x72A912: push    offset ??1NiRenderedTexture@@UAE@XZ_SEH
0x72A917: mov     eax, large fs:0
0x72A91D: push    eax
0x72A91E: push    ecx
0x72A91F: push    esi
0x72A920: push    edi
0x72A921: mov     eax, ds:0B30AACh
0x72A926: xor     eax, esp
0x72A928: push    eax
0x72A929: lea     eax, [esp+1Ch+var_C]
0x72A92D: mov     large fs:0, eax
0x72A933: mov     edi, ecx
0x72A935: mov     [esp+1Ch+var_10], edi
0x72A939: mov     esi, [edi+30h]
0x72A93C: test    esi, esi
0x72A93E: mov     [esp+1Ch+var_4], 0
0x72A946: jz      short loc_72A964
0x72A948: lea     eax, [esi+4]
0x72A94B: push    eax; lpAddend
0x72A94C: call    dword ptr ds:0A2807Ch
0x72A952: test    eax, eax
0x72A954: jnz     short loc_72A964
0x72A956: test    esi, esi
0x72A958: jz      short loc_72A964
0x72A95A: mov     edx, [esi]
0x72A95C: mov     eax, [edx]
0x72A95E: push    1
0x72A960: mov     ecx, esi
0x72A962: call    eax
0x72A964: mov     ecx, edi; this
0x72A966: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x72A96E: call    ??1NiTexture@@UAE@XZ; NiTexture::~NiTexture(void)
0x72A973: mov     ecx, dword ptr [esp+1Ch+var_C]
0x72A977: mov     large fs:0, ecx
0x72A97E: pop     ecx
0x72A97F: pop     edi
0x72A980: pop     esi
0x72A981: add     esp, 10h
0x72A984: retn
