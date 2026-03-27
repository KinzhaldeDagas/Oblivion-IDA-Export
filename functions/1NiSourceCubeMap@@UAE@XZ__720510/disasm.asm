0x720510: push    0FFFFFFFFh
0x720512: push    offset ??1NiSourceCubeMap@@UAE@XZ_SEH
0x720517: mov     eax, large fs:0
0x72051D: push    eax
0x72051E: push    ecx
0x72051F: push    esi
0x720520: push    edi
0x720521: mov     eax, ds:0B30AACh
0x720526: xor     eax, esp
0x720528: push    eax
0x720529: lea     eax, [esp+1Ch+var_C]
0x72052D: mov     large fs:0, eax
0x720533: mov     edi, ecx
0x720535: mov     [esp+1Ch+var_10], edi
0x720539: mov     dword ptr [edi], offset NiSourceCubeMap__VTBL
0x72053F: mov     esi, [edi+3Ch]
0x720542: test    esi, esi
0x720544: mov     [esp+1Ch+var_4], 0
0x72054C: jz      short loc_720571
0x72054E: lea     eax, [esi+4]
0x720551: push    eax; lpAddend
0x720552: call    dword ptr ds:0A2807Ch
0x720558: test    eax, eax
0x72055A: jnz     short loc_72056A
0x72055C: test    esi, esi
0x72055E: jz      short loc_72056A
0x720560: mov     edx, [esi]
0x720562: mov     eax, [edx]
0x720564: push    1
0x720566: mov     ecx, esi
0x720568: call    eax
0x72056A: mov     dword ptr [edi+3Ch], 0
0x720571: mov     ecx, edi; this
0x720573: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x72057B: call    ??1NiSourceTexture@@UAE@XZ; NiSourceTexture::~NiSourceTexture(void)
0x720580: mov     ecx, dword ptr [esp+1Ch+var_C]
0x720584: mov     large fs:0, ecx
0x72058B: pop     ecx
0x72058C: pop     edi
0x72058D: pop     esi
0x72058E: add     esp, 10h
0x720591: retn
