0x782930: push    ebx
0x782931: push    ebp
0x782932: push    esi
0x782933: push    edi
0x782934: mov     edi, ecx
0x782936: lea     eax, [edi+4]
0x782939: push    eax; lpAddend
0x78293A: call    dword ptr ds:0A2807Ch
0x782940: mov     ebx, [esp+10h+arg_0]
0x782944: mov     ebp, [ebx+1Ch]
0x782947: xor     esi, esi
0x782949: cmp     ebp, esi
0x78294B: mov     [ebx+4], esi
0x78294E: jbe     short loc_782962
0x782950: mov     edx, [edi]
0x782952: mov     eax, [edx+1Ch]
0x782955: push    esi
0x782956: push    ebx
0x782957: mov     ecx, edi
0x782959: call    eax
0x78295B: add     esi, 1
0x78295E: cmp     esi, ebp
0x782960: jb      short loc_782950
0x782962: mov     ecx, ebx
0x782964: call    sub_777F40
0x782969: pop     edi
0x78296A: pop     esi
0x78296B: pop     ebp
0x78296C: pop     ebx
0x78296D: retn    4
