0x6578B0: push    ebp
0x6578B1: mov     ebp, [esp+4+arg_0]
0x6578B5: push    esi
0x6578B6: mov     esi, ecx
0x6578B8: mov     ecx, ebp
0x6578BA: call    sub_5E32D0
0x6578BF: test    al, al
0x6578C1: jz      short loc_6578F4
0x6578C3: mov     eax, [esi]
0x6578C5: mov     edx, [eax+36Ch]
0x6578CB: mov     ecx, esi
0x6578CD: call    edx
0x6578CF: test    eax, eax
0x6578D1: jnz     short loc_6578F4
0x6578D3: cmp     [esi+120h], eax
0x6578D9: jnz     short loc_6578F4
0x6578DB: cmp     [esi+0B4h], eax
0x6578E1: jnz     short loc_6578F4
0x6578E3: cmp     [esi+0B0h], eax
0x6578E9: jnz     short loc_6578F4
0x6578EB: push    eax; float
0x6578EC: push    ebp; int
0x6578ED: mov     ecx, esi
0x6578EF: call    sub_6553E0
0x6578F4: mov     eax, [esi]
0x6578F6: mov     edx, [eax+36Ch]
0x6578FC: mov     ecx, esi
0x6578FE: call    edx
0x657900: cmp     eax, 9
0x657903: jz      loc_657A13
0x657909: mov     ecx, ebp
0x65790B: call    sub_5E32D0
0x657910: test    al, al
0x657912: jz      loc_657A13
0x657918: cmp     dword ptr [esi+120h], 0
0x65791F: push    edi
0x657920: jnz     short loc_657998
0x657922: lea     edi, [esi+0B0h]
0x657928: mov     eax, edi
0x65792A: xor     ecx, ecx
0x65792C: test    eax, eax
0x65792E: jz      short loc_657998
0x657930: cmp     dword ptr [eax], 0
0x657933: jz      short loc_657938
0x657935: add     ecx, 1
0x657938: mov     eax, [eax+4]
0x65793B: test    eax, eax
0x65793D: jnz     short loc_657930
0x65793F: test    ecx, ecx
0x657941: jz      short loc_657998
0x657943: mov     ecx, [edi]; this
0x657945: mov     [esi+120h], ecx
0x65794B: call    TESObjectREFR_GetOwner
0x657950: test    eax, eax
0x657952: mov     ecx, edi
0x657954: jz      short loc_657964
0x657956: mov     eax, [esi+120h]
0x65795C: push    eax
0x65795D: call    BSSimpleList_Remove
0x657962: jmp     short loc_657998
0x657964: call    BSSimpleList_Count
0x657969: push    0; Seed
0x65796B: mov     ebp, eax
0x65796D: call    GetRandomLargeInteger?
0x657972: cdq
0x657973: idiv    ebp
0x657975: add     esp, 4
0x657978: cmp     edx, ebp
0x65797A: jl      short loc_65797E
0x65797C: mov     edx, ebp
0x65797E: test    edx, edx
0x657980: mov     eax, edi
0x657982: jle     short loc_65798C
0x657984: sub     edx, 1
0x657987: mov     eax, [eax+4]
0x65798A: jnz     short loc_657984
0x65798C: mov     ecx, [eax]
0x65798E: mov     ebp, [esp+0Ch+arg_0]
0x657992: mov     [esi+120h], ecx
0x657998: mov     edx, [esi]
0x65799A: mov     eax, [esi+120h]
0x6579A0: mov     edx, [edx+0D0h]
0x6579A6: push    eax
0x6579A7: mov     ecx, esi
0x6579A9: call    edx
0x6579AB: cmp     dword ptr [esi+120h], 0
0x6579B2: jz      short loc_6579C3
0x6579B4: mov     eax, [esi]
0x6579B6: mov     edx, [eax+51Ch]
0x6579BC: push    0
0x6579BE: push    ebp
0x6579BF: mov     ecx, esi
0x6579C1: call    edx
0x6579C3: mov     ecx, [esi+34h]
0x6579C6: test    ecx, ecx
0x6579C8: jz      short loc_657A12
0x6579CA: mov     eax, [ecx]
0x6579CC: mov     edx, [eax+2Ch]
0x6579CF: call    edx
0x6579D1: test    al, al
0x6579D3: jz      short loc_657A12
0x6579D5: fldz
0x6579D7: push    ecx
0x6579D8: lea     edi, [esi+128h]
0x6579DE: fstp    [esp+10h+var_10]; float
0x6579E1: mov     ecx, edi
0x6579E3: mov     dword ptr [esi+120h], 0
0x6579ED: call    sub_6FAEE0
0x6579F2: mov     byte ptr [esi+136h], 0
0x6579F9: mov     eax, ds:0B3F9A8h
0x6579FE: mov     [edi], eax
0x657A00: mov     ecx, ds:0B3F9ACh
0x657A06: mov     [edi+4], ecx
0x657A09: mov     edx, ds:0B3F9B0h
0x657A0F: mov     [edi+8], edx
0x657A12: pop     edi
0x657A13: mov     ecx, ebp
0x657A15: call    sub_5E32D0
0x657A1A: test    al, al
0x657A1C: jz      short loc_657A2F
0x657A1E: mov     eax, [esi]
0x657A20: mov     edx, [eax+36Ch]
0x657A26: mov     ecx, esi
0x657A28: call    edx
0x657A2A: cmp     eax, 9
0x657A2D: jz      short loc_657A4A
0x657A2F: cmp     dword ptr [esi+120h], 0
0x657A36: jnz     short loc_657A63
0x657A38: cmp     dword ptr [esi+0B4h], 0
0x657A3F: jnz     short loc_657A63
0x657A41: cmp     dword ptr [esi+0B0h], 0
0x657A48: jnz     short loc_657A63
0x657A4A: mov     eax, [esi]
0x657A4C: mov     edx, [eax+0BCh]
0x657A52: push    1
0x657A54: mov     ecx, esi
0x657A56: call    edx
0x657A58: lea     ecx, [esi+0B0h]
0x657A5E: call    BSSimpleList_Clear
0x657A63: mov     eax, [esi]
0x657A65: mov     edx, [eax+48h]
0x657A68: push    ebp
0x657A69: mov     ecx, esi
0x657A6B: call    edx
0x657A6D: pop     esi
0x657A6E: pop     ebp
0x657A6F: retn    4
