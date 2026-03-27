0x530E90: sub     esp, 310h
0x530E96: mov     eax, ds:0B30AACh
0x530E9B: xor     eax, esp
0x530E9D: mov     [esp+310h+var_4], eax
0x530EA4: push    ebp
0x530EA5: mov     ebp, [esp+314h+arg_0]
0x530EAC: push    esi
0x530EAD: push    edi
0x530EAE: mov     edi, ecx
0x530EB0: push    edi
0x530EB1: mov     [esp+320h+var_310], 0
0x530EB6: call    TESTopic_static_GetTopicInfoParent?
0x530EBB: mov     esi, eax
0x530EBD: add     esp, 4
0x530EC0: test    esi, esi
0x530EC2: jz      short loc_530EE7
0x530EC4: mov     eax, [esi+0Ch]
0x530EC7: push    eax
0x530EC8: mov     eax, [esi]
0x530ECA: mov     edx, [eax+0D4h]
0x530ED0: mov     ecx, esi
0x530ED2: call    edx
0x530ED4: push    eax
0x530ED5: lea     eax, [esp+324h+var_310]
0x530ED9: push    offset aTopicS08x; ", Topic '%s' (%08X)"
0x530EDE: push    eax
0x530EDF: call    __sprintf
0x530EE4: add     esp, 10h
0x530EE7: test    esi, esi
0x530EE9: mov     [esp+31Ch+var_108], 0
0x530EF1: jz      short loc_530F25
0x530EF3: push    edi
0x530EF4: mov     ecx, esi
0x530EF6: call    sub_52F570
0x530EFB: test    eax, eax
0x530EFD: jz      short loc_530F25
0x530EFF: mov     ecx, [eax+0Ch]
0x530F02: mov     edx, [eax]
0x530F04: push    ecx
0x530F05: mov     ecx, eax
0x530F07: mov     eax, [edx+0D4h]
0x530F0D: call    eax
0x530F0F: push    eax
0x530F10: lea     ecx, [esp+324h+var_108]
0x530F17: push    offset aQuestS08x; "Quest '%s' (%08X)"
0x530F1C: push    ecx
0x530F1D: call    __sprintf
0x530F22: add     esp, 10h
0x530F25: mov     ecx, edi
0x530F27: mov     [esp+31Ch+var_20C], 0
0x530F2F: call    sub_530C40
0x530F34: mov     ecx, [eax]
0x530F36: test    ecx, ecx
0x530F38: jz      short loc_530F55
0x530F3A: call    sub_52E100; ?what@runtime_error@@UBEPBDXZ
0x530F3F: push    eax
0x530F40: lea     edx, [esp+320h+var_20C]
0x530F47: push    offset aTextS; ", Text: \"%s\""
0x530F4C: push    edx
0x530F4D: call    __sprintf
0x530F52: add     esp, 0Ch
0x530F55: lea     eax, [esp+31Ch+var_20C]
0x530F5C: push    eax
0x530F5D: mov     eax, [edi+0Ch]
0x530F60: lea     ecx, [esp+320h+var_310]
0x530F64: push    ecx
0x530F65: lea     edx, [esp+324h+var_108]
0x530F6C: push    edx
0x530F6D: push    eax
0x530F6E: movzx   eax, byte ptr [edi+4]
0x530F72: lea     ecx, [eax+eax*2]
0x530F75: mov     edx, ds:0B05E04h[ecx*4]
0x530F7C: push    offset EmptyString
0x530F81: push    edx; ArgList
0x530F82: push    offset aSFormS08xSSS_0; "%s Form '%s' (%08X): %s%s%s"
0x530F87: push    ebp; int
0x530F88: call    BSStringT_Static_Format
0x530F8D: mov     ecx, [esp+33Ch+var_4]
0x530F94: add     esp, 20h
0x530F97: pop     edi
0x530F98: pop     esi
0x530F99: pop     ebp
0x530F9A: xor     ecx, esp
0x530F9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x530FA1: add     esp, 310h
0x530FA7: retn    4
