0x4BDDF0: push    esi
0x4BDDF1: mov     esi, ecx
0x4BDDF3: cmp     dword ptr [esi+0Ch], 6
0x4BDDF7: jz      short loc_4BDE22
0x4BDDF9: mov     eax, [esi+1Ch]
0x4BDDFC: push    edi
0x4BDDFD: mov     edi, [eax+0Ch]
0x4BDE00: test    edi, edi
0x4BDE02: jz      short loc_4BDE21
0x4BDE04: cmp     byte ptr [eax+10h], 0
0x4BDE08: jz      short loc_4BDE21
0x4BDE0A: mov     ecx, edi; this
0x4BDE0C: call    TESObjectCELL_GetNiNode?
0x4BDE11: test    eax, eax
0x4BDE13: jz      short loc_4BDE21
0x4BDE15: mov     ecx, ds:0B333A0h
0x4BDE1B: push    edi
0x4BDE1C: call    sub_442740
0x4BDE21: pop     edi
0x4BDE22: mov     eax, [esi+1Ch]
0x4BDE25: mov     byte ptr [eax+10h], 0
0x4BDE29: mov     eax, [esi+1Ch]
0x4BDE2C: mov     ecx, [eax+4]
0x4BDE2F: mov     eax, [eax]
0x4BDE31: mov     esi, [esi+18h]
0x4BDE34: push    ecx
0x4BDE35: push    eax
0x4BDE36: call    sub_4EF1D0
0x4BDE3B: mov     edx, [esi]
0x4BDE3D: add     esp, 8
0x4BDE40: push    eax
0x4BDE41: mov     eax, [edx+10h]
0x4BDE44: mov     ecx, esi
0x4BDE46: call    eax
0x4BDE48: pop     esi
0x4BDE49: retn
