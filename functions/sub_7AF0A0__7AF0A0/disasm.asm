0x7AF0A0: sub     esp, 2A4h
0x7AF0A6: mov     eax, ds:0B30AACh
0x7AF0AB: xor     eax, esp
0x7AF0AD: mov     [esp+2A4h+var_4], eax
0x7AF0B4: push    ebx
0x7AF0B5: push    ebp
0x7AF0B6: push    esi
0x7AF0B7: push    edi
0x7AF0B8: xor     ebp, ebp
0x7AF0BA: push    3Ch ; '<'
0x7AF0BC: lea     eax, [esp+2B8h+var_294]
0x7AF0C0: push    ebp
0x7AF0C1: push    eax
0x7AF0C2: mov     esi, ecx
0x7AF0C4: mov     [esp+2C0h+FullPath], offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7AF0CC: mov     [esp+2C0h+var_2A0], ebp
0x7AF0D0: mov     [esp+2C0h+var_29C], ebp
0x7AF0D4: mov     [esp+2C0h+var_298], ebp
0x7AF0D8: call    __memset
0x7AF0DD: push    44h ; 'D'
0x7AF0DF: lea     ecx, [esp+2C4h+var_250]
0x7AF0E3: push    ebp
0x7AF0E4: push    ecx
0x7AF0E5: mov     [esp+2CCh+var_258], offset aImagespace2xPM; "imagespace\\2x\\p\\map_P20.p.hlsl"
0x7AF0ED: mov     [esp+2CCh+var_254], ebp
0x7AF0F1: call    __memset
0x7AF0F6: mov     eax, [esp+2CCh+FullPath]
0x7AF0FA: add     esp, 18h
0x7AF0FD: cmp     eax, ebp
0x7AF0FF: jz      loc_7AF18C
0x7AF105: lea     edx, [esp+2B4h+FileName]
0x7AF10C: push    edx; int
0x7AF10D: push    eax; FullPath
0x7AF10E: call    sub_801030
0x7AF113: push    ebp
0x7AF114: lea     eax, [esp+2C0h+var_20C]
0x7AF11B: push    offset aMap03i_vso; "MAP%03i.vso"
0x7AF120: push    eax
0x7AF121: call    __sprintf
0x7AF126: add     esp, 14h
0x7AF129: push    ebp; int
0x7AF12A: push    ebp; int
0x7AF12B: lea     ecx, [esp+2BCh+var_20C]
0x7AF132: push    ecx; int
0x7AF133: push    offset aVs_1_1; "vs_1_1"
0x7AF138: lea     edx, [esp+2C4h+var_2A0]
0x7AF13C: push    edx; int
0x7AF13D: lea     eax, [esp+2C8h+FileName]
0x7AF144: push    eax; lpFileName
0x7AF145: mov     ecx, esi
0x7AF147: call    CreateVertexShader
0x7AF14C: mov     edi, [esi+98h]
0x7AF152: mov     ebx, eax
0x7AF154: cmp     edi, ebx
0x7AF156: jz      short loc_7AF18C
0x7AF158: cmp     edi, ebp
0x7AF15A: jz      short loc_7AF178
0x7AF15C: lea     ecx, [edi+4]
0x7AF15F: push    ecx; lpAddend
0x7AF160: call    dword ptr ds:0A2807Ch
0x7AF166: test    eax, eax
0x7AF168: jnz     short loc_7AF178
0x7AF16A: cmp     edi, ebp
0x7AF16C: jz      short loc_7AF178
0x7AF16E: mov     edx, [edi]
0x7AF170: mov     eax, [edx]
0x7AF172: push    1
0x7AF174: mov     ecx, edi
0x7AF176: call    eax
0x7AF178: cmp     ebx, ebp
0x7AF17A: mov     [esi+98h], ebx
0x7AF180: jz      short loc_7AF18C
0x7AF182: add     ebx, 4
0x7AF185: push    ebx; lpAddend
0x7AF186: call    dword ptr ds:0A28078h
0x7AF18C: mov     eax, [esp+2B4h+var_258]
0x7AF190: cmp     eax, ebp
0x7AF192: jz      loc_7AF21F
0x7AF198: lea     ecx, [esp+2B4h+FileName]
0x7AF19F: push    ecx; int
0x7AF1A0: push    eax; FullPath
0x7AF1A1: call    sub_801030
0x7AF1A6: push    ebp
0x7AF1A7: lea     edx, [esp+2C0h+var_20C]
0x7AF1AE: push    offset aMap03i_pso; "MAP%03i.pso"
0x7AF1B3: push    edx
0x7AF1B4: call    __sprintf
0x7AF1B9: add     esp, 14h
0x7AF1BC: push    ebp; int
0x7AF1BD: push    ebp; int
0x7AF1BE: lea     eax, [esp+2BCh+var_20C]
0x7AF1C5: push    eax; int
0x7AF1C6: push    offset aPs_2_0; "ps_2_0"
0x7AF1CB: lea     ecx, [esp+2C4h+var_254]
0x7AF1CF: push    ecx; int
0x7AF1D0: lea     edx, [esp+2C8h+FileName]
0x7AF1D7: push    edx; lpFileName
0x7AF1D8: mov     ecx, esi
0x7AF1DA: call    CreatePixelShader
0x7AF1DF: mov     edi, [esi+9Ch]
0x7AF1E5: mov     ebx, eax
0x7AF1E7: cmp     edi, ebx
0x7AF1E9: jz      short loc_7AF21F
0x7AF1EB: cmp     edi, ebp
0x7AF1ED: jz      short loc_7AF20B
0x7AF1EF: lea     eax, [edi+4]
0x7AF1F2: push    eax; lpAddend
0x7AF1F3: call    dword ptr ds:0A2807Ch
0x7AF1F9: test    eax, eax
0x7AF1FB: jnz     short loc_7AF20B
0x7AF1FD: cmp     edi, ebp
0x7AF1FF: jz      short loc_7AF20B
0x7AF201: mov     edx, [edi]
0x7AF203: mov     eax, [edx]
0x7AF205: push    1
0x7AF207: mov     ecx, edi
0x7AF209: call    eax
0x7AF20B: cmp     ebx, ebp
0x7AF20D: mov     [esi+9Ch], ebx
0x7AF213: jz      short loc_7AF21F
0x7AF215: add     ebx, 4
0x7AF218: push    ebx; lpAddend
0x7AF219: call    dword ptr ds:0A28078h
0x7AF21F: mov     ecx, [esp+2B4h+var_4]
0x7AF226: pop     edi
0x7AF227: pop     esi
0x7AF228: pop     ebp
0x7AF229: pop     ebx
0x7AF22A: xor     ecx, esp
0x7AF22C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7AF231: add     esp, 2A4h
0x7AF237: retn
