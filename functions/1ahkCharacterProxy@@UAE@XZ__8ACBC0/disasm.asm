0x8ACBC0: sub     esp, 8
0x8ACBC3: push    ebx
0x8ACBC4: push    esi
0x8ACBC5: mov     esi, ecx
0x8ACBC7: mov     eax, [esi+90h]
0x8ACBCD: push    edi
0x8ACBCE: lea     ebx, [esi+8]
0x8ACBD1: xor     edi, edi
0x8ACBD3: test    eax, eax
0x8ACBD5: mov     dword ptr [esi], offset off_A97C08
0x8ACBDB: mov     dword ptr [ebx], offset off_A97BF4
0x8ACBE1: mov     dword ptr [esi+0Ch], offset off_A97BE0
0x8ACBE8: jle     short loc_8ACC0A
0x8ACBEA: lea     ebx, [ebx+0]
0x8ACBF0: mov     eax, [esi+8Ch]
0x8ACBF6: mov     ecx, [eax+edi*4]
0x8ACBF9: push    ebx
0x8ACBFA: call    sub_8A6300
0x8ACBFF: mov     eax, [esi+90h]
0x8ACC05: inc     edi
0x8ACC06: cmp     edi, eax
0x8ACC08: jl      short loc_8ACBF0
0x8ACC0A: mov     eax, [esi+9Ch]
0x8ACC10: xor     edi, edi
0x8ACC12: test    eax, eax
0x8ACC14: mov     dword ptr [esi+90h], 0
0x8ACC1E: jle     short loc_8ACC3D
0x8ACC20: mov     ecx, [esi+98h]
0x8ACC26: mov     ecx, [ecx+edi*4]
0x8ACC29: lea     eax, [esi+0Ch]
0x8ACC2C: push    eax
0x8ACC2D: call    sub_8DE670
0x8ACC32: mov     eax, [esi+9Ch]
0x8ACC38: inc     edi
0x8ACC39: cmp     edi, eax
0x8ACC3B: jl      short loc_8ACC20
0x8ACC3D: mov     ecx, [esi+30h]
0x8ACC40: push    1300h
0x8ACC45: lea     edx, [esp+18h+var_8]
0x8ACC49: push    edx
0x8ACC4A: mov     dword ptr [esi+9Ch], 0
0x8ACC54: call    sub_8BC7B0
0x8ACC59: mov     ecx, [esi+30h]
0x8ACC5C: call    sub_8BC730
0x8ACC61: mov     eax, [esi+0A0h]
0x8ACC67: test    eax, eax
0x8ACC69: mov     edi, ds:0BA9DE4h
0x8ACC6F: mov     ebx, large fs:2Ch
0x8ACC76: js      short loc_8ACCA2
0x8ACC78: mov     ecx, [ebx+edi*4]
0x8ACC7B: mov     ecx, [ecx+19Ch]
0x8ACC81: test    ecx, ecx
0x8ACC83: jnz     short loc_8ACC8B
0x8ACC85: mov     ecx, ds:0BA7D9Ch
0x8ACC8B: mov     edx, [esi+98h]
0x8ACC91: and     eax, 3FFFFFFFh
0x8ACC96: push    14h
0x8ACC98: shl     eax, 2
0x8ACC9B: push    eax
0x8ACC9C: push    edx
0x8ACC9D: call    sub_8A75D0
0x8ACCA2: mov     eax, [esi+94h]
0x8ACCA8: test    eax, eax
0x8ACCAA: js      short loc_8ACCD6
0x8ACCAC: mov     ecx, [ebx+edi*4]
0x8ACCAF: mov     ecx, [ecx+19Ch]
0x8ACCB5: test    ecx, ecx
0x8ACCB7: jnz     short loc_8ACCBF
0x8ACCB9: mov     ecx, ds:0BA7D9Ch
0x8ACCBF: mov     edx, [esi+8Ch]
0x8ACCC5: and     eax, 3FFFFFFFh
0x8ACCCA: push    14h
0x8ACCCC: shl     eax, 2
0x8ACCCF: push    eax
0x8ACCD0: push    edx
0x8ACCD1: call    sub_8A75D0
0x8ACCD6: mov     eax, [esi+88h]
0x8ACCDC: test    eax, eax
0x8ACCDE: js      short loc_8ACD0A
0x8ACCE0: mov     ecx, [ebx+edi*4]
0x8ACCE3: mov     ecx, [ecx+19Ch]
0x8ACCE9: test    ecx, ecx
0x8ACCEB: jnz     short loc_8ACCF3
0x8ACCED: mov     ecx, ds:0BA7D9Ch
0x8ACCF3: mov     edx, [esi+80h]
0x8ACCF9: and     eax, 3FFFFFFFh
0x8ACCFE: push    14h
0x8ACD00: shl     eax, 2
0x8ACD03: push    eax
0x8ACD04: push    edx
0x8ACD05: call    sub_8A75D0
0x8ACD0A: mov     eax, [esi+7Ch]
0x8ACD0D: test    eax, eax
0x8ACD0F: js      short loc_8ACD3B
0x8ACD11: mov     ecx, [ebx+edi*4]
0x8ACD14: mov     ecx, [ecx+19Ch]
0x8ACD1A: test    ecx, ecx
0x8ACD1C: jnz     short loc_8ACD24
0x8ACD1E: mov     ecx, ds:0BA7D9Ch
0x8ACD24: and     eax, 3FFFFFFFh
0x8ACD29: lea     edx, [eax+eax*2]
0x8ACD2C: mov     eax, [esi+74h]
0x8ACD2F: push    14h
0x8ACD31: shl     edx, 4
0x8ACD34: push    edx
0x8ACD35: push    eax
0x8ACD36: call    sub_8A75D0
0x8ACD3B: mov     dword ptr [esi+0Ch], offset ??_7hkPhantomListener@@6B@; const hkPhantomListener::`vftable'
0x8ACD42: mov     dword ptr [esi+8], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x8ACD49: pop     edi
0x8ACD4A: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8ACD50: pop     esi
0x8ACD51: pop     ebx
0x8ACD52: add     esp, 8
0x8ACD55: retn
