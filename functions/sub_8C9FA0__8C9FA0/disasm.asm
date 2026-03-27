0x8C9FA0: sub     esp, 21Ch
0x8C9FA6: mov     eax, ds:0B30AACh
0x8C9FAB: push    ebx
0x8C9FAC: push    ebp
0x8C9FAD: push    esi
0x8C9FAE: mov     esi, ecx
0x8C9FB0: mov     [esp+228h+var_4], eax
0x8C9FB7: mov     al, [esi+58h]
0x8C9FBA: test    al, al
0x8C9FBC: push    edi
0x8C9FBD: jz      loc_8CA048
0x8C9FC3: mov     al, [esi+80h]
0x8C9FC9: test    al, al
0x8C9FCB: mov     edi, [esi+68h]
0x8C9FCE: mov     ebx, [esi+6Ch]
0x8C9FD1: jz      short loc_8C9FE6
0x8C9FD3: call    sub_917FC0
0x8C9FD8: mov     ecx, [esi+60h]
0x8C9FDB: mov     ebp, [esi+64h]
0x8C9FDE: sub     eax, ecx
0x8C9FE0: sbb     edx, ebp
0x8C9FE2: add     edi, eax
0x8C9FE4: adc     ebx, edx
0x8C9FE6: call    sub_917FD0
0x8C9FEB: push    edx
0x8C9FEC: push    eax
0x8C9FED: push    ebx
0x8C9FEE: push    edi
0x8C9FEF: call    sub_917FB0
0x8C9FF4: fstp    st
0x8C9FF6: add     esp, 10h
0x8C9FF9: mov     byte ptr [esi+80h], 0
0x8CA000: call    sub_917FC0
0x8CA005: mov     edi, [esi+60h]
0x8CA008: mov     ebp, [esi+64h]
0x8CA00B: mov     ebx, [esi+68h]
0x8CA00E: mov     ecx, eax
0x8CA010: sub     ecx, edi
0x8CA012: mov     edi, edx
0x8CA014: sbb     edi, ebp
0x8CA016: mov     ebp, [esi+70h]
0x8CA019: add     ebx, ecx
0x8CA01B: mov     ecx, [esi+6Ch]
0x8CA01E: adc     ecx, edi
0x8CA020: mov     edi, [esi+78h]
0x8CA023: sub     eax, ebp
0x8CA025: mov     [esi+68h], ebx
0x8CA028: sbb     edx, [esi+74h]
0x8CA02B: add     edi, eax
0x8CA02D: mov     eax, [esi+84h]
0x8CA033: mov     [esi+6Ch], ecx
0x8CA036: mov     ecx, [esi+7Ch]
0x8CA039: adc     ecx, edx
0x8CA03B: inc     eax
0x8CA03C: mov     [esi+78h], edi
0x8CA03F: mov     [esi+7Ch], ecx
0x8CA042: mov     [esi+84h], eax
0x8CA048: mov     byte ptr [esi+58h], 1
0x8CA04C: mov     edx, [esi]
0x8CA04E: mov     ecx, esi
0x8CA050: call    dword ptr [edx+0Ch]
0x8CA053: mov     edi, [esi+10h]
0x8CA056: dec     edi
0x8CA057: mov     [esp+22Ch+var_218], edi
0x8CA05B: js      loc_8CA169
0x8CA061: mov     ebp, [esi+0Ch]
0x8CA064: lea     ebx, ds:0[edi*8]
0x8CA06B: mov     ecx, [ebp+ebx+0]
0x8CA06F: add     ebp, ebx
0x8CA071: test    ecx, ecx
0x8CA073: jz      loc_8CA108
0x8CA079: mov     eax, [ecx]
0x8CA07B: lea     edx, [esp+22Ch+var_211]
0x8CA07F: push    edx
0x8CA080: call    dword ptr [eax+8]
0x8CA083: cmp     byte ptr [eax], 0
0x8CA086: jz      short loc_8CA0EF
0x8CA088: mov     eax, [ebp+4]
0x8CA08B: mov     edx, [esp+22Ch+arg_0]
0x8CA092: lea     ecx, [eax+0Ch]
0x8CA095: mov     eax, [ecx]
0x8CA097: push    edx
0x8CA098: call    dword ptr [eax+14h]
0x8CA09B: mov     edi, [esi+0Ch]
0x8CA09E: mov     ecx, [edi+ebx]
0x8CA0A1: add     edi, ebx
0x8CA0A3: test    ecx, ecx
0x8CA0A5: jz      short loc_8CA0EB
0x8CA0A7: mov     eax, [ecx]
0x8CA0A9: lea     edx, [esp+22Ch+var_212]
0x8CA0AD: push    edx
0x8CA0AE: call    dword ptr [eax+8]
0x8CA0B1: cmp     byte ptr [eax], 0
0x8CA0B4: jz      short loc_8CA0EB
0x8CA0B6: mov     eax, [edi+4]
0x8CA0B9: mov     edi, [eax+18h]
0x8CA0BC: push    5
0x8CA0BE: mov     ecx, edi
0x8CA0C0: call    sub_918440
0x8CA0C5: push    0
0x8CA0C7: mov     ecx, edi
0x8CA0C9: call    sub_9181B0
0x8CA0CE: mov     ecx, [esp+22Ch+arg_0]
0x8CA0D5: push    ecx
0x8CA0D6: mov     ecx, edi
0x8CA0D8: call    sub_918440
0x8CA0DD: mov     ecx, edi
0x8CA0DF: call    sub_953130
0x8CA0E4: mov     edx, [eax]
0x8CA0E6: mov     ecx, eax
0x8CA0E8: call    dword ptr [edx+10h]
0x8CA0EB: mov     edi, [esp+22Ch+var_218]
0x8CA0EF: mov     ebp, [ebp+0]
0x8CA0F2: test    ebp, ebp
0x8CA0F4: jz      short loc_8CA108
0x8CA0F6: mov     eax, [ebp+0]
0x8CA0F9: lea     ecx, [esp+22Ch+var_219]
0x8CA0FD: push    ecx
0x8CA0FE: mov     ecx, ebp
0x8CA100: call    dword ptr [eax+8]
0x8CA103: cmp     byte ptr [eax], 0
0x8CA106: jnz     short loc_8CA15E
0x8CA108: push    ecx
0x8CA109: mov     eax, esp
0x8CA10B: push    200h
0x8CA110: lea     edx, [esp+234h+var_204]
0x8CA114: push    edx
0x8CA115: lea     ecx, [esp+238h+var_210]
0x8CA119: mov     byte ptr [eax], 1
0x8CA11C: call    sub_8BBFB0
0x8CA121: push    offset aClientHasDiedC; "Client has died, cleaning up (host name"...
0x8CA126: lea     ecx, [esp+230h+var_210]
0x8CA12A: call    sub_8BBDB0
0x8CA12F: mov     ecx, ds:0BA7FB0h
0x8CA135: mov     eax, [ecx]
0x8CA137: push    0F6h ; 'ö'
0x8CA13C: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8CA141: lea     edx, [esp+234h+var_204]
0x8CA145: push    edx
0x8CA146: push    0FFFFFFFFh
0x8CA148: push    0
0x8CA14A: call    dword ptr [eax+8]
0x8CA14D: lea     ecx, [esp+22Ch+var_210]
0x8CA151: call    sub_8BC000
0x8CA156: push    edi
0x8CA157: mov     ecx, esi
0x8CA159: call    sub_8C9F30
0x8CA15E: dec     edi
0x8CA15F: mov     [esp+22Ch+var_218], edi
0x8CA163: jns     loc_8CA061
0x8CA169: mov     al, [esi+58h]
0x8CA16C: test    al, al
0x8CA16E: jz      short loc_8CA1B0
0x8CA170: xor     eax, eax
0x8CA172: mov     [esi+60h], eax
0x8CA175: mov     [esi+64h], eax
0x8CA178: mov     [esi+68h], eax
0x8CA17B: mov     [esi+6Ch], eax
0x8CA17E: mov     [esi+70h], eax
0x8CA181: mov     [esi+74h], eax
0x8CA184: mov     [esi+78h], eax
0x8CA187: mov     [esi+7Ch], eax
0x8CA18A: mov     [esi+80h], al
0x8CA190: mov     [esi+84h], eax
0x8CA196: mov     byte ptr [esi+80h], 1
0x8CA19D: call    sub_917FC0
0x8CA1A2: mov     ecx, edx
0x8CA1A4: mov     [esi+60h], eax
0x8CA1A7: mov     [esi+64h], edx
0x8CA1AA: mov     [esi+70h], eax
0x8CA1AD: mov     [esi+74h], ecx
0x8CA1B0: mov     ecx, [esp+22Ch+var_4]
0x8CA1B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CA1BC: pop     edi
0x8CA1BD: pop     esi
0x8CA1BE: pop     ebp
0x8CA1BF: pop     ebx
0x8CA1C0: add     esp, 21Ch
0x8CA1C6: retn    4
