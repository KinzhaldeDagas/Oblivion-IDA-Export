0x88BDB0: push    0FFFFFFFFh
0x88BDB2: push    offset ??1bhkWorld@@UAE@XZ_SEH
0x88BDB7: mov     eax, large fs:0
0x88BDBD: push    eax
0x88BDBE: push    ecx
0x88BDBF: push    ebx
0x88BDC0: push    ebp
0x88BDC1: push    esi
0x88BDC2: push    edi
0x88BDC3: mov     eax, ds:0B30AACh
0x88BDC8: xor     eax, esp
0x88BDCA: push    eax
0x88BDCB: lea     eax, [esp+24h+var_C]
0x88BDCF: mov     large fs:0, eax
0x88BDD5: mov     esi, ecx
0x88BDD7: mov     [esp+24h+var_10], esi
0x88BDDB: mov     dword ptr [esi], offset ??_7bhkWorld@@6B@; const bhkWorld::`vftable'
0x88BDE1: sub     dword ptr ds:0BA7900h, 1
0x88BDE8: mov     eax, [esi]
0x88BDEA: mov     edx, [eax+58h]
0x88BDED: mov     [esp+24h+var_4], 2
0x88BDF5: call    edx
0x88BDF7: mov     ecx, [esi+14h]
0x88BDFA: xor     ebx, ebx
0x88BDFC: cmp     ecx, ebx
0x88BDFE: jz      short loc_88BE08
0x88BE00: mov     eax, [ecx]
0x88BE02: mov     edx, [eax]
0x88BE04: push    1
0x88BE06: call    edx
0x88BE08: mov     eax, [esi]
0x88BE0A: mov     edx, [eax+58h]
0x88BE0D: mov     ecx, esi
0x88BE0F: call    edx
0x88BE11: mov     edi, [esi+10h]
0x88BE14: cmp     edi, ebx
0x88BE16: mov     [esi+14h], ebx
0x88BE19: jz      short loc_88BE2E
0x88BE1B: mov     ecx, edi
0x88BE1D: call    sub_8BACC0
0x88BE22: push    edi
0x88BE23: call    FormHeapFree
0x88BE28: add     esp, 4
0x88BE2B: mov     [esi+10h], ebx
0x88BE2E: mov     eax, [esi]
0x88BE30: mov     edx, [eax+58h]
0x88BE33: mov     ecx, esi
0x88BE35: call    edx
0x88BE37: mov     ecx, esi
0x88BE39: call    sub_89D700
0x88BE3E: mov     eax, [esi]
0x88BE40: mov     edx, [eax+58h]
0x88BE43: mov     ecx, esi
0x88BE45: call    edx
0x88BE47: mov     eax, [esi+28h]
0x88BE4A: push    eax
0x88BE4B: call    FormHeapFree
0x88BE50: mov     eax, [esi+30h]
0x88BE53: push    eax
0x88BE54: call    FormHeapFree
0x88BE59: mov     eax, [esi+38h]
0x88BE5C: push    eax
0x88BE5D: call    FormHeapFree
0x88BE62: mov     eax, [esi+40h]
0x88BE65: push    eax
0x88BE66: call    FormHeapFree
0x88BE6B: mov     eax, [esi+48h]
0x88BE6E: push    eax
0x88BE6F: call    FormHeapFree
0x88BE74: add     esp, 14h
0x88BE77: xor     edi, edi
0x88BE79: cmp     [esi+64h], ebx
0x88BE7C: jle     short loc_88BE9A
0x88BE7E: mov     edi, edi
0x88BE80: mov     eax, [esi+60h]
0x88BE83: mov     ecx, [eax+edi*4]
0x88BE86: cmp     ecx, ebx
0x88BE88: jz      short loc_88BE92
0x88BE8A: mov     edx, [ecx]
0x88BE8C: mov     eax, [edx]
0x88BE8E: push    1
0x88BE90: call    eax
0x88BE92: add     edi, 1
0x88BE95: cmp     edi, [esi+64h]
0x88BE98: jl      short loc_88BE80
0x88BE9A: mov     edi, ds:0BA9DE4h
0x88BEA0: mov     ebp, large fs:2Ch
0x88BEA7: mov     [esi+64h], ebx
0x88BEAA: mov     eax, [esi+74h]
0x88BEAD: test    eax, eax
0x88BEAF: mov     byte ptr [esp+24h+var_4], 1
0x88BEB4: js      short loc_88BEE1
0x88BEB6: mov     ecx, [ebp+edi*4+0]
0x88BEBA: mov     ecx, [ecx+19Ch]
0x88BEC0: cmp     ecx, ebx
0x88BEC2: jnz     short loc_88BECA
0x88BEC4: mov     ecx, ds:0BA7D9Ch
0x88BECA: mov     edx, [esi+6Ch]
0x88BECD: and     eax, 3FFFFFFFh
0x88BED2: add     eax, eax
0x88BED4: add     eax, eax
0x88BED6: push    14h
0x88BED8: add     eax, eax
0x88BEDA: push    eax
0x88BEDB: push    edx
0x88BEDC: call    sub_8A75D0
0x88BEE1: mov     eax, [esi+68h]
0x88BEE4: test    eax, eax
0x88BEE6: mov     byte ptr [esp+24h+var_4], bl
0x88BEEA: js      short loc_88BF15
0x88BEEC: mov     ecx, [ebp+edi*4+0]
0x88BEF0: mov     ecx, [ecx+19Ch]
0x88BEF6: cmp     ecx, ebx
0x88BEF8: jnz     short loc_88BF00
0x88BEFA: mov     ecx, ds:0BA7D9Ch
0x88BF00: mov     edx, [esi+60h]
0x88BF03: and     eax, 3FFFFFFFh
0x88BF08: add     eax, eax
0x88BF0A: push    14h
0x88BF0C: add     eax, eax
0x88BF0E: push    eax
0x88BF0F: push    edx
0x88BF10: call    sub_8A75D0
0x88BF15: mov     ecx, esi; this
0x88BF17: mov     [esp+24h+var_4], 0FFFFFFFFh
0x88BF1F: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x88BF24: mov     ecx, [esp+24h+var_C]
0x88BF28: mov     large fs:0, ecx
0x88BF2F: pop     ecx
0x88BF30: pop     edi
0x88BF31: pop     esi
0x88BF32: pop     ebp
0x88BF33: pop     ebx
0x88BF34: add     esp, 10h
0x88BF37: retn
