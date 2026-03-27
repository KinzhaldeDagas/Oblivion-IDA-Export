0x42D000: sub     esp, 128h
0x42D006: mov     eax, ___security_cookie
0x42D00B: xor     eax, esp
0x42D00D: mov     [esp+128h+var_4], eax
0x42D014: mov     eax, [esp+128h+arg_8]
0x42D01B: push    ebp
0x42D01C: mov     ebp, ecx
0x42D01E: mov     ecx, [esp+12Ch+arg_C]
0x42D025: mov     [esp+12Ch+var_120], eax
0x42D029: mov     al, [ebp+194h]
0x42D02F: test    al, 1
0x42D031: mov     [esp+12Ch+FullPath], ecx
0x42D035: jz      short loc_42D051
0x42D037: xor     al, al
0x42D039: pop     ebp
0x42D03A: mov     ecx, [esp+128h+var_4]
0x42D041: xor     ecx, esp
0x42D043: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42D048: add     esp, 128h
0x42D04E: retn    14h
0x42D051: push    ebx
0x42D052: push    esi
0x42D053: mov     esi, [esp+134h+arg_0]
0x42D05A: shl     esi, 4
0x42D05D: add     esi, [ebp+178h]
0x42D063: push    edi
0x42D064: mov     edi, [ebp+190h]
0x42D06A: mov     ebx, [esi+8]
0x42D06D: cmp     edi, ebx
0x42D06F: mov     [esp+138h+var_125], 0
0x42D074: mov     [esp+138h+var_124], edi
0x42D078: jnb     short loc_42D0E0
0x42D07A: shl     edi, 4
0x42D07D: add     edi, [esi+0Ch]
0x42D080: cmp     byte ptr [esp+138h+arg_10], 0
0x42D088: jnz     short loc_42D09A
0x42D08A: mov     edx, [edi+0Ch]
0x42D08D: shr     edx, 1Fh
0x42D090: shr     al, 3
0x42D093: xor     dl, al
0x42D095: test    dl, 1
0x42D098: jnz     short loc_42D0E0
0x42D09A: test    dword ptr [edi+0Ch], 7FFFFFFFh
0x42D0A1: jz      short loc_42D0E0
0x42D0A3: mov     ecx, [esp+138h+arg_4]
0x42D0AA: push    edi
0x42D0AB: call    sub_42BC10
0x42D0B0: test    eax, eax
0x42D0B2: jnz     short loc_42D0E0
0x42D0B4: mov     eax, [esp+138h+FullPath]
0x42D0B8: push    eax
0x42D0B9: push    edi
0x42D0BA: mov     ecx, ebp
0x42D0BC: call    BSA_CheckFileIsOverridden
0x42D0C1: test    al, al
0x42D0C3: jnz     short loc_42D0D9
0x42D0C5: mov     ecx, [esp+138h+var_124]
0x42D0C9: mov     edx, [esp+138h+var_120]
0x42D0CD: mov     [edx], ecx
0x42D0CF: mov     [esp+138h+var_125], 1
0x42D0D4: jmp     loc_42D1F6
0x42D0D9: xor     al, al
0x42D0DB: jmp     loc_42D1FA
0x42D0E0: test    ebx, ebx
0x42D0E2: jz      loc_42D1F6
0x42D0E8: mov     eax, [esi+0Ch]
0x42D0EB: mov     [esp+138h+var_10C], eax
0x42D0EF: mov     eax, [esp+138h+arg_4]
0x42D0F6: mov     edx, [eax]
0x42D0F8: mov     eax, [eax+4]
0x42D0FB: xor     ecx, ecx
0x42D0FD: mov     [esp+138h+var_124], ebx
0x42D101: mov     [esp+138h+var_11C], edx
0x42D105: mov     [esp+138h+var_118], eax
0x42D109: lea     esp, [esp+0]
0x42D110: mov     eax, [esp+138h+var_124]
0x42D114: sub     eax, ecx
0x42D116: shr     eax, 1
0x42D118: lea     edi, [eax+ecx]
0x42D11B: mov     esi, edi
0x42D11D: shl     esi, 4
0x42D120: add     esi, [esp+138h+var_10C]
0x42D124: mov     edx, [esi+4]
0x42D127: cmp     [esp+138h+var_118], edx
0x42D12B: mov     ebx, [esi]
0x42D12D: ja      loc_42D22B
0x42D133: jb      short loc_42D13F
0x42D135: cmp     [esp+138h+var_11C], ebx
0x42D139: jnb     loc_42D215
0x42D13F: or      edx, 0FFFFFFFFh
0x42D142: mov     [esp+138h+var_124], edi
0x42D146: test    eax, eax
0x42D148: jnz     short loc_42D110
0x42D14A: test    edx, edx
0x42D14C: jnz     loc_42D1F6
0x42D152: mov     ecx, [esp+138h+arg_10]
0x42D159: push    ecx
0x42D15A: mov     ebx, ebp
0x42D15C: push    esi
0x42D15D: mov     ecx, ebx
0x42D15F: call    sub_42C2D0
0x42D164: test    al, al
0x42D166: jz      loc_42D1F6
0x42D16C: mov     ebp, [esp+138h+FullPath]
0x42D170: push    ebp
0x42D171: push    esi
0x42D172: mov     ecx, ebx
0x42D174: call    BSA_CheckFileIsOverridden
0x42D179: test    al, al
0x42D17B: jnz     short loc_42D1F6
0x42D17D: test    ebp, ebp
0x42D17F: mov     edx, [esp+138h+var_120]
0x42D183: mov     [edx], edi
0x42D185: mov     [ebx+190h], edi
0x42D18B: mov     [esp+138h+var_125], 1
0x42D190: jz      short loc_42D1F6
0x42D192: cmp     bCheckRuntimeCollisions_Archive, al
0x42D198: jz      short loc_42D1F6
0x42D19A: mov     eax, [ebx+160h]
0x42D1A0: shr     eax, 1
0x42D1A2: test    al, 1
0x42D1A4: jz      short loc_42D1F6
0x42D1A6: push    0; Ext
0x42D1A8: lea     ecx, [esp+13Ch+Filename]
0x42D1AC: push    ecx; Filename
0x42D1AD: push    0; Dir
0x42D1AF: push    0; Drive
0x42D1B1: push    ebp; FullPath
0x42D1B2: call    __splitpath
0x42D1B7: mov     edx, [esp+14Ch+arg_0]
0x42D1BE: add     esp, 14h
0x42D1C1: push    edi
0x42D1C2: push    edx
0x42D1C3: mov     ecx, ebx
0x42D1C5: call    sub_42CC00
0x42D1CA: mov     esi, eax
0x42D1CC: lea     eax, [esp+138h+Filename]
0x42D1D0: push    eax; Str2
0x42D1D1: push    esi; Str1
0x42D1D2: call    __strcmp
0x42D1D7: add     esp, 8
0x42D1DA: test    eax, eax
0x42D1DC: jz      short loc_42D1F6
0x42D1DE: lea     ecx, [esp+138h+Filename]
0x42D1E2: push    ecx
0x42D1E3: push    esi; ArgList
0x42D1E4: push    offset aHashmapCollisi; "HashMap Collision between %s and %s"
0x42D1E9: call    PrintError
0x42D1EE: add     esp, 0Ch
0x42D1F1: mov     [esp+138h+var_125], 0
0x42D1F6: mov     al, [esp+138h+var_125]
0x42D1FA: mov     ecx, [esp+138h+var_4]
0x42D201: pop     edi
0x42D202: pop     esi
0x42D203: pop     ebx
0x42D204: pop     ebp
0x42D205: xor     ecx, esp
0x42D207: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42D20C: add     esp, 128h
0x42D212: retn    14h
0x42D215: cmp     [esp+138h+var_118], edx
0x42D219: jb      loc_42D152
0x42D21F: ja      short loc_42D22B
0x42D221: cmp     [esp+138h+var_11C], ebx
0x42D225: jbe     loc_42D152
0x42D22B: mov     edx, 1
0x42D230: mov     ecx, edi
0x42D232: jmp     loc_42D146
