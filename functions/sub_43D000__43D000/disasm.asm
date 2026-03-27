0x43D000: sub     esp, 21Ch
0x43D006: mov     eax, ___security_cookie
0x43D00B: xor     eax, esp
0x43D00D: mov     [esp+21Ch+var_4], eax
0x43D014: mov     eax, [esp+21Ch+arg_8]
0x43D01B: push    ebx
0x43D01C: push    ebp
0x43D01D: mov     ebp, [esp+224h+arg_0]
0x43D024: mov     edx, [ebp+0]
0x43D027: push    esi
0x43D028: mov     esi, [esp+228h+arg_C]
0x43D02F: mov     ebx, ecx
0x43D031: mov     [esp+228h+var_21C], eax
0x43D035: mov     eax, [edx+14h]
0x43D038: push    edi
0x43D039: mov     ecx, ebp
0x43D03B: mov     [esp+22Ch+var_214], ebx
0x43D03F: mov     [esp+22Ch+var_218], ebp
0x43D043: call    eax
0x43D045: lea     edx, [esp+22Ch+Str]
0x43D04C: lea     esp, [esp+0]
0x43D050: mov     cl, [eax]
0x43D052: mov     [edx], cl
0x43D054: add     eax, 1
0x43D057: add     edx, 1
0x43D05A: test    cl, cl
0x43D05C: jnz     short loc_43D050
0x43D05E: lea     ecx, [esp+22Ch+Str]
0x43D065: push    5Ch ; '\'; Ch
0x43D067: push    ecx; Str
0x43D068: call    _strrchr
0x43D06D: add     esp, 8
0x43D070: test    esi, esi
0x43D072: mov     edi, eax
0x43D074: jz      loc_43D1E9
0x43D07A: mov     edx, [esi]
0x43D07C: mov     eax, [edx+198h]
0x43D082: push    0
0x43D084: mov     ecx, esi
0x43D086: call    eax
0x43D088: test    al, al
0x43D08A: jz      loc_43D1E9
0x43D090: test    edi, edi
0x43D092: jz      loc_43D3CA
0x43D098: push    8; MaxCount
0x43D09A: push    offset aSkeleton; "Skeleton"
0x43D09F: add     edi, 1
0x43D0A2: push    edi; Str1
0x43D0A3: call    __strnicmp
0x43D0A8: add     esp, 0Ch
0x43D0AB: test    eax, eax
0x43D0AD: jnz     loc_43D3CA
0x43D0B3: mov     ecx, dword ptr ds:aData; "Data\\"
0x43D0B9: mov     dx, word ptr ds:aData+4; "\\"
0x43D0C0: push    7; MaxCount
0x43D0C2: lea     eax, [esp+230h+Str]
0x43D0C9: push    offset aMeshes; "Meshes\\"
0x43D0CE: push    eax; Str1
0x43D0CF: mov     dword ptr [esp+238h+var_20C], ecx
0x43D0D3: mov     [esp+238h+var_208], dx
0x43D0D8: call    __strnicmp
0x43D0DD: add     esp, 0Ch
0x43D0E0: test    eax, eax
0x43D0E2: jz      short loc_43D10B
0x43D0E4: lea     eax, [esp+22Ch+var_20C]
0x43D0E8: add     eax, 0FFFFFFFFh
0x43D0EB: jmp     short loc_43D0F0
0x43D0ED: align 10h
0x43D0F0: mov     cl, [eax+1]
0x43D0F3: add     eax, 1
0x43D0F6: test    cl, cl
0x43D0F8: jnz     short loc_43D0F0
0x43D0FA: mov     ecx, dword ptr ds:aMeshes; "Meshes\\"
0x43D100: mov     edx, dword ptr ds:aMeshes+4; "es\\"
0x43D106: mov     [eax], ecx
0x43D108: mov     [eax+4], edx
0x43D10B: lea     eax, [esp+22Ch+Str]
0x43D112: mov     esi, eax
0x43D114: mov     cl, [eax]
0x43D116: add     eax, 1
0x43D119: test    cl, cl
0x43D11B: jnz     short loc_43D114
0x43D11D: lea     edi, [esp+22Ch+var_20C]
0x43D121: sub     eax, esi
0x43D123: add     edi, 0FFFFFFFFh
0x43D126: mov     cl, [edi+1]
0x43D129: add     edi, 1
0x43D12C: test    cl, cl
0x43D12E: jnz     short loc_43D126
0x43D130: mov     ecx, eax
0x43D132: shr     ecx, 2
0x43D135: rep movsd
0x43D137: mov     ecx, eax
0x43D139: lea     eax, [esp+22Ch+var_20C]
0x43D13D: and     ecx, 3
0x43D140: push    5Ch ; '\'; Ch
0x43D142: push    eax; Str
0x43D143: rep movsb
0x43D145: call    _strrchr
0x43D14A: mov     ecx, ds:dword_A370DC
0x43D150: mov     esi, eax
0x43D152: mov     [esi], ecx
0x43D154: mov     edx, ds:dword_A370E0
0x43D15A: push    0; int
0x43D15C: mov     [esi+4], edx
0x43D15F: mov     al, ds:byte_A370E4
0x43D164: push    1; int
0x43D166: lea     ecx, [esp+23Ch+Str]
0x43D16D: push    ecx; char *
0x43D16E: lea     edx, [esp+240h+var_20C]
0x43D172: push    edx; Str
0x43D173: mov     [esi+8], al
0x43D176: call    sub_431970
0x43D17B: mov     ebp, [esp+244h+arg_4]
0x43D182: add     esp, 18h
0x43D185: mov     edi, eax
0x43D187: mov     eax, [esp+22Ch+var_21C]
0x43D18B: push    0
0x43D18D: push    eax
0x43D18E: push    ebp
0x43D18F: push    edi
0x43D190: mov     ecx, ebx
0x43D192: call    sub_43BDA0
0x43D197: push    edi
0x43D198: call    FormHeapFree
0x43D19D: mov     ecx, ds:dword_A370D0
0x43D1A3: mov     [esi], ecx
0x43D1A5: mov     edx, ds:dword_A370D4
0x43D1AB: push    0; int
0x43D1AD: mov     [esi+4], edx
0x43D1B0: mov     ax, ds:word_A370D8
0x43D1B6: push    1; int
0x43D1B8: lea     ecx, [esp+238h+Str]
0x43D1BF: push    ecx; char *
0x43D1C0: lea     edx, [esp+23Ch+var_20C]
0x43D1C4: push    edx; Str
0x43D1C5: mov     [esi+8], ax
0x43D1C9: call    sub_431970
0x43D1CE: add     esp, 14h
0x43D1D1: mov     esi, eax
0x43D1D3: mov     eax, [esp+22Ch+var_21C]
0x43D1D7: push    0
0x43D1D9: push    eax
0x43D1DA: push    ebp
0x43D1DB: push    esi
0x43D1DC: mov     ecx, ebx
0x43D1DE: call    sub_43BDA0
0x43D1E3: push    esi
0x43D1E4: jmp     loc_43D3C2
0x43D1E9: lea     ecx, [esp+22Ch+Str]
0x43D1F0: push    5Ch ; '\'; Ch
0x43D1F2: push    ecx; Str
0x43D1F3: call    _strrchr
0x43D1F8: mov     ecx, [ebx]
0x43D1FA: mov     esi, eax
0x43D1FC: add     esp, 8
0x43D1FF: lea     eax, [esp+22Ch+var_210]
0x43D203: xor     edi, edi
0x43D205: push    eax
0x43D206: mov     [esp+230h+var_210], edi
0x43D20A: mov     edx, [ecx]
0x43D20C: mov     edx, [edx+4]
0x43D20F: lea     eax, [esp+230h+Str]
0x43D216: push    eax
0x43D217: call    edx
0x43D219: test    al, al
0x43D21B: jnz     short loc_43D238
0x43D21D: cmp     esi, edi
0x43D21F: jz      short loc_43D238
0x43D221: push    8; MaxCount
0x43D223: push    offset aSkeleton; "Skeleton"
0x43D228: add     esi, 1
0x43D22B: push    esi; Str1
0x43D22C: call    __strnicmp
0x43D231: add     esp, 0Ch
0x43D234: test    eax, eax
0x43D236: jz      short loc_43D242
0x43D238: cmp     [esp+22Ch+arg_14], 0
0x43D240: jz      short loc_43D27E
0x43D242: cmp     [esp+22Ch+arg_10], 0
0x43D24A: jz      short loc_43D27E
0x43D24C: push    1; int
0x43D24E: lea     eax, [esp+230h+Str]
0x43D255: push    eax; char *
0x43D256: mov     ecx, ebx
0x43D258: call    sub_435830
0x43D25D: mov     ecx, [esp+22Ch+var_21C]
0x43D261: mov     edx, [esp+22Ch+arg_4]
0x43D268: push    edi
0x43D269: push    ecx
0x43D26A: mov     esi, eax
0x43D26C: push    edx
0x43D26D: push    esi
0x43D26E: mov     ecx, ebx
0x43D270: call    sub_43BDA0
0x43D275: push    esi
0x43D276: call    FormHeapFree
0x43D27B: add     esp, 4
0x43D27E: push    edi; int
0x43D27F: push    offset ??_R0?AVTESAnimation@@@8; struct TypeDescriptor *
0x43D284: push    offset ??_R0?AVTESModel@@@8; struct _s_RTTICompleteObjectLocator *
0x43D289: push    edi; int
0x43D28A: push    ebp; void *
0x43D28B: call    OblivionDynamicCast
0x43D290: mov     esi, eax
0x43D292: add     esp, 14h
0x43D295: cmp     esi, edi
0x43D297: jz      loc_43D3CA
0x43D29D: mov     ecx, esi
0x43D29F: call    TESAnimation_HasAnimations
0x43D2A4: test    al, al
0x43D2A6: jz      loc_43D3CA
0x43D2AC: push    8; Size
0x43D2AE: call    FormHeapAlloc
0x43D2B3: add     esp, 4
0x43D2B6: cmp     eax, edi
0x43D2B8: jz      short loc_43D2C3
0x43D2BA: mov     [eax], edi
0x43D2BC: mov     [eax+4], edi
0x43D2BF: mov     ebp, eax
0x43D2C1: jmp     short loc_43D2C5
0x43D2C3: xor     ebp, ebp
0x43D2C5: mov     ecx, esi
0x43D2C7: call    sub_6899C0
0x43D2CC: mov     ebx, eax
0x43D2CE: test    ebx, ebx
0x43D2D0: jz      short loc_43D347
0x43D2D2: mov     esi, [ebx]
0x43D2D4: mov     eax, esi
0x43D2D6: lea     edx, [eax+1]
0x43D2D9: lea     esp, [esp+0]
0x43D2E0: mov     cl, [eax]
0x43D2E2: add     eax, 1
0x43D2E5: test    cl, cl
0x43D2E7: jnz     short loc_43D2E0
0x43D2E9: sub     eax, edx
0x43D2EB: add     eax, 1
0x43D2EE: push    eax; Size
0x43D2EF: call    FormHeapAlloc
0x43D2F4: mov     edi, eax
0x43D2F6: mov     edx, edi
0x43D2F8: add     esp, 4
0x43D2FB: mov     eax, esi
0x43D2FD: sub     edx, esi
0x43D2FF: nop
0x43D300: mov     cl, [eax]
0x43D302: mov     [edx+eax], cl
0x43D305: add     eax, 1
0x43D308: test    cl, cl
0x43D30A: jnz     short loc_43D300
0x43D30C: test    edi, edi
0x43D30E: jz      short loc_43D340
0x43D310: cmp     dword ptr [ebp+0], 0
0x43D314: jz      short loc_43D33D
0x43D316: push    8; Size
0x43D318: call    FormHeapAlloc
0x43D31D: add     esp, 4
0x43D320: test    eax, eax
0x43D322: jz      short loc_43D332
0x43D324: mov     ecx, [ebp+0]
0x43D327: mov     [eax], ecx
0x43D329: mov     dword ptr [eax+4], 0
0x43D330: jmp     short loc_43D334
0x43D332: xor     eax, eax
0x43D334: mov     edx, [ebp+4]
0x43D337: mov     [eax+4], edx
0x43D33A: mov     [ebp+4], eax
0x43D33D: mov     [ebp+0], edi
0x43D340: mov     ebx, [ebx+4]
0x43D343: test    ebx, ebx
0x43D345: jnz     short loc_43D2D2
0x43D347: mov     ecx, [esp+22Ch+var_218]
0x43D34B: mov     eax, [ecx]
0x43D34D: mov     edx, [eax+14h]
0x43D350: call    edx
0x43D352: lea     edx, [esp+22Ch+var_20C]
0x43D356: mov     cl, [eax]
0x43D358: mov     [edx], cl
0x43D35A: add     eax, 1
0x43D35D: add     edx, 1
0x43D360: test    cl, cl
0x43D362: jnz     short loc_43D356
0x43D364: lea     eax, [esp+22Ch+var_20C]
0x43D368: push    5Ch ; '\'; Ch
0x43D36A: push    eax; Str
0x43D36B: call    _strrchr
0x43D370: add     esp, 8
0x43D373: test    eax, eax
0x43D375: jz      short loc_43D3A5
0x43D377: mov     ecx, ds:dword_A370C0
0x43D37D: mov     [eax], ecx
0x43D37F: mov     edx, ds:dword_A370C4
0x43D385: mov     [eax+4], edx
0x43D388: mov     ecx, ds:dword_A370C8
0x43D38E: mov     [eax+8], ecx
0x43D391: mov     dx, ds:word_A370CC
0x43D398: mov     [eax+0Ch], dx
0x43D39C: mov     cl, ds:byte_A370CE
0x43D3A2: mov     [eax+0Eh], cl
0x43D3A5: mov     eax, [esp+22Ch+var_21C]
0x43D3A9: mov     ecx, [esp+22Ch+arg_4]
0x43D3B0: lea     edx, [esp+22Ch+var_20C]
0x43D3B4: push    edx
0x43D3B5: push    eax
0x43D3B6: push    ecx
0x43D3B7: mov     ecx, [esp+238h+var_214]
0x43D3BB: push    ebp
0x43D3BC: call    sub_43BDA0
0x43D3C1: push    ebp
0x43D3C2: call    FormHeapFree
0x43D3C7: add     esp, 4
0x43D3CA: mov     ecx, [esp+22Ch+var_4]
0x43D3D1: pop     edi
0x43D3D2: pop     esi
0x43D3D3: pop     ebp
0x43D3D4: pop     ebx
0x43D3D5: xor     ecx, esp
0x43D3D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43D3DC: add     esp, 21Ch
0x43D3E2: retn    18h
