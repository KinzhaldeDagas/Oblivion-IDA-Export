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
