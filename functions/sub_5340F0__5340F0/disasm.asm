0x5340F0: sub     esp, 0A4h
0x5340F6: mov     eax, ds:0B30AACh
0x5340FB: xor     eax, esp
0x5340FD: mov     [esp+0A4h+var_4], eax
0x534104: mov     eax, [esp+0A4h+FullPath]
0x53410B: push    ebx
0x53410C: push    ebp
0x53410D: push    esi
0x53410E: push    edi
0x53410F: mov     ebp, ecx
0x534111: lea     ecx, [esp+0B4h+Ext]
0x534115: push    ecx; Ext
0x534116: lea     edx, [esp+0B8h+Filename]
0x53411A: push    edx; Filename
0x53411B: push    0; Dir
0x53411D: push    0; Drive
0x53411F: push    eax; FullPath
0x534120: call    __splitpath
0x534125: lea     eax, [esp+0C8h+Ext]
0x534129: add     esp, 14h
0x53412C: mov     ecx, eax
0x53412E: mov     edi, edi
0x534130: mov     dl, [eax]
0x534132: add     eax, 1
0x534135: test    dl, dl
0x534137: jnz     short loc_534130
0x534139: lea     edi, [esp+0B4h+Filename]
0x53413D: sub     eax, ecx
0x53413F: mov     esi, ecx
0x534141: add     edi, 0FFFFFFFFh
0x534144: mov     cl, [edi+1]
0x534147: add     edi, 1
0x53414A: test    cl, cl
0x53414C: jnz     short loc_534144
0x53414E: mov     ecx, eax
0x534150: shr     ecx, 2
0x534153: rep movsd
0x534155: mov     ecx, eax
0x534157: lea     eax, [esp+0B4h+Filename]
0x53415B: and     ecx, 3
0x53415E: push    eax
0x53415F: rep movsb
0x534161: call    sub_8B18F0
0x534166: mov     ecx, [ebp+10h]
0x534169: mov     ebx, [esp+0B8h+arg_4]
0x534170: lea     esi, [ebp+8]
0x534173: and     ecx, 3FFFFFFFh
0x534179: add     esp, 4
0x53417C: cmp     [esi+4], ecx
0x53417F: mov     edi, eax
0x534181: jnz     short loc_53418E
0x534183: push    8
0x534185: push    esi
0x534186: call    sub_8A6EE0
0x53418B: add     esp, 8
0x53418E: mov     ecx, [esi+4]
0x534191: mov     eax, [esi]
0x534193: mov     [eax+ecx*8], edi
0x534196: mov     [eax+ecx*8+4], ebx
0x53419A: add     dword ptr [esi+4], 1
0x53419E: mov     ecx, [esp+0B4h+var_4]
0x5341A5: pop     edi
0x5341A6: pop     esi
0x5341A7: pop     ebp
0x5341A8: pop     ebx
0x5341A9: xor     ecx, esp
0x5341AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5341B0: add     esp, 0A4h
0x5341B6: retn    8
