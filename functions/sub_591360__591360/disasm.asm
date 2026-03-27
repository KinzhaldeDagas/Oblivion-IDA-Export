0x591360: push    0FFFFFFFFh
0x591362: push    offset SEH_591360
0x591367: mov     eax, large fs:0
0x59136D: push    eax
0x59136E: sub     esp, 114h
0x591374: mov     eax, ds:0B30AACh
0x591379: xor     eax, esp
0x59137B: mov     [esp+120h+var_10], eax
0x591382: push    ebx
0x591383: push    ebp
0x591384: push    esi
0x591385: push    edi
0x591386: mov     eax, ds:0B30AACh
0x59138B: xor     eax, esp
0x59138D: push    eax
0x59138E: lea     eax, [esp+134h+var_C]
0x591395: mov     large fs:0, eax
0x59139B: mov     eax, [esp+134h+arg_0]
0x5913A2: mov     ebp, [esp+134h+Source]
0x5913A9: mov     ebx, [esp+134h+arg_10]
0x5913B0: xor     esi, esi
0x5913B2: mov     [esp+134h+var_11C], eax
0x5913B6: mov     [esp+134h+var_118], esi
0x5913BA: mov     [esp+134h+var_4], 1
0x5913C5: mov     edi, ds:0B35300h
0x5913CB: mov     [esp+134h+var_120], esi
0x5913CF: mov     eax, [esp+134h+arg_18]
0x5913D6: cmp     eax, esi
0x5913D8: mov     byte ptr [esp+134h+var_4], 3
0x5913E0: jnz     loc_59154C
0x5913E6: push    103h
0x5913EB: lea     ecx, [esp+138h+var_113]
0x5913EF: push    esi
0x5913F0: push    ecx
0x5913F1: mov     [esp+140h+ArgList], 0
0x5913F6: call    __memset
0x5913FB: fld     [esp+140h+arg_14]
0x591402: add     esp, 0Ch
0x591405: lea     edx, [esp+134h+ArgList]
0x591409: push    edx; int
0x59140A: push    ecx
0x59140B: fstp    [esp+13Ch+var_13C]; float
0x59140E: push    ebx; int
0x59140F: push    ebp; Source
0x591410: call    sub_591030
0x591415: add     esp, 10h
0x591418: cmp     [esp+134h+ArgList], 0
0x59141D: jz      loc_591558
0x591423: test    edi, edi
0x591425: jz      short loc_59144C
0x591427: mov     eax, [edi]
0x591429: mov     edx, [eax+4]
0x59142C: push    esi
0x59142D: lea     ecx, [esp+138h+ArgList]
0x591431: push    ecx
0x591432: mov     ecx, edi
0x591434: call    edx
0x591436: push    eax; a2
0x591437: lea     ecx, [esp+138h+var_120]; this
0x59143B: call    NiSmartPointer_Set??
0x591440: mov     esi, [esp+134h+var_120]
0x591444: test    esi, esi
0x591446: jnz     loc_591558
0x59144C: mov     ecx, ds:0B33A04h
0x591452: mov     eax, [ecx]
0x591454: mov     eax, [eax+4]
0x591457: push    0FFFFFFFFh
0x591459: push    0
0x59145B: push    0
0x59145D: lea     edx, [esp+140h+ArgList]
0x591461: push    edx
0x591462: call    eax
0x591464: test    eax, eax
0x591466: jz      loc_591558
0x59146C: mov     ebx, 1
0x591471: push    ebx; char
0x591472: lea     ecx, [esp+138h+ArgList]
0x591476: push    offset dword_B256D0; int
0x59147B: push    ecx; Src
0x59147C: call    NiSourceTexture__LoadTextureByFilename
0x591481: add     esp, 0Ch
0x591484: push    eax; a2
0x591485: lea     ecx, [esp+138h+var_120]; this
0x591489: call    NiSmartPointer_Set??
0x59148E: mov     esi, [esp+134h+var_120]
0x591492: test    esi, esi
0x591494: jnz     short loc_5914F5
0x591496: lea     edx, [esp+134h+ArgList]
0x59149A: push    edx; ArgList
0x59149B: push    offset aErrorCouldNotC; "*** ERROR: Could not create ptexture '%"...
0x5914A0: call    sub_404EC0
0x5914A5: mov     esi, [esp+13Ch+var_11C]
0x5914A9: add     esp, 8
0x5914AC: mov     dword ptr [esi], 0
0x5914B2: lea     ecx, [esp+134h+var_120]; this
0x5914B6: mov     [esp+134h+var_118], ebx
0x5914BA: mov     byte ptr [esp+134h+var_4], 2
0x5914C2: call    sub_7016A0
0x5914C7: mov     byte ptr [esp+134h+var_4], bl
0x5914CE: lea     ecx, [esp+134h+arg_8]; void *
0x5914D5: call    BSStringT_Clear
0x5914DA: lea     ecx, [esp+134h+arg_18]; this
0x5914E1: mov     byte ptr [esp+134h+var_4], 0
0x5914E9: call    sub_7016A0
0x5914EE: mov     eax, esi
0x5914F0: jmp     loc_5915D3
0x5914F5: test    edi, edi
0x5914F7: jz      short loc_59151E
0x5914F9: lea     eax, [esp+134h+ArgList]
0x5914FD: push    offset aOadingLoad_; "oading\\load_"
0x591502: push    eax; unsigned __int8 *
0x591503: call    __mbsstr
0x591508: add     esp, 8
0x59150B: test    eax, eax
0x59150D: jnz     short loc_59151E
0x59150F: mov     edx, [edi]
0x591511: mov     edx, [edx+8]
0x591514: push    esi
0x591515: lea     eax, [esp+138h+ArgList]
0x591519: push    eax
0x59151A: mov     ecx, edi
0x59151C: call    edx
0x59151E: mov     esi, [esp+134h+var_11C]
0x591522: lea     eax, [esp+134h+var_120]
0x591526: push    eax
0x591527: mov     ecx, esi
0x591529: call    sub_4A19F0
0x59152E: lea     ecx, [esp+134h+var_120]; this
0x591532: mov     [esp+134h+var_118], ebx
0x591536: mov     byte ptr [esp+134h+var_4], 2
0x59153E: call    sub_7016A0
0x591543: mov     byte ptr [esp+134h+var_4], bl
0x59154A: jmp     short loc_5914CE
0x59154C: mov     esi, eax
0x59154E: add     eax, 4
0x591551: push    eax; lpAddend
0x591552: call    dword ptr ds:0A28078h
0x591558: test    esi, esi
0x59155A: mov     ebx, [esp+134h+var_11C]
0x59155E: mov     [ebx], esi
0x591560: jz      short loc_59156C
0x591562: lea     ecx, [esi+4]
0x591565: push    ecx; lpAddend
0x591566: call    dword ptr ds:0A28078h
0x59156C: test    esi, esi
0x59156E: mov     edi, ds:0A2807Ch
0x591574: mov     [esp+134h+var_118], 1
0x59157C: mov     byte ptr [esp+134h+var_4], 2
0x591584: jz      short loc_59159A
0x591586: lea     edx, [esi+4]
0x591589: push    edx; lpAddend
0x59158A: call    edi ; InterlockedDecrement
0x59158C: test    eax, eax
0x59158E: jnz     short loc_59159A
0x591590: mov     eax, [esi]
0x591592: mov     edx, [eax]
0x591594: push    1
0x591596: mov     ecx, esi
0x591598: call    edx
0x59159A: mov     eax, [esp+134h+arg_8]
0x5915A1: push    eax
0x5915A2: call    FormHeapFree
0x5915A7: mov     esi, [esp+138h+arg_18]
0x5915AE: add     esp, 4
0x5915B1: test    esi, esi
0x5915B3: mov     byte ptr [esp+134h+var_4], 0
0x5915BB: jz      short loc_5915D1
0x5915BD: lea     ecx, [esi+4]
0x5915C0: push    ecx; lpAddend
0x5915C1: call    edi ; InterlockedDecrement
0x5915C3: test    eax, eax
0x5915C5: jnz     short loc_5915D1
0x5915C7: mov     edx, [esi]
0x5915C9: mov     eax, [edx]
0x5915CB: push    1
0x5915CD: mov     ecx, esi
0x5915CF: call    eax
0x5915D1: mov     eax, ebx
0x5915D3: mov     ecx, dword ptr [esp+134h+var_C]
0x5915DA: mov     large fs:0, ecx
0x5915E1: pop     ecx
0x5915E2: pop     edi
0x5915E3: pop     esi
0x5915E4: pop     ebp
0x5915E5: pop     ebx
0x5915E6: mov     ecx, [esp+120h+var_10]
0x5915ED: xor     ecx, esp
0x5915EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5915F4: add     esp, 120h
0x5915FA: retn
