0x410160: sub     esp, 140h
0x410166: mov     eax, ___security_cookie
0x41016B: xor     eax, esp
0x41016D: mov     [esp+140h+var_4], eax
0x410174: mov     eax, [esp+140h+arg_0]
0x41017B: mov     edx, ds:dword_A3191C
0x410181: push    ebx
0x410182: push    ebp
0x410183: mov     ebp, ecx
0x410185: mov     ecx, ds:dword_A31918
0x41018B: mov     dword ptr [esp+148h+FileName], ecx
0x41018F: mov     ecx, ds:off_A31920
0x410195: push    esi
0x410196: mov     [esp+14Ch+var_100], ecx
0x41019A: push    edi
0x41019B: mov     dword ptr [esp+150h+ArgList], eax
0x41019F: mov     [esp+150h+var_104], edx
0x4101A3: mov     ecx, eax
0x4101A5: mov     dl, [eax]
0x4101A7: add     eax, 1
0x4101AA: test    dl, dl
0x4101AC: jnz     short loc_4101A5
0x4101AE: lea     edi, [esp+150h+FileName]
0x4101B2: sub     eax, ecx
0x4101B4: mov     esi, ecx
0x4101B6: add     edi, 0FFFFFFFFh
0x4101B9: lea     esp, [esp+0]
0x4101C0: mov     cl, [edi+1]
0x4101C3: add     edi, 1
0x4101C6: test    cl, cl
0x4101C8: jnz     short loc_4101C0
0x4101CA: mov     bl, [esp+150h+arg_C]
0x4101D1: mov     ecx, eax
0x4101D3: shr     ecx, 2
0x4101D6: rep movsd
0x4101D8: mov     ecx, eax
0x4101DA: and     ecx, 3
0x4101DD: rep movsb
0x4101DF: xor     esi, esi
0x4101E1: cmp     [esp+150h+arg_8], 0
0x4101E9: jnz     short loc_4101EF
0x4101EB: test    bl, bl
0x4101ED: jz      short loc_41021B
0x4101EF: lea     edx, [esp+150h+var_138]
0x4101F3: push    edx; int
0x4101F4: lea     eax, [esp+154h+FileName]
0x4101F8: push    eax; lpFileName
0x4101F9: call    __stat64i32
0x4101FE: add     esp, 8
0x410201: cmp     eax, 0FFFFFFFFh
0x410204: jz      short loc_41021B
0x410206: mov     ecx, [esp+150h+var_124]
0x41020A: cmp     ecx, dword_B030BC
0x410210: jle     short loc_410216
0x410212: test    bl, bl
0x410214: jz      short loc_41021B
0x410216: mov     esi, 2000h
0x41021B: mov     eax, OSGlobals
0x410220: test    eax, eax
0x410222: mov     [esp+150h+var_13D], 0
0x410227: mov     bl, 1
0x410229: jz      short loc_410252
0x41022B: mov     edi, [eax+10h]
0x41022E: call    ds:GetCurrentThreadId
0x410234: cmp     eax, edi
0x410236: jz      short loc_410252
0x410238: mov     edx, OSGlobals
0x41023E: mov     eax, [edx+14h]
0x410241: push    eax; hThread
0x410242: mov     [esp+154h+var_13D], bl
0x410246: call    ds:SuspendThread
0x41024C: or      esi, 8000000h
0x410252: push    esi
0x410253: lea     ecx, [esp+154h+FileName]
0x410257: push    ecx
0x410258: call    ds:_BinkOpen@8; BinkOpen(x,x)
0x41025E: test    eax, eax
0x410260: mov     [ebp+0], eax
0x410263: jnz     short loc_410289
0x410265: cmp     [esp+150h+arg_4], al
0x41026C: jnz     short loc_410280
0x41026E: mov     edx, dword ptr [esp+150h+ArgList]
0x410272: push    edx; ArgList
0x410273: push    offset aCouldNotOpenSF; "Could not open %s for playback."
0x410278: call    PrintError
0x41027D: add     esp, 8
0x410280: mov     dword ptr [ebp+20h], 0
0x410287: xor     bl, bl
0x410289: cmp     [esp+150h+var_13D], 0
0x41028E: jz      short loc_41029F
0x410290: mov     eax, OSGlobals
0x410295: mov     ecx, [eax+14h]
0x410298: push    ecx; hThread
0x410299: call    ds:ResumeThread
0x41029F: mov     ecx, [esp+150h+var_4]
0x4102A6: pop     edi
0x4102A7: pop     esi
0x4102A8: pop     ebp
0x4102A9: mov     al, bl
0x4102AB: pop     ebx
0x4102AC: xor     ecx, esp
0x4102AE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4102B3: add     esp, 140h
0x4102B9: retn    10h
