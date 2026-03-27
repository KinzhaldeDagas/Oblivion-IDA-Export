0x64CD60: sub     esp, 14h
0x64CD63: push    ebx
0x64CD64: push    ebp
0x64CD65: mov     ebp, [esp+1Ch+arg_10]
0x64CD69: test    ebp, ebp
0x64CD6B: push    esi
0x64CD6C: mov     esi, ecx
0x64CD6E: push    edi
0x64CD6F: mov     dword ptr [esp+24h+var_14], esi
0x64CD73: jz      short loc_64CD82
0x64CD75: mov     ecx, ebp; this
0x64CD77: call    TESObjectCELL_IsInterior
0x64CD7C: test    al, al
0x64CD7E: jnz     short loc_64CD82
0x64CD80: xor     ebp, ebp
0x64CD82: mov     eax, [esi]
0x64CD84: mov     edx, [eax+184h]
0x64CD8A: mov     ecx, esi
0x64CD8C: mov     byte ptr [esp+24h+arg_10], 0
0x64CD91: call    edx
0x64CD93: test    eax, eax
0x64CD95: mov     esi, [esp+24h+arg_0]
0x64CD99: jnz     short loc_64CDAB
0x64CD9B: test    esi, esi
0x64CD9D: jnz     short loc_64CDAB
0x64CD9F: mov     al, 1
0x64CDA1: pop     edi
0x64CDA2: pop     esi
0x64CDA3: pop     ebp
0x64CDA4: pop     ebx
0x64CDA5: add     esp, 14h
0x64CDA8: retn    18h
0x64CDAB: test    ebp, ebp
0x64CDAD: jnz     short loc_64CDB5
0x64CDAF: cmp     [esp+24h+arg_14], ebp
0x64CDB3: jz      short loc_64CD9F
0x64CDB5: mov     ecx, esi; this
0x64CDB7: call    TESObjectREFR_GetParentCell
0x64CDBC: mov     ecx, esi; this
0x64CDBE: mov     edi, eax
0x64CDC0: call    TESObjectREFR_GetWorldSpace
0x64CDC5: test    edi, edi
0x64CDC7: mov     ebx, eax
0x64CDC9: jz      short loc_64CDD6
0x64CDCB: mov     ecx, edi; this
0x64CDCD: call    TESObjectCELL_IsInterior
0x64CDD2: test    al, al
0x64CDD4: jnz     short loc_64CDDA
0x64CDD6: test    ebx, ebx
0x64CDD8: jz      short loc_64CD9F
0x64CDDA: mov     ecx, esi
0x64CDDC: mov     byte ptr [esp+24h+arg_0], 0
0x64CDE1: call    sub_4D8AF0
0x64CDE6: mov     ebx, eax
0x64CDE8: xor     eax, eax
0x64CDEA: test    ebp, ebp
0x64CDEC: jz      short loc_64CE02
0x64CDEE: lea     eax, [esp+24h+arg_4]
0x64CDF2: push    eax
0x64CDF3: mov     ecx, ebp
0x64CDF5: call    sub_4CBBB0
0x64CDFA: test    eax, eax
0x64CDFC: jnz     short loc_64CE1C
0x64CDFE: mov     eax, ebp
0x64CE00: jmp     short loc_64CE1C
0x64CE02: mov     edi, [esp+24h+arg_14]
0x64CE06: test    edi, edi
0x64CE08: jz      short loc_64CE1C
0x64CE0A: lea     ecx, [esp+24h+arg_4]
0x64CE0E: push    ecx
0x64CE0F: mov     ecx, edi
0x64CE11: call    sub_4F0600
0x64CE16: test    eax, eax
0x64CE18: jnz     short loc_64CE1C
0x64CE1A: mov     eax, edi
0x64CE1C: cmp     ebx, eax
0x64CE1E: jz      short loc_64CE25
0x64CE20: mov     byte ptr [esp+24h+arg_0], 1
0x64CE25: mov     edx, [esp+24h+arg_4]
0x64CE29: mov     eax, [esp+24h+arg_8]
0x64CE2D: mov     ecx, [esp+24h+arg_C]
0x64CE31: mov     ebx, dword ptr [esp+24h+var_14]
0x64CE35: mov     [esp+24h+var_C], edx
0x64CE39: mov     edx, [ebx]
0x64CE3B: mov     [esp+24h+var_8], eax
0x64CE3F: mov     eax, [edx+0CCh]
0x64CE45: mov     [esp+24h+var_4], ecx
0x64CE49: mov     ecx, ebx
0x64CE4B: call    eax
0x64CE4D: mov     ecx, esi
0x64CE4F: mov     edi, eax
0x64CE51: call    Actor_IsSwimming
0x64CE56: test    al, al
0x64CE58: jnz     short loc_64CE90
0x64CE5A: test    edi, edi
0x64CE5C: jz      short loc_64CE90
0x64CE5E: mov     edx, [edi]
0x64CE60: mov     eax, [edx+190h]
0x64CE66: mov     ecx, edi
0x64CE68: call    eax
0x64CE6A: test    al, al
0x64CE6C: jz      short loc_64CE90
0x64CE6E: mov     ecx, edi
0x64CE70: call    Actor_IsSwimming
0x64CE75: test    al, al
0x64CE77: jz      short loc_64CE90
0x64CE79: fld     [esp+24h+var_4]
0x64CE7D: mov     ecx, esi
0x64CE7F: fstp    [esp+24h+var_14]
0x64CE83: call    sub_5E0660
0x64CE88: fsubr   [esp+24h+var_14]
0x64CE8C: fstp    [esp+24h+var_4]
0x64CE90: mov     ecx, [ebx+34h]
0x64CE93: test    ecx, ecx
0x64CE95: jz      short loc_64CEB9
0x64CE97: cmp     byte ptr [esp+24h+arg_0], 0
0x64CE9C: jnz     short loc_64CEB5
0x64CE9E: mov     edx, [ecx]
0x64CEA0: mov     edx, [edx+24h]
0x64CEA3: lea     eax, [esp+24h+var_C]
0x64CEA7: push    eax
0x64CEA8: push    esi
0x64CEA9: call    edx
0x64CEAB: mov     byte ptr [esp+24h+arg_10], 1
0x64CEB0: jmp     loc_64CF85
0x64CEB5: test    ecx, ecx
0x64CEB7: jnz     short loc_64CEC7
0x64CEB9: mov     eax, [ebx]
0x64CEBB: mov     edx, [eax+408h]
0x64CEC1: mov     ecx, ebx
0x64CEC3: call    edx
0x64CEC5: jmp     short loc_64CECC
0x64CEC7: call    sub_689A00
0x64CECC: cmp     byte ptr ds:0B15800h, 0
0x64CED3: jz      short loc_64CF3A
0x64CED5: mov     ecx, ds:0B333C4h; this
0x64CEDB: call    PlayerCharacter__IsSleeping?
0x64CEE0: mov     ecx, [esp+24h+var_C]
0x64CEE4: mov     edx, [esp+24h+var_8]
0x64CEE8: push    eax
0x64CEE9: sub     esp, 0Ch
0x64CEEC: mov     eax, esp
0x64CEEE: mov     [eax], ecx
0x64CEF0: mov     ecx, [esp+34h+var_4]
0x64CEF4: mov     [eax+4], edx
0x64CEF7: mov     edx, [esp+34h+arg_14]
0x64CEFB: push    edx
0x64CEFC: push    ebp
0x64CEFD: mov     [eax+8], ecx
0x64CF00: mov     ecx, ds:0B3BF80h
0x64CF06: push    esi
0x64CF07: call    sub_6836E0
0x64CF0C: mov     ecx, ds:0B3BF80h
0x64CF12: lea     eax, [esp+24h+arg_0]
0x64CF16: push    eax
0x64CF17: push    esi
0x64CF18: mov     byte ptr [esp+2Ch+arg_0], 0
0x64CF1D: call    sub_682820
0x64CF22: test    al, al
0x64CF24: jz      short loc_64CF85
0x64CF26: cmp     byte ptr [esp+24h+arg_0], 0
0x64CF2B: jmp     short loc_64CF50
0x64CF2D: push    0; int
0x64CF2F: push    0; int
0x64CF31: mov     ecx, esi; int
0x64CF33: call    sub_5F7CF0
0x64CF38: jmp     short loc_64CF85
0x64CF3A: mov     ecx, [esp+24h+arg_14]
0x64CF3E: push    ecx
0x64CF3F: mov     ecx, [ebx+34h]
0x64CF42: push    ebp
0x64CF43: lea     edx, [esp+2Ch+var_C]
0x64CF47: push    edx
0x64CF48: push    esi
0x64CF49: call    sub_68B030
0x64CF4E: test    al, al
0x64CF50: jz      short loc_64CF2D
0x64CF52: mov     ecx, [ebx+34h]
0x64CF55: mov     byte ptr [esp+24h+arg_10], 1
0x64CF5A: call    sub_68A160
0x64CF5F: mov     ecx, [eax]
0x64CF61: mov     [esp+24h+arg_4], ecx
0x64CF65: mov     edx, [eax+4]
0x64CF68: mov     ecx, [ebx+34h]
0x64CF6B: mov     [esp+24h+arg_8], edx
0x64CF6F: mov     eax, [eax+8]
0x64CF72: mov     [esp+24h+arg_C], eax
0x64CF76: mov     edx, [ecx]
0x64CF78: mov     edx, [edx+14h]
0x64CF7B: push    0
0x64CF7D: lea     eax, [esp+28h+arg_4]
0x64CF81: push    eax
0x64CF82: push    esi
0x64CF83: call    edx
0x64CF85: mov     ecx, [ebx+34h]
0x64CF88: test    ecx, ecx
0x64CF8A: jz      short loc_64CF95
0x64CF8C: mov     eax, [ecx]
0x64CF8E: mov     edx, [eax+30h]
0x64CF91: push    0
0x64CF93: call    edx
0x64CF95: mov     al, byte ptr [esp+24h+arg_10]
0x64CF99: test    al, al
0x64CF9B: jz      short loc_64CFA4
0x64CF9D: mov     byte ptr [ebx+0D0h], 0
0x64CFA4: pop     edi
0x64CFA5: pop     esi
0x64CFA6: pop     ebp
0x64CFA7: pop     ebx
0x64CFA8: add     esp, 14h
0x64CFAB: retn    18h
