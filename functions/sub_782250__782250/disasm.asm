0x782250: mov     eax, [esp+arg_10]
0x782254: mov     edx, [esp+arg_14]
0x782258: push    ebx
0x782259: push    esi
0x78225A: mov     esi, [esp+8+arg_8]
0x78225E: push    edi; ArgList
0x78225F: mov     edi, [esp+0Ch+arg_C]
0x782263: mov     dword ptr [esi], 0
0x782269: mov     dword ptr [edi], 0
0x78226F: mov     dword ptr [eax], 0
0x782275: mov     dword ptr [edx], 0
0x78227B: mov     edx, [esp+0Ch+arg_0]
0x78227F: test    edx, edx
0x782281: jz      loc_78239D
0x782287: mov     ebx, [esp+0Ch+arg_4]
0x78228B: test    ebx, ebx
0x78228D: jz      loc_78239D
0x782293: mov     eax, [ecx+4]
0x782296: or      eax, ds:0B428BCh
0x78229C: lea     ecx, [esp+0Ch+arg_C]
0x7822A0: push    ecx
0x7822A1: lea     ecx, [esp+10h+arg_8]
0x7822A5: push    ecx
0x7822A6: and     eax, 3
0x7822A9: push    eax
0x7822AA: push    0
0x7822AC: push    0
0x7822AE: push    ebx
0x7822AF: push    edx
0x7822B0: call    D3DXAssembleShader_0
0x7822B5: test    eax, eax
0x7822B7: jge     loc_782345
0x7822BD: mov     eax, [esp+0Ch+arg_C]
0x7822C1: xor     esi, esi
0x7822C3: test    eax, eax
0x7822C5: jz      short loc_782313
0x7822C7: mov     edx, [eax]
0x7822C9: push    eax
0x7822CA: mov     eax, [edx+0Ch]
0x7822CD: call    eax
0x7822CF: mov     ebx, eax
0x7822D1: test    ebx, ebx
0x7822D3: jz      short loc_782305
0x7822D5: mov     eax, [esp+0Ch+arg_C]
0x7822D9: mov     ecx, [eax]
0x7822DB: mov     edx, [ecx+10h]
0x7822DE: push    eax
0x7822DF: call    edx
0x7822E1: mov     edi, eax
0x7822E3: push    edi; Size
0x7822E4: call    FormHeapAlloc
0x7822E9: push    ebx; Src
0x7822EA: mov     esi, eax
0x7822EC: push    edi; SizeInBytes
0x7822ED: push    esi; Dst
0x7822EE: call    sub_434900
0x7822F3: push    esi; ArgList
0x7822F4: push    offset aFailedToAsse_3; "Failed to assemble shader from memory\n"...
0x7822F9: push    0; int
0x7822FB: push    1; int
0x7822FD: call    sub_738460
0x782302: add     esp, 20h
0x782305: mov     eax, [esp+0Ch+arg_C]
0x782309: mov     ecx, [eax]
0x78230B: mov     edx, [ecx+8]
0x78230E: push    eax
0x78230F: call    edx
0x782311: jmp     short loc_782324
0x782313: push    offset aFailedToAsse_4; "Failed to assemble shader from memory\n"...
0x782318: push    0; int
0x78231A: push    1; int
0x78231C: call    sub_738460
0x782321: add     esp, 0Ch
0x782324: push    esi
0x782325: call    FormHeapFree
0x78232A: mov     eax, [esp+10h+arg_8]
0x78232E: add     esp, 4
0x782331: test    eax, eax
0x782333: jz      short loc_7823AE
0x782335: mov     ecx, [eax]
0x782337: mov     edx, [ecx+8]
0x78233A: push    eax
0x78233B: call    edx
0x78233D: pop     edi
0x78233E: pop     esi
0x78233F: xor     al, al
0x782341: pop     ebx
0x782342: retn    18h
0x782345: mov     eax, [esp+0Ch+arg_8]
0x782349: mov     ecx, [eax]
0x78234B: mov     edx, [ecx+10h]
0x78234E: push    eax
0x78234F: call    edx
0x782351: push    eax; Size
0x782352: mov     [edi], eax
0x782354: call    FormHeapAlloc
0x782359: mov     [esi], eax
0x78235B: mov     eax, [esp+10h+arg_8]
0x78235F: mov     ecx, [eax]
0x782361: mov     edx, [ecx+0Ch]
0x782364: mov     edi, [edi]
0x782366: add     esp, 4
0x782369: push    eax
0x78236A: call    edx
0x78236C: push    edi; Size
0x78236D: push    eax; Src
0x78236E: mov     eax, [esi]
0x782370: push    eax; Dst
0x782371: call    _memcpy
0x782376: mov     eax, [esp+18h+arg_8]
0x78237A: mov     ecx, [eax]
0x78237C: mov     edx, [ecx+8]
0x78237F: add     esp, 0Ch
0x782382: push    eax
0x782383: call    edx
0x782385: mov     eax, [esp+0Ch+arg_C]
0x782389: test    eax, eax
0x78238B: jz      short loc_782395
0x78238D: mov     ecx, [eax]
0x78238F: mov     edx, [ecx+8]
0x782392: push    eax
0x782393: call    edx
0x782395: pop     edi
0x782396: pop     esi
0x782397: mov     al, 1
0x782399: pop     ebx
0x78239A: retn    18h
0x78239D: push    offset aInvalidShaderB; "Invalid shader buffer\n"
0x7823A2: push    0; int
0x7823A4: push    1; int
0x7823A6: call    sub_738460
0x7823AB: add     esp, 0Ch
0x7823AE: pop     edi
0x7823AF: pop     esi
0x7823B0: xor     al, al
0x7823B2: pop     ebx
0x7823B3: retn    18h
