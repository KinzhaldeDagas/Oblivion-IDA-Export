0x820910: push    0FFFFFFFFh
0x820912: push    offset SEH_7EF6B0
0x820917: mov     eax, large fs:0
0x82091D: push    eax
0x82091E: sub     esp, 8
0x820921: push    ebx
0x820922: push    ebp
0x820923: push    esi
0x820924: push    edi
0x820925: mov     eax, ds:0B30AACh
0x82092A: xor     eax, esp
0x82092C: push    eax
0x82092D: lea     eax, [esp+28h+var_C]
0x820931: mov     large fs:0, eax
0x820937: xor     esi, esi
0x820939: xor     ebx, ebx
0x82093B: mov     [esp+28h+var_14], esi
0x82093F: mov     [esp+28h+var_4], ebx
0x820943: mov     [esp+28h+var_10], ebx
0x820947: mov     eax, ds:0B455A0h
0x82094C: cmp     eax, ebx
0x82094E: mov     byte ptr [esp+28h+var_4], 1
0x820953: jz      short loc_820963
0x820955: mov     esi, eax
0x820957: cmp     esi, ebx
0x820959: mov     [esp+28h+var_14], esi
0x82095D: jz      short loc_820963
0x82095F: add     dword ptr [esi+60h], 1
0x820963: mov     eax, ds:0B45290h
0x820968: mov     edi, [esi+58h]
0x82096B: cmp     edi, eax
0x82096D: mov     ebp, eax
0x82096F: jz      short loc_8209A2
0x820971: cmp     edi, ebx
0x820973: jz      short loc_820991
0x820975: lea     eax, [edi+4]
0x820978: push    eax; lpAddend
0x820979: call    dword ptr ds:0A2807Ch
0x82097F: test    eax, eax
0x820981: jnz     short loc_820991
0x820983: cmp     edi, ebx
0x820985: jz      short loc_820991
0x820987: mov     edx, [edi]
0x820989: mov     eax, [edx]
0x82098B: push    1
0x82098D: mov     ecx, edi
0x82098F: call    eax
0x820991: cmp     ebp, ebx
0x820993: mov     [esi+58h], ebp
0x820996: jz      short loc_8209A2
0x820998: add     ebp, 4
0x82099B: push    ebp; lpAddend
0x82099C: call    dword ptr ds:0A28078h
0x8209A2: mov     eax, ds:0B45088h
0x8209A7: mov     edi, [esi+44h]
0x8209AA: cmp     edi, eax
0x8209AC: mov     ebp, eax
0x8209AE: jz      short loc_8209E1
0x8209B0: cmp     edi, ebx
0x8209B2: jz      short loc_8209D0
0x8209B4: lea     ecx, [edi+4]
0x8209B7: push    ecx; lpAddend
0x8209B8: call    dword ptr ds:0A2807Ch
0x8209BE: test    eax, eax
0x8209C0: jnz     short loc_8209D0
0x8209C2: cmp     edi, ebx
0x8209C4: jz      short loc_8209D0
0x8209C6: mov     edx, [edi]
0x8209C8: mov     eax, [edx]
0x8209CA: push    1
0x8209CC: mov     ecx, edi
0x8209CE: call    eax
0x8209D0: cmp     ebp, ebx
0x8209D2: mov     [esi+44h], ebp
0x8209D5: jz      short loc_8209E1
0x8209D7: add     ebp, 4
0x8209DA: push    ebp; lpAddend
0x8209DB: call    dword ptr ds:0A28078h
0x8209E1: cmp     [esi+30h], ebx
0x8209E4: jnz     short loc_8209EE
0x8209E6: call    sub_772DF0
0x8209EB: mov     [esi+30h], eax
0x8209EE: mov     ecx, [esi+30h]
0x8209F1: push    ebx
0x8209F2: push    ebx
0x8209F3: push    1Bh
0x8209F5: call    sub_772CD0
0x8209FA: cmp     [esi+30h], ebx
0x8209FD: jnz     short loc_820A07
0x8209FF: call    sub_772DF0
0x820A04: mov     [esi+30h], eax
0x820A07: mov     ecx, [esi+30h]
0x820A0A: push    ebx
0x820A0B: push    ebx
0x820A0C: push    0Fh
0x820A0E: call    sub_772CD0
0x820A13: cmp     [esi+30h], ebx
0x820A16: jnz     short loc_820A20
0x820A18: call    sub_772DF0
0x820A1D: mov     [esi+30h], eax
0x820A20: mov     ecx, [esi+30h]
0x820A23: push    ebx
0x820A24: push    1
0x820A26: push    7
0x820A28: call    sub_772CD0
0x820A2D: cmp     [esi+30h], ebx
0x820A30: jnz     short loc_820A3A
0x820A32: call    sub_772DF0
0x820A37: mov     [esi+30h], eax
0x820A3A: mov     ecx, [esi+30h]
0x820A3D: push    ebx
0x820A3E: push    4
0x820A40: push    17h
0x820A42: call    sub_772CD0
0x820A47: cmp     [esi+30h], ebx
0x820A4A: jnz     short loc_820A54
0x820A4C: call    sub_772DF0
0x820A51: mov     [esi+30h], eax
0x820A54: mov     ecx, [esi+30h]
0x820A57: push    ebx
0x820A58: push    1
0x820A5A: push    0Eh
0x820A5C: call    sub_772CD0
0x820A61: cmp     [esi+30h], ebx
0x820A64: jnz     short loc_820A6E
0x820A66: call    sub_772DF0
0x820A6B: mov     [esi+30h], eax
0x820A6E: mov     ecx, [esi+30h]
0x820A71: push    ebx
0x820A72: push    ebx
0x820A73: push    34h ; '4'
0x820A75: call    sub_772CD0
0x820A7A: cmp     esi, ds:0B455A8h
0x820A80: mov     dword ptr ds:0B43B20h, 2
0x820A8A: mov     ds:0B441B0h, ebx
0x820A90: jz      short loc_820AB1
0x820A92: add     dword ptr [esi+60h], 0FFFFFFFFh
0x820A96: jnz     short loc_820A9F
0x820A98: mov     ecx, esi
0x820A9A: call    sub_7604D0
0x820A9F: mov     esi, ds:0B455A8h
0x820AA5: cmp     esi, ebx
0x820AA7: mov     [esp+28h+var_14], esi
0x820AAB: jz      short loc_820AB1
0x820AAD: add     dword ptr [esi+60h], 1
0x820AB1: mov     eax, ds:0B4530Ch
0x820AB6: mov     edi, [esi+58h]
0x820AB9: cmp     edi, eax
0x820ABB: mov     ebp, eax
0x820ABD: jz      short loc_820AF0
0x820ABF: cmp     edi, ebx
0x820AC1: jz      short loc_820ADF
0x820AC3: lea     ecx, [edi+4]
0x820AC6: push    ecx; lpAddend
0x820AC7: call    dword ptr ds:0A2807Ch
0x820ACD: test    eax, eax
0x820ACF: jnz     short loc_820ADF
0x820AD1: cmp     edi, ebx
0x820AD3: jz      short loc_820ADF
0x820AD5: mov     edx, [edi]
0x820AD7: mov     eax, [edx]
0x820AD9: push    1
0x820ADB: mov     ecx, edi
0x820ADD: call    eax
0x820ADF: cmp     ebp, ebx
0x820AE1: mov     [esi+58h], ebp
0x820AE4: jz      short loc_820AF0
0x820AE6: add     ebp, 4
0x820AE9: push    ebp; lpAddend
0x820AEA: call    dword ptr ds:0A28078h
0x820AF0: mov     eax, ds:0B45088h
0x820AF5: mov     edi, [esi+44h]
0x820AF8: cmp     edi, eax
0x820AFA: mov     ebp, eax
0x820AFC: jz      short loc_820B2F
0x820AFE: cmp     edi, ebx
0x820B00: jz      short loc_820B1E
0x820B02: lea     ecx, [edi+4]
0x820B05: push    ecx; lpAddend
0x820B06: call    dword ptr ds:0A2807Ch
0x820B0C: test    eax, eax
0x820B0E: jnz     short loc_820B1E
0x820B10: cmp     edi, ebx
0x820B12: jz      short loc_820B1E
0x820B14: mov     edx, [edi]
0x820B16: mov     eax, [edx]
0x820B18: push    1
0x820B1A: mov     ecx, edi
0x820B1C: call    eax
0x820B1E: cmp     ebp, ebx
0x820B20: mov     [esi+44h], ebp
0x820B23: jz      short loc_820B2F
0x820B25: add     ebp, 4
0x820B28: push    ebp; lpAddend
0x820B29: call    dword ptr ds:0A28078h
0x820B2F: cmp     [esi+30h], ebx
0x820B32: jnz     short loc_820B3C
0x820B34: call    sub_772DF0
0x820B39: mov     [esi+30h], eax
0x820B3C: mov     ecx, [esi+30h]
0x820B3F: push    ebx
0x820B40: push    ebx
0x820B41: push    1Bh
0x820B43: call    sub_772CD0
0x820B48: cmp     [esi+30h], ebx
0x820B4B: jnz     short loc_820B55
0x820B4D: call    sub_772DF0
0x820B52: mov     [esi+30h], eax
0x820B55: mov     ecx, [esi+30h]
0x820B58: push    ebx
0x820B59: push    ebx
0x820B5A: push    0Fh
0x820B5C: call    sub_772CD0
0x820B61: cmp     [esi+30h], ebx
0x820B64: jnz     short loc_820B6E
0x820B66: call    sub_772DF0
0x820B6B: mov     [esi+30h], eax
0x820B6E: mov     ecx, [esi+30h]
0x820B71: push    ebx
0x820B72: push    1
0x820B74: push    7
0x820B76: call    sub_772CD0
0x820B7B: cmp     [esi+30h], ebx
0x820B7E: jnz     short loc_820B88
0x820B80: call    sub_772DF0
0x820B85: mov     [esi+30h], eax
0x820B88: mov     ecx, [esi+30h]
0x820B8B: push    ebx
0x820B8C: push    4
0x820B8E: push    17h
0x820B90: call    sub_772CD0
0x820B95: cmp     [esi+30h], ebx
0x820B98: jnz     short loc_820BA2
0x820B9A: call    sub_772DF0
0x820B9F: mov     [esi+30h], eax
0x820BA2: mov     ecx, [esi+30h]
0x820BA5: push    ebx
0x820BA6: push    1
0x820BA8: push    0Eh
0x820BAA: call    sub_772CD0
0x820BAF: cmp     [esi+30h], ebx
0x820BB2: jnz     short loc_820BBC
0x820BB4: call    sub_772DF0
0x820BB9: mov     [esi+30h], eax
0x820BBC: mov     ecx, [esi+30h]
0x820BBF: push    ebx
0x820BC0: push    ebx
0x820BC1: push    34h ; '4'
0x820BC3: call    sub_772CD0
0x820BC8: or      eax, 0FFFFFFFFh
0x820BCB: mov     dword ptr ds:0B43B28h, 40008h
0x820BD5: mov     ds:0B441B8h, ebx
0x820BDB: add     [esi+60h], eax
0x820BDE: mov     [esp+28h+var_4], eax
0x820BE2: jnz     short loc_820BEB
0x820BE4: mov     ecx, esi
0x820BE6: call    sub_7604D0
0x820BEB: mov     ecx, dword ptr [esp+28h+var_C]
0x820BEF: mov     large fs:0, ecx
0x820BF6: pop     ecx
0x820BF7: pop     edi
0x820BF8: pop     esi
0x820BF9: pop     ebp
0x820BFA: pop     ebx
0x820BFB: add     esp, 14h
0x820BFE: retn
