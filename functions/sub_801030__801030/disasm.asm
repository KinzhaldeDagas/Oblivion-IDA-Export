0x801030: sub     esp, 2A4h
0x801036: mov     eax, ds:0B30AACh
0x80103B: xor     eax, esp
0x80103D: mov     [esp+2A4h+var_4], eax
0x801044: mov     eax, [esp+2A4h+FullPath]
0x80104B: push    ebx
0x80104C: mov     ebx, [esp+2A8h+arg_4]
0x801053: test    ebx, ebx
0x801055: jz      loc_8010F3
0x80105B: lea     ecx, [esp+2A8h+Ext]
0x80105F: push    ecx; Ext
0x801060: lea     edx, [esp+2ACh+Filename]
0x801064: push    edx; Filename
0x801065: lea     ecx, [esp+2B0h+Dir]
0x80106C: push    ecx; Dir
0x80106D: lea     edx, [esp+2B4h+Drive]
0x801071: push    edx; Drive
0x801072: push    eax; FullPath
0x801073: call    __splitpath
0x801078: push    0; Ext
0x80107A: push    0; Filename
0x80107C: lea     eax, [esp+2C4h+var_20C]
0x801083: push    eax; Dir
0x801084: lea     ecx, [esp+2C8h+Drive]
0x801088: push    ecx; Drive
0x801089: push    offset FullPath; FullPath
0x80108E: call    __splitpath
0x801093: lea     eax, [esp+2D0h+Dir]
0x80109A: add     esp, 28h
0x80109D: mov     edx, eax
0x80109F: nop
0x8010A0: mov     cl, [eax]
0x8010A2: add     eax, 1
0x8010A5: test    cl, cl
0x8010A7: jnz     short loc_8010A0
0x8010A9: push    esi
0x8010AA: push    edi
0x8010AB: lea     edi, [esp+2B0h+var_20C]
0x8010B2: sub     eax, edx
0x8010B4: add     edi, 0FFFFFFFFh
0x8010B7: mov     cl, [edi+1]
0x8010BA: add     edi, 1
0x8010BD: test    cl, cl
0x8010BF: jnz     short loc_8010B7
0x8010C1: mov     ecx, eax
0x8010C3: shr     ecx, 2
0x8010C6: mov     esi, edx
0x8010C8: rep movsd
0x8010CA: mov     ecx, eax
0x8010CC: and     ecx, 3
0x8010CF: lea     edx, [esp+2B0h+Ext]
0x8010D3: push    edx
0x8010D4: lea     eax, [esp+2B4h+Filename]
0x8010D8: push    eax
0x8010D9: rep movsb
0x8010DB: lea     ecx, [esp+2B8h+var_20C]
0x8010E2: push    ecx
0x8010E3: lea     edx, [esp+2BCh+Drive]
0x8010E7: push    edx
0x8010E8: push    ebx
0x8010E9: call    sub_9853B2
0x8010EE: add     esp, 14h
0x8010F1: pop     edi
0x8010F2: pop     esi
0x8010F3: mov     ecx, [esp+2A8h+var_4]
0x8010FA: pop     ebx
0x8010FB: xor     ecx, esp
0x8010FD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x801102: add     esp, 2A4h
0x801108: retn
