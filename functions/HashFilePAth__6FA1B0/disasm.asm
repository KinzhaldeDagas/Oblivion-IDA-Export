0x6FA1B0: sub     esp, 22Ch
0x6FA1B6: mov     eax, ds:0B30AACh
0x6FA1BB: xor     eax, esp
0x6FA1BD: mov     [esp+22Ch+var_4], eax
0x6FA1C4: mov     eax, [esp+22Ch+FullPath]
0x6FA1CB: push    ebx
0x6FA1CC: push    ebp
0x6FA1CD: mov     ebp, [esp+234h+arg_4]
0x6FA1D4: push    esi
0x6FA1D5: mov     esi, [esp+238h+arg_8]
0x6FA1DC: lea     ecx, [esp+238h+Ext]
0x6FA1E0: push    ecx; Ext
0x6FA1E1: lea     edx, [esp+23Ch+Filename]
0x6FA1E5: push    edx; Filename
0x6FA1E6: lea     ecx, [esp+240h+Dir]
0x6FA1ED: push    ecx; Dir
0x6FA1EE: lea     edx, [esp+244h+Drive]
0x6FA1F2: xor     ebx, ebx
0x6FA1F4: push    edx; Drive
0x6FA1F5: push    eax; FullPath
0x6FA1F6: mov     [esp+24Ch+Drive], bl
0x6FA1FA: mov     [esp+24Ch+Dir], bl
0x6FA201: mov     [esp+24Ch+Filename], bl
0x6FA205: mov     [esp+24Ch+Ext], bl
0x6FA209: call    __splitpath
0x6FA20E: push    esi
0x6FA20F: lea     eax, [esp+250h+Ext]
0x6FA213: push    eax
0x6FA214: lea     ecx, [esp+254h+Filename]
0x6FA218: push    ecx
0x6FA219: call    sub_6FA080
0x6FA21E: add     esp, 20h
0x6FA221: xor     eax, eax
0x6FA223: mov     cl, [esp+eax+238h+Drive]
0x6FA227: mov     [esp+eax+238h+Filename], cl
0x6FA22B: add     eax, 1
0x6FA22E: cmp     cl, bl
0x6FA230: jnz     short loc_6FA223
0x6FA232: lea     eax, [esp+238h+Dir]
0x6FA239: mov     edx, eax
0x6FA23B: jmp     short loc_6FA240
0x6FA23D: align 10h
0x6FA240: mov     cl, [eax]
0x6FA242: add     eax, 1
0x6FA245: cmp     cl, bl
0x6FA247: jnz     short loc_6FA240
0x6FA249: push    edi
0x6FA24A: lea     edi, [esp+23Ch+Filename]
0x6FA24E: sub     eax, edx
0x6FA250: add     edi, 0FFFFFFFFh
0x6FA253: mov     cl, [edi+1]
0x6FA256: add     edi, 1
0x6FA259: cmp     cl, bl
0x6FA25B: jnz     short loc_6FA253
0x6FA25D: mov     ecx, eax
0x6FA25F: shr     ecx, 2
0x6FA262: mov     esi, edx
0x6FA264: rep movsd
0x6FA266: mov     ecx, eax
0x6FA268: and     ecx, 3
0x6FA26B: rep movsb
0x6FA26D: cmp     [esp+23Ch+Filename], bl
0x6FA271: pop     edi
0x6FA272: jnz     short loc_6FA27B
0x6FA274: mov     word ptr [esp+238h+Filename], 2Eh ; '.'
0x6FA27B: lea     eax, [esp+238h+Filename]
0x6FA27F: lea     edx, [eax+1]
0x6FA282: mov     cl, [eax]
0x6FA284: add     eax, 1
0x6FA287: cmp     cl, bl
0x6FA289: jnz     short loc_6FA282
0x6FA28B: sub     eax, edx
0x6FA28D: cmp     [esp+eax+238h+var_20D], 5Ch ; '\'
0x6FA292: lea     eax, [esp+eax+238h+var_20D]
0x6FA296: jnz     short loc_6FA29A
0x6FA298: mov     [eax], bl
0x6FA29A: push    ebp
0x6FA29B: lea     edx, [esp+23Ch+Filename]
0x6FA29F: push    ebx
0x6FA2A0: push    edx
0x6FA2A1: call    sub_6FA080
0x6FA2A6: mov     ecx, [esp+244h+var_4]
0x6FA2AD: add     esp, 0Ch
0x6FA2B0: pop     esi
0x6FA2B1: pop     ebp
0x6FA2B2: pop     ebx
0x6FA2B3: xor     ecx, esp
0x6FA2B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FA2BA: add     esp, 22Ch
0x6FA2C0: retn
