0x6F8C00: push    0FFFFFFFFh
0x6F8C02: push    offset SEH_6F9090
0x6F8C07: mov     eax, large fs:0
0x6F8C0D: push    eax
0x6F8C0E: sub     esp, 18h
0x6F8C11: push    ebx
0x6F8C12: push    esi
0x6F8C13: push    edi
0x6F8C14: mov     eax, ds:0B30AACh
0x6F8C19: xor     eax, esp
0x6F8C1B: push    eax
0x6F8C1C: lea     eax, [esp+34h+var_C]
0x6F8C20: mov     large fs:0, eax
0x6F8C26: push    0; int
0x6F8C28: lea     ecx, [esp+38h+var_1C]; this
0x6F8C2C: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F8C31: cmp     dword ptr ds:0BA9B64h, 0
0x6F8C38: mov     ebx, ds:0B3F170h
0x6F8C3E: mov     [esp+34h+var_4], 0
0x6F8C46: mov     [esp+34h+var_24], ebx
0x6F8C4A: jnz     short loc_6F8C7B
0x6F8C4C: push    0; int
0x6F8C4E: lea     ecx, [esp+38h+var_20]; this
0x6F8C52: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F8C57: cmp     dword ptr ds:0BA9B64h, 0
0x6F8C5E: jnz     short loc_6F8C72
0x6F8C60: mov     eax, ds:0BA9B60h
0x6F8C65: add     eax, 1
0x6F8C68: mov     ds:0BA9B60h, eax
0x6F8C6D: mov     ds:0BA9B64h, eax
0x6F8C72: lea     ecx, [esp+34h+var_20]; this
0x6F8C76: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F8C7B: mov     eax, [esp+34h+arg_0]
0x6F8C7F: mov     edi, ds:0BA9B64h
0x6F8C85: mov     eax, [eax]
0x6F8C87: cmp     edi, [eax+0Ch]
0x6F8C8A: jnb     short loc_6F8CB8
0x6F8C8C: mov     ecx, [eax+8]
0x6F8C8F: mov     esi, [ecx+edi*4]
0x6F8C92: test    esi, esi
0x6F8C94: jnz     short loc_6F8D05
0x6F8C96: cmp     byte ptr [eax+14h], 0
0x6F8C9A: jz      short loc_6F8CAC
0x6F8C9C: call    sub_98083E
0x6F8CA1: cmp     edi, [eax+0Ch]
0x6F8CA4: jnb     short loc_6F8CB0
0x6F8CA6: mov     edx, [eax+8]
0x6F8CA9: mov     esi, [edx+edi*4]
0x6F8CAC: test    esi, esi
0x6F8CAE: jnz     short loc_6F8D05
0x6F8CB0: test    ebx, ebx
0x6F8CB2: jz      short loc_6F8CBC
0x6F8CB4: mov     esi, ebx
0x6F8CB6: jmp     short loc_6F8D05
0x6F8CB8: xor     esi, esi
0x6F8CBA: jmp     short loc_6F8C96
0x6F8CBC: lea     eax, [esp+34h+var_24]
0x6F8CC0: push    eax
0x6F8CC1: call    sub_6F8920
0x6F8CC6: add     esp, 4
0x6F8CC9: cmp     eax, 0FFFFFFFFh
0x6F8CCC: jnz     short loc_6F8CEB
0x6F8CCE: push    offset aBadCast; "bad cast"
0x6F8CD3: lea     ecx, [esp+38h+var_18]; this
0x6F8CD7: call    ??0bad_cast@std@@QAE@PBD@Z; std::bad_cast::bad_cast(char const *)
0x6F8CDC: push    offset __TI2?AVbad_cast@std@@; throw info for 'class std::bad_cast'
0x6F8CE1: lea     ecx, [esp+38h+var_18]
0x6F8CE5: push    ecx
0x6F8CE6: call    ThrowException??
0x6F8CEB: mov     esi, [esp+34h+var_24]
0x6F8CEF: mov     ecx, esi
0x6F8CF1: mov     ds:0B3F170h, esi
0x6F8CF7: call    sub_6F6D90
0x6F8CFC: push    esi; struct std::locale::facet *
0x6F8CFD: call    ?facet_Register@facet@locale@std@@CAXPAV123@@Z; std::locale::facet::facet_Register(std::locale::facet *)
0x6F8D02: add     esp, 4
0x6F8D05: lea     ecx, [esp+34h+var_1C]; this
0x6F8D09: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6F8D11: call    ??1_Lockit@std@@QAE@XZ; std::_Lockit::~_Lockit(void)
0x6F8D16: mov     eax, esi
0x6F8D18: mov     ecx, [esp+34h+var_C]
0x6F8D1C: mov     large fs:0, ecx
0x6F8D23: pop     ecx
0x6F8D24: pop     edi
0x6F8D25: pop     esi
0x6F8D26: pop     ebx
0x6F8D27: add     esp, 24h
0x6F8D2A: retn
