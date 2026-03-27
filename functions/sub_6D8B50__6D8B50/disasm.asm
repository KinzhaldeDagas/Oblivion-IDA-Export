0x6D8B50: push    0FFFFFFFFh
0x6D8B52: push    offset SEH_6D8B50
0x6D8B57: mov     eax, large fs:0
0x6D8B5D: push    eax
0x6D8B5E: sub     esp, 494h
0x6D8B64: mov     eax, ds:0B30AACh
0x6D8B69: xor     eax, esp
0x6D8B6B: mov     [esp+4A0h+var_10], eax
0x6D8B72: push    ebp
0x6D8B73: push    esi
0x6D8B74: push    edi
0x6D8B75: mov     eax, ds:0B30AACh
0x6D8B7A: xor     eax, esp
0x6D8B7C: push    eax
0x6D8B7D: lea     eax, [esp+4B0h+var_C]
0x6D8B84: mov     large fs:0, eax
0x6D8B8A: mov     esi, [esp+4B0h+arg_0]
0x6D8B91: mov     edi, [esp+4B0h+arg_4]
0x6D8B98: mov     ebp, [esp+4B0h+Src]
0x6D8B9F: lea     ecx, [esp+4B0h+var_498]; this
0x6D8BA3: mov     [esp+4B0h+var_49C], esi
0x6D8BA7: mov     [esp+4B0h+var_4A0], 0
0x6D8BAF: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x6D8BB4: push    edi; Src
0x6D8BB5: lea     ecx, [esp+4B4h+var_498]
0x6D8BB9: mov     [esp+4B4h+var_4], 1
0x6D8BC4: call    sub_711FC0
0x6D8BC9: test    al, al
0x6D8BCB: jnz     short loc_6D8BD5
0x6D8BCD: mov     dword ptr [esi], 0
0x6D8BD3: jmp     short loc_6D8BEC
0x6D8BD5: mov     eax, [esp+4B0h+arg_8]
0x6D8BDC: push    ebp; Src
0x6D8BDD: push    eax; int
0x6D8BDE: lea     ecx, [esp+4B8h+var_498]
0x6D8BE2: push    ecx; int
0x6D8BE3: push    esi; int
0x6D8BE4: call    sub_6D89F0
0x6D8BE9: add     esp, 10h
0x6D8BEC: lea     ecx, [esp+4B0h+var_498]; this
0x6D8BF0: mov     [esp+4B0h+var_4A0], 1
0x6D8BF8: mov     byte ptr [esp+4B0h+var_4], 0
0x6D8C00: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x6D8C05: mov     eax, esi
0x6D8C07: mov     ecx, [esp+4B0h+var_C]
0x6D8C0E: mov     large fs:0, ecx
0x6D8C15: pop     ecx
0x6D8C16: pop     edi
0x6D8C17: pop     esi
0x6D8C18: pop     ebp
0x6D8C19: mov     ecx, [esp+4A0h+var_10]
0x6D8C20: xor     ecx, esp
0x6D8C22: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6D8C27: add     esp, 4A0h
0x6D8C2D: retn
