0x5EAE70: push    ecx
0x5EAE71: push    ebp
0x5EAE72: push    esi
0x5EAE73: mov     esi, ecx
0x5EAE75: xor     ebp, ebp
0x5EAE77: cmp     [esi+58h], ebp
0x5EAE7A: jz      loc_5EB142
0x5EAE80: mov     eax, [esi]
0x5EAE82: mov     edx, [eax+30Ch]
0x5EAE88: push    ebx
0x5EAE89: call    edx
0x5EAE8B: mov     ecx, [esi+58h]
0x5EAE8E: mov     eax, [ecx]
0x5EAE90: mov     ebx, [ecx+8]
0x5EAE93: mov     edx, [eax+174h]
0x5EAE99: mov     [esp+0Ch], ebx
0x5EAE9D: call    edx
0x5EAE9F: test    eax, eax
0x5EAEA1: jz      short loc_5EAEFC
0x5EAEA3: mov     ecx, [esi+58h]
0x5EAEA6: mov     eax, [ecx]
0x5EAEA8: mov     edx, [eax+174h]
0x5EAEAE: call    edx
0x5EAEB0: cmp     byte ptr [eax+20h], 16h
0x5EAEB4: jnz     short loc_5EAEFC
0x5EAEB6: mov     eax, [esi]
0x5EAEB8: mov     edx, [eax+18Ch]
0x5EAEBE: mov     ecx, esi
0x5EAEC0: call    edx
0x5EAEC2: test    eax, eax
0x5EAEC4: jnz     short loc_5EAEFC
0x5EAEC6: mov     eax, [esi]
0x5EAEC8: mov     edx, [eax+380h]
0x5EAECE: mov     ecx, esi
0x5EAED0: call    edx
0x5EAED2: test    eax, eax
0x5EAED4: jz      short loc_5EAEEF
0x5EAED6: mov     eax, [esi]
0x5EAED8: mov     edx, [eax+380h]
0x5EAEDE: mov     ecx, esi
0x5EAEE0: call    edx
0x5EAEE2: mov     edx, [eax]
0x5EAEE4: mov     ecx, eax
0x5EAEE6: mov     eax, [edx+38Ch]
0x5EAEEC: push    ebp
0x5EAEED: call    eax
0x5EAEEF: mov     edx, [esi]
0x5EAEF1: mov     eax, [edx+384h]
0x5EAEF7: push    ebp
0x5EAEF8: mov     ecx, esi
0x5EAEFA: call    eax
0x5EAEFC: mov     ecx, [esi+58h]
0x5EAEFF: mov     edx, [ecx]
0x5EAF01: mov     eax, [edx+178h]
0x5EAF07: push    ebp
0x5EAF08: call    eax
0x5EAF0A: cmp     ebx, ebp
0x5EAF0C: jz      loc_5EB0EB
0x5EAF12: mov     ecx, ebx
0x5EAF14: call    sub_567770
0x5EAF19: test    al, al
0x5EAF1B: jz      loc_5EB0EB
0x5EAF21: mov     edx, [esi]
0x5EAF23: mov     eax, [edx+44h]
0x5EAF26: push    edi
0x5EAF27: push    30000h
0x5EAF2C: mov     ecx, esi
0x5EAF2E: call    eax
0x5EAF30: lea     edi, [esi+44h]
0x5EAF33: mov     ecx, edi
0x5EAF35: call    ExtraDataList__GetExtraPackage
0x5EAF3A: test    eax, eax
0x5EAF3C: jz      loc_5EB067
0x5EAF42: mov     ecx, edi
0x5EAF44: call    ExtraDataList__GetExtraPackage
0x5EAF49: mov     ecx, [esi+58h]
0x5EAF4C: mov     [ecx+8], eax
0x5EAF4F: mov     edx, [esi+58h]
0x5EAF52: mov     eax, [edx+8]
0x5EAF55: push    eax
0x5EAF56: mov     ecx, esi
0x5EAF58: call    sub_5E8DE0
0x5EAF5D: mov     ecx, edi
0x5EAF5F: call    sub_41FB40
0x5EAF64: mov     ecx, [esi+58h]
0x5EAF67: mov     [ecx+4], eax
0x5EAF6A: mov     ebx, [esi+58h]
0x5EAF6D: mov     ebp, [ebx]
0x5EAF6F: mov     ecx, edi
0x5EAF71: add     ebp, 0D0h ; 'Ð'
0x5EAF77: call    sub_41FB60
0x5EAF7C: mov     edx, [ebp+0]
0x5EAF7F: push    eax
0x5EAF80: mov     ecx, ebx
0x5EAF82: call    edx
0x5EAF84: mov     ebx, [esp+0Ch+arg_0]
0x5EAF88: cmp     byte ptr [ebx+20h], 11h
0x5EAF8C: jnz     short loc_5EAFF1
0x5EAF8E: mov     eax, ds:0B33A98h
0x5EAF93: cmp     byte ptr [eax+0CD4h], 0
0x5EAF9A: jnz     short loc_5EAFF1
0x5EAF9C: mov     ecx, edi; this
0x5EAF9E: call    sub_4246F0
0x5EAFA3: fld     dword ptr ds:0A5A04Ch
0x5EAFA9: push    esi; a7
0x5EAFAA: mov     dword ptr [ebx+54h], 0
0x5EAFB1: mov     edx, [esi]
0x5EAFB3: mov     eax, [edx+174h]
0x5EAFB9: push    offset sub_645A30; a6
0x5EAFBE: push    ecx
0x5EAFBF: mov     ecx, esi
0x5EAFC1: fstp    [esp+18h+a5]; a5
0x5EAFC4: call    eax
0x5EAFC6: fld     dword ptr ds:0A5A04Ch
0x5EAFCC: mov     edx, [esi]
0x5EAFCE: push    eax; a4
0x5EAFCF: mov     eax, [edx+174h]
0x5EAFD5: push    ecx
0x5EAFD6: mov     ecx, esi
0x5EAFD8: fstp    [esp+20h+a3]; a3
0x5EAFDB: call    eax
0x5EAFDD: push    eax; a2
0x5EAFDE: mov     ecx, esi; this
0x5EAFE0: call    TESObjectREFR_GetParentCell
0x5EAFE5: mov     ecx, ds:0B33A98h
0x5EAFEB: push    eax; a1
0x5EAFEC: call    sub_446B90
0x5EAFF1: mov     ecx, [esi+58h]
0x5EAFF4: mov     edx, [ecx]
0x5EAFF6: mov     eax, [edx+0E0h]
0x5EAFFC: call    eax
0x5EAFFE: test    eax, eax
0x5EB000: jz      short loc_5EB02C
0x5EB002: mov     ecx, [esi+58h]
0x5EB005: mov     edx, [ecx]
0x5EB007: mov     eax, [edx+0E0h]
0x5EB00D: mov     ebx, [ecx]
0x5EB00F: call    eax
0x5EB011: mov     ecx, [esi+58h]
0x5EB014: mov     edx, [ebx+0DCh]
0x5EB01A: push    eax
0x5EB01B: call    edx
0x5EB01D: mov     ecx, [esi+58h]
0x5EB020: mov     eax, [ecx]
0x5EB022: mov     edx, [eax+0E4h]
0x5EB028: push    0
0x5EB02A: call    edx
0x5EB02C: mov     ebx, [esi]
0x5EB02E: mov     ecx, edi
0x5EB030: call    sub_41FB80
0x5EB035: mov     ecx, esi
0x5EB037: push    eax
0x5EB038: mov     eax, [ebx+17Ch]
0x5EB03E: call    eax
0x5EB040: mov     ebx, [esi+58h]
0x5EB043: mov     ebp, [ebx]
0x5EB045: mov     ecx, edi
0x5EB047: add     ebp, 394h
0x5EB04D: call    sub_41FBA0
0x5EB052: mov     edx, [ebp+0]
0x5EB055: mov     ecx, ebx
0x5EB057: push    eax
0x5EB058: call    edx
0x5EB05A: mov     ecx, edi
0x5EB05C: call    sub_4246D0
0x5EB061: mov     ebx, [esp+14h+var_4]
0x5EB065: jmp     short loc_5EB0B7
0x5EB067: mov     eax, [esi+58h]
0x5EB06A: mov     [eax+8], ebp
0x5EB06D: mov     ecx, [esi+58h]
0x5EB070: mov     [ecx+4], ebp
0x5EB073: mov     edx, [esi]
0x5EB075: mov     eax, [edx+17Ch]
0x5EB07B: push    ebp
0x5EB07C: mov     ecx, esi
0x5EB07E: call    eax
0x5EB080: mov     ecx, [esi+58h]
0x5EB083: mov     edx, [ecx]
0x5EB085: mov     eax, [edx+394h]
0x5EB08B: push    ebp
0x5EB08C: call    eax
0x5EB08E: mov     ecx, [esi+58h]
0x5EB091: mov     edx, [ecx]
0x5EB093: mov     eax, [edx+0D0h]
0x5EB099: push    ebp
0x5EB09A: call    eax
0x5EB09C: mov     ecx, ds:0B33A98h
0x5EB0A2: cmp     byte ptr [ecx+0CD4h], 0
0x5EB0A9: jnz     short loc_5EB0B7
0x5EB0AB: mov     ecx, [esi+58h]
0x5EB0AE: mov     edx, [ecx]
0x5EB0B0: mov     eax, [edx+18h]
0x5EB0B3: push    ebp
0x5EB0B4: push    esi
0x5EB0B5: call    eax
0x5EB0B7: mov     ecx, ebx
0x5EB0B9: call    sub_5660A0
0x5EB0BE: test    al, al
0x5EB0C0: pop     edi
0x5EB0C1: jz      short loc_5EB0EB
0x5EB0C3: mov     ecx, ds:0B33B00h
0x5EB0C9: call    sub_45A500
0x5EB0CE: test    al, al
0x5EB0D0: jz      short loc_5EB0E0
0x5EB0D2: mov     ecx, ds:0B33B00h
0x5EB0D8: push    ebx
0x5EB0D9: call    sub_45C7A0
0x5EB0DE: jmp     short loc_5EB0EB
0x5EB0E0: mov     edx, [ebx]
0x5EB0E2: mov     eax, [edx+10h]
0x5EB0E5: push    1
0x5EB0E7: mov     ecx, ebx
0x5EB0E9: call    eax
0x5EB0EB: cmp     dword ptr [esi+58h], 0
0x5EB0EF: pop     ebx
0x5EB0F0: jz      short loc_5EB100
0x5EB0F2: mov     ecx, [esi+58h]
0x5EB0F5: mov     edx, [ecx]
0x5EB0F7: mov     eax, [edx+194h]
0x5EB0FD: push    esi
0x5EB0FE: call    eax
0x5EB100: mov     ecx, ds:0B33A98h
0x5EB106: cmp     byte ptr [ecx+0CD4h], 0
0x5EB10D: jnz     short loc_5EB142
0x5EB10F: mov     edx, [esi]
0x5EB111: mov     eax, [edx+380h]
0x5EB117: mov     ecx, esi
0x5EB119: call    eax
0x5EB11B: test    eax, eax
0x5EB11D: jnz     short loc_5EB142
0x5EB11F: mov     ecx, [esi+58h]
0x5EB122: mov     edx, [ecx]
0x5EB124: mov     eax, [edx+36Ch]
0x5EB12A: call    eax
0x5EB12C: cmp     eax, 9
0x5EB12F: jnz     short loc_5EB142
0x5EB131: mov     edx, [esi]
0x5EB133: mov     eax, [edx+320h]
0x5EB139: mov     ecx, esi
0x5EB13B: pop     esi
0x5EB13C: pop     ebp
0x5EB13D: add     esp, 4
0x5EB140: jmp     eax
0x5EB142: pop     esi
0x5EB143: pop     ebp
0x5EB144: pop     ecx
0x5EB145: retn
