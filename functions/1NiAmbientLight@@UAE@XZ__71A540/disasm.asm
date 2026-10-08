0x71A540: push    0FFFFFFFFh
0x71A542: push    offset ??1NiAmbientLight@@UAE@XZ_SEH
0x71A547: mov     eax, large fs:0
0x71A54D: push    eax
0x71A54E: push    ecx
0x71A54F: push    esi
0x71A550: mov     eax, ds:0B30AACh
0x71A555: xor     eax, esp
0x71A557: push    eax
0x71A558: lea     eax, [esp+18h+var_C]
0x71A55C: mov     large fs:0, eax
0x71A562: mov     esi, ecx
0x71A564: mov     [esp+18h+var_10], esi
0x71A568: mov     dword ptr [esi], offset ??_7NiLight@@6B@; const NiLight::`vftable'
0x71A56E: push    esi
0x71A56F: mov     [esp+1Ch+var_4], 0
0x71A577: call    sub_701480
0x71A57C: add     esp, 4
0x71A57F: mov     ecx, esi; this
0x71A581: mov     [esp+18h+var_4], 0FFFFFFFFh
0x71A589: call    ??1NiDynamicEffect@@UAE@XZ; NiDynamicEffect::~NiDynamicEffect(void)
0x71A58E: mov     ecx, [esp+18h+var_C]
0x71A592: mov     large fs:0, ecx
0x71A599: pop     ecx
0x71A59A: pop     esi
0x71A59B: add     esp, 10h
0x71A59E: retn
0x9C9F10: mov     ecx, [ebp-10h]; this
0x9C9F13: jmp     ??1NiDynamicEffect@@UAE@XZ; NiDynamicEffect::~NiDynamicEffect(void)
0x9C9F18: mov     edx, [esp+arg_4]
0x9C9F1C: lea     eax, [edx-8]
0x9C9F1F: mov     ecx, [edx-0Ch]
0x9C9F22: xor     ecx, eax
0x9C9F24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9F29: mov     eax, offset stru_AF26E0
0x9C9F2E: jmp     ___CxxFrameHandler3
