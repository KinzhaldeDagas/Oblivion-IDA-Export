0x6F9090: push    0FFFFFFFFh
0x6F9092: push    offset SEH_6F9090
0x6F9097: mov     eax, large fs:0
0x6F909D: push    eax
0x6F909E: sub     esp, 18h
0x6F90A1: push    ebx
0x6F90A2: push    esi
0x6F90A3: push    edi
0x6F90A4: mov     eax, ds:0B30AACh
0x6F90A9: xor     eax, esp
0x6F90AB: push    eax
0x6F90AC: lea     eax, [esp+34h+var_C]
0x6F90B0: mov     large fs:0, eax
0x6F90B6: push    0; int
0x6F90B8: lea     ecx, [esp+38h+var_1C]; this
0x6F90BC: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F90C1: cmp     dword ptr ds:0B32A88h, 0
0x6F90C8: mov     ebx, ds:0B3F174h
0x6F90CE: mov     [esp+34h+var_4], 0
0x6F90D6: mov     [esp+34h+var_24], ebx
0x6F90DA: jnz     short loc_6F910B
0x6F90DC: push    0; int
0x6F90DE: lea     ecx, [esp+38h+var_20]; this
0x6F90E2: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F90E7: cmp     dword ptr ds:0B32A88h, 0
0x6F90EE: jnz     short loc_6F9102
0x6F90F0: mov     eax, ds:0BA9B60h
0x6F90F5: add     eax, 1
0x6F90F8: mov     ds:0BA9B60h, eax
0x6F90FD: mov     ds:0B32A88h, eax
0x6F9102: lea     ecx, [esp+34h+var_20]; this
0x6F9106: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F910B: mov     eax, [esp+34h+arg_0]
0x6F910F: mov     edi, ds:0B32A88h
0x6F9115: mov     eax, [eax]
0x6F9117: cmp     edi, [eax+0Ch]
0x6F911A: jnb     short loc_6F9148
0x6F911C: mov     ecx, [eax+8]
0x6F911F: mov     esi, [ecx+edi*4]
0x6F9122: test    esi, esi
0x6F9124: jnz     short loc_6F9195
0x6F9126: cmp     byte ptr [eax+14h], 0
0x6F912A: jz      short loc_6F913C
0x6F912C: call    sub_98083E
0x6F9131: cmp     edi, [eax+0Ch]
0x6F9134: jnb     short loc_6F9140
0x6F9136: mov     edx, [eax+8]
0x6F9139: mov     esi, [edx+edi*4]
0x6F913C: test    esi, esi
0x6F913E: jnz     short loc_6F9195
0x6F9140: test    ebx, ebx
0x6F9142: jz      short loc_6F914C
0x6F9144: mov     esi, ebx
0x6F9146: jmp     short loc_6F9195
0x6F9148: xor     esi, esi
0x6F914A: jmp     short loc_6F9126
0x6F914C: lea     eax, [esp+34h+var_24]
0x6F9150: push    eax
0x6F9151: call    sub_6F8FC0
0x6F9156: add     esp, 4
0x6F9159: cmp     eax, 0FFFFFFFFh
0x6F915C: jnz     short loc_6F917B
0x6F915E: push    offset aBadCast; "bad cast"
0x6F9163: lea     ecx, [esp+38h+var_18]; this
0x6F9167: call    ??0bad_cast@std@@QAE@PBD@Z; std::bad_cast::bad_cast(char const *)
0x6F916C: push    offset __TI2?AVbad_cast@std@@; throw info for 'class std::bad_cast'
0x6F9171: lea     ecx, [esp+38h+var_18]
0x6F9175: push    ecx
0x6F9176: call    ThrowException??
0x6F917B: mov     esi, [esp+34h+var_24]
0x6F917F: mov     ecx, esi
0x6F9181: mov     ds:0B3F174h, esi
0x6F9187: call    sub_6F6D90
0x6F918C: push    esi; struct std::locale::facet *
0x6F918D: call    ?facet_Register@facet@locale@std@@CAXPAV123@@Z; std::locale::facet::facet_Register(std::locale::facet *)
0x6F9192: add     esp, 4
0x6F9195: lea     ecx, [esp+34h+var_1C]; this
0x6F9199: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6F91A1: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F91A6: mov     eax, esi
0x6F91A8: mov     ecx, [esp+34h+var_C]
0x6F91AC: mov     large fs:0, ecx
0x6F91B3: pop     ecx
0x6F91B4: pop     edi
0x6F91B5: pop     esi
0x6F91B6: pop     ebx
0x6F91B7: add     esp, 24h
0x6F91BA: retn
