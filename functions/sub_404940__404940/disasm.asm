0x404940: sub     esp, 20Ch
0x404946: mov     eax, ___security_cookie
0x40494B: xor     eax, esp
0x40494D: mov     [esp+20Ch+var_4], eax
0x404954: push    ebx
0x404955: push    edi
0x404956: lea     eax, [esp+214h+Buffer]
0x40495A: push    eax; lpBuffer
0x40495B: push    200h; nBufferLength
0x404960: call    ds:GetLogicalDriveStringsA
0x404966: xor     bl, bl
0x404968: xor     edi, edi
0x40496A: cmp     [esp+214h+Buffer], bl
0x40496E: mov     byte_B33394, bl
0x404974: jz      short loc_4049E7
0x404976: push    ebp
0x404977: mov     ebp, ds:GetDriveTypeA
0x40497D: push    esi
0x40497E: mov     edi, edi
0x404980: cmp     byte_B33394, 0
0x404987: jnz     short loc_4049E5
0x404989: lea     esi, [esp+edi+21Ch+Buffer]
0x40498D: push    esi; lpRootPathName
0x40498E: call    ebp ; GetDriveTypeA
0x404990: cmp     eax, 5
0x404993: jnz     short loc_4049C7
0x404995: push    esi
0x404996: lea     ecx, [esp+220h+var_108]
0x40499D: push    offset aSoblivionlaunc; "%sOblivionLauncher.exe"
0x4049A2: push    ecx
0x4049A3: call    __sprintf
0x4049A8: lea     edx, [esp+228h+var_108]
0x4049AF: push    0; int
0x4049B1: push    edx; char *
0x4049B2: call    __access
0x4049B7: add     esp, 14h
0x4049BA: test    eax, eax
0x4049BC: jnz     short loc_4049C5
0x4049BE: mov     al, [esi]
0x4049C0: mov     byte_B33394, al
0x4049C5: mov     bl, 1
0x4049C7: mov     eax, esi
0x4049C9: lea     edx, [eax+1]
0x4049CC: lea     esp, [esp+0]
0x4049D0: mov     cl, [eax]
0x4049D2: add     eax, 1
0x4049D5: test    cl, cl
0x4049D7: jnz     short loc_4049D0
0x4049D9: sub     eax, edx
0x4049DB: lea     edi, [edi+eax+1]
0x4049DF: cmp     [esp+edi+21Ch+Buffer], cl
0x4049E3: jnz     short loc_404980
0x4049E5: pop     esi
0x4049E6: pop     ebp
0x4049E7: mov     ecx, [esp+214h+var_4]
0x4049EE: pop     edi
0x4049EF: mov     al, bl
0x4049F1: pop     ebx
0x4049F2: xor     ecx, esp
0x4049F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4049F9: add     esp, 20Ch
0x4049FF: retn
