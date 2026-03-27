0x8BD010: push    ebx
0x8BD011: push    ebp
0x8BD012: push    esi
0x8BD013: push    edi
0x8BD014: mov     edi, [esp+10h+arg_0]
0x8BD018: push    edi
0x8BD019: mov     ebx, ecx
0x8BD01B: call    sub_721730
0x8BD020: mov     eax, ds:0BA8044h
0x8BD025: push    eax; ArgList
0x8BD026: call    TESOutput_PrintString
0x8BD02B: movzx   esi, word ptr [edi+0Ah]
0x8BD02F: movzx   ecx, word ptr [edi+8]
0x8BD033: add     esp, 4
0x8BD036: cmp     esi, ecx
0x8BD038: mov     [esp+10h+arg_0], eax
0x8BD03C: jb      short loc_8BD04C
0x8BD03E: movzx   edx, word ptr [edi+0Eh]
0x8BD042: add     edx, esi
0x8BD044: push    edx
0x8BD045: mov     ecx, edi
0x8BD047: call    NiTArray_SetSize
0x8BD04C: lea     eax, [esp+10h+arg_0]
0x8BD050: push    eax
0x8BD051: push    esi
0x8BD052: mov     ecx, edi
0x8BD054: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BD059: mov     ebp, [ebx+1Ch]
0x8BD05C: xor     esi, esi
0x8BD05E: test    ebp, ebp
0x8BD060: jbe     short loc_8BD07B
0x8BD062: mov     ecx, [ebx+10h]
0x8BD065: mov     ecx, [ecx+esi*4]
0x8BD068: test    ecx, ecx
0x8BD06A: jz      short loc_8BD074
0x8BD06C: mov     edx, [ecx]
0x8BD06E: mov     eax, [edx+30h]
0x8BD071: push    edi
0x8BD072: call    eax
0x8BD074: add     esi, 1
0x8BD077: cmp     esi, ebp
0x8BD079: jb      short loc_8BD062
0x8BD07B: pop     edi
0x8BD07C: pop     esi
0x8BD07D: pop     ebp
0x8BD07E: pop     ebx
0x8BD07F: retn    4
