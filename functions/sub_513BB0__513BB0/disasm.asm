0x513BB0: sub     esp, 108h
0x513BB6: mov     eax, ds:0B30AACh
0x513BBB: xor     eax, esp
0x513BBD: mov     [esp+108h+var_4], eax
0x513BC4: mov     eax, ds:0B02C84h
0x513BC9: test    eax, eax
0x513BCB: jz      loc_513C63
0x513BD1: xor     ecx, ecx
0x513BD3: mov     dl, byte ptr ds:word_B3F280[ecx]
0x513BD9: mov     [esp+ecx+108h+var_108], dl
0x513BDC: add     ecx, 1
0x513BDF: test    dl, dl
0x513BE1: jnz     short loc_513BD3
0x513BE3: mov     edx, eax
0x513BE5: mov     cl, [eax]
0x513BE7: add     eax, 1
0x513BEA: test    cl, cl
0x513BEC: jnz     short loc_513BE5
0x513BEE: push    esi
0x513BEF: push    edi
0x513BF0: lea     edi, [esp+110h+var_108]
0x513BF4: sub     eax, edx
0x513BF6: add     edi, 0FFFFFFFFh
0x513BF9: lea     esp, [esp+0]
0x513C00: mov     cl, [edi+1]
0x513C03: add     edi, 1
0x513C06: test    cl, cl
0x513C08: jnz     short loc_513C00
0x513C0A: mov     ecx, eax
0x513C0C: shr     ecx, 2
0x513C0F: mov     esi, edx
0x513C11: rep movsd
0x513C13: mov     ecx, eax
0x513C15: and     ecx, 3
0x513C18: rep movsb
0x513C1A: pop     edi
0x513C1B: xor     eax, eax
0x513C1D: pop     esi
0x513C1E: mov     edi, edi
0x513C20: mov     cl, [esp+eax+108h+var_108]
0x513C23: mov     ds:byte_B07BF4[eax], cl
0x513C29: add     eax, 1
0x513C2C: test    cl, cl
0x513C2E: jnz     short loc_513C20
0x513C30: mov     eax, ds:0B07BF0h
0x513C35: mov     edx, [eax+14h]
0x513C38: push    0
0x513C3A: mov     ecx, offset INISettingCollection
0x513C3F: call    edx
0x513C41: test    al, al
0x513C43: jz      short loc_513C63
0x513C45: mov     eax, ds:0B07BF0h
0x513C4A: mov     edx, [eax+20h]
0x513C4D: mov     ecx, offset INISettingCollection
0x513C52: call    edx
0x513C54: mov     eax, ds:0B07BF0h
0x513C59: mov     edx, [eax+18h]
0x513C5C: mov     ecx, offset INISettingCollection
0x513C61: call    edx
0x513C63: push    offset aTheInGameSetti; "The in-game settings have been refreshe"...
0x513C68: call    Interface_ConsolePrint
0x513C6D: mov     ecx, [esp+10Ch+var_4]
0x513C74: add     esp, 4
0x513C77: xor     ecx, esp
0x513C79: mov     al, 1
0x513C7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x513C80: add     esp, 108h
0x513C86: retn
