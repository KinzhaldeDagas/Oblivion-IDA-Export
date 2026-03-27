0x9890B6: push    ebp
0x9890B7: mov     ebp, esp
0x9890B9: sub     esp, 3Ch
0x9890BC: mov     eax, ___security_cookie
0x9890C1: xor     eax, ebp
0x9890C3: mov     [ebp+var_4], eax
0x9890C6: push    ebx
0x9890C7: push    esi
0x9890C8: push    edi
0x9890C9: mov     edi, [ebp+DstBuf]
0x9890CC: xor     ebx, ebx
0x9890CE: push    ebx; struct localeinfo_struct *
0x9890CF: lea     ecx, [ebp+var_2C]; this
0x9890D2: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9890D7: cmp     edi, ebx
0x9890D9: jnz     short loc_9890F7
0x9890DB: call    __errno
0x9890E0: push    16h
0x9890E2: pop     esi
0x9890E3: push    ebx
0x9890E4: push    ebx
0x9890E5: push    ebx
0x9890E6: push    ebx
0x9890E7: push    ebx
0x9890E8: mov     [eax], esi
0x9890EA: call    __invalid_parameter
0x9890EF: add     esp, 14h
0x9890F2: jmp     loc_9891B7
0x9890F7: cmp     [ebp+Size], ebx
0x9890FA: jbe     short loc_9890DB
0x9890FC: mov     esi, [ebp+NumOfDigits]
0x9890FF: cmp     esi, [ebp+Size]
0x989102: mov     [edi], bl
0x989104: jb      short loc_98910F
0x989106: call    __errno
0x98910B: push    22h ; '"'
0x98910D: jmp     short loc_9890E2
0x98910F: push    16h; SizeInBytes
0x989111: lea     eax, [ebp+var_1C]
0x989114: push    eax; int
0x989115: lea     eax, [ebp+var_3C]
0x989118: push    eax; int
0x989119: push    dword ptr [ebp+Val+4]; int
0x98911C: push    dword ptr [ebp+Val]; char
0x98911F: call    __fltout2
0x989124: mov     eax, [eax+4]
0x989127: lea     ecx, [eax-1]
0x98912A: add     esp, 14h
0x98912D: cmp     ecx, 0FFFFFFFFh
0x989130: jl      short loc_98914E
0x989132: lea     edx, [esi-1]
0x989135: cmp     ecx, edx
0x989137: jg      short loc_98914E
0x989139: sub     esi, eax
0x98913B: push    esi
0x98913C: push    [ebp+Size]
0x98913F: lea     eax, [ebp+Val]
0x989142: push    edi
0x989143: push    eax
0x989144: call    __cftof
0x989149: add     esp, 10h
0x98914C: jmp     short loc_989161
0x98914E: push    ebx
0x98914F: dec     esi
0x989150: push    esi
0x989151: push    [ebp+Size]
0x989154: lea     eax, [ebp+Val]
0x989157: push    edi
0x989158: push    eax
0x989159: call    __cftoe
0x98915E: add     esp, 14h
0x989161: mov     esi, eax
0x989163: cmp     esi, ebx
0x989165: jnz     short loc_9891B0
0x989167: mov     cl, [edi]
0x989169: cmp     cl, bl
0x98916B: mov     eax, edi
0x98916D: jz      short loc_989187
0x98916F: mov     edx, [ebp+var_2C]
0x989172: mov     edx, [edx+0BCh]
0x989178: mov     edx, [edx]
0x98917A: mov     dl, [edx]
0x98917C: cmp     cl, dl
0x98917E: jz      short loc_989187
0x989180: inc     eax
0x989181: mov     cl, [eax]
0x989183: cmp     cl, bl
0x989185: jnz     short loc_98917C
0x989187: mov     cl, [eax]
0x989189: inc     eax
0x98918A: test    cl, cl
0x98918C: jz      short loc_9891B7
0x98918E: jmp     short loc_989196
0x989190: cmp     cl, 65h ; 'e'
0x989193: jz      short loc_98919C
0x989195: inc     eax
0x989196: mov     cl, [eax]
0x989198: cmp     cl, bl
0x98919A: jnz     short loc_989190
0x98919C: mov     edx, eax
0x98919E: dec     eax
0x98919F: cmp     byte ptr [eax], 30h ; '0'
0x9891A2: jz      short loc_98919E
0x9891A4: mov     cl, [edx]
0x9891A6: inc     eax
0x9891A7: inc     edx
0x9891A8: cmp     cl, bl
0x9891AA: mov     [eax], cl
0x9891AC: jnz     short loc_9891A4
0x9891AE: jmp     short loc_9891B7
0x9891B0: call    __errno
0x9891B5: mov     [eax], esi
0x9891B7: cmp     [ebp+var_20], bl
0x9891BA: jz      short loc_9891C3
0x9891BC: mov     eax, [ebp+var_24]
0x9891BF: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9891C3: mov     ecx, [ebp+var_4]
0x9891C6: pop     edi
0x9891C7: mov     eax, esi
0x9891C9: pop     esi
0x9891CA: xor     ecx, ebp
0x9891CC: pop     ebx
0x9891CD: call    @__security_check_cookie@4
0x9891D2: leave
0x9891D3: retn
