0x4CEE90: sub     esp, 24h
0x4CEE93: push    ebx
0x4CEE94: push    ebp
0x4CEE95: push    esi
0x4CEE96: mov     ebp, ecx
0x4CEE98: push    edi
0x4CEE99: push    ebp; a2
0x4CEE9A: mov     ecx, offset stru_B35C80; this
0x4CEE9F: call    sub_496EA0
0x4CEEA4: mov     ebx, [esp+34h+arg_0]
0x4CEEA8: xor     esi, esi
0x4CEEAA: lea     edi, [ebp+48h]
0x4CEEAD: cmp     edi, esi
0x4CEEAF: mov     [esp+34h+var_18], esi
0x4CEEB3: mov     [esp+34h+var_1C], esi
0x4CEEB7: mov     [esp+34h+var_14], esi
0x4CEEBB: mov     [esp+34h+var_10], esi
0x4CEEBF: mov     [esp+34h+var_21], 0
0x4CEEC4: mov     [esp+34h+var_20], edi
0x4CEEC8: jz      loc_4CF081
0x4CEECE: jmp     short loc_4CEED4
0x4CEED0: mov     edi, [esp+34h+var_20]
0x4CEED4: cmp     dword ptr [edi+4], 0
0x4CEED8: jnz     short loc_4CEEE3
0x4CEEDA: cmp     dword ptr [edi], 0
0x4CEEDD: jz      loc_4CF081
0x4CEEE3: mov     esi, [edi]
0x4CEEE5: mov     eax, [esi+8]
0x4CEEE8: shr     eax, 5
0x4CEEEB: test    al, 1
0x4CEEED: jnz     loc_4CF06E
0x4CEEF3: cmp     [esp+34h+var_18], 0
0x4CEEF8: jnz     short loc_4CEF30
0x4CEEFA: mov     edx, [esi]
0x4CEEFC: mov     eax, [edx+170h]
0x4CEF02: mov     ecx, esi
0x4CEF04: call    eax
0x4CEF06: cmp     eax, ds:0B35EACh
0x4CEF0C: jnz     short loc_4CEF30
0x4CEF0E: test    byte ptr [ebp+24h], 1
0x4CEF12: jnz     short loc_4CEF2C
0x4CEF14: mov     edx, [esi]
0x4CEF16: mov     eax, [edx+174h]
0x4CEF1C: mov     ecx, esi
0x4CEF1E: call    eax
0x4CEF20: push    eax
0x4CEF21: mov     ecx, ebp
0x4CEF23: call    sub_4CC540
0x4CEF28: test    al, al
0x4CEF2A: jz      short loc_4CEF30
0x4CEF2C: mov     [esp+34h+var_18], esi
0x4CEF30: cmp     [esp+34h+var_1C], 0
0x4CEF35: jnz     short loc_4CEF6D
0x4CEF37: mov     edx, [esi]
0x4CEF39: mov     eax, [edx+170h]
0x4CEF3F: mov     ecx, esi
0x4CEF41: call    eax
0x4CEF43: cmp     eax, ds:0B35EB0h
0x4CEF49: jnz     short loc_4CEF6D
0x4CEF4B: test    byte ptr [ebp+24h], 1
0x4CEF4F: jnz     short loc_4CEF69
0x4CEF51: mov     edx, [esi]
0x4CEF53: mov     eax, [edx+174h]
0x4CEF59: mov     ecx, esi
0x4CEF5B: call    eax
0x4CEF5D: push    eax
0x4CEF5E: mov     ecx, ebp
0x4CEF60: call    sub_4CC540
0x4CEF65: test    al, al
0x4CEF67: jz      short loc_4CEF6D
0x4CEF69: mov     [esp+34h+var_1C], esi
0x4CEF6D: cmp     [esp+34h+var_21], 0
0x4CEF72: jnz     loc_4CF011
0x4CEF78: mov     ecx, esi; this
0x4CEF7A: call    GetTeleportExtraData
0x4CEF7F: mov     edi, eax
0x4CEF81: test    edi, edi
0x4CEF83: jz      loc_4CF00D
0x4CEF89: mov     ecx, edi
0x4CEF8B: call    sub_42B410
0x4CEF90: test    eax, eax
0x4CEF92: jz      short loc_4CF00D
0x4CEF94: mov     ecx, edi
0x4CEF96: call    sub_42B410
0x4CEF9B: mov     ecx, eax; this
0x4CEF9D: call    GetTeleportExtraData
0x4CEFA2: mov     edi, eax
0x4CEFA4: test    edi, edi
0x4CEFA6: jz      short loc_4CF00D
0x4CEFA8: mov     ecx, edi
0x4CEFAA: call    sub_6899C0
0x4CEFAF: test    byte ptr [ebp+24h], 1
0x4CEFB3: mov     ecx, [eax]
0x4CEFB5: mov     edx, [eax+4]
0x4CEFB8: mov     eax, [eax+8]
0x4CEFBB: mov     [esp+34h+var_C], ecx
0x4CEFBF: mov     [esp+34h+var_8], edx
0x4CEFC3: mov     [esp+34h+var_4], eax
0x4CEFC7: jnz     short loc_4CEFD9
0x4CEFC9: lea     ecx, [esp+34h+var_C]
0x4CEFCD: push    ecx
0x4CEFCE: mov     ecx, ebp
0x4CEFD0: call    sub_4CC540
0x4CEFD5: test    al, al
0x4CEFD7: jz      short loc_4CF00D
0x4CEFD9: mov     edx, [esp+34h+var_C]
0x4CEFDD: mov     eax, [esp+34h+var_8]
0x4CEFE1: mov     ecx, [esp+34h+var_4]
0x4CEFE5: mov     [ebx], edx
0x4CEFE7: mov     [ebx+4], eax
0x4CEFEA: mov     [ebx+8], ecx
0x4CEFED: mov     ecx, edi
0x4CEFEF: call    sub_42B430
0x4CEFF4: mov     edx, [eax]
0x4CEFF6: mov     ecx, [esp+34h+arg_4]
0x4CEFFA: mov     [ecx], edx
0x4CEFFC: mov     edx, [eax+4]
0x4CEFFF: mov     [ecx+4], edx
0x4CF002: mov     eax, [eax+8]
0x4CF005: mov     [ecx+8], eax
0x4CF008: mov     [esp+34h+var_21], 1
0x4CF00D: mov     edi, [esp+34h+var_20]
0x4CF011: cmp     [esp+34h+var_14], 0
0x4CF016: jnz     short loc_4CF04C
0x4CF018: mov     edx, [esi]
0x4CF01A: mov     eax, [edx+170h]
0x4CF020: mov     ecx, esi
0x4CF022: call    eax
0x4CF024: cmp     byte ptr [eax+4], 1Ch
0x4CF028: jnz     short loc_4CF04C
0x4CF02A: test    byte ptr [ebp+24h], 1
0x4CF02E: jnz     short loc_4CF048
0x4CF030: mov     edx, [esi]
0x4CF032: mov     eax, [edx+174h]
0x4CF038: mov     ecx, esi
0x4CF03A: call    eax
0x4CF03C: push    eax
0x4CF03D: mov     ecx, ebp
0x4CF03F: call    sub_4CC540
0x4CF044: test    al, al
0x4CF046: jz      short loc_4CF04C
0x4CF048: mov     [esp+34h+var_14], esi
0x4CF04C: test    byte ptr [ebp+24h], 1
0x4CF050: jnz     short loc_4CF06A
0x4CF052: mov     edx, [esi]
0x4CF054: mov     eax, [edx+174h]
0x4CF05A: mov     ecx, esi
0x4CF05C: call    eax
0x4CF05E: push    eax
0x4CF05F: mov     ecx, ebp
0x4CF061: call    sub_4CC540
0x4CF066: test    al, al
0x4CF068: jz      short loc_4CF06E
0x4CF06A: mov     [esp+34h+var_10], esi
0x4CF06E: mov     eax, [edi+4]
0x4CF071: test    eax, eax
0x4CF073: mov     esi, [esp+34h+var_1C]
0x4CF077: mov     [esp+34h+var_20], eax
0x4CF07B: jnz     loc_4CEED0
0x4CF081: push    ebp; a2
0x4CF082: mov     ecx, offset stru_B35C80; this
0x4CF087: call    sub_496F50
0x4CF08C: test    esi, esi
0x4CF08E: jnz     short loc_4CF0AF
0x4CF090: mov     esi, [esp+34h+var_18]
0x4CF094: test    esi, esi
0x4CF096: jnz     short loc_4CF0AF
0x4CF098: cmp     [esp+34h+var_21], 0
0x4CF09D: jnz     short loc_4CF0E0
0x4CF09F: mov     esi, [esp+34h+var_14]
0x4CF0A3: test    esi, esi
0x4CF0A5: jnz     short loc_4CF0AF
0x4CF0A7: mov     esi, [esp+34h+var_10]
0x4CF0AB: test    esi, esi
0x4CF0AD: jz      short loc_4CF0E0
0x4CF0AF: mov     edx, [esi]
0x4CF0B1: mov     eax, [edx+174h]
0x4CF0B7: mov     ecx, esi
0x4CF0B9: call    eax
0x4CF0BB: mov     ecx, [eax]
0x4CF0BD: mov     [ebx], ecx
0x4CF0BF: mov     edx, [eax+4]
0x4CF0C2: mov     [ebx+4], edx
0x4CF0C5: mov     eax, [eax+8]
0x4CF0C8: mov     [ebx+8], eax
0x4CF0CB: mov     ecx, [esi+20h]
0x4CF0CE: mov     eax, [esp+34h+arg_4]
0x4CF0D2: mov     [eax], ecx
0x4CF0D4: mov     edx, [esi+24h]
0x4CF0D7: mov     [eax+4], edx
0x4CF0DA: mov     ecx, [esi+28h]
0x4CF0DD: mov     [eax+8], ecx
0x4CF0E0: test    byte ptr [ebp+24h], 1
0x4CF0E4: jnz     short loc_4CF15C
0x4CF0E6: mov     ecx, ebp; this
0x4CF0E8: call    sub_4CE3C0
0x4CF0ED: test    eax, eax
0x4CF0EF: jz      short loc_4CF15C
0x4CF0F1: fldz
0x4CF0F3: lea     edx, [esp+34h+arg_4]
0x4CF0F7: push    edx
0x4CF0F8: fstp    [esp+38h+arg_4]
0x4CF0FC: push    ebx
0x4CF0FD: mov     ecx, eax
0x4CF0FF: call    sub_4C5B50
0x4CF104: movzx   eax, byte ptr [ebp+24h]
0x4CF108: shr     eax, 1
0x4CF10A: test    al, 1
0x4CF10C: jnz     short loc_4CF116
0x4CF10E: fld     dword ptr ds:0A3B888h
0x4CF114: jmp     short loc_4CF11E
0x4CF116: lea     ecx, [ebp+28h]
0x4CF119: call    GetCellWaterHeight
0x4CF11E: fstp    [esp+34h+arg_0]
0x4CF122: fld     [esp+34h+arg_4]
0x4CF126: fld     [esp+34h+arg_0]
0x4CF12A: fcom    st(1)
0x4CF12C: fnstsw  ax
0x4CF12E: test    ah, 41h
0x4CF131: jnz     short loc_4CF13F
0x4CF133: fstp    st(1)
0x4CF135: fstp    [esp+34h+arg_4]
0x4CF139: fld     [esp+34h+arg_4]
0x4CF13D: jmp     short loc_4CF141
0x4CF13F: fstp    st
0x4CF141: fld     dword ptr [ebx+8]
0x4CF144: fcomp   st(1)
0x4CF146: fnstsw  ax
0x4CF148: test    ah, 5
0x4CF14B: jp      short loc_4CF15A
0x4CF14D: pop     edi
0x4CF14E: fstp    dword ptr [ebx+8]
0x4CF151: pop     esi
0x4CF152: pop     ebp
0x4CF153: pop     ebx
0x4CF154: add     esp, 24h
0x4CF157: retn    8
0x4CF15A: fstp    st
0x4CF15C: pop     edi
0x4CF15D: pop     esi
0x4CF15E: pop     ebp
0x4CF15F: pop     ebx
0x4CF160: add     esp, 24h
0x4CF163: retn    8
