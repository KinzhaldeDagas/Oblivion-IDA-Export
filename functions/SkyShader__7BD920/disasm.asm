0x7BD920: push    0FFFFFFFFh
0x7BD922: push    offset SEH_8122A0
0x7BD927: mov     eax, large fs:0
0x7BD92D: push    eax
0x7BD92E: push    ecx
0x7BD92F: push    ebx
0x7BD930: push    esi
0x7BD931: push    edi
0x7BD932: mov     eax, ds:0B30AACh
0x7BD937: xor     eax, esp
0x7BD939: push    eax
0x7BD93A: lea     eax, [esp+20h+var_C]
0x7BD93E: mov     large fs:0, eax
0x7BD944: push    8; Size
0x7BD946: call    FormHeapAlloc
0x7BD94B: add     esp, 4
0x7BD94E: mov     [esp+20h+var_10], eax
0x7BD952: xor     esi, esi
0x7BD954: cmp     eax, esi
0x7BD956: mov     [esp+20h+var_4], esi
0x7BD95A: jz      short loc_7BD965
0x7BD95C: mov     ecx, eax
0x7BD95E: call    ShaderDefinition__Init
0x7BD963: mov     esi, eax
0x7BD965: mov     eax, ds:0B43104h
0x7BD96A: push    1; StreamCount
0x7BD96C: push    3; a2
0x7BD96E: push    eax; a1
0x7BD96F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7BD977: call    CreateDX9ShaderDeclaration
0x7BD97C: mov     edi, [esi]
0x7BD97E: mov     ebx, eax
0x7BD980: add     esp, 0Ch
0x7BD983: cmp     edi, ebx
0x7BD985: jz      short loc_7BD9B7
0x7BD987: test    edi, edi
0x7BD989: jz      short loc_7BD9A7
0x7BD98B: lea     ecx, [edi+4]
0x7BD98E: push    ecx; lpAddend
0x7BD98F: call    dword ptr ds:0A2807Ch
0x7BD995: test    eax, eax
0x7BD997: jnz     short loc_7BD9A7
0x7BD999: test    edi, edi
0x7BD99B: jz      short loc_7BD9A7
0x7BD99D: mov     edx, [edi]
0x7BD99F: mov     eax, [edx]
0x7BD9A1: push    1
0x7BD9A3: mov     ecx, edi
0x7BD9A5: call    eax
0x7BD9A7: test    ebx, ebx
0x7BD9A9: mov     [esi], ebx
0x7BD9AB: jz      short loc_7BD9B7
0x7BD9AD: add     ebx, 4
0x7BD9B0: push    ebx; lpAddend
0x7BD9B1: call    dword ptr ds:0A28078h
0x7BD9B7: mov     ecx, [esi]
0x7BD9B9: mov     edx, [ecx]
0x7BD9BB: mov     eax, [edx+50h]
0x7BD9BE: push    0
0x7BD9C0: push    2
0x7BD9C2: push    0
0x7BD9C4: push    0
0x7BD9C6: push    0
0x7BD9C8: call    eax
0x7BD9CA: mov     ecx, [esi]
0x7BD9CC: mov     edx, [ecx]
0x7BD9CE: mov     eax, [edx+50h]
0x7BD9D1: push    0
0x7BD9D3: push    3
0x7BD9D5: push    4
0x7BD9D7: push    5
0x7BD9D9: push    1
0x7BD9DB: call    eax
0x7BD9DD: mov     ecx, [esi]
0x7BD9DF: mov     edx, [ecx]
0x7BD9E1: mov     eax, [edx+50h]
0x7BD9E4: push    0
0x7BD9E6: push    1
0x7BD9E8: push    5
0x7BD9EA: push    7
0x7BD9EC: push    2
0x7BD9EE: call    eax
0x7BD9F0: mov     ecx, [esi]
0x7BD9F2: test    ecx, ecx
0x7BD9F4: jz      short loc_7BDA0F
0x7BD9F6: mov     edx, [ecx]
0x7BD9F8: mov     eax, [edx+4]
0x7BD9FB: call    eax
0x7BD9FD: test    eax, eax
0x7BD9FF: jz      short loc_7BDA0F
0x7BDA01: cmp     eax, offset dword_B3F684
0x7BDA06: jz      short loc_7BDA0F
0x7BDA08: mov     eax, [eax+4]
0x7BDA0B: test    eax, eax
0x7BDA0D: jnz     short loc_7BDA01
0x7BDA0F: push    0E8h ; 'è'; Size
0x7BDA14: call    FormHeapAlloc
0x7BDA19: add     esp, 4
0x7BDA1C: mov     [esp+20h+var_10], eax
0x7BDA20: test    eax, eax
0x7BDA22: mov     [esp+20h+var_4], 1
0x7BDA2A: jz      short loc_7BDA37
0x7BDA2C: mov     ecx, eax; this
0x7BDA2E: call    ??0SkyShader@@QAE@XZ; SkyShader::SkyShader(void)
0x7BDA33: mov     edi, eax
0x7BDA35: jmp     short loc_7BDA39
0x7BDA37: xor     edi, edi
0x7BDA39: mov     edx, [edi]
0x7BDA3B: mov     eax, [edx+84h]
0x7BDA41: mov     ecx, edi
0x7BDA43: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BDA4B: call    eax
0x7BDA4D: mov     ecx, edi; this
0x7BDA4F: call    sub_7BB280
0x7BDA54: mov     ecx, edi
0x7BDA56: call    sub_7BC1B0
0x7BDA5B: mov     edx, [edi]
0x7BDA5D: mov     eax, [edx+88h]
0x7BDA63: mov     ecx, edi
0x7BDA65: call    eax
0x7BDA67: mov     edx, [edi]
0x7BDA69: mov     eax, [esi]
0x7BDA6B: mov     edx, [edx+54h]
0x7BDA6E: push    eax
0x7BDA6F: mov     ecx, edi
0x7BDA71: call    edx
0x7BDA73: mov     ebx, [esi+4]
0x7BDA76: cmp     ebx, edi
0x7BDA78: jz      short loc_7BDAA7
0x7BDA7A: test    ebx, ebx
0x7BDA7C: jz      short loc_7BDA9A
0x7BDA7E: lea     eax, [ebx+4]
0x7BDA81: push    eax; lpAddend
0x7BDA82: call    dword ptr ds:0A2807Ch
0x7BDA88: test    eax, eax
0x7BDA8A: jnz     short loc_7BDA9A
0x7BDA8C: test    ebx, ebx
0x7BDA8E: jz      short loc_7BDA9A
0x7BDA90: mov     edx, [ebx]
0x7BDA92: mov     eax, [edx]
0x7BDA94: push    1
0x7BDA96: mov     ecx, ebx
0x7BDA98: call    eax
0x7BDA9A: mov     [esi+4], edi
0x7BDA9D: add     edi, 4
0x7BDAA0: push    edi; lpAddend
0x7BDAA1: call    dword ptr ds:0A28078h
0x7BDAA7: mov     eax, esi
0x7BDAA9: mov     ecx, dword ptr [esp+20h+var_C]
0x7BDAAD: mov     large fs:0, ecx
0x7BDAB4: pop     ecx
0x7BDAB5: pop     edi
0x7BDAB6: pop     esi
0x7BDAB7: pop     ebx
0x7BDAB8: add     esp, 10h
0x7BDABB: retn
