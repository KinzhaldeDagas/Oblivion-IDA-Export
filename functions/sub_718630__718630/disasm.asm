0x718630: push    0FFFFFFFFh
0x718632: push    offset SEH_8C8970
0x718637: mov     eax, large fs:0
0x71863D: push    eax
0x71863E: push    ecx
0x71863F: push    esi
0x718640: push    edi
0x718641: mov     eax, ds:0B30AACh
0x718646: xor     eax, esp
0x718648: push    eax
0x718649: lea     eax, [esp+1Ch+var_C]
0x71864D: mov     large fs:0, eax
0x718653: push    1Ch; Size
0x718655: call    FormHeapAlloc
0x71865A: mov     esi, eax
0x71865C: add     esp, 4
0x71865F: mov     [esp+1Ch+var_10], esi
0x718663: test    esi, esi
0x718665: mov     [esp+1Ch+var_4], 0
0x71866D: jz      short loc_718688
0x71866F: mov     ecx, esi; this
0x718671: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x718676: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x71867C: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x718682: mov     byte ptr [esi+1Ah], 0
0x718686: jmp     short loc_71868A
0x718688: xor     esi, esi
0x71868A: mov     eax, ds:0B3FCE4h
0x71868F: cmp     eax, esi
0x718691: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x718699: jz      short loc_7186D1
0x71869B: test    eax, eax
0x71869D: jz      short loc_7186BD
0x71869F: mov     edi, eax
0x7186A1: add     eax, 4
0x7186A4: push    eax; lpAddend
0x7186A5: call    dword ptr ds:0A2807Ch
0x7186AB: test    eax, eax
0x7186AD: jnz     short loc_7186BD
0x7186AF: test    edi, edi
0x7186B1: jz      short loc_7186BD
0x7186B3: mov     eax, [edi]
0x7186B5: mov     edx, [eax]
0x7186B7: push    1
0x7186B9: mov     ecx, edi
0x7186BB: call    edx
0x7186BD: test    esi, esi
0x7186BF: mov     ds:0B3FCE4h, esi
0x7186C5: jz      short loc_7186D1
0x7186C7: add     esi, 4
0x7186CA: push    esi; lpAddend
0x7186CB: call    dword ptr ds:0A28078h
0x7186D1: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7186D5: mov     large fs:0, ecx
0x7186DC: pop     ecx
0x7186DD: pop     edi
0x7186DE: pop     esi
0x7186DF: add     esp, 10h
0x7186E2: retn
