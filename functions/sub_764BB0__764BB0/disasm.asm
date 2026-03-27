0x764BB0: mov     eax, [esp+arg_0]
0x764BB4: mov     edx, [eax+8]
0x764BB7: sub     esp, 40h
0x764BBA: push    esi
0x764BBB: mov     esi, ecx
0x764BBD: mov     ecx, [esp+44h+arg_4]
0x764BC1: cmp     edx, [ecx+8]
0x764BC4: ja      loc_764C63
0x764BCA: mov     edx, [eax+0Ch]
0x764BCD: cmp     edx, [ecx+0Ch]
0x764BD0: ja      loc_764C63
0x764BD6: mov     eax, [eax+10h]
0x764BD9: mov     eax, [eax+0Ch]
0x764BDC: push    edi
0x764BDD: mov     edi, [ecx+10h]
0x764BE0: mov     ecx, [eax]
0x764BE2: lea     edx, [esp+48h+var_20]
0x764BE6: push    edx
0x764BE7: push    eax
0x764BE8: mov     eax, [ecx+30h]
0x764BEB: call    eax
0x764BED: mov     eax, [edi+0Ch]
0x764BF0: mov     ecx, [eax]
0x764BF2: lea     edx, [esp+48h+var_40]
0x764BF6: push    edx
0x764BF7: push    eax
0x764BF8: mov     eax, [ecx+30h]
0x764BFB: call    eax
0x764BFD: mov     ecx, [esp+48h+var_C]
0x764C01: cmp     ecx, [esp+48h+var_2C]
0x764C05: jnz     short loc_764C59
0x764C07: mov     edx, [esp+48h+var_10]
0x764C0B: cmp     edx, [esp+48h+var_30]
0x764C0F: jnz     short loc_764C59
0x764C11: mov     ecx, [esi+878h]
0x764C17: mov     eax, [ecx]
0x764C19: mov     edx, [eax+5Ch]
0x764C1C: push    ebx
0x764C1D: push    0
0x764C1F: call    edx
0x764C21: mov     ebx, [esp+4Ch+var_40]
0x764C25: mov     eax, [eax+0Ch]
0x764C28: mov     ecx, [esi+5C0h]
0x764C2E: mov     edx, ds:0B42154h
0x764C34: mov     esi, [esi+5BCh]
0x764C3A: mov     edi, [edx]
0x764C3C: push    ebx
0x764C3D: mov     ebx, [esp+50h+var_20]
0x764C41: push    ebx
0x764C42: push    eax
0x764C43: mov     eax, [edi+30h]
0x764C46: push    ecx
0x764C47: push    esi
0x764C48: push    edx
0x764C49: call    eax
0x764C4B: pop     ebx
0x764C4C: test    eax, eax
0x764C4E: pop     edi
0x764C4F: setnl   al
0x764C52: pop     esi
0x764C53: add     esp, 40h
0x764C56: retn    8
0x764C59: pop     edi
0x764C5A: xor     al, al
0x764C5C: pop     esi
0x764C5D: add     esp, 40h
0x764C60: retn    8
0x764C63: xor     al, al
0x764C65: pop     esi
0x764C66: add     esp, 40h
0x764C69: retn    8
