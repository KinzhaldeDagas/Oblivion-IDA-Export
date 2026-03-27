0x7FAF20: push    0FFFFFFFFh
0x7FAF22: push    offset ??0Lighting30Shader@@QAE@XZ_SEH
0x7FAF27: mov     eax, large fs:0
0x7FAF2D: push    eax
0x7FAF2E: push    ecx
0x7FAF2F: push    ebx
0x7FAF30: push    ebp
0x7FAF31: push    esi
0x7FAF32: push    edi
0x7FAF33: mov     eax, ds:0B30AACh
0x7FAF38: xor     eax, esp
0x7FAF3A: push    eax
0x7FAF3B: lea     eax, [esp+24h+var_C]
0x7FAF3F: mov     large fs:0, eax
0x7FAF45: mov     ebp, ecx
0x7FAF47: mov     [esp+24h+var_10], ebp
0x7FAF4B: mov     dword ptr [ebp+0], offset ??_7Lighting30Shader@@6B@; const Lighting30Shader::`vftable'
0x7FAF52: mov     [esp+24h+var_4], 8
0x7FAF5A: mov     edi, offset dword_B47288
0x7FAF5F: xor     ebx, ebx
0x7FAF61: mov     esi, [edi]
0x7FAF63: cmp     esi, ebx
0x7FAF65: jz      short loc_7FAF85
0x7FAF67: lea     eax, [esi+4]
0x7FAF6A: push    eax; lpAddend
0x7FAF6B: call    dword ptr ds:0A2807Ch
0x7FAF71: test    eax, eax
0x7FAF73: jnz     short loc_7FAF83
0x7FAF75: cmp     esi, ebx
0x7FAF77: jz      short loc_7FAF83
0x7FAF79: mov     edx, [esi]
0x7FAF7B: mov     eax, [edx]
0x7FAF7D: push    1
0x7FAF7F: mov     ecx, esi
0x7FAF81: call    eax
0x7FAF83: mov     [edi], ebx
0x7FAF85: add     edi, 4
0x7FAF88: cmp     edi, offset unk_B47308
0x7FAF8E: jl      short loc_7FAF61
0x7FAF90: xor     edi, edi
0x7FAF92: mov     esi, ds:dword_B46ED8[edi]
0x7FAF98: cmp     esi, ebx
0x7FAF9A: jz      short loc_7FAFBE
0x7FAF9C: lea     ecx, [esi+4]
0x7FAF9F: push    ecx; lpAddend
0x7FAFA0: call    dword ptr ds:0A2807Ch
0x7FAFA6: test    eax, eax
0x7FAFA8: jnz     short loc_7FAFB8
0x7FAFAA: cmp     esi, ebx
0x7FAFAC: jz      short loc_7FAFB8
0x7FAFAE: mov     edx, [esi]
0x7FAFB0: mov     eax, [edx]
0x7FAFB2: push    1
0x7FAFB4: mov     ecx, esi
0x7FAFB6: call    eax
0x7FAFB8: mov     ds:dword_B46ED8[edi], ebx
0x7FAFBE: mov     esi, ds:dword_B46C20[edi]
0x7FAFC4: cmp     esi, ebx
0x7FAFC6: jz      short loc_7FAFEA
0x7FAFC8: lea     ecx, [esi+4]
0x7FAFCB: push    ecx; lpAddend
0x7FAFCC: call    dword ptr ds:0A2807Ch
0x7FAFD2: test    eax, eax
0x7FAFD4: jnz     short loc_7FAFE4
0x7FAFD6: cmp     esi, ebx
0x7FAFD8: jz      short loc_7FAFE4
0x7FAFDA: mov     edx, [esi]
0x7FAFDC: mov     eax, [edx]
0x7FAFDE: push    1
0x7FAFE0: mov     ecx, esi
0x7FAFE2: call    eax
0x7FAFE4: mov     ds:dword_B46C20[edi], ebx
0x7FAFEA: add     edi, 4
0x7FAFED: cmp     edi, 9Ch ; 'œ'
0x7FAFF3: jl      short loc_7FAF92
0x7FAFF5: mov     esi, offset dword_B473D0
0x7FAFFA: lea     ebx, [ebx+0]
0x7FB000: mov     ecx, [esi]
0x7FB002: cmp     ecx, ebx
0x7FB004: jz      short loc_7FB013
0x7FB006: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7FB00A: jnz     short loc_7FB011
0x7FB00C: call    sub_7604D0
0x7FB011: mov     [esi], ebx
0x7FB013: add     esi, 4
0x7FB016: cmp     esi, offset unk_B474A8
0x7FB01C: jl      short loc_7FB000
0x7FB01E: mov     esi, [ebp+24h]
0x7FB021: cmp     esi, ebx
0x7FB023: mov     edi, ds:0A2807Ch
0x7FB029: jz      short loc_7FB046
0x7FB02B: lea     ecx, [esi+4]
0x7FB02E: push    ecx; lpAddend
0x7FB02F: call    edi ; InterlockedDecrement
0x7FB031: test    eax, eax
0x7FB033: jnz     short loc_7FB043
0x7FB035: cmp     esi, ebx
0x7FB037: jz      short loc_7FB043
0x7FB039: mov     edx, [esi]
0x7FB03B: mov     eax, [edx]
0x7FB03D: push    1
0x7FB03F: mov     ecx, esi
0x7FB041: call    eax
0x7FB043: mov     [ebp+24h], ebx
0x7FB046: mov     esi, [ebp+8Ch]
0x7FB04C: cmp     esi, ebx
0x7FB04E: jz      short loc_7FB06E
0x7FB050: lea     ecx, [esi+4]
0x7FB053: push    ecx; lpAddend
0x7FB054: call    edi ; InterlockedDecrement
0x7FB056: test    eax, eax
0x7FB058: jnz     short loc_7FB068
0x7FB05A: cmp     esi, ebx
0x7FB05C: jz      short loc_7FB068
0x7FB05E: mov     edx, [esi]
0x7FB060: mov     eax, [edx]
0x7FB062: push    1
0x7FB064: mov     ecx, esi
0x7FB066: call    eax
0x7FB068: mov     [ebp+8Ch], ebx
0x7FB06E: mov     esi, [ebp+90h]
0x7FB074: cmp     esi, ebx
0x7FB076: jz      short loc_7FB096
0x7FB078: lea     ecx, [esi+4]
0x7FB07B: push    ecx; lpAddend
0x7FB07C: call    edi ; InterlockedDecrement
0x7FB07E: test    eax, eax
0x7FB080: jnz     short loc_7FB090
0x7FB082: cmp     esi, ebx
0x7FB084: jz      short loc_7FB090
0x7FB086: mov     edx, [esi]
0x7FB088: mov     eax, [edx]
0x7FB08A: push    1
0x7FB08C: mov     ecx, esi
0x7FB08E: call    eax
0x7FB090: mov     [ebp+90h], ebx
0x7FB096: mov     esi, [ebp+94h]
0x7FB09C: cmp     esi, ebx
0x7FB09E: jz      short loc_7FB0BE
0x7FB0A0: lea     ecx, [esi+4]
0x7FB0A3: push    ecx; lpAddend
0x7FB0A4: call    edi ; InterlockedDecrement
0x7FB0A6: test    eax, eax
0x7FB0A8: jnz     short loc_7FB0B8
0x7FB0AA: cmp     esi, ebx
0x7FB0AC: jz      short loc_7FB0B8
0x7FB0AE: mov     edx, [esi]
0x7FB0B0: mov     eax, [edx]
0x7FB0B2: push    1
0x7FB0B4: mov     ecx, esi
0x7FB0B6: call    eax
0x7FB0B8: mov     [ebp+94h], ebx
0x7FB0BE: mov     esi, [ebp+98h]
0x7FB0C4: cmp     esi, ebx
0x7FB0C6: jz      short loc_7FB0E6
0x7FB0C8: lea     ecx, [esi+4]
0x7FB0CB: push    ecx; lpAddend
0x7FB0CC: call    edi ; InterlockedDecrement
0x7FB0CE: test    eax, eax
0x7FB0D0: jnz     short loc_7FB0E0
0x7FB0D2: cmp     esi, ebx
0x7FB0D4: jz      short loc_7FB0E0
0x7FB0D6: mov     edx, [esi]
0x7FB0D8: mov     eax, [edx]
0x7FB0DA: push    1
0x7FB0DC: mov     ecx, esi
0x7FB0DE: call    eax
0x7FB0E0: mov     [ebp+98h], ebx
0x7FB0E6: mov     [ebp+9Ch], ebx
0x7FB0EC: mov     esi, [ebp+98h]
0x7FB0F2: cmp     esi, ebx
0x7FB0F4: mov     byte ptr [esp+24h+var_4], 7
0x7FB0F9: jz      short loc_7FB113
0x7FB0FB: lea     ecx, [esi+4]
0x7FB0FE: push    ecx; lpAddend
0x7FB0FF: call    edi ; InterlockedDecrement
0x7FB101: test    eax, eax
0x7FB103: jnz     short loc_7FB113
0x7FB105: cmp     esi, ebx
0x7FB107: jz      short loc_7FB113
0x7FB109: mov     edx, [esi]
0x7FB10B: mov     eax, [edx]
0x7FB10D: push    1
0x7FB10F: mov     ecx, esi
0x7FB111: call    eax
0x7FB113: mov     esi, [ebp+94h]
0x7FB119: cmp     esi, ebx
0x7FB11B: mov     byte ptr [esp+24h+var_4], 6
0x7FB120: jz      short loc_7FB13A
0x7FB122: lea     ecx, [esi+4]
0x7FB125: push    ecx; lpAddend
0x7FB126: call    edi ; InterlockedDecrement
0x7FB128: test    eax, eax
0x7FB12A: jnz     short loc_7FB13A
0x7FB12C: cmp     esi, ebx
0x7FB12E: jz      short loc_7FB13A
0x7FB130: mov     edx, [esi]
0x7FB132: mov     eax, [edx]
0x7FB134: push    1
0x7FB136: mov     ecx, esi
0x7FB138: call    eax
0x7FB13A: mov     esi, [ebp+90h]
0x7FB140: cmp     esi, ebx
0x7FB142: mov     byte ptr [esp+24h+var_4], 5
0x7FB147: jz      short loc_7FB161
0x7FB149: lea     ecx, [esi+4]
0x7FB14C: push    ecx; lpAddend
0x7FB14D: call    edi ; InterlockedDecrement
0x7FB14F: test    eax, eax
0x7FB151: jnz     short loc_7FB161
0x7FB153: cmp     esi, ebx
0x7FB155: jz      short loc_7FB161
0x7FB157: mov     edx, [esi]
0x7FB159: mov     eax, [edx]
0x7FB15B: push    1
0x7FB15D: mov     ecx, esi
0x7FB15F: call    eax
0x7FB161: mov     esi, [ebp+8Ch]
0x7FB167: cmp     esi, ebx
0x7FB169: mov     byte ptr [esp+24h+var_4], 4
0x7FB16E: jz      short loc_7FB188
0x7FB170: lea     ecx, [esi+4]
0x7FB173: push    ecx; lpAddend
0x7FB174: call    edi ; InterlockedDecrement
0x7FB176: test    eax, eax
0x7FB178: jnz     short loc_7FB188
0x7FB17A: cmp     esi, ebx
0x7FB17C: jz      short loc_7FB188
0x7FB17E: mov     edx, [esi]
0x7FB180: mov     eax, [edx]
0x7FB182: push    1
0x7FB184: mov     ecx, esi
0x7FB186: call    eax
0x7FB188: mov     esi, [ebp+88h]
0x7FB18E: cmp     esi, ebx
0x7FB190: mov     byte ptr [esp+24h+var_4], 3
0x7FB195: jz      short loc_7FB1AF
0x7FB197: lea     ecx, [esi+4]
0x7FB19A: push    ecx; lpAddend
0x7FB19B: call    edi ; InterlockedDecrement
0x7FB19D: test    eax, eax
0x7FB19F: jnz     short loc_7FB1AF
0x7FB1A1: cmp     esi, ebx
0x7FB1A3: jz      short loc_7FB1AF
0x7FB1A5: mov     edx, [esi]
0x7FB1A7: mov     eax, [edx]
0x7FB1A9: push    1
0x7FB1AB: mov     ecx, esi
0x7FB1AD: call    eax
0x7FB1AF: mov     esi, [ebp+84h]
0x7FB1B5: cmp     esi, ebx
0x7FB1B7: mov     byte ptr [esp+24h+var_4], 2
0x7FB1BC: jz      short loc_7FB1D6
0x7FB1BE: lea     ecx, [esi+4]
0x7FB1C1: push    ecx; lpAddend
0x7FB1C2: call    edi ; InterlockedDecrement
0x7FB1C4: test    eax, eax
0x7FB1C6: jnz     short loc_7FB1D6
0x7FB1C8: cmp     esi, ebx
0x7FB1CA: jz      short loc_7FB1D6
0x7FB1CC: mov     edx, [esi]
0x7FB1CE: mov     eax, [edx]
0x7FB1D0: push    1
0x7FB1D2: mov     ecx, esi
0x7FB1D4: call    eax
0x7FB1D6: mov     esi, [ebp+80h]
0x7FB1DC: cmp     esi, ebx
0x7FB1DE: mov     byte ptr [esp+24h+var_4], 1
0x7FB1E3: jz      short loc_7FB1FD
0x7FB1E5: lea     ecx, [esi+4]
0x7FB1E8: push    ecx; lpAddend
0x7FB1E9: call    edi ; InterlockedDecrement
0x7FB1EB: test    eax, eax
0x7FB1ED: jnz     short loc_7FB1FD
0x7FB1EF: cmp     esi, ebx
0x7FB1F1: jz      short loc_7FB1FD
0x7FB1F3: mov     edx, [esi]
0x7FB1F5: mov     eax, [edx]
0x7FB1F7: push    1
0x7FB1F9: mov     ecx, esi
0x7FB1FB: call    eax
0x7FB1FD: mov     esi, [ebp+7Ch]
0x7FB200: cmp     esi, ebx
0x7FB202: mov     byte ptr [esp+24h+var_4], bl
0x7FB206: jz      short loc_7FB220
0x7FB208: lea     ecx, [esi+4]
0x7FB20B: push    ecx; lpAddend
0x7FB20C: call    edi ; InterlockedDecrement
0x7FB20E: test    eax, eax
0x7FB210: jnz     short loc_7FB220
0x7FB212: cmp     esi, ebx
0x7FB214: jz      short loc_7FB220
0x7FB216: mov     edx, [esi]
0x7FB218: mov     eax, [edx]
0x7FB21A: push    1
0x7FB21C: mov     ecx, esi
0x7FB21E: call    eax
0x7FB220: mov     ecx, ebp; this
0x7FB222: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7FB22A: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7FB22F: mov     ecx, dword ptr [esp+24h+var_C]
0x7FB233: mov     large fs:0, ecx
0x7FB23A: pop     ecx
0x7FB23B: pop     edi
0x7FB23C: pop     esi
0x7FB23D: pop     ebp
0x7FB23E: pop     ebx
0x7FB23F: add     esp, 10h
0x7FB242: retn
