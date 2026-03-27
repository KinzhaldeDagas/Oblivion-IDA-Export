0x748670: sub     esp, 104h
0x748676: mov     eax, ds:0B30AACh
0x74867B: xor     eax, esp
0x74867D: mov     [esp+104h+var_4], eax
0x748684: push    ebp
0x748685: mov     ebp, [esp+108h+arg_0]
0x74868C: push    esi
0x74868D: mov     esi, ecx
0x74868F: cmp     byte ptr [esi+303h], 0
0x748696: push    edi; Src
0x748697: lea     edi, [esi+303h]
0x74869D: jz      short loc_74871C
0x74869F: push    esi; Src
0x7486A0: lea     eax, [esp+114h+Dst]
0x7486A4: push    100h; SizeInBytes
0x7486A9: push    eax; Dst
0x7486AA: mov     [esp+11Ch+Dst], 0
0x7486AF: call    _strcat_s
0x7486B4: lea     eax, [esp+11Ch+Dst]
0x7486B8: add     esp, 0Ch
0x7486BB: lea     edx, [eax+1]
0x7486BE: mov     edi, edi
0x7486C0: mov     cl, [eax]
0x7486C2: add     eax, 1
0x7486C5: test    cl, cl
0x7486C7: jnz     short loc_7486C0
0x7486C9: sub     eax, edx
0x7486CB: jz      short loc_7486E7
0x7486CD: mov     dl, [esp+eax+110h+var_105]
0x7486D1: cmp     dl, 5Ch ; '\'
0x7486D4: lea     ecx, [esp+eax+110h+Dst]
0x7486D8: jz      short loc_7486E7
0x7486DA: cmp     dl, 2Fh ; '/'
0x7486DD: jz      short loc_7486E7
0x7486DF: mov     [esp+eax+110h+var_103], 0
0x7486E4: mov     byte ptr [ecx], 5Ch ; '\'
0x7486E7: push    edi; Src
0x7486E8: lea     ecx, [esp+114h+Dst]
0x7486EC: push    100h; SizeInBytes
0x7486F1: push    ecx; Dst
0x7486F2: call    _strcat_s
0x7486F7: lea     edx, [esi+103h]
0x7486FD: push    edx
0x7486FE: lea     eax, [esi+203h]
0x748704: push    eax
0x748705: lea     ecx, [esp+124h+Dst]
0x748709: push    ecx
0x74870A: add     esi, 100h
0x748710: push    esi
0x748711: push    ebp
0x748712: call    sub_9853B2
0x748717: add     esp, 20h
0x74871A: jmp     short loc_74873B
0x74871C: lea     edx, [esi+103h]
0x748722: push    edx
0x748723: lea     eax, [esi+203h]
0x748729: push    eax
0x74872A: push    esi
0x74872B: add     esi, 100h
0x748731: push    esi
0x748732: push    ebp
0x748733: call    sub_9853B2
0x748738: add     esp, 14h
0x74873B: mov     ecx, [esp+110h+var_4]
0x748742: pop     edi
0x748743: pop     esi
0x748744: pop     ebp
0x748745: xor     ecx, esp
0x748747: call    @__security_check_cookie@4; __security_check_cookie(x)
0x74874C: add     esp, 104h
0x748752: retn    8
