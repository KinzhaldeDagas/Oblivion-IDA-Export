0x8DCC10: push    ebx
0x8DCC11: mov     ebx, [esp+4+arg_0]
0x8DCC15: mov     ecx, [ebx+88h]
0x8DCC1B: inc     ecx
0x8DCC1C: push    esi
0x8DCC1D: mov     [ebx+88h], ecx
0x8DCC23: mov     esi, [ebx+104h]
0x8DCC29: dec     esi
0x8DCC2A: js      short loc_8DCC4A
0x8DCC2C: lea     esp, [esp+0]
0x8DCC30: mov     eax, [ebx+100h]
0x8DCC36: mov     ecx, [eax+esi*4]
0x8DCC39: test    ecx, ecx
0x8DCC3B: jz      short loc_8DCC47
0x8DCC3D: mov     eax, [esp+8+arg_4]
0x8DCC41: mov     edx, [ecx]
0x8DCC43: push    eax
0x8DCC44: call    dword ptr [edx+8]
0x8DCC47: dec     esi
0x8DCC48: jns     short loc_8DCC30
0x8DCC4A: mov     edx, [ebx+104h]
0x8DCC50: dec     edx
0x8DCC51: push    ebp
0x8DCC52: push    edi
0x8DCC53: js      short loc_8DCC9E
0x8DCC55: jmp     short loc_8DCC60
0x8DCC57: align 10h
0x8DCC60: mov     ecx, [ebx+100h]
0x8DCC66: cmp     dword ptr [ecx+edx*4], 0
0x8DCC6A: jnz     short loc_8DCC9B
0x8DCC6C: mov     edi, [ebx+104h]
0x8DCC72: dec     edi
0x8DCC73: mov     ecx, edi
0x8DCC75: cmp     edx, ecx
0x8DCC77: mov     [ebx+104h], edi
0x8DCC7D: mov     eax, edx
0x8DCC7F: jge     short loc_8DCC9B
0x8DCC81: mov     ecx, [ebx+100h]
0x8DCC87: mov     esi, [ecx+eax*4+4]
0x8DCC8B: lea     ecx, [ecx+eax*4]
0x8DCC8E: mov     [ecx], esi
0x8DCC90: mov     ecx, [ebx+104h]
0x8DCC96: inc     eax
0x8DCC97: cmp     eax, ecx
0x8DCC99: jl      short loc_8DCC81
0x8DCC9B: dec     edx
0x8DCC9C: jns     short loc_8DCC60
0x8DCC9E: mov     eax, [esp+10h+arg_4]
0x8DCCA2: mov     ecx, [eax+38h]
0x8DCCA5: xor     ebp, ebp
0x8DCCA7: test    ecx, ecx
0x8DCCA9: jle     short loc_8DCD22
0x8DCCAB: jmp     short loc_8DCCB0
0x8DCCAD: align 10h
0x8DCCB0: mov     edx, [eax+34h]
0x8DCCB3: mov     esi, [edx+ebp*4]
0x8DCCB6: mov     edi, [esi+0A4h]
0x8DCCBC: add     esi, 0A0h ; ' '
0x8DCCC2: dec     edi
0x8DCCC3: js      short loc_8DCCE1
0x8DCCC5: mov     eax, [esi]
0x8DCCC7: mov     ecx, [eax+edi*4]
0x8DCCCA: test    ecx, ecx
0x8DCCCC: jz      short loc_8DCCDE
0x8DCCCE: mov     eax, [esp+10h+arg_4]
0x8DCCD2: mov     eax, [eax+34h]
0x8DCCD5: mov     eax, [eax+ebp*4]
0x8DCCD8: mov     edx, [ecx]
0x8DCCDA: push    eax
0x8DCCDB: call    dword ptr [edx+4]
0x8DCCDE: dec     edi
0x8DCCDF: jns     short loc_8DCCC5
0x8DCCE1: mov     edx, [esi+4]
0x8DCCE4: dec     edx
0x8DCCE5: js      short loc_8DCD16
0x8DCCE7: mov     ecx, [esi]
0x8DCCE9: cmp     dword ptr [ecx+edx*4], 0
0x8DCCED: jnz     short loc_8DCD13
0x8DCCEF: mov     eax, [esi+4]
0x8DCCF2: dec     eax
0x8DCCF3: mov     ecx, eax
0x8DCCF5: cmp     edx, ecx
0x8DCCF7: mov     [esi+4], eax
0x8DCCFA: mov     eax, edx
0x8DCCFC: jge     short loc_8DCD13
0x8DCCFE: mov     edi, edi
0x8DCD00: mov     ecx, [esi]
0x8DCD02: mov     edi, [ecx+eax*4+4]
0x8DCD06: lea     ecx, [ecx+eax*4]
0x8DCD09: mov     [ecx], edi
0x8DCD0B: mov     ecx, [esi+4]
0x8DCD0E: inc     eax
0x8DCD0F: cmp     eax, ecx
0x8DCD11: jl      short loc_8DCD00
0x8DCD13: dec     edx
0x8DCD14: jns     short loc_8DCCE7
0x8DCD16: mov     eax, [esp+10h+arg_4]
0x8DCD1A: mov     ecx, [eax+38h]
0x8DCD1D: inc     ebp
0x8DCD1E: cmp     ebp, ecx
0x8DCD20: jl      short loc_8DCCB0
0x8DCD22: mov     eax, [ebx+88h]
0x8DCD28: dec     eax
0x8DCD29: pop     edi
0x8DCD2A: mov     [ebx+88h], eax
0x8DCD30: pop     ebp
0x8DCD31: jnz     short loc_8DCD50
0x8DCD33: mov     eax, [ebx+84h]
0x8DCD39: test    eax, eax
0x8DCD3B: jz      short loc_8DCD50
0x8DCD3D: mov     al, [ebx+90h]
0x8DCD43: test    al, al
0x8DCD45: jnz     short loc_8DCD50
0x8DCD47: pop     esi
0x8DCD48: mov     ecx, ebx
0x8DCD4A: pop     ebx
0x8DCD4B: jmp     sub_899210
0x8DCD50: pop     esi
0x8DCD51: pop     ebx
0x8DCD52: retn
