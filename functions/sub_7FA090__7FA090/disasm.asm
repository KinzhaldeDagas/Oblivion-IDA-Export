0x7FA090: sub     esp, 2A4h
0x7FA096: mov     eax, ds:0B30AACh
0x7FA09B: xor     eax, esp
0x7FA09D: mov     [esp+2A4h+var_4], eax
0x7FA0A4: push    ebx
0x7FA0A5: push    ebp
0x7FA0A6: push    esi
0x7FA0A7: push    edi
0x7FA0A8: xor     ebp, ebp
0x7FA0AA: push    3Ch ; '<'
0x7FA0AC: lea     eax, [esp+2B8h+var_248]
0x7FA0B0: push    ebp
0x7FA0B1: push    eax
0x7FA0B2: mov     esi, ecx
0x7FA0B4: mov     [esp+2C0h+FullPath], offset aImagespace1x_0; "imagespace\\1x\\v\\base_old.v.hlsl"
0x7FA0BC: mov     [esp+2C0h+var_254], ebp
0x7FA0C0: mov     [esp+2C0h+var_250], ebp
0x7FA0C4: mov     [esp+2C0h+var_24C], ebp
0x7FA0C8: call    __memset
0x7FA0CD: mov     edx, [esp+2C0h+FullPath]
0x7FA0D1: lea     ecx, [esp+2C0h+FileName]
0x7FA0D8: push    ecx; int
0x7FA0D9: push    edx; FullPath
0x7FA0DA: call    sub_801030
0x7FA0DF: lea     eax, [esp+2C8h+var_20C]
0x7FA0E6: push    offset aDebug_vso; "DEBUG.vso"
0x7FA0EB: push    eax
0x7FA0EC: call    __sprintf
0x7FA0F1: add     esp, 1Ch
0x7FA0F4: push    ebp; int
0x7FA0F5: push    ebp; int
0x7FA0F6: lea     ecx, [esp+2BCh+var_20C]
0x7FA0FD: push    ecx; int
0x7FA0FE: push    offset aVs_1_1; "vs_1_1"
0x7FA103: lea     edx, [esp+2C4h+var_254]
0x7FA107: push    edx; int
0x7FA108: lea     eax, [esp+2C8h+FileName]
0x7FA10F: push    eax; lpFileName
0x7FA110: mov     ecx, esi
0x7FA112: call    CreateVertexShader
0x7FA117: mov     edi, [esi+0C0h]
0x7FA11D: mov     ebx, eax
0x7FA11F: cmp     edi, ebx
0x7FA121: jz      short loc_7FA157
0x7FA123: cmp     edi, ebp
0x7FA125: jz      short loc_7FA143
0x7FA127: lea     ecx, [edi+4]
0x7FA12A: push    ecx; lpAddend
0x7FA12B: call    dword ptr ds:0A2807Ch
0x7FA131: test    eax, eax
0x7FA133: jnz     short loc_7FA143
0x7FA135: cmp     edi, ebp
0x7FA137: jz      short loc_7FA143
0x7FA139: mov     edx, [edi]
0x7FA13B: mov     eax, [edx]
0x7FA13D: push    1
0x7FA13F: mov     ecx, edi
0x7FA141: call    eax
0x7FA143: cmp     ebx, ebp
0x7FA145: mov     [esi+0C0h], ebx
0x7FA14B: jz      short loc_7FA157
0x7FA14D: add     ebx, 4
0x7FA150: push    ebx; lpAddend
0x7FA151: call    dword ptr ds:0A28078h
0x7FA157: push    3Ch ; '<'
0x7FA159: lea     ecx, [esp+2B8h+var_294]
0x7FA15D: push    ebp
0x7FA15E: push    ecx
0x7FA15F: mov     [esp+2C0h+var_2A4], offset aImagespace1xPC; "imagespace\\1x\\p\\copy.p.hlsl"
0x7FA167: mov     [esp+2C0h+var_2A0], ebp
0x7FA16B: mov     [esp+2C0h+var_29C], ebp
0x7FA16F: mov     [esp+2C0h+var_298], ebp
0x7FA173: call    __memset
0x7FA178: mov     eax, [esp+2C0h+var_2A4]
0x7FA17C: lea     edx, [esp+2C0h+FileName]
0x7FA183: push    edx; int
0x7FA184: push    eax; FullPath
0x7FA185: call    sub_801030
0x7FA18A: lea     ecx, [esp+2C8h+var_20C]
0x7FA191: push    offset aDebug_pso; "DEBUG.pso"
0x7FA196: push    ecx
0x7FA197: call    __sprintf
0x7FA19C: add     esp, 1Ch
0x7FA19F: push    ebp; int
0x7FA1A0: push    ebp; int
0x7FA1A1: lea     edx, [esp+2BCh+var_20C]
0x7FA1A8: push    edx; int
0x7FA1A9: push    offset aPs_1_3; "ps_1_3"
0x7FA1AE: lea     eax, [esp+2C4h+var_2A0]
0x7FA1B2: push    eax; int
0x7FA1B3: lea     ecx, [esp+2C8h+FileName]
0x7FA1BA: push    ecx; lpFileName
0x7FA1BB: mov     ecx, esi
0x7FA1BD: call    CreatePixelShader
0x7FA1C2: mov     edi, [esi+0C4h]
0x7FA1C8: mov     ebx, eax
0x7FA1CA: cmp     edi, ebx
0x7FA1CC: jz      short loc_7FA202
0x7FA1CE: cmp     edi, ebp
0x7FA1D0: jz      short loc_7FA1EE
0x7FA1D2: lea     edx, [edi+4]
0x7FA1D5: push    edx; lpAddend
0x7FA1D6: call    dword ptr ds:0A2807Ch
0x7FA1DC: test    eax, eax
0x7FA1DE: jnz     short loc_7FA1EE
0x7FA1E0: cmp     edi, ebp
0x7FA1E2: jz      short loc_7FA1EE
0x7FA1E4: mov     eax, [edi]
0x7FA1E6: mov     edx, [eax]
0x7FA1E8: push    1
0x7FA1EA: mov     ecx, edi
0x7FA1EC: call    edx
0x7FA1EE: cmp     ebx, ebp
0x7FA1F0: mov     [esi+0C4h], ebx
0x7FA1F6: jz      short loc_7FA202
0x7FA1F8: add     ebx, 4
0x7FA1FB: push    ebx; lpAddend
0x7FA1FC: call    dword ptr ds:0A28078h
0x7FA202: mov     ecx, [esp+2B4h+var_4]
0x7FA209: pop     edi
0x7FA20A: pop     esi
0x7FA20B: pop     ebp
0x7FA20C: pop     ebx
0x7FA20D: xor     ecx, esp
0x7FA20F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7FA214: add     esp, 2A4h
0x7FA21A: retn
